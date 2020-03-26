/*
 * Code generation for system system '<S33>/createKINData'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_createKINData.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Forward declaration for local functions */
static void vmr_rwd_fix_leftarm_correct_elbow_angle(real_T elbow_angle, real_T
  elbow_vel, real_T elbow_acc, real_T theta2_5, real_T L1, real_T L5, real_T
  L3_error, real_T *angle_corr, real_T *vel_corr, real_T *acc_corr);
static void vmr_rwd_fix_leftarm_create_robot_row(const real_T calibration[8],
  const real_T hardware_settings[12], const real_T force_sensor_data[7], const
  real_T robot_data[10], const real_T torque_command[2], real_T robot_row[50]);

/* Function for MATLAB Function: '<S69>/Create KINARM Data Array' */
static void vmr_rwd_fix_leftarm_correct_elbow_angle(real_T elbow_angle, real_T
  elbow_vel, real_T elbow_acc, real_T theta2_5, real_T L1, real_T L5, real_T
  L3_error, real_T *angle_corr, real_T *vel_corr, real_T *acc_corr)
{
  real_T L3;
  real_T theta1_3;
  real_T a;
  real_T b;
  real_T dbdt;
  real_T dcdt;
  real_T d2bdt2;
  real_T d2cdt2;
  real_T sinU;
  real_T dsinUdt;

  /*  The timestamp from the force sensor(s) */
  /*  this function corrects for errors in non-perfect parallelogram structure */
  /*  It assumes that L5 is exact (because it is machined from one */
  /*  piece of material) and that there is an error in L3.  Note: although */
  /*  there could also be an error in L4, this 'correction' factor can */
  /*  effectively account for both errors by computing an equivalent L3_error */
  /* '<S235>:1:404' */
  L3 = L5 + L3_error;

  /* '<S235>:1:406' */
  theta1_3 = theta2_5 - elbow_angle;

  /* actual angle between links 1 and 3 */
  /* '<S235>:1:407' */
  /* '<S235>:1:408' */
  /*  The following shifts theta1_3 to between -pi and pi and stores the shift. */
  /*  Although theta1_3 should always be between 0 and pi, during initial */
  /*  calibration there might be some values outside of that range. */
  /* '<S235>:1:413' */
  /* '<S235>:1:414' */
  theta1_3 -= floor((theta1_3 + 3.1415926535897931) / 6.2831853071795862) * 2.0 *
    3.1415926535897931;

  /* Option 1a */
  /* '<S235>:1:417' */
  a = 4.0 * L3 * L5 - 4.0 * L1 * L5 * cos(theta1_3);

  /* '<S235>:1:418' */
  b = -4.0 * L1 * L5 * sin(theta1_3);

  /* '<S235>:1:419' */
  /* '<S235>:1:421' */
  dbdt = -4.0 * L1 * L5 * cos(theta1_3) * -elbow_vel;

  /* '<S235>:1:422' */
  dcdt = 2.0 * L1 * L3_error * sin(theta1_3) * -elbow_vel;

  /* '<S235>:1:424' */
  d2bdt2 = 4.0 * L1 * L5 * sin(theta1_3) * (-elbow_vel * -elbow_vel) - 4.0 * L1 *
    L5 * cos(theta1_3) * -elbow_acc;

  /* '<S235>:1:425' */
  d2cdt2 = 2.0 * L1 * L3_error * cos(theta1_3) * (-elbow_vel * -elbow_vel) + 2.0
    * L1 * L3_error * sin(theta1_3) * -elbow_acc;

  /* '<S235>:1:427' */
  theta1_3 = sqrt(b * b - (((L3 * L3 + L5 * L5) - 2.0 * L3 * L5) - 2.0 * L1 *
    L3_error * cos(theta1_3)) * (4.0 * a));
  if (theta1_3 > 0.0) {
    /* '<S235>:1:429' */
    if (b > 0.0) {
      /* '<S235>:1:430' */
      /* '<S235>:1:431' */
      sinU = (-b + theta1_3) / (2.0 * a);

      /* '<S235>:1:432' */
      dsinUdt = ((2.0 * b * dbdt - 4.0 * a * dcdt) * (0.5 / theta1_3) + -dbdt) /
        (2.0 * a);

      /* '<S235>:1:433' */
      L3 = 2.0 * b * dbdt - 4.0 * a * dcdt;
      L3 = (((dbdt * dbdt * 2.0 + 2.0 * b * d2bdt2) - 4.0 * a * d2cdt2) * (0.5 /
             theta1_3) + (-d2bdt2 - 0.25 / rt_powd_snf(theta1_3, 3.0) * (L3 * L3)))
        / (2.0 * a);
    } else {
      /* '<S235>:1:435' */
      sinU = (-b - theta1_3) / (2.0 * a);

      /* '<S235>:1:436' */
      dsinUdt = (-dbdt - (2.0 * b * dbdt - 4.0 * a * dcdt) * (0.5 / theta1_3)) /
        (2.0 * a);

      /* '<S235>:1:437' */
      L3 = 2.0 * b * dbdt - 4.0 * a * dcdt;
      L3 = ((0.25 / rt_powd_snf(theta1_3, 3.0) * (L3 * L3) + -d2bdt2) - ((dbdt *
              dbdt * 2.0 + 2.0 * b * d2bdt2) - 4.0 * a * d2cdt2) * (0.5 /
             theta1_3)) / (2.0 * a);
    }
  } else {
    /* '<S235>:1:440' */
    sinU = -b / (2.0 * a);

    /* '<S235>:1:441' */
    dsinUdt = -dbdt / (2.0 * a);

    /* '<S235>:1:442' */
    L3 = -d2bdt2 / (2.0 * a);
  }

  if (sinU > 1.0) {
    /* '<S235>:1:445' */
    /* '<S235>:1:446' */
    sinU = 1.0;
  } else {
    if (sinU < -1.0) {
      /* '<S235>:1:447' */
      /* '<S235>:1:448' */
      sinU = -1.0;
    }
  }

  /* '<S235>:1:451' */
  /* '<S235>:1:453' */
  /* '<S235>:1:454' */
  /* '<S235>:1:455' */
  /* '<S235>:1:457' */
  *angle_corr = -(2.0 * asin(sinU));

  /* '<S235>:1:458' */
  *vel_corr = -(2.0 / sqrt(1.0 - sinU * sinU) * dsinUdt);

  /* '<S235>:1:459' */
  *acc_corr = -(2.0 / rt_powd_snf(1.0 - sinU * sinU, 1.5) * sinU * (dsinUdt *
    dsinUdt) + 2.0 / sqrt(1.0 - sinU * sinU) * L3);
}

