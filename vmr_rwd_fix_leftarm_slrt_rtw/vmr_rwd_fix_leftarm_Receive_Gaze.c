/*
 * Code generation for system system '<S2>/Receive_Gaze'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_Receive_Gaze.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Forward declaration for local functions */
static real_T vmr_rwd_fix_leftarm_norm(const real_T x[3]);

/* Function for MATLAB Function: '<S34>/Embedded MATLAB Function1' */
static real_T vmr_rwd_fix_leftarm_norm(const real_T x[3])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  scale = 2.2250738585072014E-308;
  absxk = fabs(x[0]);
  if (absxk > 2.2250738585072014E-308) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 2.2250738585072014E-308;
    y = t * t;
  }

  absxk = fabs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = fabs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrt(y);
}

/* Initial conditions for atomic system: '<S2>/Receive_Gaze' */
void vmr_rwd_fix_leftarm_Receive_Gaze_Init(void)
{
  /* InitializeConditions for MATLAB Function: '<S34>/Create timestamp' */
  vmr_rwd_fix_leftarm_DW.start_time = -1.0;
  vmr_rwd_fix_leftarm_DW.last_time = -1.0;

  /* InitializeConditions for MATLAB Function: '<S34>/convert to seconds2' */
  vmr_rwd_fix_leftarm_DW.last_timestamp = 0U;

  /* InitializeConditions for RateTransition: '<S34>/Rate Transition' */
  vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[0] =
    vmr_rwd_fix_leftarm_P.RateTransition_X0;
  vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[1] =
    vmr_rwd_fix_leftarm_P.RateTransition_X0;
  vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[2] =
    vmr_rwd_fix_leftarm_P.RateTransition_X0;
}