/* Function for MATLAB Function: '<S69>/Create KINARM Data Array' */
static void vmr_rwd_fix_leftarm_create_robot_row(const real_T calibration[8],
  const real_T hardware_settings[12], const real_T force_sensor_data[7], const
  real_T robot_data[10], const real_T torque_command[2], real_T robot_row[50])
{
  boolean_T isEP;
  real_T force_sensor_force_u;
  real_T force_sensor_force_v;
  real_T force_sensor_force_w;
  real_T force_sensor_torque_u;
  real_T force_sensor_torque_v;
  real_T force_sensor_torque_w;
  real_T elbow_velocity;
  real_T elbow_acceleration;
  real_T shoulder_angle;
  real_T elbow_angle;
  int32_T arm_orientation;
  real_T L1_angle;
  real_T L2_angle;
  real_T pointer_angle;
  real_T L1_velocity;
  real_T L2_velocity;
  real_T L1_acceleration;
  real_T L2_acceleration;
  real_T M1_torque_cmd;
  real_T M2_torque_cmd;
  real_T elbow_position_x;
  real_T elbow_position_y;
  real_T elbow_velocity_x;
  real_T elbow_velocity_y;
  real_T elbow_acceleration_x;
  real_T elbow_acceleration_y;
  real_T sensor_u_angle;
  real_T force_sensor_force_x;
  real_T force_sensor_force_y;
  real_T force_sensor_force_z;
  real_T force_sensor_torque_x;
  real_T force_sensor_torque_y;
  real_T force_sensor_torque_z;
  boolean_T b;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  This function creates a row of arm-specific data for the KINARM data matrix.  */
  /*  Extract the relevant information from each input array. */
  /* '<S235>:1:156' */
  /*  offset added to motion control card shoulder angle to get real angle (rad) */
  /* '<S235>:1:157' */
  /*  offset added to motion control card elbow angle to get real angle (rad) */
  /* '<S235>:1:158' */
  /*  shoulder x position (m) (global coordinates) */
  /* '<S235>:1:159' */
  /*  shoulder y position (m) (global coordinates) */
  /* '<S235>:1:160' */
  /*  L1 (upper arm segment) length (m) */
  /* '<S235>:1:161' */
  /*  L2 (forearm segment) length (m); segment length puts distal end in line with subject pointer */
  /* '<S235>:1:162' */
  /*  perpendicular distance from L2 to subject pointer (m) */
  /* '<S235>:1:163' */
  /*  L3 error, the difference between lengths L3 and L5 (m) */
  /* '<S235>:1:165' */
  /*  robot type (0: EXO, 1: EP, 2:NHP) */
  if ((hardware_settings[0] == 0.0) || (hardware_settings[0] == 2.0)) {
    /* '<S235>:1:166' */
    b = true;
  } else {
    /* '<S235>:1:166' */
    b = false;
  }

  /* '<S235>:1:167' */
  isEP = (hardware_settings[0] == 1.0);

  /* '<S235>:1:168' */
  /*  L5 segment length (m) */
  /* '<S235>:1:169' */
  /*  angle of L2 relative to L5 (rad) */
  /* '<S235>:1:170' */
  /*  offset of force sensor from forearm linkage (rad) */
  /* '<S235>:1:171' */
  /*  robot orientation (1: right-handed from robot perspective, -1: left-handed from robot perspective) */
  /* '<S235>:1:173' */
  /*  force sensor u force (N) */
  /* '<S235>:1:174' */
  /*  force sensor v force (N) */
  /* '<S235>:1:175' */
  /*  force sensor w force (N) */
  /* '<S235>:1:176' */
  /*  force sensor u torque (Nm)  */
  /* '<S235>:1:177' */
  /*  force sensor v torque (Nm) */
  /* '<S235>:1:178' */
  /*  force sensor w torque (Nm) */
  /* '<S235>:1:179' */
  /*  force sensor w torque (Nm) */
  /* '<S235>:1:181' */
  /*  current shoulder joint angle (rad) */
  /* '<S235>:1:182' */
  /*  current elbow joint angle (rad) */
  /* '<S235>:1:183' */
  /*  shoulder joint angular velocity (rad/s) */
  /* '<S235>:1:184' */
  elbow_velocity = robot_data[3];

  /*  elbow joint angular velocity (rad/s) */
  /* '<S235>:1:185' */
  /*  shoulder joint angular acceleration (rad/s^2) */
  /* '<S235>:1:186' */
  elbow_acceleration = robot_data[5];

  /*  elbow joint angular acceleration (rad/s^2) */
  /* '<S235>:1:187' */
  /*  filtered shoulder velocity (rad/s) */
  /* '<S235>:1:188' */
  /*  filtered elbow velocity (rad/s) */
  /* '<S235>:1:189' */
  /*  motor 1 status */
  /* '<S235>:1:190' */
  /*  motor 2 status */
  /* '<S235>:1:192' */
  /*  commanded shoulder torque (Nm) */
  /* '<S235>:1:193' */
  /*  commanded elbow torque (Nm) */
  /*  With the inputs unpacked, start using them to compute other values that will be included in the data array. Some inputs are included in the */
  /*  array directly, but the kinematic data is also developed from the joint-based information supplied by the polling function into information  */
  /*  about the arm segments, the elbow, and the hand/fingertip as described in the following sections. */
  /*  Before proceeding, the shoulder and elbow angles are shifted by the offsets determined by the calibration. If the calibration has been */
  /*  performed correctly, this ensures that the angle of 0 corresponds to when the arm is aligned with the coronal plane. In the case of the  */
  /*  elbow angle for a KINARM EXO, an extra correction is performed (using a utility function, and according to the current calibration) to  */
  /*  account for small imperfections in the parallelogram of KINARM links caused by differences in the lengths of L3 and L5 (which are  */
  /*  theoretically equal). */
  /* '<S235>:1:206' */
  shoulder_angle = robot_data[0] + calibration[0];

  /*  If the robot is an Exoskeleton, use the correct_elbow_angle function to account for imperfections on the KINARM robot parallelogram structure */
  if (b) {
    /* '<S235>:1:166' */
    vmr_rwd_fix_leftarm_correct_elbow_angle(robot_data[1] + calibration[1],
      robot_data[3], robot_data[5], hardware_settings[3], calibration[4],
      hardware_settings[2], calibration[7], &force_sensor_torque_y,
      &force_sensor_torque_z, &sensor_u_angle);

    /* '<S235>:1:211' */
    elbow_angle = (robot_data[1] + calibration[1]) + force_sensor_torque_y;

    /* '<S235>:1:212' */
    elbow_velocity = robot_data[3] + force_sensor_torque_z;

    /* '<S235>:1:213' */
    elbow_acceleration = robot_data[5] + sensor_u_angle;
  } else {
    /* '<S235>:1:215' */
    elbow_angle = robot_data[1] + calibration[1];
  }

  /*  Convert robot orientation as supplied in the hardware settings (a scaling factor used to calculate robot data) to the number 1 or 2, */
  /*  indicating which of the subject's arms will normally be using the robot: right or left, respectively. This is done to be consistent  */
  /*  with previous versions of the TDK. Note that the robot orientations of KINARM EP robots are "opposite" those for KINARM EXOs when. */
  if ((isEP && (hardware_settings[5] < 0.0)) || (b && (hardware_settings[5] >
        0.0))) {
    /* '<S235>:1:221' */
    /* '<S235>:1:166' */
    /* '<S235>:1:221' */
    /* '<S235>:1:222' */
    arm_orientation = 1;

    /*  right arm orientation expected for subject */
  } else {
    /* '<S235>:1:224' */
    arm_orientation = 2;

    /*  left arm orientation expected for subject */
  }

  /*  Create a motor status variable for the robot that is consistent with previous versions of the TDK: the value forms a bitfield in */
  /*  which non-zero bits indicate a motor is disabled or faulted. The least significant bit is motor 1; the next is motor 2. */
  /* '<S235>:1:229' */
  /*  Calculate segment information, i.e. positions, velocities, and accelerations for L1 and L2. "Segment-based" values here differ from the */
  /*  "joint-based" values in a few ways, though they are still expressed in angles: */
  /*    i) elbow angles are no longer shoulder-relative (that is, L2 angles are not relative to L1) */
  /*   ii) positions are expressed with the corrections calculated above */
  /*  iii) all angles are expressed in the same system, where 0 is the angular position of the exoskeleton right arm when aligned with the  */
  /*       coronal plane and positive changes in angle correspond to counterclockwise movements. */
  /*  */
  /*  This section also determines the torque commands for motor 1 (shoulder) and motor 2 (elbow). When a positive torque is applied to the  */
  /*  forearm linkage by motor 2 it causes the same positive force on the upper arm linkage, so the torque applied to motor 1 is the desired */
  /*  shoulder torque less any torque commanded at the elbow. */
  /* '<S235>:1:242' */
  L1_angle = shoulder_angle;

  /* '<S235>:1:243' */
  L2_angle = shoulder_angle + elbow_angle;

  /* '<S235>:1:245' */
  pointer_angle = (shoulder_angle + elbow_angle) + 1.5707963267948966;

  /* '<S235>:1:247' */
  L1_velocity = robot_data[2];

  /* '<S235>:1:248' */
  L2_velocity = robot_data[2] + elbow_velocity;

  /* '<S235>:1:250' */
  L1_acceleration = robot_data[4];

  /* '<S235>:1:251' */
  L2_acceleration = robot_data[4] + elbow_acceleration;

  /* '<S235>:1:253' */
  M1_torque_cmd = torque_command[0] - torque_command[1];

  /* '<S235>:1:254' */
  M2_torque_cmd = torque_command[1];

  /*  a robot_orientation < 0 means that the robot is left-handed from its perspective (i.e. if you look at the robot structure,  */
  /*  and pretend that it is a humanoid, the robot itself looks left-handed).  For an Exoskeleton robot, this is the */
  /*  robot that the left-hand of the subject grabs. For an EP robot, this is the robot that the subjec'ts right-hand grabs.   */
  if (hardware_settings[5] == -1.0) {
    /* '<S235>:1:260' */
    /* '<S235>:1:261' */
    L1_angle = -shoulder_angle + 3.1415926535897931;

    /* '<S235>:1:262' */
    L2_angle = -L2_angle + 3.1415926535897931;

    /* '<S235>:1:264' */
    pointer_angle = -pointer_angle + 3.1415926535897931;

    /* '<S235>:1:266' */
    L1_velocity = -robot_data[2];

    /* '<S235>:1:267' */
    L2_velocity = -L2_velocity;

    /* '<S235>:1:269' */
    L1_acceleration = -robot_data[4];

    /* '<S235>:1:270' */
    L2_acceleration = -L2_acceleration;

    /* '<S235>:1:272' */
    M1_torque_cmd = -M1_torque_cmd;

    /* '<S235>:1:273' */
    M2_torque_cmd = -torque_command[1];
  }

  /*  Calculate elbow information, i.e. position, velocity, and acceleration, in X-Y space rather than joint angles. */
  /* '<S235>:1:277' */
  elbow_position_x = calibration[4] * cos(L1_angle) + calibration[2];

  /* '<S235>:1:278' */
  elbow_position_y = calibration[4] * sin(L1_angle) + calibration[3];

  /* '<S235>:1:280' */
  elbow_velocity_x = -calibration[4] * sin(L1_angle) * L1_velocity;

  /* '<S235>:1:281' */
  elbow_velocity_y = calibration[4] * cos(L1_angle) * L1_velocity;

  /* '<S235>:1:283' */
  elbow_acceleration_x = (L1_velocity * L1_velocity * cos(L1_angle) + sin
    (L1_angle) * L1_acceleration) * -calibration[4];

  /* '<S235>:1:284' */
  elbow_acceleration_y = (L1_velocity * L1_velocity * -sin(L1_angle) + cos
    (L1_angle) * L1_acceleration) * calibration[4];

  /*  Calculate fingertip/subject pointer/hand feedback information, i.e. position, velocity, and acceleration, in X-Y space. */
  /* '<S235>:1:287' */
  /* '<S235>:1:288' */
  /* '<S235>:1:290' */
  /* '<S235>:1:291' */
  /* '<S235>:1:293' */
  /* '<S235>:1:295' */
  /*  Calculate force sensor data for EP robots, or zero it for EXO robots. On each EP robot the force sensor is mounted at known angle to  */
  /*  the forearm linkage, which is specified as an input to this block. Two variants of the data are calculated: i) scaled in the force  */
  /*  sensor's local coordinate system ("uvw"), and ii) transformed to be in the global coordinate system ("xyz"). */
  if (isEP) {
    /* '<S235>:1:301' */
    /* '<S235>:1:303' */
    force_sensor_force_u = force_sensor_data[0] / 1.0E+6;

    /*  scale values to SI using factors defined in force sensor configurations */
    /* '<S235>:1:304' */
    force_sensor_force_v = force_sensor_data[1] / 1.0E+6;

    /* '<S235>:1:305' */
    force_sensor_force_w = force_sensor_data[2] / 1.0E+6;

    /* '<S235>:1:307' */
    force_sensor_torque_u = force_sensor_data[3] / 1.0E+6;

    /* '<S235>:1:308' */
    force_sensor_torque_v = force_sensor_data[4] / 1.0E+6;

    /* '<S235>:1:309' */
    force_sensor_torque_w = force_sensor_data[5] / 1.0E+6;

    /* '<S235>:1:311' */
    sensor_u_angle = L2_angle - hardware_settings[4];

    /* '<S235>:1:312' */
    force_sensor_torque_y = (L2_angle - hardware_settings[4]) -
      1.5707963267948966;

    /* '<S235>:1:314' */
    force_sensor_force_x = force_sensor_force_u * cos(sensor_u_angle) +
      force_sensor_force_v * cos(force_sensor_torque_y);

    /* '<S235>:1:315' */
    force_sensor_force_y = force_sensor_force_u * sin(sensor_u_angle) +
      force_sensor_force_v * sin(force_sensor_torque_y);

    /* '<S235>:1:316' */
    force_sensor_force_z = -force_sensor_force_w;

    /* '<S235>:1:318' */
    force_sensor_torque_x = force_sensor_torque_u * cos(sensor_u_angle) +
      force_sensor_torque_v * cos(force_sensor_torque_y);

    /* '<S235>:1:319' */
    force_sensor_torque_y = force_sensor_torque_u * sin(sensor_u_angle) +
      force_sensor_torque_v * sin(force_sensor_torque_y);

    /* '<S235>:1:320' */
    force_sensor_torque_z = -force_sensor_torque_w;
  } else {
    /* '<S235>:1:323' */
    force_sensor_force_u = 0.0;

    /* '<S235>:1:324' */
    force_sensor_force_v = 0.0;

    /* '<S235>:1:325' */
    force_sensor_force_w = 0.0;

    /* '<S235>:1:327' */
    force_sensor_torque_u = 0.0;

    /* '<S235>:1:328' */
    force_sensor_torque_v = 0.0;

    /* '<S235>:1:329' */
    force_sensor_torque_w = 0.0;

    /* '<S235>:1:331' */
    force_sensor_force_x = 0.0;

    /* '<S235>:1:332' */
    force_sensor_force_y = 0.0;

    /* '<S235>:1:333' */
    force_sensor_force_z = 0.0;

    /* '<S235>:1:335' */
    force_sensor_torque_x = 0.0;

    /* '<S235>:1:336' */
    force_sensor_torque_y = 0.0;

    /* '<S235>:1:337' */
    force_sensor_torque_z = 0.0;
  }

  /*  Construct the arm data array. Its construction is laid out here explicitly to provide comments for each entry (some are repeats from above).  */
  /* '<S235>:1:341' */
  /* '<S235>:1:343' */
  robot_row[0] = calibration[4];

  /*  L1 (upper arm segment) length (m) */
  /* '<S235>:1:344' */
  robot_row[1] = calibration[5];

  /*  L2 (forearm segment) length (m); segment length puts distal end in line with subject pointer */
  /* '<S235>:1:345' */
  robot_row[2] = calibration[6];

  /*  perpendicular distance from L2 to subject pointer (m) */
  /* '<S235>:1:346' */
  robot_row[3] = calibration[2];

  /*  shoulder x position (m) (global coordinates) */
  /* '<S235>:1:347' */
  robot_row[4] = calibration[3];

  /*  shoulder y position (m) (global coordinates) */
  /* '<S235>:1:348' */
  robot_row[5] = arm_orientation;

  /*  subject's expected arm orientation (1: right, 2: left) */
  /* '<S235>:1:349' */
  robot_row[6] = shoulder_angle;

  /*  shoulder joint angle, with correction for offsets (see above) (rad) */
  /* '<S235>:1:350' */
  robot_row[7] = elbow_angle;

  /*  elbow joint angle, with correction for offsets (see above) (rad) */
  /* '<S235>:1:351' */
  robot_row[8] = robot_data[2];

  /*  shoulder joint angular velocity (rad/s) */
  /* '<S235>:1:352' */
  robot_row[9] = elbow_velocity;

  /*  elbow joint angular velocity (rad/s) */
  /* '<S235>:1:353' */
  robot_row[10] = robot_data[4];

  /*  shoulder joint angular acceleration (rad/s^2) */
  /* '<S235>:1:354' */
  robot_row[11] = elbow_acceleration;

  /*  elbow joint angular acceleration (rad/s^2) */
  /* '<S235>:1:355' */
  robot_row[12] = torque_command[0];

  /*  commanded shoulder torque (Nm) */
  /* '<S235>:1:356' */
  robot_row[13] = torque_command[1];

  /*  commanded elbow torque (Nm) */
  /* '<S235>:1:357' */
  robot_row[14] = M1_torque_cmd;

  /*  commanded motor 1 torque (shoulder torque less elbow torque) (Nm) */
  /* '<S235>:1:358' */
  robot_row[15] = M2_torque_cmd;

  /*  commanded motor 2 torque (Nm) */
  /* '<S235>:1:359' */
  robot_row[16] = L1_angle;

  /*  upper arm angle with corrections, orientation-independent (see above) (rad) */
  /* '<S235>:1:360' */
  robot_row[17] = L2_angle;

  /*  forearm angle with corrections, orientation and shoulder-independent (see above) (rad) */
  /* '<S235>:1:361' */
  robot_row[18] = L1_velocity;

  /*  upper arm angular velocity, orientation-independent (see above) (rad/s) */
  /* '<S235>:1:362' */
  robot_row[19] = L2_velocity;

  /*  forearm angular velocity, orientation and shoulder-independent (see above) (rad/s) */
  /* '<S235>:1:363' */
  robot_row[20] = L1_acceleration;

  /*  upper arm angular acceleration, orientation-independent (see above) (rad/s^2) */
  /* '<S235>:1:364' */
  robot_row[21] = L2_acceleration;

  /*  forearm angular acceleration, orientation and shoulder-independent (see above) (rad/s^2) */
  /* '<S235>:1:365' */
  robot_row[22] = (calibration[5] * cos(L2_angle) + elbow_position_x) +
    calibration[6] * cos(pointer_angle);

  /*  fingertip position in x (m) */
  /* '<S235>:1:366' */
  robot_row[23] = (calibration[5] * sin(L2_angle) + elbow_position_y) +
    calibration[6] * sin(pointer_angle);

  /*  fingertip position in y (m) */
  /* '<S235>:1:367' */
  robot_row[24] = (elbow_velocity_x - calibration[5] * sin(L2_angle) *
                   L2_velocity) - calibration[6] * sin(pointer_angle) *
    L2_velocity;

  /*  fingertip velocity in x (m/s) */
  /* '<S235>:1:368' */
  robot_row[25] = (calibration[5] * cos(L2_angle) * L2_velocity +
                   elbow_velocity_y) + calibration[6] * cos(pointer_angle) *
    L2_velocity;

  /*  fingertip velocity in y (m/s) */
  /* '<S235>:1:369' */
  robot_row[26] = (elbow_acceleration_x - (L2_velocity * L2_velocity * cos
    (L2_angle) + sin(L2_angle) * L2_acceleration) * calibration[5]) -
    (L2_velocity * L2_velocity * cos(pointer_angle) + sin(pointer_angle) *
     L2_acceleration) * calibration[6];

  /*  fingertip acceleration in x (m/s^2) */
  /* '<S235>:1:370' */
  robot_row[27] = ((L2_velocity * L2_velocity * -sin(L2_angle) + cos(L2_angle) *
                    L2_acceleration) * calibration[5] + elbow_acceleration_y) +
    (L2_velocity * L2_velocity * -sin(pointer_angle) + cos(pointer_angle) *
     L2_acceleration) * calibration[6];

  /*  fingertip acceleration in y (m/s^2) */
  /* '<S235>:1:371' */
  robot_row[28] = elbow_position_x;

  /*  elbow position in x (m) */
  /* '<S235>:1:372' */
  robot_row[29] = elbow_position_y;

  /*  elbow position in y (m) */
  /* '<S235>:1:373' */
  robot_row[30] = elbow_velocity_x;

  /*  elbow velocity in x (m/s) */
  /* '<S235>:1:374' */
  robot_row[31] = elbow_velocity_y;

  /*  elbow velocity in y (m/s) */
  /* '<S235>:1:375' */
  robot_row[32] = elbow_acceleration_x;

  /*  elbow acceleration in x (m/s^2) */
  /* '<S235>:1:376' */
  robot_row[33] = elbow_acceleration_y;

  /*  elbow acceleration in y (m/s^2) */
  /* '<S235>:1:377' */
  robot_row[34] = robot_data[6];

  /*  filtered shoulder velocity from motion control card (rad/s) */
  /* '<S235>:1:378' */
  robot_row[35] = robot_data[7];

  /*  filtered elbow velocity from motion control card (rad/s) */
  /* '<S235>:1:379' */
  robot_row[36] = robot_data[9] * 2.0 + robot_data[8];

  /*  motor status (bitfield; each 0: motor enabled, 1: motor disabled/faulted) */
  /* '<S235>:1:380' */
  robot_row[37] = force_sensor_force_u;

  /*  force measured by force sensor along u in its local coordinate system (N) */
  /* '<S235>:1:381' */
  robot_row[38] = force_sensor_force_v;

  /*  force measured by force sensor along v in its local coordinate system (N) */
  /* '<S235>:1:382' */
  robot_row[39] = force_sensor_force_w;

  /*  force measured by force sensor along w in its local coordinate system (N) */
  /* '<S235>:1:383' */
  robot_row[40] = force_sensor_torque_u;

  /*  torque measured by force sensor along u in its local coordinate system (Nm) */
  /* '<S235>:1:384' */
  robot_row[41] = force_sensor_torque_v;

  /*  torque measured by force sensor along v in its local coordinate system (Nm) */
  /* '<S235>:1:385' */
  robot_row[42] = force_sensor_torque_w;

  /*  torque measured by force sensor along w in its local coordinate system (Nm) */
  /* '<S235>:1:386' */
  robot_row[43] = force_sensor_force_x;

  /*  force measured by force sensor along x in the global coordinate system (N) */
  /* '<S235>:1:387' */
  robot_row[44] = force_sensor_force_y;

  /*  force measured by force sensor along y in its local coordinate system (N) */
  /* '<S235>:1:388' */
  robot_row[45] = force_sensor_force_z;

  /*  force measured by force sensor along z in its local coordinate system (N) */
  /* '<S235>:1:389' */
  robot_row[46] = force_sensor_torque_x;

  /*  torque measured by force sensor along x in its local coordinate system (Nm) */
  /* '<S235>:1:390' */
  robot_row[47] = force_sensor_torque_y;

  /*  torque measured by force sensor along y in its local coordinate system (Nm) */
  /* '<S235>:1:391' */
  robot_row[48] = force_sensor_torque_z;

  /*  torque measured by force sensor along z in its local coordinate system (Nm) */
  /* '<S235>:1:392' */
  robot_row[49] = force_sensor_data[6];
}