/* Start for atomic system: '<S2>/Receive_Gaze' */
void vmr_rwd_fix_leftarm_Receive_Gaze_Start(void)
{
  /* Start for RateTransition: '<S34>/Rate Transition' */
  vmr_rwd_fix_leftarm_B.RateTransition_kg[0] =
    vmr_rwd_fix_leftarm_P.RateTransition_X0;
  vmr_rwd_fix_leftarm_B.RateTransition_kg[1] =
    vmr_rwd_fix_leftarm_P.RateTransition_X0;
  vmr_rwd_fix_leftarm_B.RateTransition_kg[2] =
    vmr_rwd_fix_leftarm_P.RateTransition_X0;

  /* Level2 S-Function Block: '<S34>/Receive' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[34];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Outputs for atomic system: '<S2>/Receive_Gaze' */
void vmr_rwd_fix_leftarm_Receive_GazeTID0(void)
{
  real_T pupil_area_PIXELS;
  real_T focal_length;
  real_T target_distance;
  real_T R_CMRA2GLBL[9];
  real_T pupil_CAMERA[3];
  real_T R_HREF2CMRA[9];
  real_T rot_axis[3];
  real_T rot_angle;
  real_T sinA;
  static const real_T v2[3] = { 0.0, 0.0, 1.0 };

  static const int8_T a[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  real_T b[9];
  int32_T i;
  int32_T i_0;
  real_T tmp[9];
  real_T R_HREF2CMRA_0[3];
  real_T href_idx_0;
  real_T href_idx_1;
  real_T tmp_0;
  real_T raw_pupil_idx_0;
  real_T raw_pupil_idx_1;

  /* Level2 S-Function Block: '<S34>/S-Function' (eyelink_unpack) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[33];
    sfcnOutputs(rts, 1);
  }

  /* Reshape: '<S34>/Reshape' */
  vmr_rwd_fix_leftarm_B.Reshape_i[0] = vmr_rwd_fix_leftarm_B.pupilX[0];
  vmr_rwd_fix_leftarm_B.Reshape_i[1] = vmr_rwd_fix_leftarm_B.pupilX[1];
  vmr_rwd_fix_leftarm_B.Reshape_i[2] = vmr_rwd_fix_leftarm_B.pupilY[0];
  vmr_rwd_fix_leftarm_B.Reshape_i[3] = vmr_rwd_fix_leftarm_B.pupilY[1];
  vmr_rwd_fix_leftarm_B.Reshape_i[4] = vmr_rwd_fix_leftarm_B.HREFX[0];
  vmr_rwd_fix_leftarm_B.Reshape_i[5] = vmr_rwd_fix_leftarm_B.HREFX[1];
  vmr_rwd_fix_leftarm_B.Reshape_i[6] = vmr_rwd_fix_leftarm_B.HREFY[0];
  vmr_rwd_fix_leftarm_B.Reshape_i[7] = vmr_rwd_fix_leftarm_B.HREFY[1];

  /* Selector: '<S34>/Selector - Left Eye' */
  vmr_rwd_fix_leftarm_B.SelectorLeftEye[0] = vmr_rwd_fix_leftarm_B.Reshape_i[0];
  vmr_rwd_fix_leftarm_B.SelectorLeftEye[1] = vmr_rwd_fix_leftarm_B.Reshape_i[2];
  vmr_rwd_fix_leftarm_B.SelectorLeftEye[2] = vmr_rwd_fix_leftarm_B.Reshape_i[4];
  vmr_rwd_fix_leftarm_B.SelectorLeftEye[3] = vmr_rwd_fix_leftarm_B.Reshape_i[6];

  /* DataTypeConversion: '<S34>/Data Type Conversion3' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion3[0] =
    vmr_rwd_fix_leftarm_B.SelectorLeftEye[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion3[1] =
    vmr_rwd_fix_leftarm_B.SelectorLeftEye[1];
  vmr_rwd_fix_leftarm_B.DataTypeConversion3[2] =
    vmr_rwd_fix_leftarm_B.SelectorLeftEye[2];
  vmr_rwd_fix_leftarm_B.DataTypeConversion3[3] =
    vmr_rwd_fix_leftarm_B.SelectorLeftEye[3];

  /* DataTypeConversion: '<S34>/Data Type Conversion4' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion4 = vmr_rwd_fix_leftarm_B.pupilarea[0];

  /* DataTypeConversion: '<S34>/Data Type Conversion5' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion5 = vmr_rwd_fix_leftarm_B.hdata[2];

  /* MATLAB Function: '<S34>/Embedded MATLAB Function1' incorporates:
   *  Constant: '<S34>/EL Camera Angle'
   *  Constant: '<S34>/EL Camera Focal Length'
   *  Constant: '<S34>/EL Camera Position'
   *  Constant: '<S34>/EL Tracking Available'
   */
  pupil_area_PIXELS = vmr_rwd_fix_leftarm_B.DataTypeConversion4;
  focal_length = vmr_rwd_fix_leftarm_P.ELCameraFocalLength_Value;

  /* MATLAB Function 'DataLogging/Receive_Gaze/Embedded MATLAB Function1': '<S247>:1' */
  /*  The following are some details on the Eyelink camera */
  /* target distance is reported by Eyelink in 1/10 of mm units */
  /* there are 200 pixels/mm on the Eyelink 1000 camera sensor */
  /* '<S247>:1:7' */
  raw_pupil_idx_0 = vmr_rwd_fix_leftarm_B.DataTypeConversion3[0];
  raw_pupil_idx_1 = vmr_rwd_fix_leftarm_B.DataTypeConversion3[1];

  /* '<S247>:1:8' */
  href_idx_0 = vmr_rwd_fix_leftarm_B.DataTypeConversion3[2];
  href_idx_1 = vmr_rwd_fix_leftarm_B.DataTypeConversion3[3];

  /* '<S247>:1:9' */
  target_distance = vmr_rwd_fix_leftarm_B.DataTypeConversion5 / 10000.0;

  /*  distance of the target from the camera (m) */
  /* if there is a blink or other problem then send out errors. C3D file does not like NaN, so we output -100. */
  if ((vmr_rwd_fix_leftarm_B.statusflags == 4) ||
      (vmr_rwd_fix_leftarm_P.ELTrackingAvailable_Value == 0.0) || ((href_idx_0 ==
        0.0) && (href_idx_1 == 0.0)) || ((raw_pupil_idx_0 == -32768.0) &&
       (raw_pupil_idx_1 == -32768.0))) {
    /* '<S247>:1:12' */
    /* '<S247>:1:13' */
    vmr_rwd_fix_leftarm_B.gazeXYCalculated[0] = -100.0;
    vmr_rwd_fix_leftarm_B.gazeXYCalculated[1] = -100.0;

    /* '<S247>:1:14' */
    rot_angle = -100.0;

    /* '<S247>:1:15' */
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0] = -100.0;
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[1] = -100.0;
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[2] = -100.0;

    /* '<S247>:1:16' */
    vmr_rwd_fix_leftarm_B.pupil_GLOBAL[0] = -100.0;
    vmr_rwd_fix_leftarm_B.pupil_GLOBAL[1] = -100.0;
    vmr_rwd_fix_leftarm_B.pupil_GLOBAL[2] = -100.0;
  } else {
    /*  This function creates the three rotation matrices for rotations about the */
    /*  x, y and z axes.  Input rotations are in degrees. */
    /* '<S247>:1:131' */
    rot_angle = vmr_rwd_fix_leftarm_P.ELCameraAngle_Value[0] / 180.0 *
      3.1415926535897931;

    /* convert to radians */
    /* '<S247>:1:132' */
    sinA = vmr_rwd_fix_leftarm_P.ELCameraAngle_Value[1] / 180.0 *
      3.1415926535897931;

    /* convert to radians */
    /* '<S247>:1:133' */
    /* convert to radians */
    /* '<S247>:1:134' */
    /* '<S247>:1:135' */
    /* '<S247>:1:136' */
    /* '<S247>:1:21' */
    b[0] = 1.0;
    b[3] = 0.0;
    b[6] = 0.0;
    b[1] = 0.0;
    b[4] = cos(rot_angle);
    b[7] = -sin(rot_angle);
    b[2] = 0.0;
    b[5] = sin(rot_angle);
    b[8] = cos(rot_angle);
    R_HREF2CMRA[0] = cos(sinA);
    R_HREF2CMRA[3] = 0.0;
    R_HREF2CMRA[6] = sin(sinA);
    R_HREF2CMRA[1] = 0.0;
    R_HREF2CMRA[4] = 1.0;
    R_HREF2CMRA[7] = 0.0;
    R_HREF2CMRA[2] = -sin(sinA);
    R_HREF2CMRA[5] = 0.0;
    R_HREF2CMRA[8] = cos(sinA);
    for (i = 0; i < 3; i++) {
      for (i_0 = 0; i_0 < 3; i_0++) {
        R_CMRA2GLBL[i + 3 * i_0] = 0.0;
        R_CMRA2GLBL[i + 3 * i_0] += R_HREF2CMRA[3 * i_0] * b[i];
        R_CMRA2GLBL[i + 3 * i_0] += R_HREF2CMRA[3 * i_0 + 1] * b[i + 3];
        R_CMRA2GLBL[i + 3 * i_0] += R_HREF2CMRA[3 * i_0 + 2] * b[i + 6];
      }
    }

    /* R_GLBL2CMRA = R_CMRA2GLBL'; */
    /* camera_GLOBAL_Trans = camera_GLOBAL'; */
    /* '<S247>:1:25' */
    /*          Returns the projection of the pupil on the camera sensor in meters, based on inputs in some raw unit (not pixels) */
    /*  the following constants are from Jiye, email Nov 7, 2011 */
    /* pixels dropped at left of sensor */
    /* lines dropped at top of sensor */
    /* no idea what this is.  Maybe number of pixels??? */
    /*  from Jiye. Not sure excatly what they are (probably camera center in pixels) */
    /* '<S247>:1:101' */
    /* '<S247>:1:102' */
    /* '<S247>:1:105' */
    /* hmmm almost same as const_x, which is 1232 */
    /* hmmm almost same as const_y, which is 924 */
    /* '<S247>:1:113' */
    /* '<S247>:1:116' */
    /*  calculate the pupil in camera sensor coordinates (pixels) */
    /* '<S247>:1:119' */
    /* '<S247>:1:120' */
    /* '<S247>:1:122' */
    /* '<S247>:1:123' */
    /* '<S247>:1:125' */
    /*  % % % For testing */
    /*  % % gaze_camera_angle  = acos(cos_gaze_camera_angle) * 180/pi(); */
    /*  % % HREF_angle = atan2( norm(href), 15000) * 180 / pi(); */
    /*  % % testing = [pupil_area_SENSOR*1e6, pupil_area_GLOBAL_projection*1e6, pupil_area_GLOBAL*1e6, gaze_camera_angle, HREF_angle, cos_gaze_camera_angle]; */
    /*  % % testing2 = [sensor_unit_vector_GLOBAL; gaze_unit_vector_GLOBAL]; */
    /* % Functions */
    /*  This function estimates GAZE based on data from the Eyelink.  To be used */
    /*  during 'running' of a task.  */
    /*  Convert pupil location from Eyelink sensor frame to camera reference */
    /*  frame with camera at origin and rotated to camera's angle (W-axis along */
    /*  camera's point of view)   */
    /* '<S247>:1:68' */
    tmp_0 = -((648.0 - (raw_pupil_idx_0 - -40760.869565217392) /
               65.217391304347814) / 200.0) / 1000.0;
    raw_pupil_idx_0 = (510.0 - (raw_pupil_idx_1 - -41810.34482758621) /
                       86.206896551724142) / 200.0 / 1000.0;
    pupil_CAMERA[0] = tmp_0 * target_distance /
      vmr_rwd_fix_leftarm_P.ELCameraFocalLength_Value;
    pupil_CAMERA[1] = raw_pupil_idx_0 * target_distance /
      vmr_rwd_fix_leftarm_P.ELCameraFocalLength_Value;
    pupil_CAMERA[2] = target_distance;

    /* '<S247>:1:69' */
    raw_pupil_idx_1 = vmr_rwd_fix_leftarm_norm(pupil_CAMERA);

    /*  Rotation matrix to convert from HREF coordinates to camera coordinates. */
    /*  HREF z-axis is defined as ray from camera to pupil. */
    /* '<S247>:1:73' */
    /*  This function calculates a rotation matrix, given two vectors, such that */
    /*  the rotation matrix will rotate from v1 to v2. */
    /* '<S247>:1:143' */
    rot_axis[0] = 0.0 * pupil_CAMERA[2] - pupil_CAMERA[1];
    rot_axis[1] = pupil_CAMERA[0] - 0.0 * pupil_CAMERA[2];
    rot_axis[2] = 0.0 * pupil_CAMERA[1] - 0.0 * pupil_CAMERA[0];

    /* axis that is perpendicular to the two vectors */
    /*  If either of the vectors v1 or v2 is = [0 0 0], or if they are parallel */
    /*  (i.e. norm(rot_axis) == 0), then there is no rotation.  But math errors */
    /*  will occur, so we need to check for these cases.    */
    if ((vmr_rwd_fix_leftarm_norm(pupil_CAMERA) == 0.0) ||
        (vmr_rwd_fix_leftarm_norm(v2) == 0.0) || (vmr_rwd_fix_leftarm_norm
         (rot_axis) == 0.0)) {
      /* '<S247>:1:148' */
      /* '<S247>:1:149' */
      for (i = 0; i < 9; i++) {
        R_HREF2CMRA[i] = 0.0;
      }

      R_HREF2CMRA[0] = 1.0;
      R_HREF2CMRA[4] = 1.0;
      R_HREF2CMRA[8] = 1.0;

      /* identity matrix results in no rotation */
    } else {
      /* '<S247>:1:151' */
      rot_angle = vmr_rwd_fix_leftarm_norm(rot_axis);
      sinA = vmr_rwd_fix_leftarm_norm(pupil_CAMERA);
      raw_pupil_idx_0 = vmr_rwd_fix_leftarm_norm(v2);
      rot_angle = asin(rot_angle / sinA / raw_pupil_idx_0);

      /* angle of rotation about rot_axis */
      /* '<S247>:1:152' */
      sinA = vmr_rwd_fix_leftarm_norm(rot_axis);
      tmp_0 = rot_axis[0];
      tmp_0 /= sinA;
      rot_axis[0] = tmp_0;
      tmp_0 = rot_axis[1];
      tmp_0 /= sinA;
      rot_axis[1] = tmp_0;
      tmp_0 = rot_axis[2];
      tmp_0 /= sinA;
      rot_axis[2] = tmp_0;

      /* normalize to get a unit vector for the rotation */
      /* '<S247>:1:153' */
      /* def'n of cross product matrix */
      /* '<S247>:1:154' */
      raw_pupil_idx_0 = cos(rot_angle);

      /* '<S247>:1:155' */
      sinA = sin(rot_angle);

      /* '<S247>:1:156' */
      tmp[0] = 0.0;
      tmp[3] = -rot_axis[2];
      tmp[6] = rot_axis[1];
      tmp[1] = rot_axis[2];
      tmp[4] = 0.0;
      tmp[7] = -rot_axis[0];
      tmp[2] = -rot_axis[1];
      tmp[5] = rot_axis[0];
      tmp[8] = 0.0;
      tmp_0 = 1.0 - raw_pupil_idx_0;
      for (i = 0; i < 3; i++) {
        b[i] = rot_axis[i] * rot_axis[0];
        b[i + 3] = rot_axis[i] * rot_axis[1];
        b[i + 6] = rot_axis[i] * rot_axis[2];
      }

      for (i = 0; i < 3; i++) {
        R_HREF2CMRA[3 * i] = ((real_T)a[3 * i] * raw_pupil_idx_0 + tmp[3 * i] *
                              sinA) + b[3 * i] * tmp_0;
        R_HREF2CMRA[1 + 3 * i] = ((real_T)a[3 * i + 1] * raw_pupil_idx_0 + tmp[3
          * i + 1] * sinA) + b[3 * i + 1] * tmp_0;
        R_HREF2CMRA[2 + 3 * i] = ((real_T)a[3 * i + 2] * raw_pupil_idx_0 + tmp[3
          * i + 2] * sinA) + b[3 * i + 2] * tmp_0;
      }

      /*  	display(rot_angle); */
    }

    /*  Convert the HREF from HREF coordinates to canera coordinates.  Scale, */
    /*  then rotate.  */
    /* '<S247>:1:77' */
    /*  Then convert pupil and HREF locations from camera frame to global frame */
    /*  by rotating and then shifting origins.  */
    /* '<S247>:1:81' */
    for (i = 0; i < 3; i++) {
      tmp_0 = R_CMRA2GLBL[i] * pupil_CAMERA[0];
      tmp_0 += R_CMRA2GLBL[i + 3] * pupil_CAMERA[1];
      tmp_0 += R_CMRA2GLBL[i + 6] * pupil_CAMERA[2];
      vmr_rwd_fix_leftarm_B.pupil_GLOBAL[i] = tmp_0 +
        vmr_rwd_fix_leftarm_P.ELCameraPosition_Value[i];
    }

    /* '<S247>:1:82' */
    /*  Find intersection of gaze_ray (from pupil to HREF) with the subject_display plane */
    /*  In the KINARM VR setup, the Z-axis is defined as normal to the subject display */
    /*  In the KINARM VR setup, the origin is defined as on the subject display plane */
    /*  display([pupil_GLOBAL HREF_GLOBAL]) */
    /* '<S247>:1:89' */
    /* plane_line_intersect computes the intersection of a plane and a segment(or */
    /* a straight line) */
    /*  Inputs:  */
    /*        n: normal vector of the Plane  */
    /*        V0: any point that belongs to the Plane  */
    /*        P0: end point 1 of the segment P0P1 */
    /*        P1:  end point 2 of the segment P0P1 */
    /*  */
    /* Outputs: */
    /*       I    is the point of interection  */
    /*      Check is (DELETED AND NOT USED HERE) an indicator: */
    /*       0 => disjoint (no intersection) */
    /*       1 => the plane intersects P0P1 in the unique point I */
    /*       2 => the segment lies in the plane */
    /*       3=>the intersection lies outside the segment P0P1 */
    /*  */
    /*  Example: */
    /*  Determine the intersection of following the plane x+y+z+3=0 with the segment P0P1: */
    /*  The plane is represented by the normal vector n=[1 1 1] */
    /*  and an arbitrary point that lies on the plane, ex: V0=[1 1 -5] */
    /*  The segment is represented by the following two points */
    /*  P0=[-5 1 -1] */
    /* P1=[1 2 3]    */
    /*  [I,check]=plane_line_intersect([1 1 1],[1 1 -5],[-5 1 -1],[1 2 3]); */
    /* This function is written by : */
    /*                              Nassim Khaled */
    /*                              Wayne State University */
    /*                              Research Assistant and Phd candidate */
    /* If you have any comments or face any problems, please feel free to leave */
    /* your comments and i will try to reply to you as fast as possible. */
    /* '<S247>:1:194' */
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0] = 0.0;
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[1] = 0.0;
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[2] = 0.0;

    /* '<S247>:1:195' */
    href_idx_0 = href_idx_0 * raw_pupil_idx_1 / 15000.0;
    href_idx_1 = href_idx_1 * raw_pupil_idx_1 / 15000.0;
    raw_pupil_idx_0 = 0.0 * raw_pupil_idx_1 / 15000.0;
    for (i = 0; i < 3; i++) {
      tmp_0 = R_HREF2CMRA[i] * href_idx_0;
      tmp_0 += R_HREF2CMRA[i + 3] * href_idx_1;
      tmp_0 += R_HREF2CMRA[i + 6] * raw_pupil_idx_0;
      R_HREF2CMRA_0[i] = tmp_0;
    }

    for (i = 0; i < 3; i++) {
      tmp_0 = R_CMRA2GLBL[i] * R_HREF2CMRA_0[0];
      tmp_0 += R_CMRA2GLBL[i + 3] * R_HREF2CMRA_0[1];
      tmp_0 += R_CMRA2GLBL[i + 6] * R_HREF2CMRA_0[2];
      pupil_CAMERA[i] = (tmp_0 + vmr_rwd_fix_leftarm_P.ELCameraPosition_Value[i])
        - vmr_rwd_fix_leftarm_B.pupil_GLOBAL[i];
    }

    /* '<S247>:1:196' */
    rot_axis[0] = vmr_rwd_fix_leftarm_B.pupil_GLOBAL[0];
    rot_axis[1] = vmr_rwd_fix_leftarm_B.pupil_GLOBAL[1];
    rot_axis[2] = vmr_rwd_fix_leftarm_B.pupil_GLOBAL[2];

    /* '<S247>:1:197' */
    rot_angle = 0.0 * pupil_CAMERA[0];
    rot_angle += 0.0 * pupil_CAMERA[1];
    rot_angle += pupil_CAMERA[2];

    /* '<S247>:1:198' */
    sinA = 0.0 * rot_axis[0];
    sinA += 0.0 * rot_axis[1];
    sinA += rot_axis[2];
    if (!(fabs(rot_angle) < 1.0E-7)) {
      /* compute the intersection parameter */
      /* '<S247>:1:211' */
      rot_angle = -sinA / rot_angle;

      /* '<S247>:1:212' */
      vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0] = rot_angle *
        pupil_CAMERA[0] + vmr_rwd_fix_leftarm_B.pupil_GLOBAL[0];
      vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[1] = rot_angle *
        pupil_CAMERA[1] + vmr_rwd_fix_leftarm_B.pupil_GLOBAL[1];
      vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[2] = rot_angle *
        pupil_CAMERA[2] + vmr_rwd_fix_leftarm_B.pupil_GLOBAL[2];
    } else {
      /* '<S247>:1:200' */
      /*  The segment is parallel to plane */
    }

    /* '<S247>:1:26' */
    /* '<S247>:1:27' */
    vmr_rwd_fix_leftarm_B.gazeXYCalculated[0] =
      vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0];
    vmr_rwd_fix_leftarm_B.gazeXYCalculated[1] =
      vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[1];

    /* %convert the pupil area from pixels on the sensor, to m^2, correcting for camera and gaze angle */
    /*  pupil area on the camera sensor, in m^2 */
    /* '<S247>:1:31' */
    /*  pupil area in the global workspace, projected onto a plane parallel to the camera sensor in m^2 */
    /* '<S247>:1:34' */
    sinA = target_distance / focal_length;

    /*  create a unit vector that is normal to the camera sensor, in GLOBAL coordinates */
    /* '<S247>:1:37' */
    for (i = 0; i < 3; i++) {
      tmp_0 = R_CMRA2GLBL[i] * 0.0;
      tmp_0 += R_CMRA2GLBL[i + 3] * 0.0;
      tmp_0 += R_CMRA2GLBL[i + 6];
      rot_axis[i] = tmp_0;
    }

    /*  create a unit vector for the subject's gaze */
    /* '<S247>:1:40' */
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0] =
      vmr_rwd_fix_leftarm_B.pupil_GLOBAL[0] -
      vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0];
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[1] =
      vmr_rwd_fix_leftarm_B.pupil_GLOBAL[1] -
      vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[1];
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[2] =
      vmr_rwd_fix_leftarm_B.pupil_GLOBAL[2] -
      vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[2];

    /* '<S247>:1:41' */
    rot_angle = vmr_rwd_fix_leftarm_norm
      (vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL);
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0] /= rot_angle;
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[1] /= rot_angle;
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[2] /= rot_angle;

    /*  calculate the cosine of the angle between the unit vectors for gaze and the camera sensor */
    /* '<S247>:1:44' */
    rot_angle = rot_axis[0] * vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0];
    rot_angle += rot_axis[1] * vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[1];
    rot_angle += rot_axis[2] * vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[2];

    /*  correct the pupil area to account for the angle of the eye relative to the camera sensor plane */
    /*  We assume that the pupil is circular. In the plane formed by the two vectors, the distance needs  */
    /*  to be scaled by cos(theta). In the perpendicular plane, there is no scaling. Hence we do NOT  */
    /*  square the cos(theta) and the area is only corrected for by 1 / cos(theta).  */
    /* '<S247>:1:50' */
    rot_angle = pupil_area_PIXELS / 4.0E+10 * (sinA * sinA) / rot_angle;
  }

  vmr_rwd_fix_leftarm_B.pupil_area_GLOBAL = rot_angle;

  /* End of MATLAB Function: '<S34>/Embedded MATLAB Function1' */

  /* DataTypeConversion: '<S34>/Convert1' */
  vmr_rwd_fix_leftarm_B.Convert1_p = vmr_rwd_fix_leftarm_B.pupil_area_GLOBAL;

  /* DataTypeConversion: '<S34>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_i =
    vmr_rwd_fix_leftarm_B.SFunction_o1_n;

  /* MATLAB Function: '<S34>/Create timestamp' */
  /* MATLAB Function 'DataLogging/Receive_Gaze/Create timestamp': '<S246>:1' */
  if ((vmr_rwd_fix_leftarm_DW.start_time == -1.0) &&
      (vmr_rwd_fix_leftarm_B.DataTypeConversion_i != 0.0)) {
    /* '<S246>:1:14' */
    /* '<S246>:1:15' */
    vmr_rwd_fix_leftarm_DW.start_time =
      vmr_rwd_fix_leftarm_B.DataTypeConversion_i;
  }

  /* if the clock has flipped over then in order to get the time */
  /* right this will add the time before the flip to the current time. */
  if (vmr_rwd_fix_leftarm_B.DataTypeConversion_i <
      vmr_rwd_fix_leftarm_DW.start_time) {
    /* '<S246>:1:20' */
    /* '<S246>:1:21' */
    vmr_rwd_fix_leftarm_DW.start_time = -(vmr_rwd_fix_leftarm_DW.last_time -
      vmr_rwd_fix_leftarm_DW.start_time);
  }

  /* '<S246>:1:24' */
  vmr_rwd_fix_leftarm_B.timestamp_out =
    (vmr_rwd_fix_leftarm_B.DataTypeConversion_i -
     vmr_rwd_fix_leftarm_DW.start_time) / 1000.0;

  /* '<S246>:1:25' */
  vmr_rwd_fix_leftarm_DW.last_time = vmr_rwd_fix_leftarm_B.DataTypeConversion_i;

  /* '<S246>:1:26' */
  vmr_rwd_fix_leftarm_B.start_time_out = vmr_rwd_fix_leftarm_DW.start_time;

  /* End of MATLAB Function: '<S34>/Create timestamp' */

  /* DataTypeConversion: '<S34>/Convert19' */
  vmr_rwd_fix_leftarm_B.Convert19[0] = vmr_rwd_fix_leftarm_B.gazeXYCalculated[0];
  vmr_rwd_fix_leftarm_B.Convert19[1] = vmr_rwd_fix_leftarm_B.gazeXYCalculated[1];
  vmr_rwd_fix_leftarm_B.Convert19[2] = vmr_rwd_fix_leftarm_B.timestamp_out;

  /* DataTypeConversion: '<S34>/Data Type Conversion1' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_l[0] =
    vmr_rwd_fix_leftarm_B.SFunction_o18[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_l[1] =
    vmr_rwd_fix_leftarm_B.SFunction_o18[1];
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_l[2] =
    vmr_rwd_fix_leftarm_B.SFunction_o18[2];

  /* RateTransition: '<S34>/TmpRTBAtconvert to seconds2Inport1' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[0] =
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_l[0];
    vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[1] =
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_l[1];
    vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[2] =
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_l[2];

    /* RateTransition: '<S34>/TmpRTBAtconvert to seconds2Inport2' */
    vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport2 =
      vmr_rwd_fix_leftarm_B.start_time_out;

    /* RateTransition: '<S34>/TmpRTBAtconvert to seconds2Inport3' */
    vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport3 =
      vmr_rwd_fix_leftarm_B.SFunction_o1_n;
  }

  /* End of RateTransition: '<S34>/TmpRTBAtconvert to seconds2Inport1' */

  /* DataTypeConversion: '<S34>/Convert3' incorporates:
   *  Constant: '<S34>/EL Tracking Available'
   */
  vmr_rwd_fix_leftarm_B.Convert3 =
    vmr_rwd_fix_leftarm_P.ELTrackingAvailable_Value;

  /* Gain: '<S34>/Gain' */
  vmr_rwd_fix_leftarm_B.Gain_b[0] = vmr_rwd_fix_leftarm_P.Gain_Gain *
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0];
  vmr_rwd_fix_leftarm_B.Gain_b[1] = vmr_rwd_fix_leftarm_P.Gain_Gain *
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[1];
  vmr_rwd_fix_leftarm_B.Gain_b[2] = vmr_rwd_fix_leftarm_P.Gain_Gain *
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[2];

  /* DataTypeConversion: '<S34>/Convert4' */
  vmr_rwd_fix_leftarm_B.Convert4[0] = vmr_rwd_fix_leftarm_B.Gain_b[0];
  vmr_rwd_fix_leftarm_B.Convert4[1] = vmr_rwd_fix_leftarm_B.Gain_b[1];
  vmr_rwd_fix_leftarm_B.Convert4[2] = vmr_rwd_fix_leftarm_B.Gain_b[2];

  /* RateTransition: '<S34>/Rate Transition' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition_kg[0] =
      vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[0];
    vmr_rwd_fix_leftarm_B.RateTransition_kg[1] =
      vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[1];
    vmr_rwd_fix_leftarm_B.RateTransition_kg[2] =
      vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[2];
  }

  /* End of RateTransition: '<S34>/Rate Transition' */

  /* Level2 S-Function Block: '<S34>/Receive' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[34];
    sfcnOutputs(rts, 1);
  }

  /* DataTypeConversion: '<S34>/convert' */
  tmp_0 = floor(vmr_rwd_fix_leftarm_B.Receive_o2_j);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.convert_bp = tmp_0 < 0.0 ? -(int32_T)(uint32_T)-tmp_0 :
    (int32_T)(uint32_T)tmp_0;

  /* End of DataTypeConversion: '<S34>/convert' */

  /* MATLAB Function: '<S34>/clean_packet' */
  /* MATLAB Function 'DataLogging/Receive_Gaze/clean_packet': '<S248>:1' */
  /* for some reason, during calibration we can get very large packets that  */
  /* blow up the c code for parsing the packets. If we get a large packet */
  /* we can ignore it. */
  if (vmr_rwd_fix_leftarm_B.convert_bp < 512) {
    /* '<S248>:1:7' */
    /* '<S248>:1:8' */
    memcpy(&vmr_rwd_fix_leftarm_B.pack_out[0],
           &vmr_rwd_fix_leftarm_B.Receive_o1_i[0], sizeof(uint8_T) << 9U);

    /* '<S248>:1:9' */
    vmr_rwd_fix_leftarm_B.len_out = vmr_rwd_fix_leftarm_B.convert_bp;
  } else {
    /* '<S248>:1:11' */
    memset(&vmr_rwd_fix_leftarm_B.pack_out[0], 0, sizeof(uint8_T) << 9U);

    /* '<S248>:1:12' */
    vmr_rwd_fix_leftarm_B.len_out = 0;
  }

  /* End of MATLAB Function: '<S34>/clean_packet' */
}