/* Initial conditions for function-call system: '<S33>/createKINData' */
void vmr_rwd_fix_leftarm_createKINData_Init(void)
{
  int32_T i;

  /* InitializeConditions for UnitDelay: '<S234>/Output' */
  vmr_rwd_fix_leftarm_DW.Output_DSTATE_p =
    vmr_rwd_fix_leftarm_P.Output_InitialCondition_b;

  /* InitializeConditions for MATLAB Function: '<S69>/record errors' */
  vmr_rwd_fix_leftarm_DW.lastECATMessages_not_empty = false;
  for (i = 0; i < 300; i++) {
    vmr_rwd_fix_leftarm_DW.memoryBuffer[i] = 0.0;
  }

  vmr_rwd_fix_leftarm_DW.waitingMsgCount = 0.0;
  vmr_rwd_fix_leftarm_DW.outCount = 0.0;
  vmr_rwd_fix_leftarm_DW.sentCount = 0.0;

  /* End of InitializeConditions for MATLAB Function: '<S69>/record errors' */
}

/* Output and update for function-call system: '<S33>/createKINData' */
void vmr_rwd_fix_leftarm_createKINData(void)
{
  real_T feed_forward_duration;
  real_T elbow_velocity;
  real_T elbow_acceleration;
  real_T shoulder_angle;
  real_T L2_angle;
  real_T L1_velocity;
  real_T L2_velocity;
  boolean_T b;
  uint32_T motorInt;
  int32_T i;
  real_T tmp[50];
  real_T tmp_0[294];

  /* DataStoreRead: '<S69>/Read' */
  memcpy(&vmr_rwd_fix_leftarm_B.Read[0],
         &vmr_rwd_fix_leftarm_DW.RobotCalibrations[0], sizeof(real_T) << 4U);

  /* DataStoreRead: '<S69>/Read HW' */
  memcpy(&vmr_rwd_fix_leftarm_B.ReadHW[0],
         &vmr_rwd_fix_leftarm_DW.HardwareSettings[0], 24U * sizeof(real_T));

  /* DataStoreRead: '<S69>/Read Kinematics' */
  memcpy(&vmr_rwd_fix_leftarm_B.ReadKinematics[0],
         &vmr_rwd_fix_leftarm_DW.Kinematics[0], 20U * sizeof(real_T));

  /* DataStoreRead: '<S69>/Servo Read' */
  vmr_rwd_fix_leftarm_B.ServoRead = vmr_rwd_fix_leftarm_DW.ServoUpdate;

  /* DataStoreRead: '<S69>/Delay Read' */
  vmr_rwd_fix_leftarm_B.DelayRead[0] = vmr_rwd_fix_leftarm_DW.DelayEstimates[0];
  vmr_rwd_fix_leftarm_B.DelayRead[1] = vmr_rwd_fix_leftarm_DW.DelayEstimates[1];
  vmr_rwd_fix_leftarm_B.DelayRead[2] = vmr_rwd_fix_leftarm_DW.DelayEstimates[2];
  vmr_rwd_fix_leftarm_B.DelayRead[3] = vmr_rwd_fix_leftarm_DW.DelayEstimates[3];

  /* DataStoreRead: '<S69>/Primary read' */
  memcpy(&vmr_rwd_fix_leftarm_B.Primaryread[0],
         &vmr_rwd_fix_leftarm_DW.PrimaryEncoderData[0], 12U * sizeof(real_T));

  /* DataStoreRead: '<S69>/Data Store Read' */
  vmr_rwd_fix_leftarm_B.DataStoreRead_l =
    vmr_rwd_fix_leftarm_DW.CalibrationButton;
  for (i = 0; i < 7; i++) {
    /* SignalConversion: '<S235>/TmpSignal ConversionAt SFunction Inport3' incorporates:
     *  MATLAB Function: '<S69>/Create KINARM Data Array'
     */
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_e[i] =
      vmr_rwd_fix_leftarm_B.Switch_p[i];
  }

  for (i = 0; i < 7; i++) {
    /* SignalConversion: '<S235>/TmpSignal ConversionAt SFunction Inport3' incorporates:
     *  MATLAB Function: '<S69>/Create KINARM Data Array'
     */
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_e[i + 7] =
      vmr_rwd_fix_leftarm_B.Switch1_b[i];
  }

  /* SignalConversion: '<S235>/TmpSignal ConversionAt SFunction Inport10' incorporates:
   *  Constant: '<S237>/Gaze Feedback Status'
   *  Constant: '<S237>/Hand Feedback Colour'
   *  Constant: '<S237>/Hand Feedback Feed Forward'
   *  Constant: '<S237>/Hand Feedback Radius'
   *  Constant: '<S237>/Hand Feedback Source'
   *  Constant: '<S237>/Hand Feedback Status'
   *  MATLAB Function: '<S69>/Create KINARM Data Array'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[0] =
    vmr_rwd_fix_leftarm_P.HandFeedbackStatus_Value;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[1] =
    vmr_rwd_fix_leftarm_P.HandFeedbackSource_Value;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[2] =
    vmr_rwd_fix_leftarm_P.HandFeedbackRadius_Value;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[3] =
    vmr_rwd_fix_leftarm_P.HandFeedbackColour_Value;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[4] =
    vmr_rwd_fix_leftarm_P.HandFeedbackFeedForward_Value;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[5] =
    vmr_rwd_fix_leftarm_P.GazeFeedbackStatus_Value;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[6] =
    vmr_rwd_fix_leftarm_B.Gain;

  /* SignalConversion: '<S235>/TmpSignal ConversionAt SFunction Inport12' incorporates:
   *  MATLAB Function: '<S69>/Create KINARM Data Array'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[0] =
    vmr_rwd_fix_leftarm_B.Convert3;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[1] =
    vmr_rwd_fix_leftarm_B.Convert19[0];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[2] =
    vmr_rwd_fix_leftarm_B.Convert19[1];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[3] =
    vmr_rwd_fix_leftarm_B.Convert19[2];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[4] =
    vmr_rwd_fix_leftarm_B.Convert1_p;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[5] =
    vmr_rwd_fix_leftarm_B.RateTransition_kg[0];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[6] =
    vmr_rwd_fix_leftarm_B.RateTransition_kg[1];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[7] =
    vmr_rwd_fix_leftarm_B.RateTransition_kg[2];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[8] =
    vmr_rwd_fix_leftarm_B.Convert4[0];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[9] =
    vmr_rwd_fix_leftarm_B.Convert4[1];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[10] =
    vmr_rwd_fix_leftarm_B.Convert4[2];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[11] =
    vmr_rwd_fix_leftarm_B.pupil_GLOBAL[0];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[12] =
    vmr_rwd_fix_leftarm_B.pupil_GLOBAL[1];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[13] =
    vmr_rwd_fix_leftarm_B.pupil_GLOBAL[2];

  /* MATLAB Function: '<S69>/Create KINARM Data Array' incorporates:
   *  Constant: '<S69>/Dominant Arm'
   */
  /* MATLAB Function 'DataLogging/Poll KINARM/createKINData/Create KINARM Data Array': '<S235>:1' */
  /*  This function constructs a matrix of KINARM-related data called "KINdata". This matrix consists of three rows: the first two are each */
  /*  for data related to the respective robot (i.e. row 1 is for robot 1 data, row 2 for robot 2 data, etc.), and the third row is for data */
  /*  not specific to either arm. Each row of the matrix is currently of length 50, though not all elements in each row are used. */
  /* '<S235>:1:8' */
  for (i = 0; i < 150; i++) {
    vmr_rwd_fix_leftarm_B.kinarm_data[i] = 0.0;
  }

  /* '<S235>:1:9' */
  for (i = 0; i < 12; i++) {
    vmr_rwd_fix_leftarm_B.primary_encoder_data_out[i] = 0.0;
  }

  /*  Create the rows of robot-specific data. The utility function create_robot_row is used to assemble the values for each row.  */
  /*  The last section of that function (in which the row elements are assigned individually) documents the row contents. */
  /* '<S235>:1:13' */
  vmr_rwd_fix_leftarm_create_robot_row(*(real_T (*)[8])&
    vmr_rwd_fix_leftarm_B.Read[0], *(real_T (*)[12])&
    vmr_rwd_fix_leftarm_B.ReadHW[0], *(real_T (*)[7])&
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_e[0], *(real_T (*)
    [10])&vmr_rwd_fix_leftarm_B.ReadKinematics[0], *(real_T (*)[2])&
    vmr_rwd_fix_leftarm_B.Memory_n[0], tmp);
  for (i = 0; i < 50; i++) {
    vmr_rwd_fix_leftarm_B.kinarm_data[3 * i] = tmp[i];
  }

  /* '<S235>:1:16' */
  vmr_rwd_fix_leftarm_create_robot_row(*(real_T (*)[8])&
    vmr_rwd_fix_leftarm_B.Read[8], *(real_T (*)[12])&
    vmr_rwd_fix_leftarm_B.ReadHW[12], *(real_T (*)[7])&
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_e[7], *(real_T (*)
    [10])&vmr_rwd_fix_leftarm_B.ReadKinematics[10], *(real_T (*)[2])&
    vmr_rwd_fix_leftarm_B.Memory_n[2], tmp);
  for (i = 0; i < 50; i++) {
    vmr_rwd_fix_leftarm_B.kinarm_data[1 + 3 * i] = tmp[i];
  }

  /* normally the feed forward should be whatever Dex says it is. However, if the task's */
  /* process VCodes block has set an expected time to display targets then the */
  /* feed forward should reflect that number instead. */
  /* '<S235>:1:22' */
  feed_forward_duration =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[4];
  if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[6] >
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[4]) {
    /* '<S235>:1:23' */
    /* '<S235>:1:24' */
    feed_forward_duration =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[6];
  }

  /*  Create the last row of KINdata, which contains information not specific to any single arm. */
  /* '<S235>:1:28' */
  vmr_rwd_fix_leftarm_B.kinarm_data[2] = vmr_rwd_fix_leftarm_P.DominantArm_Value;

  /*  dominant KINARM for the experiment (1: arm 1, 2: arm 2) */
  /* '<S235>:1:29' */
  vmr_rwd_fix_leftarm_B.kinarm_data[5] = feed_forward_duration;

  /*  duration of feed forward for position of hand feedback (s) */
  /* '<S235>:1:30' */
  vmr_rwd_fix_leftarm_B.kinarm_data[8] =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[0];

  /*  hand feedback arm (0: none, 1: dominant, 2: non-dominant, 3: both, 4: controlled by task program) */
  /* '<S235>:1:31' */
  vmr_rwd_fix_leftarm_B.kinarm_data[11] =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[1];

  /*  hand feedback settings source (0: GUI, 1: from task program) */
  /* '<S235>:1:32' */
  vmr_rwd_fix_leftarm_B.kinarm_data[14] =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[3];

  /*  feedback colour (RRRGGGBBB string converted to integer) */
  /* '<S235>:1:33' */
  vmr_rwd_fix_leftarm_B.kinarm_data[17] =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[2];

  /*  feedback radius (m) */
  /* '<S235>:1:34' */
  vmr_rwd_fix_leftarm_B.kinarm_data[20] =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[4];

  /*  true feed forward requested by Dex in seconds */
  /* '<S235>:1:35' */
  vmr_rwd_fix_leftarm_B.kinarm_data[23] = vmr_rwd_fix_leftarm_B.DelayRead[0];

  /*  primary encoders velocity delay estimate (s) */
  /* '<S235>:1:36' */
  vmr_rwd_fix_leftarm_B.kinarm_data[26] = vmr_rwd_fix_leftarm_B.DelayRead[1];

  /*  primary encoders acceleration delay estimate (s) */
  /* '<S235>:1:37' */
  vmr_rwd_fix_leftarm_B.kinarm_data[29] = vmr_rwd_fix_leftarm_B.DelayRead[2];

  /*  secondary encoders velocity delay estimate (s) */
  /* '<S235>:1:38' */
  vmr_rwd_fix_leftarm_B.kinarm_data[32] = vmr_rwd_fix_leftarm_B.DelayRead[3];

  /*  secondary encoders acceleration delay estimate (s) */
  /* '<S235>:1:39' */
  vmr_rwd_fix_leftarm_B.kinarm_data[35] = vmr_rwd_fix_leftarm_B.ServoRead;

  /*  servo update count */
  /* '<S235>:1:40' */
  vmr_rwd_fix_leftarm_B.kinarm_data[38] = vmr_rwd_fix_leftarm_B.DataStoreRead_l;

  /*  EP calibration button status bitfield */
  /* '<S235>:1:42' */
  /* '<S235>:1:43' */
  vmr_rwd_fix_leftarm_B.kinarm_data[41] =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[0];

  /*  is Gaze tracking hardware available */
  /* '<S235>:1:44' */
  vmr_rwd_fix_leftarm_B.kinarm_data[44] =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[5];

  /*  Gaze feedback (0: on, 1: controlled by task program) */
  if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[0] != 0.0) {
    /* '<S235>:1:47' */
    vmr_rwd_fix_leftarm_B.kinarm_data[47] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[1];

    /*  Gaze X location in global coordinates */
    /* '<S235>:1:48' */
    vmr_rwd_fix_leftarm_B.kinarm_data[50] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[2];

    /*  Gaze Y location in global coordinates */
    /* '<S235>:1:49' */
    vmr_rwd_fix_leftarm_B.kinarm_data[53] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[3];

    /*  Gaze Timestamp in seconds */
    /* '<S235>:1:50' */
    vmr_rwd_fix_leftarm_B.kinarm_data[56] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[4];

    /*  Gaze pupil area */
    /* '<S235>:1:51' */
    vmr_rwd_fix_leftarm_B.kinarm_data[59] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[5];

    /*  Gaze Event ID */
    /* '<S235>:1:52' */
    vmr_rwd_fix_leftarm_B.kinarm_data[62] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[6];

    /*  Gaze Event start time in seconds */
    /* '<S235>:1:53' */
    vmr_rwd_fix_leftarm_B.kinarm_data[65] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[7];

    /*  Gaze Event end time in seconds     */
    /* '<S235>:1:54' */
    vmr_rwd_fix_leftarm_B.kinarm_data[68] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[8];

    /*  Gaze Vector X    */
    /* '<S235>:1:55' */
    vmr_rwd_fix_leftarm_B.kinarm_data[71] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[9];

    /*  Gaze Vector Y    */
    /* '<S235>:1:56' */
    vmr_rwd_fix_leftarm_B.kinarm_data[74] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[10];

    /*  Gaze Vector Z    */
    /* '<S235>:1:57' */
    vmr_rwd_fix_leftarm_B.kinarm_data[77] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[11];

    /*  Gaze pupil loc X    */
    /* '<S235>:1:58' */
    vmr_rwd_fix_leftarm_B.kinarm_data[80] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[12];

    /*  Gaze pupil loc Y    */
    /* '<S235>:1:59' */
    vmr_rwd_fix_leftarm_B.kinarm_data[83] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[13];

    /*  Gaze pupil loc Z    */
  } else {
    /* '<S235>:1:61' */
    vmr_rwd_fix_leftarm_B.kinarm_data[47] = -100.0;

    /*  Gaze X location in global coordinates */
    /* '<S235>:1:62' */
    vmr_rwd_fix_leftarm_B.kinarm_data[50] = -100.0;

    /*  Gaze Y location in global coordinates */
    /* '<S235>:1:63' */
    vmr_rwd_fix_leftarm_B.kinarm_data[53] = -100.0;

    /*  Gaze Timestamp in seconds */
    /* '<S235>:1:64' */
    vmr_rwd_fix_leftarm_B.kinarm_data[56] = -100.0;

    /*  Gaze Timestamp in seconds */
    /* '<S235>:1:65' */
    vmr_rwd_fix_leftarm_B.kinarm_data[68] = -100.0;

    /*  Gaze Vector X    */
    /* '<S235>:1:66' */
    vmr_rwd_fix_leftarm_B.kinarm_data[71] = -100.0;

    /*  Gaze Vector Y    */
    /* '<S235>:1:67' */
    vmr_rwd_fix_leftarm_B.kinarm_data[74] = -100.0;

    /*  Gaze Vector Z    */
    /* '<S235>:1:68' */
    vmr_rwd_fix_leftarm_B.kinarm_data[77] = -100.0;

    /*  Gaze pupil loc X   */
    /* '<S235>:1:69' */
    vmr_rwd_fix_leftarm_B.kinarm_data[80] = -100.0;

    /*  Gaze pupil loc Y    */
    /* '<S235>:1:70' */
    vmr_rwd_fix_leftarm_B.kinarm_data[83] = -100.0;

    /*  Gaze pupil loc Z    */
  }

  /*  Create the two rows of primary encoder data. These outputs are analogous to the L1/L2 outputs in kinarm_data, the difference being that */
  /*  these are always derived from the primary encoders while the contents of kinarm_data is derived from the primary or secondary encoders */
  /*  (depending on the user's choice of whether or not to use the secondary encoders in the GUI). */
  /* '<S235>:1:76' */
  /* '<S235>:1:77' */
  /* '<S235>:1:79' */
  /* '<S235>:1:80' */
  /* '<S235>:1:81' */
  /* '<S235>:1:82' */
  elbow_velocity = vmr_rwd_fix_leftarm_B.Primaryread[3];

  /* '<S235>:1:83' */
  /* '<S235>:1:84' */
  elbow_acceleration = vmr_rwd_fix_leftarm_B.Primaryread[5];

  /* '<S235>:1:86' */
  /* '<S235>:1:87' */
  /* '<S235>:1:88' */
  /*  L1 (upper arm segment) length (m) */
  /* '<S235>:1:89' */
  /*  L3 error, the difference between lengths L3 and L5 (m) */
  /* '<S235>:1:91' */
  /* '<S235>:1:92' */
  /*  robot orientation (1: right-handed from robot perspective, -1: left-handed from robot perspective) */
  /* '<S235>:1:93' */
  /*  L5 segment length (m) */
  /* '<S235>:1:94' */
  /*  angle of L2 relative to L5 (rad) */
  /* '<S235>:1:95' */
  if ((vmr_rwd_fix_leftarm_B.ReadHW[0] == 0.0) || (vmr_rwd_fix_leftarm_B.ReadHW
       [0] == 2.0)) {
    /* '<S235>:1:96' */
    b = true;
  } else {
    /* '<S235>:1:96' */
    b = false;
  }

  /*  Before proceeding, the shoulder and elbow angles are shifted by the offsets determined by the calibration. If the calibration has been */
  /*  performed correctly, this ensures that the angle of 0 corresponds to when the arm is aligned with the coronal plane. In the case of the  */
  /*  elbow angle for a KINARM EXO, an extra correction is performed (using a utility function, and according to the current calibration) to  */
  /*  account for small imperfections in the parallelogram of KINARM links caused by differences in the lengths of L3 and L5 (which are  */
  /*  theoretically equal). */
  /* '<S235>:1:103' */
  shoulder_angle = vmr_rwd_fix_leftarm_B.Primaryread[0] +
    vmr_rwd_fix_leftarm_B.Read[0];

  /*  If the robot is an Exoskeleton, use the correct_elbow_angle function to account for imperfections on the KINARM robot parallelogram structure */
  if (b) {
    /* '<S235>:1:96' */
    vmr_rwd_fix_leftarm_correct_elbow_angle(vmr_rwd_fix_leftarm_B.Primaryread[1]
      + vmr_rwd_fix_leftarm_B.Read[1], vmr_rwd_fix_leftarm_B.Primaryread[3],
      vmr_rwd_fix_leftarm_B.Primaryread[5], vmr_rwd_fix_leftarm_B.ReadHW[3],
      vmr_rwd_fix_leftarm_B.Read[4], vmr_rwd_fix_leftarm_B.ReadHW[2],
      vmr_rwd_fix_leftarm_B.Read[7], &feed_forward_duration, &elbow_velocity,
      &L2_velocity);

    /* '<S235>:1:108' */
    feed_forward_duration += vmr_rwd_fix_leftarm_B.Primaryread[1] +
      vmr_rwd_fix_leftarm_B.Read[1];

    /* '<S235>:1:109' */
    elbow_velocity += vmr_rwd_fix_leftarm_B.Primaryread[3];

    /* '<S235>:1:110' */
    elbow_acceleration = vmr_rwd_fix_leftarm_B.Primaryread[5] + L2_velocity;
  } else {
    /* '<S235>:1:112' */
    feed_forward_duration = vmr_rwd_fix_leftarm_B.Primaryread[1] +
      vmr_rwd_fix_leftarm_B.Read[1];
  }

  /* '<S235>:1:115' */
  /* '<S235>:1:116' */
  L2_angle = shoulder_angle + feed_forward_duration;

  /* '<S235>:1:118' */
  L1_velocity = vmr_rwd_fix_leftarm_B.Primaryread[2];

  /* '<S235>:1:119' */
  L2_velocity = vmr_rwd_fix_leftarm_B.Primaryread[2] + elbow_velocity;

  /* '<S235>:1:121' */
  elbow_velocity = vmr_rwd_fix_leftarm_B.Primaryread[4];

  /* '<S235>:1:122' */
  feed_forward_duration = vmr_rwd_fix_leftarm_B.Primaryread[4] +
    elbow_acceleration;

  /*  a robot_orientation < 0 means that the robot is left-handed from its perspective (i.e. if you look at the robot structure,  */
  /*  and pretend that it is a humanoid, the robot itself looks left-handed).  For an Exoskeleton robot, this is the */
  /*  robot that the left-hand of the subject grabs. For an EP robot, this is the robot that the subjec'ts right-hand grabs.   */
  if (vmr_rwd_fix_leftarm_B.ReadHW[5] < 0.0) {
    /* '<S235>:1:128' */
    /* '<S235>:1:129' */
    shoulder_angle = -shoulder_angle + 3.1415926535897931;

    /* '<S235>:1:130' */
    L2_angle = -L2_angle + 3.1415926535897931;

    /* '<S235>:1:132' */
    L1_velocity = -vmr_rwd_fix_leftarm_B.Primaryread[2];

    /* '<S235>:1:133' */
    L2_velocity = -L2_velocity;

    /* '<S235>:1:135' */
    elbow_velocity = -vmr_rwd_fix_leftarm_B.Primaryread[4];

    /* '<S235>:1:136' */
    feed_forward_duration = -feed_forward_duration;
  }

  /* '<S235>:1:139' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[0] = shoulder_angle;

  /* '<S235>:1:140' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[2] = L2_angle;

  /* '<S235>:1:142' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[4] = L1_velocity;

  /* '<S235>:1:143' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[6] = L2_velocity;

  /* '<S235>:1:145' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[8] = elbow_velocity;

  /* '<S235>:1:146' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[10] = feed_forward_duration;

  /* '<S235>:1:76' */
  /* '<S235>:1:77' */
  /* '<S235>:1:79' */
  /* '<S235>:1:80' */
  /* '<S235>:1:81' */
  /* '<S235>:1:82' */
  elbow_velocity = vmr_rwd_fix_leftarm_B.Primaryread[9];

  /* '<S235>:1:83' */
  /* '<S235>:1:84' */
  elbow_acceleration = vmr_rwd_fix_leftarm_B.Primaryread[11];

  /* '<S235>:1:86' */
  /* '<S235>:1:87' */
  /* '<S235>:1:88' */
  /*  L1 (upper arm segment) length (m) */
  /* '<S235>:1:89' */
  /*  L3 error, the difference between lengths L3 and L5 (m) */
  /* '<S235>:1:91' */
  /* '<S235>:1:92' */
  /*  robot orientation (1: right-handed from robot perspective, -1: left-handed from robot perspective) */
  /* '<S235>:1:93' */
  /*  L5 segment length (m) */
  /* '<S235>:1:94' */
  /*  angle of L2 relative to L5 (rad) */
  /* '<S235>:1:95' */
  if ((vmr_rwd_fix_leftarm_B.ReadHW[12] == 0.0) ||
      (vmr_rwd_fix_leftarm_B.ReadHW[12] == 2.0)) {
    /* '<S235>:1:96' */
    b = true;
  } else {
    /* '<S235>:1:96' */
    b = false;
  }

  /*  Before proceeding, the shoulder and elbow angles are shifted by the offsets determined by the calibration. If the calibration has been */
  /*  performed correctly, this ensures that the angle of 0 corresponds to when the arm is aligned with the coronal plane. In the case of the  */
  /*  elbow angle for a KINARM EXO, an extra correction is performed (using a utility function, and according to the current calibration) to  */
  /*  account for small imperfections in the parallelogram of KINARM links caused by differences in the lengths of L3 and L5 (which are  */
  /*  theoretically equal). */
  /* '<S235>:1:103' */
  shoulder_angle = vmr_rwd_fix_leftarm_B.Primaryread[6] +
    vmr_rwd_fix_leftarm_B.Read[8];

  /*  If the robot is an Exoskeleton, use the correct_elbow_angle function to account for imperfections on the KINARM robot parallelogram structure */
  if (b) {
    /* '<S235>:1:96' */
    vmr_rwd_fix_leftarm_correct_elbow_angle(vmr_rwd_fix_leftarm_B.Primaryread[7]
      + vmr_rwd_fix_leftarm_B.Read[9], vmr_rwd_fix_leftarm_B.Primaryread[9],
      vmr_rwd_fix_leftarm_B.Primaryread[11], vmr_rwd_fix_leftarm_B.ReadHW[15],
      vmr_rwd_fix_leftarm_B.Read[12], vmr_rwd_fix_leftarm_B.ReadHW[14],
      vmr_rwd_fix_leftarm_B.Read[15], &feed_forward_duration, &elbow_velocity,
      &L2_velocity);

    /* '<S235>:1:108' */
    feed_forward_duration += vmr_rwd_fix_leftarm_B.Primaryread[7] +
      vmr_rwd_fix_leftarm_B.Read[9];

    /* '<S235>:1:109' */
    elbow_velocity += vmr_rwd_fix_leftarm_B.Primaryread[9];

    /* '<S235>:1:110' */
    elbow_acceleration = vmr_rwd_fix_leftarm_B.Primaryread[11] + L2_velocity;
  } else {
    /* '<S235>:1:112' */
    feed_forward_duration = vmr_rwd_fix_leftarm_B.Primaryread[7] +
      vmr_rwd_fix_leftarm_B.Read[9];
  }

  /* '<S235>:1:115' */
  /* '<S235>:1:116' */
  L2_angle = shoulder_angle + feed_forward_duration;

  /* '<S235>:1:118' */
  L1_velocity = vmr_rwd_fix_leftarm_B.Primaryread[8];

  /* '<S235>:1:119' */
  L2_velocity = vmr_rwd_fix_leftarm_B.Primaryread[8] + elbow_velocity;

  /* '<S235>:1:121' */
  elbow_velocity = vmr_rwd_fix_leftarm_B.Primaryread[10];

  /* '<S235>:1:122' */
  feed_forward_duration = vmr_rwd_fix_leftarm_B.Primaryread[10] +
    elbow_acceleration;

  /*  a robot_orientation < 0 means that the robot is left-handed from its perspective (i.e. if you look at the robot structure,  */
  /*  and pretend that it is a humanoid, the robot itself looks left-handed).  For an Exoskeleton robot, this is the */
  /*  robot that the left-hand of the subject grabs. For an EP robot, this is the robot that the subjec'ts right-hand grabs.   */
  if (vmr_rwd_fix_leftarm_B.ReadHW[17] < 0.0) {
    /* '<S235>:1:128' */
    /* '<S235>:1:129' */
    shoulder_angle = -shoulder_angle + 3.1415926535897931;

    /* '<S235>:1:130' */
    L2_angle = -L2_angle + 3.1415926535897931;

    /* '<S235>:1:132' */
    L1_velocity = -vmr_rwd_fix_leftarm_B.Primaryread[8];

    /* '<S235>:1:133' */
    L2_velocity = -L2_velocity;

    /* '<S235>:1:135' */
    elbow_velocity = -vmr_rwd_fix_leftarm_B.Primaryread[10];

    /* '<S235>:1:136' */
    feed_forward_duration = -feed_forward_duration;
  }

  /* '<S235>:1:139' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[1] = shoulder_angle;

  /* '<S235>:1:140' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[3] = L2_angle;

  /* '<S235>:1:142' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[5] = L1_velocity;

  /* '<S235>:1:143' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[7] = L2_velocity;

  /* '<S235>:1:145' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[9] = elbow_velocity;

  /* '<S235>:1:146' */
  vmr_rwd_fix_leftarm_B.primary_encoder_data_out[11] = feed_forward_duration;

  /* '<S235>:1:76' */
  for (i = 0; i < 8; i++) {
    /* DataStoreRead: '<S69>/Status read1' */
    vmr_rwd_fix_leftarm_B.Statusread1_e[i] =
      vmr_rwd_fix_leftarm_DW.ECATDigitalInput[i];

    /* DataStoreRead: '<S69>/torque feedback1' */
    vmr_rwd_fix_leftarm_B.torquefeedback1[i] =
      vmr_rwd_fix_leftarm_DW.ECATExtraData[i];
  }

  /* UnitDelay: '<S234>/Output' */
  vmr_rwd_fix_leftarm_B.Output_h = vmr_rwd_fix_leftarm_DW.Output_DSTATE_p;

  /* Sum: '<S239>/FixPt Sum1' incorporates:
   *  Constant: '<S239>/FixPt Constant'
   */
  vmr_rwd_fix_leftarm_B.FixPtSum1_o = vmr_rwd_fix_leftarm_B.Output_h +
    vmr_rwd_fix_leftarm_P.FixPtConstant_Value_n;

  /* Switch: '<S240>/FixPt Switch' incorporates:
   *  Constant: '<S240>/Constant'
   */
  if (vmr_rwd_fix_leftarm_B.FixPtSum1_o >
      vmr_rwd_fix_leftarm_P.WrapToZero_Threshold_o) {
    vmr_rwd_fix_leftarm_B.FixPtSwitch_h =
      vmr_rwd_fix_leftarm_P.Constant_Value_mf;
  } else {
    vmr_rwd_fix_leftarm_B.FixPtSwitch_h = vmr_rwd_fix_leftarm_B.FixPtSum1_o;
  }

  /* End of Switch: '<S240>/FixPt Switch' */

  /* DataStoreRead: '<S69>/ErrMsgs' */
  memcpy(&vmr_rwd_fix_leftarm_B.ErrMsgs[0], &vmr_rwd_fix_leftarm_DW.ECATErrMsgs
         [0], 20U * sizeof(real_T));

  /* MATLAB Function: '<S69>/record errors' incorporates:
   *  Constant: '<S69>/step time'
   */
  /* MATLAB Function 'DataLogging/Poll KINARM/createKINData/record errors': '<S238>:1' */
  if (!vmr_rwd_fix_leftarm_DW.lastECATMessages_not_empty) {
    /* '<S238>:1:5' */
    /* '<S238>:1:6' */
    memcpy(&vmr_rwd_fix_leftarm_DW.lastECATMessages[0],
           &vmr_rwd_fix_leftarm_B.ErrMsgs[0], 20U * sizeof(real_T));
    vmr_rwd_fix_leftarm_DW.lastECATMessages_not_empty = true;
  }

  /* '<S238>:1:13' */
  /* copy over the errors from ethercat drives */
  /* '<S238>:1:16' */
  if (!((vmr_rwd_fix_leftarm_DW.waitingMsgCount >= 50.0) ||
        (!(vmr_rwd_fix_leftarm_B.ErrMsgs[8] !=
           vmr_rwd_fix_leftarm_DW.lastECATMessages[8])) ||
        (!(vmr_rwd_fix_leftarm_B.ErrMsgs[8] != 0.0)))) {
    /* '<S238>:1:21' */
    /* '<S238>:1:22' */
    vmr_rwd_fix_leftarm_DW.waitingMsgCount++;

    /* '<S238>:1:23' */
    i = (int32_T)vmr_rwd_fix_leftarm_DW.waitingMsgCount - 1;
    vmr_rwd_fix_leftarm_DW.memoryBuffer[i] = vmr_rwd_fix_leftarm_B.Output_h;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[0]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[50 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[4]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[100 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[8]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[150 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[12]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[200 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[16]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[250 + i] = motorInt;
  } else {
    /* '<S238>:1:17' */
  }

  /* '<S238>:1:16' */
  if (!((vmr_rwd_fix_leftarm_DW.waitingMsgCount >= 50.0) ||
        (!(vmr_rwd_fix_leftarm_B.ErrMsgs[9] !=
           vmr_rwd_fix_leftarm_DW.lastECATMessages[9])) ||
        (!(vmr_rwd_fix_leftarm_B.ErrMsgs[9] != 0.0)))) {
    /* '<S238>:1:21' */
    /* '<S238>:1:22' */
    vmr_rwd_fix_leftarm_DW.waitingMsgCount++;

    /* '<S238>:1:23' */
    i = (int32_T)vmr_rwd_fix_leftarm_DW.waitingMsgCount - 1;
    vmr_rwd_fix_leftarm_DW.memoryBuffer[i] = vmr_rwd_fix_leftarm_B.Output_h;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[1]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[50 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[5]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[100 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[9]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[150 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[13]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[200 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[17]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[250 + i] = motorInt;
  } else {
    /* '<S238>:1:17' */
  }

  /* '<S238>:1:16' */
  if (!((vmr_rwd_fix_leftarm_DW.waitingMsgCount >= 50.0) ||
        (!(vmr_rwd_fix_leftarm_B.ErrMsgs[10] !=
           vmr_rwd_fix_leftarm_DW.lastECATMessages[10])) ||
        (!(vmr_rwd_fix_leftarm_B.ErrMsgs[10] != 0.0)))) {
    /* '<S238>:1:21' */
    /* '<S238>:1:22' */
    vmr_rwd_fix_leftarm_DW.waitingMsgCount++;

    /* '<S238>:1:23' */
    i = (int32_T)vmr_rwd_fix_leftarm_DW.waitingMsgCount - 1;
    vmr_rwd_fix_leftarm_DW.memoryBuffer[i] = vmr_rwd_fix_leftarm_B.Output_h;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[2]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[50 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[6]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[100 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[10]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[150 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[14]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[200 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[18]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[250 + i] = motorInt;
  } else {
    /* '<S238>:1:17' */
  }

  /* '<S238>:1:16' */
  if (!((vmr_rwd_fix_leftarm_DW.waitingMsgCount >= 50.0) ||
        (!(vmr_rwd_fix_leftarm_B.ErrMsgs[11] !=
           vmr_rwd_fix_leftarm_DW.lastECATMessages[11])) ||
        (!(vmr_rwd_fix_leftarm_B.ErrMsgs[11] != 0.0)))) {
    /* '<S238>:1:21' */
    /* '<S238>:1:22' */
    vmr_rwd_fix_leftarm_DW.waitingMsgCount++;

    /* '<S238>:1:23' */
    i = (int32_T)vmr_rwd_fix_leftarm_DW.waitingMsgCount - 1;
    vmr_rwd_fix_leftarm_DW.memoryBuffer[i] = vmr_rwd_fix_leftarm_B.Output_h;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[3]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[50 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[7]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[100 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[11]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[150 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[15]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[200 + i] = motorInt;
    feed_forward_duration = rt_roundd_snf(vmr_rwd_fix_leftarm_B.ErrMsgs[19]);
    if (feed_forward_duration < 4.294967296E+9) {
      if (feed_forward_duration >= 0.0) {
        motorInt = (uint32_T)feed_forward_duration;
      } else {
        motorInt = 0U;
      }
    } else {
      motorInt = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_DW.memoryBuffer[250 + i] = motorInt;
  } else {
    /* '<S238>:1:17' */
  }

  /* '<S238>:1:16' */
  /* '<S238>:1:27' */
  for (i = 0; i < 6; i++) {
    vmr_rwd_fix_leftarm_B.newMessage[i] = 0.0;
  }

  /* if we have an error to send we must send it for a few frames because we only send */
  /* some frames to the GUI computer. The only safe way to handle this is to count */
  /* the number of real-time frames vs the frequency we send to the GUI computer on. */
  /* I wanted to use the actual frame number we send to the GUI, but the trouble is */
  /* we don't know which of the kinematic frames gets sent to the GUI, it's just one */
  /* of the 2 or 4 that happens for each frame we send to the GUI.  */
  /* So instead here I cop out and just count 2 or 4 frames and then send something new. */
  if (vmr_rwd_fix_leftarm_DW.waitingMsgCount > 0.0) {
    /* '<S238>:1:35' */
    /* '<S238>:1:36' */
    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.newMessage[i] = vmr_rwd_fix_leftarm_DW.memoryBuffer
        [50 * i];
    }

    /* '<S238>:1:37' */
    vmr_rwd_fix_leftarm_DW.outCount++;

    /* we've sent the frame enough times... */
    if (vmr_rwd_fix_leftarm_DW.outCount >= 0.001 /
        vmr_rwd_fix_leftarm_P.steptime_Value) {
      /* '<S238>:1:40' */
      /* shift the list so the first row is the next thing to send. */
      /* '<S238>:1:42' */
      for (i = 0; i < 6; i++) {
        memcpy(&tmp_0[49 * i], &vmr_rwd_fix_leftarm_DW.memoryBuffer[50 * i + 1],
               49U * sizeof(real_T));
      }

      for (i = 0; i < 6; i++) {
        memcpy(&vmr_rwd_fix_leftarm_DW.memoryBuffer[50 * i], &tmp_0[49 * i], 49U
               * sizeof(real_T));
      }

      /* '<S238>:1:43' */
      vmr_rwd_fix_leftarm_DW.waitingMsgCount--;

      /* '<S238>:1:44' */
      vmr_rwd_fix_leftarm_DW.sentCount++;

      /* '<S238>:1:45' */
      vmr_rwd_fix_leftarm_DW.outCount = 0.0;

      /* if we still have another frame to send then copy it out.. */
      if (vmr_rwd_fix_leftarm_DW.waitingMsgCount > 0.0) {
        /* '<S238>:1:48' */
        /* '<S238>:1:49' */
        for (i = 0; i < 6; i++) {
          vmr_rwd_fix_leftarm_B.newMessage[i] =
            vmr_rwd_fix_leftarm_DW.memoryBuffer[50 * i];
        }

        /* '<S238>:1:50' */
        vmr_rwd_fix_leftarm_DW.outCount = 1.0;
      }
    }
  }

  /* '<S238>:1:55' */
  memcpy(&vmr_rwd_fix_leftarm_DW.lastECATMessages[0],
         &vmr_rwd_fix_leftarm_B.ErrMsgs[0], 20U * sizeof(real_T));

  /* '<S238>:1:56' */
  vmr_rwd_fix_leftarm_B.sentMessageCount = vmr_rwd_fix_leftarm_DW.sentCount;

  /* End of MATLAB Function: '<S69>/record errors' */

  /* DataTypeConversion: '<S69>/Data Type Conversion' */
  for (i = 0; i < 6; i++) {
    feed_forward_duration = floor(vmr_rwd_fix_leftarm_B.newMessage[i]);
    if (rtIsNaN(feed_forward_duration) || rtIsInf(feed_forward_duration)) {
      feed_forward_duration = 0.0;
    } else {
      feed_forward_duration = fmod(feed_forward_duration, 4.294967296E+9);
    }

    vmr_rwd_fix_leftarm_B.DataTypeConversion_nq[i] = feed_forward_duration < 0.0
      ? (uint32_T)-(int32_T)(uint32_T)-feed_forward_duration : (uint32_T)
      feed_forward_duration;
  }

  /* End of DataTypeConversion: '<S69>/Data Type Conversion' */

  /* DataStoreRead: '<S69>/Status read' */
  for (i = 0; i < 7; i++) {
    vmr_rwd_fix_leftarm_B.Statusread[i] = vmr_rwd_fix_leftarm_DW.SystemStatus[i];
  }

  /* End of DataStoreRead: '<S69>/Status read' */

  /* MATLAB Function: '<S69>/bitpack' */
  /* MATLAB Function 'DataLogging/Poll KINARM/createKINData/bitpack': '<S236>:1' */
  /* '<S236>:1:2' */
  vmr_rwd_fix_leftarm_B.statusInts[0] = 0U;
  vmr_rwd_fix_leftarm_B.statusInts[1] = vmr_rwd_fix_leftarm_B.Statusread[4];
  vmr_rwd_fix_leftarm_B.statusInts[2] = vmr_rwd_fix_leftarm_B.Statusread[5];
  vmr_rwd_fix_leftarm_B.statusInts[3] = vmr_rwd_fix_leftarm_B.Statusread[6];

  /*  STATUS_FUNCTIONING = uint32(0); */
  /*  STATUS_READY = uint32(1); */
  /*  STATUS_FAULTED = uint32(2); */
  /* '<S236>:1:8' */
  /* '<S236>:1:9' */
  /* '<S236>:1:10' */
  motorInt = vmr_rwd_fix_leftarm_B.Statusread[0];

  /* '<S236>:1:9' */
  /* '<S236>:1:10' */
  motorInt |= vmr_rwd_fix_leftarm_B.Statusread[1] << 2U;

  /* '<S236>:1:9' */
  /* '<S236>:1:10' */
  motorInt |= vmr_rwd_fix_leftarm_B.Statusread[2] << 4U;

  /* '<S236>:1:9' */
  /* '<S236>:1:10' */
  motorInt |= vmr_rwd_fix_leftarm_B.Statusread[3] << 6U;

  /* '<S236>:1:9' */
  /* '<S236>:1:12' */
  vmr_rwd_fix_leftarm_B.statusInts[0] = motorInt;

  /* Update for UnitDelay: '<S234>/Output' */
  vmr_rwd_fix_leftarm_DW.Output_DSTATE_p = vmr_rwd_fix_leftarm_B.FixPtSwitch_h;
  vmr_rwd_fix_leftarm_DW.createKINData_SubsysRanBC = 4;
}