/* Outputs for atomic system: '<S2>/Receive_Gaze' */
void vmr_rwd_fix_leftarm_Receive_GazeTID3(void)
{
  /* MATLAB Function: '<S34>/convert to seconds2' */
  /* MATLAB Function 'DataLogging/Receive_Gaze/convert to seconds2': '<S249>:1' */
  /* DEX-3313 if eyelink has stopped sending us data then we should not flood */
  /* Dex with events. */
  if (vmr_rwd_fix_leftarm_DW.last_timestamp ==
      vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport3) {
    /* '<S249>:1:11' */
    /* '<S249>:1:12' */
    vmr_rwd_fix_leftarm_B.event_data_out[0] = 0.0;
    vmr_rwd_fix_leftarm_B.event_data_out[1] = 0.0;
    vmr_rwd_fix_leftarm_B.event_data_out[2] = 0.0;
  } else {
    /* '<S249>:1:16' */
    vmr_rwd_fix_leftarm_DW.last_timestamp =
      vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport3;

    /* '<S249>:1:17' */
    vmr_rwd_fix_leftarm_B.event_data_out[0] =
      vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[0];
    vmr_rwd_fix_leftarm_B.event_data_out[1] =
      vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[1];
    vmr_rwd_fix_leftarm_B.event_data_out[2] =
      vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[2];
    if (vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[0] != 0.0) {
      /* '<S249>:1:19' */
      /* '<S249>:1:20' */
      vmr_rwd_fix_leftarm_B.event_data_out[1] =
        (vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[1] -
         vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport2) / 1000.0;

      /* '<S249>:1:21' */
      vmr_rwd_fix_leftarm_B.event_data_out[2] =
        (vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[2] -
         vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport2) / 1000.0;
    }
  }

  /* End of MATLAB Function: '<S34>/convert to seconds2' */

  /* DataTypeConversion: '<S34>/Convert2' */
  vmr_rwd_fix_leftarm_B.Convert2[0] = vmr_rwd_fix_leftarm_B.event_data_out[0];
  vmr_rwd_fix_leftarm_B.Convert2[1] = vmr_rwd_fix_leftarm_B.event_data_out[1];
  vmr_rwd_fix_leftarm_B.Convert2[2] = vmr_rwd_fix_leftarm_B.event_data_out[2];
}

/* Update for atomic system: '<S2>/Receive_Gaze' */
void vmr_rwd_fix_leftarm_Receive_Gaze_UpdateTID3(void)
{
  /* Update for RateTransition: '<S34>/Rate Transition' */
  vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[0] =
    vmr_rwd_fix_leftarm_B.Convert2[0];
  vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[1] =
    vmr_rwd_fix_leftarm_B.Convert2[1];
  vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[2] =
    vmr_rwd_fix_leftarm_B.Convert2[2];
}

/* Termination for atomic system: '<S2>/Receive_Gaze' */
void vmr_rwd_fix_leftarm_Receive_Gaze_Term(void)
{
  /* Level2 S-Function Block: '<S34>/S-Function' (eyelink_unpack) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[33];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S34>/Receive' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[34];
    sfcnTerminate(rts);
  }
}
