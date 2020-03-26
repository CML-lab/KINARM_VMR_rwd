/*
 * vmr_rwd_fix_leftarm_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "vmr_rwd_fix_leftarm".
 *
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "vmr_rwd_fix_leftarm.h"
#include "rtw_capi.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 208, "Trial_Control/p1",
    "logging_enable", 0, 0, 0, 0, 0 },

  { 1, 208, "Trial_Control/p2",
    "event_code", 1, 1, 0, 0, 0 },

  { 2, 208, "Trial_Control/p3",
    "targetA_row", 2, 1, 0, 0, 0 },

  { 3, 208, "Trial_Control/p4",
    "targetA_state", 3, 1, 0, 0, 0 },

  { 4, 208, "Trial_Control/p5",
    "targetB_row", 4, 1, 0, 0, 0 },

  { 5, 208, "Trial_Control/p6",
    "targetB_state", 5, 1, 0, 0, 0 },

  { 6, 208, "Trial_Control/p7",
    "reward_state", 6, 1, 0, 0, 0 },

  { 7, 208, "Trial_Control/p8",
    "score", 7, 2, 0, 0, 0 },

  { 8, 208, "Trial_Control/p9",
    "reward", 8, 2, 0, 0, 0 },

  { 9, 208, "Trial_Control/p10",
    "fdbk_text", 9, 2, 0, 0, 0 },

  { 10, 208, "Trial_Control/p11",
    "instruct_num", 10, 1, 0, 0, 0 },

  { 11, 208, "Trial_Control/p12",
    "tone", 11, 1, 0, 0, 0 },

  { 12, 208, "Trial_Control/p13",
    "rotation_on", 12, 1, 0, 0, 0 },

  { 13, 208, "Trial_Control/p14",
    "handvis_state", 13, 1, 0, 0, 0 },

  { 14, 208, "Trial_Control/p15",
    "do_clamp", 14, 1, 0, 0, 0 },

  { 15, 208, "Trial_Control/p16",
    "robot_enable_controller", 15, 0, 0, 0, 0 },

  { 16, 208, "Trial_Control/p17",
    "e_ApplyNewRotation", 16, 0, 0, 0, 0 },

  { 17, 208, "Trial_Control/p18",
    "e_Trial_End", 17, 0, 0, 0, 0 },

  { 18, 0, "Matrix Concatenation",
    "", 0, 1, 1, 0, 1 },

  { 19, 0, "Vector Concatenate",
    "", 0, 1, 2, 0, 1 },

  { 20, 0, "Vector Concatenate1",
    "", 0, 1, 3, 0, 1 },

  { 21, 0, "Constant",
    "", 0, 1, 0, 0, 1 },

  { 22, 0, "Data Type Conversion",
    "", 0, 1, 2, 0, 1 },

  { 23, 0, "Memory",
    "", 0, 1, 4, 0, 1 },

  { 24, 0, "Memory1",
    "", 0, 1, 0, 0, 1 },

  { 25, 0, "Reshape",
    "", 0, 1, 5, 0, 1 },

  { 26, 0, "Selector2",
    "", 0, 1, 6, 0, 1 },

  { 27, 0, "Compare To Constant/Compare",
    "", 0, 0, 0, 0, 1 },

  { 28, 0, "DataLogging/read Digital diag",
    "", 0, 3, 5, 0, 1 },

  { 29, 0, "DataLogging/read status",
    "", 0, 1, 7, 0, 1 },

  { 30, 0, "DataLogging/Memory",
    "", 0, 1, 5, 0, 1 },

  { 31, 0, "DataLogging/Memory1",
    "", 0, 1, 0, 0, 1 },

  { 32, 0, "DataLogging/Rate Transition",
    "", 0, 1, 8, 0, 2 },

  { 33, 0, "DataLogging/Rate Transition1",
    "", 0, 1, 9, 0, 2 },

  { 34, 0, "DataLogging/Rate Transition2",
    "", 0, 1, 3, 0, 2 },

  { 35, 0, "DataLogging/AddTorques",
    "", 0, 1, 5, 0, 1 },

  { 36, 0, "DisplayInstruct/Abs",
    "", 0, 1, 0, 0, 1 },

  { 37, 0, "DisplayInstruct/Sign",
    "", 0, 1, 0, 0, 1 },

  { 38, 0, "DisplayInstruct/Add",
    "", 0, 1, 0, 0, 1 },

  { 39, 162, "DisplayText/MATLAB Function",
    "VCODE_mod", 0, 1, 6, 0, 1 },

  { 40, 0, "DisplayText/Abs",
    "", 0, 2, 0, 0, 1 },

  { 41, 0, "DisplayText/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 42, 0, "DisplayText/Logical Operator",
    "", 0, 0, 0, 0, 1 },

  { 43, 0, "DisplayText/Switch",
    "", 0, 2, 0, 0, 1 },

  { 44, 0, "GUI Control/Block Definitions",
    "", 0, 1, 10, 0, 1 },

  { 45, 0, "GUI Control/Block Sequence",
    "", 0, 1, 11, 0, 1 },

  { 46, 0, "GUI Control/Library Patch Version",
    "", 0, 1, 0, 0, 1 },

  { 47, 0, "GUI Control/Library Version",
    "", 0, 1, 0, 0, 1 },

  { 48, 0, "GUI Control/Load Table",
    "", 0, 1, 12, 0, 1 },

  { 49, 0, "GUI Control/Next Block",
    "", 0, 1, 0, 0, 1 },

  { 50, 0, "GUI Control/Pause Type",
    "", 0, 1, 0, 0, 1 },

  { 51, 0, "GUI Control/Task Version",
    "", 0, 1, 0, 0, 1 },

  { 52, 0, "GUI Control/Task wide param",
    "", 0, 1, 13, 0, 1 },

  { 53, 0, "GUI Control/Use Task Protocol Block Sequence Flag",
    "", 0, 1, 0, 0, 1 },

  { 54, 0, "GUI Control/dlm build time",
    "", 0, 1, 0, 0, 1 },

  { 55, 0, "GUI Control/frame_of_reference_center",
    "", 0, 1, 3, 0, 1 },

  { 56, 0, "GUI Control/xPC Version",
    "", 0, 1, 0, 0, 1 },

  { 57, 0, "GUI Control/Convert1",
    "", 0, 1, 14, 0, 1 },

  { 58, 0, "GUI Control/Convert10",
    "", 0, 1, 15, 0, 1 },

  { 59, 0, "GUI Control/Convert11",
    "", 0, 1, 16, 0, 1 },

  { 60, 0, "GUI Control/Convert12",
    "", 0, 1, 0, 0, 1 },

  { 61, 0, "GUI Control/Convert13",
    "", 0, 1, 17, 0, 1 },

  { 62, 0, "GUI Control/Convert14",
    "", 0, 1, 15, 0, 1 },

  { 63, 0, "GUI Control/Convert15",
    "", 0, 1, 0, 0, 1 },

  { 64, 0, "GUI Control/Convert16",
    "", 0, 1, 0, 0, 1 },

  { 65, 0, "GUI Control/Convert17",
    "", 0, 1, 0, 0, 1 },

  { 66, 0, "GUI Control/Convert18",
    "", 0, 1, 0, 0, 1 },

  { 67, 0, "GUI Control/Convert19",
    "", 0, 3, 0, 0, 1 },

  { 68, 0, "GUI Control/Convert20",
    "", 0, 3, 0, 0, 1 },

  { 69, 0, "GUI Control/Convert21",
    "", 0, 3, 0, 0, 1 },

  { 70, 0, "GUI Control/Convert22",
    "", 0, 3, 0, 0, 1 },

  { 71, 0, "GUI Control/Convert23",
    "", 0, 3, 0, 0, 1 },

  { 72, 0, "GUI Control/Convert24",
    "", 0, 3, 0, 0, 1 },

  { 73, 0, "GUI Control/Convert25",
    "", 0, 0, 0, 0, 1 },

  { 74, 0, "GUI Control/Convert7",
    "", 0, 1, 0, 0, 1 },

  { 75, 0, "GUI Control/Convert8",
    "", 0, 1, 0, 0, 1 },

  { 76, 0, "GUI Control/Convert9",
    "", 0, 1, 15, 0, 1 },

  { 77, 0, "GUI Control/MinMax",
    "", 0, 1, 0, 0, 1 },

  { 78, 0, "GUI Control/TP Selector",
    "", 0, 1, 18, 0, 1 },

  { 79, 171, "Hand_Feedback/FeedFwdArm",
    "VCODES_out", 0, 1, 19, 0, 1 },

  { 80, 0, "Hand_Feedback/Matrix Concatenation",
    "", 0, 1, 19, 0, 1 },

  { 81, 0, "Hand_Feedback/Reshape",
    "", 0, 1, 6, 0, 1 },

  { 82, 0, "Hand_Feedback/Reshape1",
    "", 0, 1, 6, 0, 1 },

  { 83, 172, "KINARM_DistanceBetweenTargets/Embedded MATLAB InsideTarget",
    "distance", 0, 1, 20, 0, 1 },

  { 84, 175, "KINARM_DistanceFromTarget/Embedded MATLAB InsideTarget",
    "distance", 0, 1, 21, 0, 1 },

  { 85, 176, "KINARM_DistanceFromTarget/Embedded MATLAB WhichHand",
    "hand", 0, 1, 0, 0, 1 },

  { 86, 0, "KINARM_DistanceFromTarget/Multiport Switch",
    "", 0, 1, 15, 0, 1 },

  { 87, 174, "KINARM_DistanceFromTarget/Arm1",
    "", 0, 1, 15, 0, 1 },

  { 88, 173, "KINARM_DistanceFromTarget/Arm2",
    "", 0, 1, 15, 0, 1 },

  { 89, 0, "KINARM_DistanceFromTarget/Dominant_Arm",
    "", 0, 1, 0, 0, 1 },

  { 90, 0, "KINARM_DistanceFromTarget/Hand_Pos",
    "", 0, 1, 22, 0, 1 },

  { 91, 179, "KINARM_Exo_Apply_Loads/Ramp_Up_Down",
    "scaling", 0, 1, 0, 0, 0 },

  { 92, 180, "KINARM_Exo_Apply_Loads/Ramp_Up_Down1",
    "scaling", 0, 1, 0, 0, 0 },

  { 93, 181, "KINARM_Exo_Apply_Loads/Remove_NaNs_and_Inf",
    "out", 0, 1, 5, 0, 1 },

  { 94, 182, "KINARM_Exo_Apply_Loads/Remove_NaNs_and_Inf1",
    "out", 0, 1, 23, 0, 1 },

  { 95, 183, "KINARM_Exo_Apply_Loads/Torque_Cap",
    "y", 0, 1, 23, 0, 1 },

  { 96, 0, "KINARM_Exo_Apply_Loads/down_duration(ms)",
    "", 0, 1, 0, 0, 1 },

  { 97, 0, "KINARM_Exo_Apply_Loads/up_duration(ms)",
    "", 0, 1, 0, 0, 1 },

  { 98, 0, "KINARM_Exo_Apply_Loads/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 99, 0, "KINARM_Exo_Apply_Loads/Data Type Conversion1",
    "", 0, 1, 0, 0, 1 },

  { 100, 0, "KINARM_Exo_Apply_Loads/Product",
    "", 0, 1, 15, 0, 1 },

  { 101, 0, "KINARM_Exo_Apply_Loads/Product1",
    "", 0, 1, 15, 0, 1 },

  { 102, 0, "KINARM_Exo_Apply_Loads/Switch",
    "", 0, 1, 0, 0, 1 },

  { 103, 189, "KINARM_HandFeedbackInTarget/Embedded MATLAB InsideTarget",
    "intarget", 0, 1, 24, 0, 1 },

  { 104, 190, "KINARM_HandFeedbackInTarget/Embedded MATLAB WhichHand/p1",
    "hand", 0, 1, 0, 0, 1 },

  { 105, 190, "KINARM_HandFeedbackInTarget/Embedded MATLAB WhichHand/p2",
    "cursor", 1, 1, 0, 0, 1 },

  { 106, 0, "KINARM_HandFeedbackInTarget/Multiport Switch",
    "", 0, 1, 15, 0, 1 },

  { 107, 188, "KINARM_HandFeedbackInTarget/Arm1",
    "", 0, 1, 15, 0, 1 },

  { 108, 187, "KINARM_HandFeedbackInTarget/Arm2",
    "", 0, 1, 15, 0, 1 },

  { 109, 0, "KINARM_HandFeedbackInTarget/Array Selector",
    "", 0, 1, 25, 0, 1 },

  { 110, 0, "KINARM_HandFeedbackInTarget/Array_Selector1",
    "", 0, 1, 15, 0, 1 },

  { 111, 0, "KINARM_HandFeedbackInTarget/Dominant_Arm",
    "", 0, 1, 0, 0, 1 },

  { 112, 0, "KINARM_HandFeedbackInTarget/Hand_Pos",
    "", 0, 1, 22, 0, 1 },

  { 113, 191, "Play Sound/Play sound over and over/p1",
    "output", 0, 1, 0, 0, 1 },

  { 114, 191, "Play Sound/Play sound over and over/p2",
    "soundON", 1, 1, 0, 0, 1 },

  { 115, 193, "Process_Video_CMD/MATLAB Function/p1",
    "last_frame_ack", 0, 1, 0, 0, 1 },

  { 116, 193, "Process_Video_CMD/MATLAB Function/p2",
    "last_perm_ack", 1, 1, 0, 0, 1 },

  { 117, 0, "Process_Video_CMD/Matrix Concatenate",
    "", 0, 1, 26, 0, 3 },

  { 118, 0, "Process_Video_CMD/GUI_VCODE",
    "", 0, 1, 26, 0, 3 },

  { 119, 0, "Process_Video_CMD/Convert",
    "", 0, 1, 0, 0, 1 },

  { 120, 0, "Process_Video_CMD/Convert1",
    "", 0, 1, 0, 0, 1 },

  { 121, 0, "Process_Video_CMD/Gain",
    "", 0, 1, 0, 0, 1 },

  { 122, 0, "Process_Video_CMD/Memory",
    "", 0, 1, 0, 0, 1 },

  { 123, 0, "Process_Video_CMD/invert dim",
    "", 0, 1, 26, 0, 3 },

  { 124, 0, "Process_Video_CMD/Rate Transition2",
    "", 0, 1, 1, 0, 3 },

  { 125, 0, "Process_Video_CMD/Receive/p1",
    "", 0, 4, 5, 0, 1 },

  { 126, 0, "Process_Video_CMD/Receive/p2",
    "", 1, 1, 0, 0, 1 },

  { 127, 0, "Process_Video_CMD/Unpack",
    "", 0, 3, 0, 0, 1 },

  { 128, 196, "Show_Target/Embedded MATLAB Function",
    "VCODE", 0, 1, 6, 0, 1 },

  { 129, 0, "Show_Target/Matrix Concatenation",
    "", 0, 1, 27, 0, 1 },

  { 130, 0, "Show_Target/Matrix Concatenation1",
    "", 0, 1, 27, 0, 1 },

  { 131, 0, "Show_Target/padder",
    "", 0, 1, 27, 0, 1 },

  { 132, 0, "Show_Target/Selector",
    "", 0, 1, 28, 0, 1 },

  { 133, 197, "Show_Target1/Embedded MATLAB Function",
    "VCODE", 0, 1, 6, 0, 1 },

  { 134, 0, "Show_Target1/Matrix Concatenation",
    "", 0, 1, 27, 0, 1 },

  { 135, 0, "Show_Target1/Matrix Concatenation1",
    "", 0, 1, 27, 0, 1 },

  { 136, 0, "Show_Target1/padder",
    "", 0, 1, 27, 0, 1 },

  { 137, 0, "Show_Target1/Selector",
    "", 0, 1, 28, 0, 1 },

  { 138, 198, "Subsystem/Chart/p1",
    "force_scale", 0, 1, 0, 0, 0 },

  { 139, 198, "Subsystem/Chart/p2",
    "virtual_pos", 1, 1, 3, 0, 0 },

  { 140, 198, "Subsystem/Chart/p3",
    "state", 2, 1, 0, 0, 0 },

  { 141, 198, "Subsystem/Chart/p4",
    "reset_controller", 3, 0, 0, 0, 0 },

  { 142, 206, "Subsystem/MATLAB Function1",
    "VCODE_MOD", 0, 1, 6, 0, 1 },

  { 143, 0, "Subsystem/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 144, 0, "Subsystem/Data Type Conversion2",
    "", 0, 1, 0, 0, 1 },

  { 145, 0, "Subsystem/Logical Operator",
    "", 0, 0, 0, 0, 1 },

  { 146, 0, "Subsystem/Product2",
    "", 0, 1, 23, 0, 1 },

  { 147, 0, "Subsystem/Switch",
    "", 0, 1, 15, 0, 1 },

  { 148, 210, "Visual_Rotation/Embedded MATLAB Function/p1",
    "CursorPos", 0, 1, 4, 0, 1 },

  { 149, 210, "Visual_Rotation/Embedded MATLAB Function/p2",
    "VCODES", 1, 1, 19, 0, 1 },

  { 150, 211, "Visual_Rotation/Embedded MATLAB Function1/p1",
    "VCODES", 0, 1, 19, 0, 1 },

  { 151, 211, "Visual_Rotation/Embedded MATLAB Function1/p2",
    "CursorPos", 1, 1, 4, 0, 1 },

  { 152, 212, "Visual_Rotation/MATLAB Function",
    "VCODE", 0, 1, 19, 0, 1 },

  { 153, 213, "Visual_Rotation/MATLAB Function1/p1",
    "cursstate", 0, 1, 0, 0, 1 },

  { 154, 213, "Visual_Rotation/MATLAB Function1/p2",
    "fbswitch", 1, 1, 0, 0, 1 },

  { 155, 213, "Visual_Rotation/MATLAB Function1/p3",
    "ringstate", 2, 1, 0, 0, 1 },

  { 156, 0, "Visual_Rotation/Memory",
    "", 0, 1, 18, 0, 1 },

  { 157, 0, "Visual_Rotation/Memory1",
    "", 0, 1, 0, 0, 1 },

  { 158, 0, "Visual_Rotation/Memory2",
    "", 0, 0, 0, 0, 1 },

  { 159, 0, "Visual_Rotation/Subtract",
    "", 0, 1, 0, 0, 1 },

  { 160, 0, "Visual_Rotation/Switch",
    "", 0, 1, 19, 0, 1 },

  { 161, 209, "Visual_Rotation/Switch1",
    "", 0, 1, 19, 0, 1 },

  { 162, 0, "Visual_Rotation/Switch2",
    "", 0, 1, 4, 0, 1 },

  { 163, 0, "DataLogging/Create Analog Inputs Subsystem/Analog Data",
    "", 0, 1, 3, 0, 1 },

  { 164, 0, "DataLogging/Create Analog Inputs Subsystem/Analog Data Width",
    "", 0, 1, 0, 0, 2 },

  { 165, 0, "DataLogging/Create Analog Inputs Subsystem/Rate Transition",
    "", 0, 1, 0, 0, 2 },

  { 166, 0, "DataLogging/Create Analog Inputs Subsystem/Rate Transition1",
    "", 0, 1, 3, 0, 2 },

  { 167, 0, "DataLogging/Create Analog Inputs Subsystem/Subtract",
    "", 0, 1, 0, 0, 2 },

  { 168, 0, "DataLogging/Create Analog Inputs Subsystem/Width",
    "", 0, 1, 0, 0, 4 },

  { 169, 0, "DataLogging/Create Custom Data Subsystem/Custom Data1",
    "", 0, 1, 29, 0, 1 },

  { 170, 0, "DataLogging/Create Custom Data Subsystem/Rate Transition",
    "", 0, 1, 23, 0, 1 },

  { 171, 0, "DataLogging/Create Custom Data Subsystem/Rate Transition1",
    "", 0, 1, 0, 0, 1 },

  { 172, 0, "DataLogging/Create Custom Data Subsystem/Rate Transition2",
    "", 0, 1, 0, 0, 1 },

  { 173, 0, "DataLogging/Create Custom Data Subsystem/Width",
    "", 0, 1, 0, 0, 4 },

  { 174, 0, "DataLogging/Create Event Codes Subsystem/Event Codes",
    "", 0, 1, 0, 0, 1 },

  { 175, 0, "DataLogging/Create Event Codes Subsystem/Number of Event Codes",
    "", 0, 1, 0, 0, 2 },

  { 176, 0, "DataLogging/Create Event Codes Subsystem/Subtract",
    "", 0, 1, 0, 0, 2 },

  { 177, 0, "DataLogging/Create Event Codes Subsystem/Width",
    "", 0, 1, 0, 0, 4 },

  { 178, 1, "DataLogging/Create KINARM Data Subsystem/bitfield",
    "bitfield", 0, 3, 0, 0, 1 },

  { 179, 0, "DataLogging/Create KINARM Data Subsystem/Arm Kinematics",
    "", 0, 1, 30, 0, 2 },

  { 180, 0, "DataLogging/Create KINARM Data Subsystem/Kinarm Data Width",
    "", 0, 1, 0, 0, 2 },

  { 181, 0, "DataLogging/Create KINARM Data Subsystem/touint",
    "", 0, 3, 31, 0, 1 },

  { 182, 0, "DataLogging/Create KINARM Data Subsystem/touint1",
    "", 0, 1, 0, 0, 2 },

  { 183, 0, "DataLogging/Create KINARM Data Subsystem/Rate Transition",
    "", 0, 1, 32, 0, 2 },

  { 184, 0, "DataLogging/Create KINARM Data Subsystem/Rate Transition1",
    "", 0, 3, 0, 0, 2 },

  { 185, 0, "DataLogging/Create KINARM Data Subsystem/Rate Transition2",
    "", 0, 1, 33, 0, 2 },

  { 186, 0, "DataLogging/Create KINARM Data Subsystem/Rate Transition3",
    "", 0, 1, 34, 0, 2 },

  { 187, 0, "DataLogging/Create KINARM Data Subsystem/Width",
    "", 0, 1, 0, 0, 4 },

  { 188, 0, "DataLogging/Create Task State Subsystem/Button Status",
    "", 0, 1, 0, 0, 1 },

  { 189, 0, "DataLogging/Create Task State Subsystem/Current Block Index",
    "", 0, 1, 0, 0, 1 },

  { 190, 0,
    "DataLogging/Create Task State Subsystem/Current Block Number in Set",
    "", 0, 1, 0, 0, 1 },

  { 191, 0, "DataLogging/Create Task State Subsystem/Current TP Index",
    "", 0, 1, 0, 0, 1 },

  { 192, 0,
    "DataLogging/Create Task State Subsystem/Current Trial Number in Block",
    "", 0, 1, 0, 0, 1 },

  { 193, 0,
    "DataLogging/Create Task State Subsystem/Current Trial Number in Set",
    "", 0, 1, 0, 0, 1 },

  { 194, 0, "DataLogging/Create Task State Subsystem/Last Frame Acknowledged",
    "", 0, 1, 0, 0, 1 },

  { 195, 0, "DataLogging/Create Task State Subsystem/Last Frame Sent",
    "", 0, 1, 0, 0, 1 },

  { 196, 0, "DataLogging/Create Task State Subsystem/Last Frame Sent1",
    "", 0, 1, 0, 0, 1 },

  { 197, 0, "DataLogging/Create Task State Subsystem/Logging Enable",
    "", 0, 1, 0, 0, 1 },

  { 198, 0, "DataLogging/Create Task State Subsystem/Run Status",
    "", 0, 1, 0, 0, 1 },

  { 199, 0, "DataLogging/Create Task State Subsystem/Servo update count",
    "", 0, 1, 0, 0, 1 },

  { 200, 0, "DataLogging/Create Task State Subsystem/Task Control Button",
    "", 0, 1, 0, 0, 1 },

  { 201, 0, "DataLogging/Create Task State Subsystem/Timestamp",
    "", 0, 1, 0, 0, 2 },

  { 202, 0, "DataLogging/Create Task State Subsystem/conv",
    "", 0, 1, 0, 0, 2 },

  { 203, 0, "DataLogging/Create Task State Subsystem/Product",
    "", 0, 4, 0, 0, 1 },

  { 204, 0, "DataLogging/Create Task State Subsystem/Rate Transition",
    "", 0, 1, 0, 0, 2 },

  { 205, 0, "DataLogging/Create Task State Subsystem/Rate Transition1",
    "", 0, 1, 0, 0, 2 },

  { 206, 0, "DataLogging/Create Task State Subsystem/Rate Transition10",
    "", 0, 1, 0, 0, 2 },

  { 207, 0, "DataLogging/Create Task State Subsystem/Rate Transition11",
    "", 0, 1, 0, 0, 2 },

  { 208, 0, "DataLogging/Create Task State Subsystem/Rate Transition12",
    "", 0, 1, 0, 0, 2 },

  { 209, 0, "DataLogging/Create Task State Subsystem/Rate Transition2",
    "", 0, 1, 0, 0, 2 },

  { 210, 0, "DataLogging/Create Task State Subsystem/Rate Transition3",
    "", 0, 1, 0, 0, 2 },

  { 211, 0, "DataLogging/Create Task State Subsystem/Rate Transition4",
    "", 0, 1, 0, 0, 2 },

  { 212, 0, "DataLogging/Create Task State Subsystem/Rate Transition5",
    "", 0, 1, 0, 0, 2 },

  { 213, 0, "DataLogging/Create Task State Subsystem/Rate Transition6",
    "", 0, 1, 0, 0, 2 },

  { 214, 0, "DataLogging/Create Task State Subsystem/Rate Transition7",
    "", 0, 1, 0, 0, 2 },

  { 215, 0, "DataLogging/Create Task State Subsystem/Rate Transition8",
    "", 0, 1, 0, 0, 2 },

  { 216, 0, "DataLogging/Create Task State Subsystem/Rate Transition9",
    "", 0, 1, 0, 0, 2 },

  { 217, 0, "DataLogging/Create Task State Subsystem/Width",
    "", 0, 1, 0, 0, 4 },

  { 218, 3, "DataLogging/Keep alive/Pack",
    "", 0, 4, 35, 0, 5 },

  { 219, 5, "DataLogging/Network Transfer Subsystem/Send Control Machine/p1",
    "resetUDP", 0, 1, 0, 0, 0 },

  { 220, 5, "DataLogging/Network Transfer Subsystem/Send Control Machine/p2",
    "data_out", 1, 5, 36, 0, 0 },

  { 221, 5, "DataLogging/Network Transfer Subsystem/Send Control Machine/p3",
    "queue_size", 2, 1, 0, 0, 0 },

  { 222, 5, "DataLogging/Network Transfer Subsystem/Send Control Machine/p4",
    "total_timeouts", 3, 1, 0, 0, 0 },

  { 223, 7, "DataLogging/Network Transfer Subsystem/force strobe",
    "strobe_out", 0, 1, 0, 0, 6 },

  { 224, 8, "DataLogging/Network Transfer Subsystem/max_packet_id",
    "", 0, 3, 0, 0, 1 },

  { 225, 8, "DataLogging/Network Transfer Subsystem/Data Type Conversion2",
    "", 0, 5, 0, 0, 1 },

  { 226, 8, "DataLogging/Network Transfer Subsystem/Queue Size",
    "queue_size", 0, 1, 0, 0, 1 },

  { 227, 8, "DataLogging/Network Transfer Subsystem/Total Timeouts",
    "timeouts", 0, 1, 0, 0, 1 },

  { 228, 8, "DataLogging/Network Transfer Subsystem/Task Clock",
    "", 0, 1, 0, 0, 1 },

  { 229, 15, "DataLogging/Poll Force Plates/Convert1",
    "", 0, 4, 37, 0, 1 },

  { 230, 15, "DataLogging/Poll Force Plates/Convert19",
    "", 0, 1, 34, 0, 1 },

  { 231, 15, "DataLogging/Poll Force Plates/Rate Transition",
    "", 0, 1, 0, 0, 6 },

  { 232, 15, "DataLogging/Poll Force Plates/Rate Transition1",
    "", 0, 1, 0, 0, 6 },

  { 233, 148, "DataLogging/Poll KINARM/system type",
    "", 0, 1, 0, 0, 1 },

  { 234, 148, "DataLogging/Poll KINARM/Read HasFT",
    "", 0, 1, 3, 0, 1 },

  { 235, 149, "DataLogging/Receive_Gaze/Create timestamp/p1",
    "timestamp_out", 0, 1, 0, 0, 1 },

  { 236, 149, "DataLogging/Receive_Gaze/Create timestamp/p2",
    "start_time_out", 1, 1, 0, 0, 1 },

  { 237, 150, "DataLogging/Receive_Gaze/Embedded MATLAB Function1/p1",
    "gazeXYCalculated", 0, 1, 3, 0, 1 },

  { 238, 150, "DataLogging/Receive_Gaze/Embedded MATLAB Function1/p2",
    "pupil_area_GLOBAL", 1, 1, 0, 0, 1 },

  { 239, 150, "DataLogging/Receive_Gaze/Embedded MATLAB Function1/p3",
    "gaze_unit_vector_GLOBAL", 2, 1, 38, 0, 1 },

  { 240, 150, "DataLogging/Receive_Gaze/Embedded MATLAB Function1/p4",
    "pupil_GLOBAL", 3, 1, 38, 0, 1 },

  { 241, 151, "DataLogging/Receive_Gaze/clean_packet/p1",
    "pack_out", 0, 4, 39, 0, 1 },

  { 242, 151, "DataLogging/Receive_Gaze/clean_packet/p2",
    "len_out", 1, 2, 0, 0, 1 },

  { 243, 152, "DataLogging/Receive_Gaze/convert to seconds2",
    "event_data_out", 0, 1, 38, 0, 2 },

  { 244, 153, "DataLogging/Receive_Gaze/Convert1",
    "", 0, 1, 0, 0, 1 },

  { 245, 153, "DataLogging/Receive_Gaze/Convert19",
    "", 0, 1, 38, 0, 1 },

  { 246, 153, "DataLogging/Receive_Gaze/Convert2",
    "", 0, 1, 38, 0, 2 },

  { 247, 153, "DataLogging/Receive_Gaze/Convert3",
    "", 0, 1, 0, 0, 1 },

  { 248, 153, "DataLogging/Receive_Gaze/Convert4",
    "", 0, 1, 38, 0, 1 },

  { 249, 153, "DataLogging/Receive_Gaze/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 250, 153, "DataLogging/Receive_Gaze/Data Type Conversion1",
    "", 0, 1, 38, 0, 1 },

  { 251, 153, "DataLogging/Receive_Gaze/Data Type Conversion3",
    "", 0, 1, 23, 0, 1 },

  { 252, 153, "DataLogging/Receive_Gaze/Data Type Conversion4",
    "", 0, 1, 0, 0, 1 },

  { 253, 153, "DataLogging/Receive_Gaze/Data Type Conversion5",
    "", 0, 1, 0, 0, 1 },

  { 254, 153, "DataLogging/Receive_Gaze/convert",
    "", 0, 2, 0, 0, 1 },

  { 255, 153, "DataLogging/Receive_Gaze/Gain",
    "", 0, 1, 38, 0, 1 },

  { 256, 153, "DataLogging/Receive_Gaze/Rate Transition",
    "", 0, 1, 38, 0, 1 },

  { 257, 153, "DataLogging/Receive_Gaze/Reshape",
    "", 0, 5, 40, 0, 1 },

  { 258, 153, "DataLogging/Receive_Gaze/Selector - Left Eye",
    "", 0, 5, 23, 0, 1 },

  { 259, 153, "DataLogging/Receive_Gaze/Receive/p1",
    "", 0, 4, 39, 0, 1 },

  { 260, 153, "DataLogging/Receive_Gaze/Receive/p2",
    "", 1, 1, 0, 0, 1 },

  { 261, 153, "DataLogging/Receive_Gaze/S-Function/p1",
    "", 0, 3, 0, 0, 1 },

  { 262, 153, "DataLogging/Receive_Gaze/S-Function/p2",
    "SAMPE_TYPE", 1, 6, 0, 0, 1 },

  { 263, 153, "DataLogging/Receive_Gaze/S-Function/p3",
    "Content Flags", 2, 7, 0, 0, 1 },

  { 264, 153, "DataLogging/Receive_Gaze/S-Function/p4",
    "pupil X", 3, 5, 3, 0, 1 },

  { 265, 153, "DataLogging/Receive_Gaze/S-Function/p5",
    "pupil Y", 4, 5, 3, 0, 1 },

  { 266, 153, "DataLogging/Receive_Gaze/S-Function/p6",
    "HREF X", 5, 5, 3, 0, 1 },

  { 267, 153, "DataLogging/Receive_Gaze/S-Function/p7",
    "HREF Y", 6, 5, 3, 0, 1 },

  { 268, 153, "DataLogging/Receive_Gaze/S-Function/p8",
    "pupil area", 7, 5, 3, 0, 1 },

  { 269, 153, "DataLogging/Receive_Gaze/S-Function/p9",
    "screen gaze X", 8, 5, 3, 0, 1 },

  { 270, 153, "DataLogging/Receive_Gaze/S-Function/p10",
    "screen gaze Y", 9, 5, 3, 0, 1 },

  { 271, 153, "DataLogging/Receive_Gaze/S-Function/p11",
    "resolution X", 10, 5, 0, 0, 1 },

  { 272, 153, "DataLogging/Receive_Gaze/S-Function/p12",
    "resolution Y", 11, 5, 0, 0, 1 },

  { 273, 153, "DataLogging/Receive_Gaze/S-Function/p13",
    "status flags", 12, 7, 0, 0, 1 },

  { 274, 153, "DataLogging/Receive_Gaze/S-Function/p14",
    "extra input", 13, 7, 0, 0, 1 },

  { 275, 153, "DataLogging/Receive_Gaze/S-Function/p15",
    "buttons", 14, 7, 0, 0, 1 },

  { 276, 153, "DataLogging/Receive_Gaze/S-Function/p16",
    "htype", 15, 6, 0, 0, 1 },

  { 277, 153, "DataLogging/Receive_Gaze/S-Function/p17",
    "hdata", 16, 6, 7, 0, 1 },

  { 278, 153, "DataLogging/Receive_Gaze/S-Function/p18",
    "", 17, 3, 38, 0, 1 },

  { 279, 158, "DataLogging/compare encoders/delta",
    "deltas", 0, 1, 23, 0, 1 },

  { 280, 0, "DataLogging/create_lab_info/arm_count",
    "robot_count", 0, 1, 0, 0, 1 },

  { 281, 0, "DataLogging/create_lab_info/fp1_present",
    "has_force_plate_1", 0, 1, 0, 0, 1 },

  { 282, 0, "DataLogging/create_lab_info/fp2_present",
    "has_force_plate_2", 0, 1, 0, 0, 1 },

  { 283, 0, "DataLogging/create_lab_info/gaze_tracker_present",
    "has_gaze_tracker", 0, 1, 0, 0, 1 },

  { 284, 0, "DataLogging/create_lab_info/robot_lift_present",
    "has_robot_lift", 0, 1, 0, 0, 1 },

  { 285, 161, "DisplayInstruct/Show_Target1/Embedded MATLAB Function",
    "VCODE", 0, 1, 6, 0, 1 },

  { 286, 0, "DisplayInstruct/Show_Target1/Matrix Concatenation",
    "", 0, 1, 27, 0, 1 },

  { 287, 0, "DisplayInstruct/Show_Target1/Matrix Concatenation1",
    "", 0, 1, 27, 0, 1 },

  { 288, 0, "DisplayInstruct/Show_Target1/padder",
    "", 0, 1, 27, 0, 1 },

  { 289, 0, "DisplayInstruct/Show_Target1/Selector",
    "", 0, 1, 28, 0, 1 },

  { 290, 163, "DisplayText/Show_Target_With_Label/Embedded MATLAB Function",
    "VCODE", 0, 1, 6, 0, 1 },

  { 291, 0, "DisplayText/Show_Target_With_Label/Matrix Concatenation",
    "", 0, 1, 27, 0, 1 },

  { 292, 0, "DisplayText/Show_Target_With_Label/Matrix Concatenation1",
    "", 0, 1, 27, 0, 1 },

  { 293, 0, "DisplayText/Show_Target_With_Label/padder",
    "", 0, 1, 27, 0, 1 },

  { 294, 0, "DisplayText/Show_Target_With_Label/Selector",
    "", 0, 1, 28, 0, 1 },

  { 295, 164, "GUI Control/Preview Targets Subsystem/Create Target Vector/p1",
    "target_vector", 0, 1, 41, 0, 1 },

  { 296, 164, "GUI Control/Preview Targets Subsystem/Create Target Vector/p2",
    "target_vector_length", 1, 1, 0, 0, 1 },

  { 297, 165, "GUI Control/Preview Targets Subsystem/Concatenation",
    "", 0, 1, 42, 0, 1 },

  { 298, 165, "GUI Control/Preview Targets Subsystem/Concatenation1",
    "", 0, 1, 42, 0, 1 },

  { 299, 165, "GUI Control/Preview Targets Subsystem/indices_padding",
    "", 0, 1, 42, 0, 1 },

  { 300, 165, "GUI Control/Preview Targets Subsystem/Reshape",
    "", 0, 1, 42, 0, 1 },

  { 301, 165, "GUI Control/Preview Targets Subsystem/Reshape1",
    "", 0, 1, 42, 0, 1 },

  { 302, 166, "GUI Control/Run Command Subsystem/Embedded MATLAB Function/p1",
    "y", 0, 1, 0, 0, 1 },

  { 303, 166, "GUI Control/Run Command Subsystem/Embedded MATLAB Function/p2",
    "z", 1, 1, 0, 0, 1 },

  { 304, 167, "GUI Control/Run Command Subsystem/Hold_to_1Khz",
    "value", 0, 1, 0, 0, 1 },

  { 305, 0, "GUI Control/Run Command Subsystem/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 306, 0, "GUI Control/Run Command Subsystem/Data Type Conversion1",
    "", 0, 4, 0, 0, 1 },

  { 307, 0, "GUI Control/Run Command Subsystem/Data Type Conversion2",
    "", 0, 1, 0, 0, 1 },

  { 308, 0, "GUI Control/Run Command Subsystem/Run Command Receive/p1",
    "", 0, 4, 0, 0, 1 },

  { 309, 0, "GUI Control/Run Command Subsystem/Run Command Receive/p2",
    "", 1, 1, 0, 0, 1 },

  { 310, 168,
    "GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p1",
    "task_status", 0, 3, 0, 0, 0 },

  { 311, 168,
    "GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p2",
    "tp", 1, 3, 0, 0, 0 },

  { 312, 168,
    "GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p3",
    "block", 2, 3, 0, 0, 0 },

  { 313, 168,
    "GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p4",
    "trial_in_block", 3, 3, 0, 0, 0 },

  { 314, 168,
    "GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p5",
    "block_in_set", 4, 3, 0, 0, 0 },

  { 315, 168,
    "GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p6",
    "trial_in_set", 5, 3, 0, 0, 0 },

  { 316, 168,
    "GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p7",
    "repeat_last_trial", 6, 1, 0, 0, 0 },

  { 317, 168,
    "GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p8",
    "extra_trials", 7, 1, 3, 0, 0 },

  { 318, 168,
    "GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p9",
    "e_exit_trial", 8, 0, 0, 0, 0 },

  { 319, 169,
    "GUI Control/Task Execution Control Subsystem/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 320, 169,
    "GUI Control/Task Execution Control Subsystem/Data Type Conversion1",
    "", 0, 0, 0, 0, 1 },

  { 321, 169,
    "GUI Control/Task Execution Control Subsystem/Data Type Conversion2",
    "", 0, 1, 0, 0, 1 },

  { 322, 169, "GUI Control/Task Execution Control Subsystem/Task Clock",
    "", 0, 1, 0, 0, 1 },

  { 323, 169, "GUI Control/Task Execution Control Subsystem/Delay",
    "", 0, 0, 0, 0, 1 },

  { 324, 169, "GUI Control/Task Execution Control Subsystem/Delay1",
    "", 0, 1, 0, 0, 1 },

  { 325, 169, "GUI Control/Task Execution Control Subsystem/Product",
    "", 0, 1, 0, 0, 1 },

  { 326, 169, "GUI Control/Task Execution Control Subsystem/Product2",
    "", 0, 1, 0, 0, 1 },

  { 327, 169, "GUI Control/Task Execution Control Subsystem/Product3",
    "", 0, 1, 0, 0, 1 },

  { 328, 169, "GUI Control/Task Execution Control Subsystem/Selector",
    "", 0, 1, 43, 0, 1 },

  { 329, 169, "GUI Control/Task Execution Control Subsystem/Selector1",
    "", 0, 1, 44, 0, 1 },

  { 330, 169, "GUI Control/Task Execution Control Subsystem/Selector2",
    "", 0, 1, 45, 0, 1 },

  { 331, 169, "GUI Control/Task Execution Control Subsystem/Subtract",
    "", 0, 3, 0, 0, 1 },

  { 332, 169, "GUI Control/Task Execution Control Subsystem/Width",
    "", 0, 3, 0, 0, 4 },

  { 333, 169, "GUI Control/Task Execution Control Subsystem/Width1",
    "", 0, 3, 0, 0, 4 },

  { 334, 169, "GUI Control/Task Execution Control Subsystem/Width2",
    "", 0, 3, 0, 0, 4 },

  { 335, 170, "GUI Control/Task_progress/Count trials/p1",
    "total_trials", 0, 1, 0, 0, 1 },

  { 336, 170, "GUI Control/Task_progress/Count trials/p2",
    "trials_in_block", 1, 1, 0, 0, 1 },

  { 337, 170, "GUI Control/Task_progress/Count trials/p3",
    "total_blocks", 2, 1, 0, 0, 1 },

  { 338, 0, "GUI Control/Task_progress/Data Type Conversion",
    "total_trials_in_exam", 0, 3, 0, 0, 1 },

  { 339, 0, "GUI Control/Task_progress/Data Type Conversion1",
    "total_trials_in_block", 0, 3, 0, 0, 1 },

  { 340, 0, "GUI Control/Task_progress/Data Type Conversion2",
    "total_blocks_in_exam", 0, 3, 0, 0, 1 },

  { 341, 186, "KINARM_Exo_Apply_Loads/clip motor torques/clip_motor_torque",
    "clipped_torques", 0, 1, 5, 0, 1 },

  { 342, 0, "KINARM_Exo_Apply_Loads/clip motor torques/Switch1",
    "", 0, 1, 0, 0, 1 },

  { 343, 0,
    "Parameter Table Defn/TP_table/CLAMP_COL;Clamp State;integer;Flag to clamp visual feedback;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 344, 0,
    "Parameter Table Defn/TP_table/DELAY_POSTTRIAL_COL;Post-Trial_Delay;integer;time between trials (ms);;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 345, 0,
    "Parameter Table Defn/TP_table/DISPLAY_TRIAL_COL;Flag for a display-only trial;integer;Flag to transition to a display-only trial (show instructions or cumulative score);;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 346, 0,
    "Parameter Table Defn/TP_table/DO_REWARD_COL;Do Reward;integer;Flag to indicate whether to provide reward, neutral tone, or nothing on this trial;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 347, 0,
    "Parameter Table Defn/TP_table/END_TARGET_COL;End_Target;target;Second target to appear during a trial (i.e. reach to this target from 1st target);;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 348, 0,
    "Parameter Table Defn/TP_table/HAND_VIS_COL;Hand Visible;integer;Flag to shut off the hand for aftereffect trials;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 349, 0,
    "Parameter Table Defn/TP_table/MAXREACHTIME_COL;MaxReachTime;integer;maximum time allowed for sucessful reach (ms);;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 350, 0,
    "Parameter Table Defn/TP_table/ROTATION;Rotation;integer;Rotation (degrees CCW) (absolute or incremental, depending on Rotate_Type));;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 351, 0,
    "Parameter Table Defn/TP_table/ROTATION_CENTER;Rotate_Center;target;Target to use for rotation center (i.e. visual rotation occurs about the position defined by this target);;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 352, 0,
    "Parameter Table Defn/TP_table/ROTATION_TYPE;Rotate_Type;integer;0 -> no rotation, 1 -> rotate specified amount, 2 -> change rotation by specified amount;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 353, 0,
    "Parameter Table Defn/TP_table/START_TARGET_COL;Start_Target;target;First target to appear during a trial;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 354, 0,
    "Parameter Table Defn/TP_table/WAIT_AT_START_COL;1st_Target_Wait;integer;Required hold time at start target (ms);;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 355, 0,
    "Parameter Table Defn/buttons/INSTRUCT_PAUSE_BTN;Instruct-Resume;;Resume task execution after instruction display;18;22;none;;",
    "", 0, 1, 0, 0, 1 },

  { 356, 0,
    "Parameter Table Defn/events/E_HIT_TARGET;Target_Hit;;Subject has intercepted the target;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 357, 0,
    "Parameter Table Defn/events/E_MISS_TARGET;Target_Miss;;Subject shot past the target without hitting it;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 358, 0,
    "Parameter Table Defn/events/E_NEUTRAL_FDBK;NFB_Trial_End;;Subject has hit or exceeded the target on a no-feedback trial;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 359, 0,
    "Parameter Table Defn/events/E_NO_EVENT;n|a;;This event_code does not save an event in the data file, it just clears the event;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 360, 0,
    "Parameter Table Defn/events/E_REWARD;Reward_On;;Reward is given;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 361, 0,
    "Parameter Table Defn/events/E_SHOW_INSTRUCT;Show Instructions;;Trial shows instructions ;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 362, 0,
    "Parameter Table Defn/events/E_SHOW_SCORE;Show_Cum_Score;;Display cumulative score;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 363, 0,
    "Parameter Table Defn/events/E_STAY_CENTER;Stay_Center;;Subject has reached the center target and must hold;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 364, 0,
    "Parameter Table Defn/events/E_TARGET_ON;Target_On;;Target ON, start waiting for subject to leave centre target;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 365, 0,
    "Parameter Table Defn/target_table/COLOR;Color;colour;Color;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 366, 0,
    "Parameter Table Defn/target_table/HITCOLOR;Hit Color;colour;Color when the target is hit;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 367, 0,
    "Parameter Table Defn/target_table/LABEL;Label text;label;Default label text;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 368, 0,
    "Parameter Table Defn/target_table/LABEL_HEIGHT;Label Height;float;Height of the label;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 369, 0,
    "Parameter Table Defn/target_table/LOGICAL_RADIUS;Logical radius;float;Logical Radius;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 370, 0,
    "Parameter Table Defn/target_table/ROTATED_COLOR;Rotated Color;colour;Target color for rotated trials ;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 371, 0,
    "Parameter Table Defn/target_table/STROKE_COLOR;Stroke Color;colour;Stroke color, for return ring;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 372, 0,
    "Parameter Table Defn/target_table/STROKE_WIDTH;Stroke Width;float;Stroke width, for return ring;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 373, 0,
    "Parameter Table Defn/target_table/VISUAL_RADIUS;Visual radius;float;Display Radius;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 374, 0,
    "Parameter Table Defn/target_table/col_x;X;float;X Position (cm) of the target relative to  local (0,0);;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 375, 0,
    "Parameter Table Defn/target_table/col_y;Y;float;Y Position (cm) of the target relative to  local (0,0);;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 376, 0, "Parameter Table Defn/task_definition/INSTRUCTIONS=",
    "", 0, 1, 0, 0, 1 },

  { 377, 0, "Parameter Table Defn/task_definition/LOAD_FOR=EITHER",
    "", 0, 1, 0, 0, 1 },

  { 378, 0,
    "Parameter Table Defn/task_wide/K_FIX_LEFTHAND;Fix Left Hand Flag;integer;Flag to hold the enable the robot to hold the left (nondominant) hand in place;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 379, 0,
    "Parameter Table Defn/task_wide/K_INSTRUCT_TIME;Display Instructions Hold Time;integer;Time to display instructions to the screen;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 380, 0,
    "Parameter Table Defn/task_wide/K_LEFTHAND_TGT;Left hand target;integer;Target defining the location where the left hand is to be fixed;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 381, 0,
    "Parameter Table Defn/task_wide/K_RETURN_RING_ROW;ReturnRing TgtTbl Row;integer;Row of the target table to use for feedback on return to start;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 382, 0,
    "Parameter Table Defn/task_wide/K_REWARD_VAL;Reward Value (cents);integer;Amount of reward offered on each trial, in cents;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 383, 0,
    "Parameter Table Defn/task_wide/K_ROBOT_MOVE_TIME;Robot Move Time;integer;Time the robot will move to the new position;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 384, 0,
    "Parameter Table Defn/task_wide/K_ROBOT_RAMP_TIME;Robot Ramp Time;integer;Time the robot will ramp up and down;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 385, 0,
    "Parameter Table Defn/task_wide/K_SCORETEXT_ROW;Score Text TgtTbl Row;integer;Row of the target table to use for score text display;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 386, 0,
    "Parameter Table Defn/task_wide/K_SCORE_TIME;Display Score Hold Time ;integer;Time to display the cumulative score (e.g., at the end of the session);;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 387, 0,
    "Parameter Table Defn/task_wide/K_TONE_HIT_DURATION;Hit tone duration;integer;Duration of the feedback tone when the target is hit;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 388, 0,
    "Parameter Table Defn/task_wide/K_TONE_HIT_FREQUENCY;Hit tone frequency;integer;Frequency of the feedback tone when the target is hit;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 389, 0,
    "Parameter Table Defn/task_wide/K_TONE_NEUTRAL_DURATION;Neutral tone duration;integer;Duration of the neutral feedback tone indicating end of trial;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 390, 0,
    "Parameter Table Defn/task_wide/K_TONE_NEUTRAL_FREQUENCY;Neutral tone frequency;integer;Frequency of the neutral feedback tone indicating end of trial;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 391, 0,
    "Parameter Table Defn/task_wide/K_UNUSED;Unused;integer;Not currently used;;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 392, 0,
    "Parameter Table Defn/task_wide/K_VIS_RAD;Visible Radius;float;Radius from the start target that the hand will always be visible (m);;;none;;",
    "", 0, 1, 0, 0, 1 },

  { 393, 192, "Process_Video_CMD/Add_requested_Delay/MATLAB Function",
    "delay", 0, 1, 0, 0, 1 },

  { 394, 0, "Process_Video_CMD/Add_requested_Delay/Rate Transition1",
    "", 0, 1, 0, 0, 3 },

  { 395, 0, "Process_Video_CMD/Add_requested_Delay/Rate Transition2",
    "", 0, 1, 0, 0, 3 },

  { 396, 0, "Process_Video_CMD/Add_requested_Delay/S-Function Builder/p1",
    "", 0, 4, 46, 0, 3 },

  { 397, 0, "Process_Video_CMD/Add_requested_Delay/S-Function Builder/p2",
    "", 1, 1, 0, 0, 3 },

  { 398, 0, "Process_Video_CMD/Add_requested_Delay/S-Function Builder/p3",
    "", 2, 1, 47, 0, 3 },

  { 399, 194, "Process_Video_CMD/PVC_core/Pack VCodeFrame2/p1",
    "vis_cmd", 0, 2, 48, 0, 3 },

  { 400, 194, "Process_Video_CMD/PVC_core/Pack VCodeFrame2/p2",
    "vis_cmd_len", 1, 1, 0, 0, 3 },

  { 401, 194, "Process_Video_CMD/PVC_core/Pack VCodeFrame2/p3",
    "vis_cmd_cropped", 2, 1, 0, 0, 3 },

  { 402, 194, "Process_Video_CMD/PVC_core/Pack VCodeFrame2/p4",
    "frame_number", 3, 3, 0, 0, 3 },

  { 403, 194, "Process_Video_CMD/PVC_core/Pack VCodeFrame2/p5",
    "vcode_err_id", 4, 1, 0, 0, 3 },

  { 404, 195, "Process_Video_CMD/PVC_core/Convert",
    "", 0, 1, 0, 0, 3 },

  { 405, 195, "Process_Video_CMD/PVC_core/Rate Transition1",
    "", 0, 1, 0, 0, 1 },

  { 406, 199,
    "Subsystem/KINARM_Exo_Position_Controller/FF_FB_Position_Controller/p1",
    "TorqueFB", 0, 1, 23, 0, 1 },

  { 407, 199,
    "Subsystem/KINARM_Exo_Position_Controller/FF_FB_Position_Controller/p2",
    "TorqueFF", 1, 1, 23, 0, 1 },

  { 408, 0, "Subsystem/KINARM_Exo_Position_Controller/Data Type Conversion",
    "", 0, 1, 49, 0, 1 },

  { 409, 0, "Subsystem/KINARM_Exo_Position_Controller/Rate Transition1",
    "", 0, 1, 3, 0, 1 },

  { 410, 0, "Subsystem/KINARM_Exo_Position_Controller/Rate Transition2",
    "", 0, 1, 3, 0, 1 },

  { 411, 0, "Subsystem/KINARM_Exo_Position_Controller/Rate Transition3",
    "", 0, 1, 0, 0, 2 },

  { 412, 0, "Subsystem/KINARM_Exo_Position_Controller/Rate Transition4",
    "", 0, 1, 3, 0, 1 },

  { 413, 0, "Subsystem/KINARM_Exo_Position_Controller/Rate Transition5",
    "", 0, 0, 0, 0, 2 },

  { 414, 0, "Subsystem/KINARM_Exo_Position_Controller/Rate Transition6",
    "", 0, 1, 50, 0, 2 },

  { 415, 0, "Subsystem/KINARM_Exo_Position_Controller/Sum",
    "", 0, 1, 23, 0, 1 },

  { 416, 207, "Subsystem/Show_Target/Embedded MATLAB Function",
    "VCODE", 0, 1, 6, 0, 1 },

  { 417, 0, "Subsystem/Show_Target/Matrix Concatenation",
    "", 0, 1, 27, 0, 1 },

  { 418, 0, "Subsystem/Show_Target/Matrix Concatenation1",
    "", 0, 1, 27, 0, 1 },

  { 419, 0, "Subsystem/Show_Target/padder",
    "", 0, 1, 27, 0, 1 },

  { 420, 0, "Subsystem/Show_Target/Selector",
    "", 0, 1, 28, 0, 1 },

  { 421, 214, "Visual_Rotation/Show_Target/Embedded MATLAB Function",
    "VCODE", 0, 1, 6, 0, 1 },

  { 422, 0, "Visual_Rotation/Show_Target/Matrix Concatenation",
    "", 0, 1, 27, 0, 1 },

  { 423, 0, "Visual_Rotation/Show_Target/Matrix Concatenation1",
    "", 0, 1, 27, 0, 1 },

  { 424, 0, "Visual_Rotation/Show_Target/padder",
    "", 0, 1, 27, 0, 1 },

  { 425, 0, "Visual_Rotation/Show_Target/Selector",
    "", 0, 1, 28, 0, 1 },

  { 426, 215, "Visual_Rotation/Show_Target1/Embedded MATLAB Function",
    "VCODE", 0, 1, 6, 0, 1 },

  { 427, 0, "Visual_Rotation/Show_Target1/Matrix Concatenation",
    "", 0, 1, 27, 0, 1 },

  { 428, 0, "Visual_Rotation/Show_Target1/Matrix Concatenation1",
    "", 0, 1, 27, 0, 1 },

  { 429, 0, "Visual_Rotation/Show_Target1/padder",
    "", 0, 1, 27, 0, 1 },

  { 430, 0, "Visual_Rotation/Show_Target1/Selector",
    "", 0, 1, 28, 0, 1 },

  { 431, 216, "Visual_Rotation/Show_Target2/Embedded MATLAB Function",
    "VCODE", 0, 1, 19, 0, 1 },

  { 432, 0, "Visual_Rotation/Show_Target2/Matrix Concatenation",
    "", 0, 1, 27, 0, 1 },

  { 433, 0, "Visual_Rotation/Show_Target2/Matrix Concatenation1",
    "", 0, 1, 27, 0, 1 },

  { 434, 0, "Visual_Rotation/Show_Target2/padder",
    "", 0, 1, 27, 0, 1 },

  { 435, 0, "Visual_Rotation/Show_Target2/Selector",
    "", 0, 1, 51, 0, 1 },

  { 436, 217, "Visual_Rotation/Triggered Subsystem/Embedded MATLAB Function",
    "rotation", 0, 1, 0, 0, 0 },

  { 437, 2,
    "DataLogging/Create KINARM Data Subsystem/select KINData/MATLAB Function",
    "dd_out", 0, 1, 3, 0, 1 },

  { 438, 0,
    "DataLogging/Create Task State Subsystem/Counter Free-Running/Output",
    "", 0, 3, 0, 0, 2 },

  { 439, 0, "DataLogging/Create Task State Subsystem/If Running/Compare",
    "", 0, 4, 0, 0, 1 },

  { 440, 4,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Data Type Conversion",
    "", 0, 5, 52, 0, 2 },

  { 441, 4,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Ideal Frames Per Packet",
    "", 0, 1, 0, 0, 2 },

  { 442, 4,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Math Function",
    "", 0, 1, 0, 0, 2 },

  { 443, 4, "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/t-1",
    "", 0, 5, 52, 0, 2 },

  { 444, 4, "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/t-2",
    "", 0, 5, 52, 0, 2 },

  { 445, 4,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/MinMax",
    "", 0, 1, 0, 0, 2 },

  { 446, 4,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Product",
    "", 0, 1, 0, 0, 2 },

  { 447, 4,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Relational Operator",
    "", 0, 0, 0, 0, 2 },

  { 448, 4,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Selector",
    "", 0, 5, 53, 0, 2 },

  { 449, 4,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Subtract",
    "", 0, 1, 0, 0, 2 },

  { 450, 4,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Width",
    "", 0, 1, 0, 0, 2 },

  { 451, 8,
    "DataLogging/Network Transfer Subsystem/UDP Receiver/Data Type Conversion",
    "", 0, 3, 0, 0, 1 },

  { 452, 8, "DataLogging/Network Transfer Subsystem/UDP Receiver/Memory2",
    "trigger", 0, 1, 0, 0, 1 },

  { 453, 8,
    "DataLogging/Network Transfer Subsystem/UDP Receiver/Rate Transition1",
    "Rqst UDP Reset", 0, 1, 0, 0, 2 },

  { 454, 8,
    "DataLogging/Network Transfer Subsystem/UDP Receiver/Rate Transition2",
    "", 0, 1, 38, 0, 1 },

  { 455, 8, "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p1",
    "Data", 0, 4, 54, 0, 1 },

  { 456, 8, "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p2",
    "Pckt_Recd", 1, 1, 0, 0, 1 },

  { 457, 8, "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p3",
    "Data 2", 2, 4, 54, 0, 1 },

  { 458, 8, "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p4",
    "Pckt_Recd 2", 3, 1, 0, 0, 1 },

  { 459, 8, "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p5",
    "# double reads", 4, 1, 0, 0, 1 },

  { 460, 8, "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p6",
    "", 5, 1, 0, 0, 1 },

  { 461, 8,
    "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset/p1",
    "# UDP Resets", 0, 1, 0, 0, 2 },

  { 462, 8,
    "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset/p2",
    "", 1, 1, 38, 0, 2 },

  { 463, 8, "DataLogging/Network Transfer Subsystem/UDP Receiver/Unpack",
    "", 0, 5, 0, 0, 1 },

  { 464, 6, "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Pack",
    "", 0, 4, 55, 0, 0 },

  { 465, 9, "DataLogging/Poll Force Plates/plate1/parse packet 1/p1",
    "forces", 0, 1, 38, 0, 1 },

  { 466, 9, "DataLogging/Poll Force Plates/plate1/parse packet 1/p2",
    "moments", 1, 1, 38, 0, 1 },

  { 467, 9, "DataLogging/Poll Force Plates/plate1/parse packet 1/p3",
    "timer", 2, 1, 0, 0, 1 },

  { 468, 10, "DataLogging/Poll Force Plates/plate1/Receive/p1",
    "", 0, 4, 56, 0, 1 },

  { 469, 10, "DataLogging/Poll Force Plates/plate1/Receive/p2",
    "", 1, 1, 0, 0, 1 },

  { 470, 11, "DataLogging/Poll Force Plates/plate2/parse packet 1/p1",
    "forces", 0, 1, 38, 0, 1 },

  { 471, 11, "DataLogging/Poll Force Plates/plate2/parse packet 1/p2",
    "moments", 1, 1, 38, 0, 1 },

  { 472, 11, "DataLogging/Poll Force Plates/plate2/parse packet 1/p3",
    "timer", 2, 1, 0, 0, 1 },

  { 473, 12, "DataLogging/Poll Force Plates/plate2/Receive1/p1",
    "", 0, 4, 56, 0, 1 },

  { 474, 12, "DataLogging/Poll Force Plates/plate2/Receive1/p2",
    "", 1, 1, 0, 0, 1 },

  { 475, 98, "DataLogging/Poll KINARM/EtherCAT Subsystem/latch_errors/p1",
    "errVals", 0, 1, 57, 0, 1 },

  { 476, 98, "DataLogging/Poll KINARM/EtherCAT Subsystem/latch_errors/p2",
    "DCErrVals", 1, 1, 57, 0, 1 },

  { 477, 99, "DataLogging/Poll KINARM/EtherCAT Subsystem/sdo_addrs/p1",
    "intAddresses", 0, 1, 58, 0, 1 },

  { 478, 99, "DataLogging/Poll KINARM/EtherCAT Subsystem/sdo_addrs/p2",
    "floatAddresses", 1, 1, 58, 0, 1 },

  { 479, 100, "DataLogging/Poll KINARM/EtherCAT Subsystem/setState",
    "motorEnableState", 0, 0, 0, 0, 1 },

  { 480, 148, "DataLogging/Poll KINARM/EtherCAT Subsystem/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 481, 148, "DataLogging/Poll KINARM/EtherCAT Subsystem/convert",
    "", 0, 1, 7, 0, 1 },

  { 482, 148, "DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit/p1",
    "", 0, 2, 31, 0, 1 },

  { 483, 148, "DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit/p2",
    "", 1, 2, 0, 0, 1 },

  { 484, 148, "DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit/p3",
    "", 2, 2, 0, 0, 1 },

  { 485, 148, "DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit1/p1",
    "", 0, 2, 31, 0, 1 },

  { 486, 148, "DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit1/p2",
    "", 1, 2, 0, 0, 1 },

  { 487, 148, "DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit1/p3",
    "", 2, 2, 0, 0, 1 },

  { 488, 148, "DataLogging/Poll KINARM/EtherCAT Subsystem/Switch",
    "", 0, 2, 7, 0, 1 },

  { 489, 139,
    "DataLogging/Poll KINARM/createKINData/Create KINARM Data Array/p1",
    "kinarm_data", 0, 1, 50, 0, 0 },

  { 490, 139,
    "DataLogging/Poll KINARM/createKINData/Create KINARM Data Array/p2",
    "primary_encoder_data_out", 1, 1, 49, 0, 0 },

  { 491, 140, "DataLogging/Poll KINARM/createKINData/bitpack",
    "statusInts", 0, 3, 23, 0, 0 },

  { 492, 141, "DataLogging/Poll KINARM/createKINData/record errors/p1",
    "newMessage", 0, 1, 59, 0, 0 },

  { 493, 141, "DataLogging/Poll KINARM/createKINData/record errors/p2",
    "sentMessageCount", 1, 1, 0, 0, 0 },

  { 494, 142, "DataLogging/Poll KINARM/createKINData/Data Store Read",
    "", 0, 3, 0, 0, 0 },

  { 495, 142, "DataLogging/Poll KINARM/createKINData/Delay Read",
    "", 0, 1, 5, 0, 0 },

  { 496, 142, "DataLogging/Poll KINARM/createKINData/ErrMsgs",
    "", 0, 1, 60, 0, 0 },

  { 497, 142, "DataLogging/Poll KINARM/createKINData/Primary read",
    "", 0, 1, 57, 0, 0 },

  { 498, 142, "DataLogging/Poll KINARM/createKINData/Read",
    "", 0, 1, 9, 0, 0 },

  { 499, 142, "DataLogging/Poll KINARM/createKINData/Read HW",
    "", 0, 1, 61, 0, 0 },

  { 500, 142, "DataLogging/Poll KINARM/createKINData/Read Kinematics",
    "", 0, 1, 62, 0, 0 },

  { 501, 142, "DataLogging/Poll KINARM/createKINData/Servo Read",
    "", 0, 3, 0, 0, 0 },

  { 502, 142, "DataLogging/Poll KINARM/createKINData/Status read",
    "", 0, 3, 63, 0, 0 },

  { 503, 142, "DataLogging/Poll KINARM/createKINData/Status read1",
    "", 0, 3, 7, 0, 0 },

  { 504, 142, "DataLogging/Poll KINARM/createKINData/torque feedback1",
    "", 0, 1, 7, 0, 0 },

  { 505, 142, "DataLogging/Poll KINARM/createKINData/Data Type Conversion",
    "", 0, 3, 59, 0, 0 },

  { 506, 148, "DataLogging/Poll KINARM/isecat/Compare",
    "", 0, 0, 0, 0, 1 },

  { 507, 148, "DataLogging/Poll KINARM/ispmac/Compare",
    "", 0, 0, 0, 0, 1 },

  { 508, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p1",
    "link_lengths", 0, 1, 15, 0, 1 },

  { 509, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p2",
    "pointer_offset", 1, 1, 0, 0, 1 },

  { 510, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p3",
    "shoulder_loc", 2, 1, 15, 0, 1 },

  { 511, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p4",
    "arm_orientation", 3, 1, 0, 0, 1 },

  { 512, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p5",
    "shoulder_ang", 4, 1, 0, 0, 1 },

  { 513, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p6",
    "elbow_ang", 5, 1, 0, 0, 1 },

  { 514, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p7",
    "shoulder_velocity", 6, 1, 0, 0, 1 },

  { 515, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p8",
    "elbow_velocity", 7, 1, 0, 0, 1 },

  { 516, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p9",
    "shoulder_acceleration", 8, 1, 0, 0, 1 },

  { 517, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p10",
    "elbow_acceleration", 9, 1, 0, 0, 1 },

  { 518, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p11",
    "joint_torque_cmd", 10, 1, 15, 0, 1 },

  { 519, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p12",
    "motor_torque_cmd", 11, 1, 15, 0, 1 },

  { 520, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p13",
    "link_angle", 12, 1, 15, 0, 1 },

  { 521, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p14",
    "link_velocity", 13, 1, 15, 0, 1 },

  { 522, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p15",
    "link_acceleration", 14, 1, 15, 0, 1 },

  { 523, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p16",
    "hand_position", 15, 1, 15, 0, 1 },

  { 524, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p17",
    "hand_velocity", 16, 1, 15, 0, 1 },

  { 525, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p18",
    "hand_acceleration", 17, 1, 15, 0, 1 },

  { 526, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p19",
    "motor_status", 18, 1, 0, 0, 1 },

  { 527, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p20",
    "force_sensor_force_uvw", 19, 1, 17, 0, 1 },

  { 528, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p21",
    "force_sensor_torque_uvw", 20, 1, 17, 0, 1 },

  { 529, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p22",
    "force_sensor_force_xyz", 21, 1, 17, 0, 1 },

  { 530, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p23",
    "force_sensor_torque_xyz", 22, 1, 17, 0, 1 },

  { 531, 143, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p24",
    "force_sensor_timestamp", 23, 1, 0, 0, 1 },

  { 532, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p1",
    "link_lengths", 0, 1, 15, 0, 1 },

  { 533, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p2",
    "pointer_offset", 1, 1, 0, 0, 1 },

  { 534, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p3",
    "shoulder_loc", 2, 1, 15, 0, 1 },

  { 535, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p4",
    "arm_orientation", 3, 1, 0, 0, 1 },

  { 536, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p5",
    "shoulder_ang", 4, 1, 0, 0, 1 },

  { 537, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p6",
    "elbow_ang", 5, 1, 0, 0, 1 },

  { 538, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p7",
    "shoulder_velocity", 6, 1, 0, 0, 1 },

  { 539, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p8",
    "elbow_velocity", 7, 1, 0, 0, 1 },

  { 540, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p9",
    "shoulder_acceleration", 8, 1, 0, 0, 1 },

  { 541, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p10",
    "elbow_acceleration", 9, 1, 0, 0, 1 },

  { 542, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p11",
    "joint_torque_cmd", 10, 1, 15, 0, 1 },

  { 543, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p12",
    "motor_torque_cmd", 11, 1, 15, 0, 1 },

  { 544, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p13",
    "link_angle", 12, 1, 15, 0, 1 },

  { 545, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p14",
    "link_velocity", 13, 1, 15, 0, 1 },

  { 546, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p15",
    "link_acceleration", 14, 1, 15, 0, 1 },

  { 547, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p16",
    "hand_position", 15, 1, 15, 0, 1 },

  { 548, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p17",
    "hand_velocity", 16, 1, 15, 0, 1 },

  { 549, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p18",
    "hand_acceleration", 17, 1, 15, 0, 1 },

  { 550, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p19",
    "motor_status", 18, 1, 0, 0, 1 },

  { 551, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p20",
    "force_sensor_force_uvw", 19, 1, 17, 0, 1 },

  { 552, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p21",
    "force_sensor_torque_uvw", 20, 1, 17, 0, 1 },

  { 553, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p22",
    "force_sensor_force_xyz", 21, 1, 17, 0, 1 },

  { 554, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p23",
    "force_sensor_torque_xyz", 22, 1, 17, 0, 1 },

  { 555, 144, "DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p24",
    "force_sensor_timestamp", 23, 1, 0, 0, 1 },

  { 556, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p1",
    "active_arm", 0, 1, 0, 0, 1 },

  { 557, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p2",
    "delayEstimates", 1, 1, 23, 0, 1 },

  { 558, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p3",
    "servoCounter", 2, 1, 0, 0, 1 },

  { 559, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p4",
    "calibrationButtonBits", 3, 1, 0, 0, 1 },

  { 560, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p5",
    "handFF", 4, 1, 0, 0, 1 },

  { 561, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p6",
    "handFF_Dex", 5, 1, 0, 0, 1 },

  { 562, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p7",
    "handFBArm", 6, 1, 0, 0, 1 },

  { 563, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p8",
    "handFBRadius", 7, 1, 0, 0, 1 },

  { 564, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p9",
    "handFBControl", 8, 1, 0, 0, 1 },

  { 565, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p10",
    "handFBColor", 9, 1, 0, 0, 1 },

  { 566, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p11",
    "hasGaze", 10, 1, 0, 0, 1 },

  { 567, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p12",
    "gazeFB", 11, 1, 0, 0, 1 },

  { 568, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p13",
    "gazeLocation", 12, 1, 15, 0, 1 },

  { 569, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p14",
    "gazeTimestamp", 13, 1, 0, 0, 1 },

  { 570, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p15",
    "gazePupilArea", 14, 1, 0, 0, 1 },

  { 571, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p16",
    "gazeEvent", 15, 1, 17, 0, 1 },

  { 572, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p17",
    "gazeVector", 16, 1, 17, 0, 1 },

  { 573, 145, "DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p18",
    "gazePupilLoc", 17, 1, 17, 0, 1 },

  { 574, 148, "DataLogging/Poll KINARM/make KINData bus/Selector",
    "", 0, 1, 18, 0, 1 },

  { 575, 148, "DataLogging/Poll KINARM/make KINData bus/Selector1",
    "", 0, 1, 18, 0, 1 },

  { 576, 148, "DataLogging/Poll KINARM/make KINData bus/Selector2",
    "", 0, 1, 18, 0, 1 },

  { 577, 146, "DataLogging/Poll KINARM/split_primary/split_primary/p1",
    "link_angles", 0, 1, 15, 0, 1 },

  { 578, 146, "DataLogging/Poll KINARM/split_primary/split_primary/p2",
    "link_velocities", 1, 1, 15, 0, 1 },

  { 579, 146, "DataLogging/Poll KINARM/split_primary/split_primary/p3",
    "link_acceleration", 2, 1, 15, 0, 1 },

  { 580, 147, "DataLogging/Poll KINARM/split_primary/split_primary1/p1",
    "link_angles", 0, 1, 15, 0, 1 },

  { 581, 147, "DataLogging/Poll KINARM/split_primary/split_primary1/p2",
    "link_velocities", 1, 1, 15, 0, 1 },

  { 582, 147, "DataLogging/Poll KINARM/split_primary/split_primary1/p3",
    "link_acceleration", 2, 1, 15, 0, 1 },

  { 583, 148, "DataLogging/Poll KINARM/split_primary/Selector1",
    "", 0, 1, 59, 0, 1 },

  { 584, 148, "DataLogging/Poll KINARM/split_primary/Selector2",
    "", 0, 1, 59, 0, 1 },

  { 585, 154, "DataLogging/apply loads/EtherCAT Apply Loads/convert torques",
    "ecatTorques", 0, 6, 23, 0, 1 },

  { 586, 155, "DataLogging/apply loads/EtherCAT Apply Loads/Data Store Read",
    "", 0, 1, 34, 0, 1 },

  { 587, 156, "DataLogging/apply loads/apply pmac loads/Data Type Conversion",
    "", 0, 5, 31, 0, 1 },

  { 588, 156, "DataLogging/apply loads/apply pmac loads/Data Type Conversion1",
    "", 0, 5, 31, 0, 1 },

  { 589, 156, "DataLogging/apply loads/apply pmac loads/Data Type Conversion6",
    "", 0, 5, 5, 0, 1 },

  { 590, 156, "DataLogging/apply loads/apply pmac loads/Product",
    "", 0, 1, 5, 0, 1 },

  { 591, 157, "DataLogging/apply loads/isecat/Compare",
    "", 0, 0, 0, 0, 1 },

  { 592, 157, "DataLogging/apply loads/isecat1/Compare",
    "", 0, 0, 0, 0, 1 },

  { 593, 159, "DataLogging/create_lab_info/Subsystem/MATLAB Function/p1",
    "is_right_arm", 0, 1, 0, 0, 1 },

  { 594, 159, "DataLogging/create_lab_info/Subsystem/MATLAB Function/p2",
    "isExo", 1, 1, 0, 0, 1 },

  { 595, 159, "DataLogging/create_lab_info/Subsystem/MATLAB Function/p3",
    "has_high_res_encoders", 2, 1, 0, 0, 1 },

  { 596, 160, "DataLogging/create_lab_info/Subsystem/MATLAB Function1/p1",
    "is_right_arm", 0, 1, 0, 0, 1 },

  { 597, 160, "DataLogging/create_lab_info/Subsystem/MATLAB Function1/p2",
    "isExo", 1, 1, 0, 0, 1 },

  { 598, 160, "DataLogging/create_lab_info/Subsystem/MATLAB Function1/p3",
    "has_high_res_encoders", 2, 1, 0, 0, 1 },

  { 599, 169,
    "GUI Control/Task Execution Control Subsystem/Compare To Constant/Compare",
    "", 0, 4, 0, 0, 1 },

  { 600, 201,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/convert_to_segment_angles",
    "SEGMENT_ANG", 0, 1, 3, 0, 2 },

  { 601, 202,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/xy_to_segment_angles_EXO",
    "SEGMENT_ANG", 0, 1, 3, 0, 2 },

  { 602, 0, "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Switch",
    "", 0, 1, 3, 0, 2 },

  { 603, 0,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Switch1",
    "", 0, 1, 3, 0, 2 },

  { 604, 203, "Subsystem/KINARM_Exo_Position_Controller/KINARM filter/consts",
    "constants", 0, 1, 17, 0, 1 },

  { 605, 204, "Subsystem/KINARM_Exo_Position_Controller/KINARM filter/filter",
    "filteredVals", 0, 1, 23, 0, 1 },

  { 606, 0,
    "DataLogging/Create Task State Subsystem/Counter Free-Running/Increment Real World/FixPt Sum1",
    "", 0, 3, 0, 0, 2 },

  { 607, 0,
    "DataLogging/Create Task State Subsystem/Counter Free-Running/Wrap To Zero/FixPt Switch",
    "", 0, 3, 0, 0, 2 },

  { 608, 4,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Counter/Sum",
    "", 0, 1, 0, 0, 2 },

  { 609, 4,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Counter/Unit Delay",
    "", 0, 1, 0, 0, 2 },

  { 610, 6,
    "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Output",
    "", 0, 3, 0, 0, 0 },

  { 611, 32, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Find Robot type",
    "robotType", 0, 1, 0, 0, 1 },

  { 612, 39,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO read machine/p1",
    "SDOCommand", 0, 2, 38, 0, 1 },

  { 613, 39,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO read machine/p2",
    "intSDOValues", 1, 2, 62, 0, 1 },

  { 614, 39,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO read machine/p3",
    "floatSDOValues", 2, 1, 62, 0, 1 },

  { 615, 39,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO read machine/p4",
    "complete", 3, 2, 0, 0, 1 },

  { 616, 48,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/forceEnableDisable",
    "forceMotorState", 0, 1, 0, 0, 1 },

  { 617, 51, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/size",
    "count", 0, 1, 0, 0, 1 },

  { 618, 52, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/size1",
    "count", 0, 1, 0, 0, 1 },

  { 619, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p1",
    "encoderCounts", 0, 1, 15, 0, 1 },

  { 620, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p2",
    "FTSensorOffset", 1, 1, 0, 0, 1 },

  { 621, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p3",
    "calibPinAngles", 2, 1, 15, 0, 1 },

  { 622, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p4",
    "absAngOffsets", 3, 1, 15, 0, 1 },

  { 623, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p5",
    "linkLengths", 4, 1, 15, 0, 1 },

  { 624, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p6",
    "L2CalibPinOffset", 5, 1, 0, 0, 1 },

  { 625, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p7",
    "continuousTorques", 6, 1, 15, 0, 1 },

  { 626, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p8",
    "gearRatios", 7, 1, 15, 0, 1 },

  { 627, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p9",
    "isCalibrated", 8, 1, 0, 0, 1 },

  { 628, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p10",
    "offsetRads", 9, 1, 15, 0, 1 },

  { 629, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p11",
    "offsetRadsPrimary", 10, 1, 15, 0, 1 },

  { 630, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p12",
    "robotRevision", 11, 1, 0, 0, 1 },

  { 631, 53,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p13",
    "constantsReady", 12, 1, 0, 0, 1 },

  { 632, 54,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants1/p1",
    "hasSecondary", 0, 1, 0, 0, 1 },

  { 633, 54,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants1/p2",
    "hasFT", 1, 1, 0, 0, 1 },

  { 634, 54,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants1/p3",
    "robotOrientation", 2, 1, 0, 0, 1 },

  { 635, 54,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants1/p4",
    "motorOrientation", 3, 1, 15, 0, 1 },

  { 636, 54,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants1/p5",
    "encOrientation", 4, 1, 15, 0, 1 },

  { 637, 55, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Torque Mode",
    "", 0, 8, 0, 0, 1 },

  { 638, 55, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/readTrigger",
    "", 0, 2, 0, 0, 1 },

  { 639, 55, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Memory2",
    "R1_maxContinuousTorque", 0, 1, 15, 0, 1 },

  { 640, 55, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Memory3",
    "R1_constantsReady", 0, 1, 0, 0, 1 },

  { 641, 72, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Find Robot type",
    "robotType", 0, 1, 0, 0, 1 },

  { 642, 79,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO read machine/p1",
    "SDOCommand", 0, 2, 38, 0, 1 },

  { 643, 79,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO read machine/p2",
    "intSDOValues", 1, 2, 62, 0, 1 },

  { 644, 79,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO read machine/p3",
    "floatSDOValues", 2, 1, 62, 0, 1 },

  { 645, 79,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO read machine/p4",
    "complete", 3, 2, 0, 0, 1 },

  { 646, 88,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/forceEnableDisable",
    "forceMotorState", 0, 1, 0, 0, 1 },

  { 647, 91, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/size",
    "count", 0, 1, 0, 0, 1 },

  { 648, 92, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/size1",
    "count", 0, 1, 0, 0, 1 },

  { 649, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p1",
    "encoderCounts", 0, 1, 15, 0, 1 },

  { 650, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p2",
    "FTSensorOffset", 1, 1, 0, 0, 1 },

  { 651, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p3",
    "calibPinAngles", 2, 1, 15, 0, 1 },

  { 652, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p4",
    "absAngOffsets", 3, 1, 15, 0, 1 },

  { 653, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p5",
    "linkLengths", 4, 1, 15, 0, 1 },

  { 654, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p6",
    "L2CalibPinOffset", 5, 1, 0, 0, 1 },

  { 655, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p7",
    "continuousTorques", 6, 1, 15, 0, 1 },

  { 656, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p8",
    "gearRatios", 7, 1, 15, 0, 1 },

  { 657, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p9",
    "isCalibrated", 8, 1, 0, 0, 1 },

  { 658, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p10",
    "offsetRads", 9, 1, 15, 0, 1 },

  { 659, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p11",
    "offsetRadsPrimary", 10, 1, 15, 0, 1 },

  { 660, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p12",
    "robotRevision", 11, 1, 0, 0, 1 },

  { 661, 93,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p13",
    "constantsReady", 12, 1, 0, 0, 1 },

  { 662, 94,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants1/p1",
    "hasSecondary", 0, 1, 0, 0, 1 },

  { 663, 94,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants1/p2",
    "hasFT", 1, 1, 0, 0, 1 },

  { 664, 94,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants1/p3",
    "robotOrientation", 2, 1, 0, 0, 1 },

  { 665, 94,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants1/p4",
    "motorOrientation", 3, 1, 15, 0, 1 },

  { 666, 94,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants1/p5",
    "encOrientation", 4, 1, 15, 0, 1 },

  { 667, 95, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Torque Mode",
    "", 0, 8, 0, 0, 1 },

  { 668, 95, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/readTrigger",
    "", 0, 2, 0, 0, 1 },

  { 669, 95, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Memory2",
    "R2_maxContinuousTorque", 0, 1, 15, 0, 1 },

  { 670, 95, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Memory3",
    "R2_constantsReady", 0, 1, 0, 0, 1 },

  { 671, 148, "DataLogging/Poll KINARM/EtherCAT Subsystem/Compare/Compare",
    "", 0, 4, 0, 0, 1 },

  { 672, 148,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Output",
    "", 0, 3, 0, 0, 1 },

  { 673, 96,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/update digital outputs/p1",
    "drive1", 0, 3, 0, 0, 1 },

  { 674, 96,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/update digital outputs/p2",
    "drive2", 1, 3, 0, 0, 1 },

  { 675, 96,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/update digital outputs/p3",
    "drive3", 2, 3, 0, 0, 1 },

  { 676, 96,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/update digital outputs/p4",
    "drive4", 3, 3, 0, 0, 1 },

  { 677, 97,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p1",
    "errVal", 0, 2, 0, 0, 1 },

  { 678, 97,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p2",
    "masterState", 1, 2, 0, 0, 1 },

  { 679, 97,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p3",
    "DCErrVal", 2, 2, 0, 0, 1 },

  { 680, 97,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p4",
    "MasterToNetworkClkDiff", 3, 2, 0, 0, 1 },

  { 681, 97,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p5",
    "DCInitState", 4, 2, 0, 0, 1 },

  { 682, 97,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p6",
    "NetworkToSlaveClkDiff", 5, 2, 0, 0, 1 },

  { 683, 101,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/convert to bit field",
    "bitField", 0, 3, 0, 0, 0 },

  { 684, 104,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/create kinematics/p1",
    "kinematicsOut", 0, 1, 64, 0, 0 },

  { 685, 104,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/create kinematics/p2",
    "kinematicsOutPrimary", 1, 1, 57, 0, 0 },

  { 686, 104,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/create kinematics/p3",
    "delays", 2, 1, 5, 0, 0 },

  { 687, 105,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/create servo counter",
    "servoCounterOut", 0, 3, 0, 0, 0 },

  { 688, 106, "DataLogging/Poll KINARM/EtherCAT Subsystem/update/robottype1",
    "outMem", 0, 1, 60, 0, 0 },

  { 689, 107,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/update HW settings",
    "settingsOut", 0, 1, 65, 0, 0 },

  { 690, 108,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/update calibrations",
    "calibrationsOut", 0, 1, 66, 0, 0 },

  { 691, 109, "DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Store",
    "", 0, 1, 9, 0, 0 },

  { 692, 109, "DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Store1",
    "", 0, 1, 61, 0, 0 },

  { 693, 109,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Type Conversion",
    "", 0, 3, 67, 0, 0 },

  { 694, 109,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Type Conversion1",
    "", 0, 3, 3, 0, 0 },

  { 695, 109,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Type Conversion2",
    "", 0, 3, 0, 0, 0 },

  { 696, 109,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Type Conversion3",
    "", 0, 1, 5, 0, 0 },

  { 697, 109,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Type Conversion4",
    "", 0, 3, 5, 0, 0 },

  { 698, 112,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Create timestamp",
    "timestamp_out", 0, 1, 0, 0, 1 },

  { 699, 111,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Data Type Conversion",
    "", 0, 1, 31, 0, 1 },

  { 700, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Byte Reversal",
    "", 0, 2, 31, 0, 1 },

  { 701, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Byte Reversal1",
    "", 0, 3, 38, 0, 1 },

  { 702, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor/p1",
    "", 0, 4, 68, 0, 1 },

  { 703, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor/p2",
    "", 1, 1, 0, 0, 1 },

  { 704, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Unpack/p1",
    "", 0, 3, 38, 0, 1 },

  { 705, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Unpack/p2",
    "", 1, 2, 31, 0, 1 },

  { 706, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Switch",
    "", 0, 1, 63, 0, 1 },

  { 707, 118,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Create timestamp",
    "timestamp_out", 0, 1, 0, 0, 1 },

  { 708, 117,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Type Conversion1",
    "", 0, 1, 31, 0, 1 },

  { 709, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Byte Reversal",
    "", 0, 2, 31, 0, 1 },

  { 710, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Byte Reversal1",
    "", 0, 3, 38, 0, 1 },

  { 711, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor/p1",
    "", 0, 4, 68, 0, 1 },

  { 712, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor/p2",
    "", 1, 1, 0, 0, 1 },

  { 713, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Unpack1/p1",
    "", 0, 3, 38, 0, 1 },

  { 714, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Unpack1/p2",
    "", 1, 2, 31, 0, 1 },

  { 715, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Switch1",
    "", 0, 1, 63, 0, 1 },

  { 716, 126, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Monitor_status",
    "force_scale", 0, 1, 0, 0, 1 },

  { 717, 127,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Robot_data_builder/p1",
    "robot1DataOut", 0, 1, 69, 0, 1 },

  { 718, 127,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Robot_data_builder/p2",
    "robot2DataOut", 1, 1, 69, 0, 1 },

  { 719, 127,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Robot_data_builder/p3",
    "robot1PrimaryEncDataOut", 2, 1, 31, 0, 1 },

  { 720, 127,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Robot_data_builder/p4",
    "robot2PrimaryEncDataOut", 3, 1, 31, 0, 1 },

  { 721, 128,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/filter_velocities/p1",
    "robot1DataOut", 0, 1, 69, 0, 1 },

  { 722, 128,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/filter_velocities/p2",
    "robot2DataOut", 1, 1, 69, 0, 1 },

  { 723, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Conversion1",
    "", 0, 1, 31, 0, 1 },

  { 724, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Conversion2",
    "", 0, 1, 31, 0, 1 },

  { 725, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Conversion7",
    "", 0, 1, 5, 0, 1 },

  { 726, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Convert2",
    "", 0, 3, 38, 0, 1 },

  { 727, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Data Type Conversion",
    "", 0, 5, 69, 0, 1 },

  { 728, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Data Type Conversion1",
    "", 0, 5, 69, 0, 1 },

  { 729, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Data Type Conversion2",
    "", 0, 5, 0, 0, 1 },

  { 730, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Data Type Conversion3",
    "", 0, 1, 69, 0, 1 },

  { 731, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Data Type Conversion4",
    "", 0, 1, 69, 0, 1 },

  { 732, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/MinMax",
    "", 0, 3, 0, 0, 1 },

  { 733, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/MinMax1",
    "", 0, 3, 0, 0, 1 },

  { 734, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p1",
    "", 0, 5, 69, 0, 1 },

  { 735, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p2",
    "", 1, 5, 69, 0, 1 },

  { 736, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p3",
    "", 2, 3, 3, 0, 1 },

  { 737, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p4",
    "", 3, 5, 5, 0, 1 },

  { 738, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p5",
    "", 4, 5, 31, 0, 1 },

  { 739, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p6",
    "", 5, 5, 31, 0, 1 },

  { 740, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p7",
    "", 6, 3, 0, 0, 1 },

  { 741, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p8",
    "", 7, 3, 0, 0, 1 },

  { 742, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p9",
    "", 8, 3, 38, 0, 1 },

  { 743, 129, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p10",
    "", 9, 5, 0, 0, 1 },

  { 744, 130,
    "DataLogging/Poll KINARM/PMAC Subsystem/update settings/update status format",
    "outStatus", 0, 3, 70, 0, 0 },

  { 745, 132,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/MATLAB Function/p1",
    "kinematics", 0, 1, 62, 0, 1 },

  { 746, 132,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/MATLAB Function/p2",
    "primary", 1, 1, 57, 0, 1 },

  { 747, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Constant",
    "", 0, 3, 0, 0, 1 },

  { 748, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Constant1",
    "", 0, 3, 63, 0, 1 },

  { 749, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Data Type Conversion",
    "", 0, 1, 3, 0, 1 },

  { 750, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Data Type Conversion1",
    "", 0, 1, 3, 0, 1 },

  { 751, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Data Type Conversion2",
    "", 0, 1, 0, 0, 1 },

  { 752, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive/p1",
    "", 0, 4, 9, 0, 1 },

  { 753, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive/p2",
    "", 1, 1, 0, 0, 1 },

  { 754, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Unpack/p1",
    "", 0, 5, 3, 0, 1 },

  { 755, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Unpack/p2",
    "", 1, 5, 3, 0, 1 },

  { 756, 148, "DataLogging/Poll KINARM/bkin_internal_testing/ispmac1/Compare",
    "", 0, 0, 0, 0, 1 },

  { 757, 135, "DataLogging/Poll KINARM/constants/arm1/decode robot/p1",
    "isEP", 0, 1, 0, 0, 1 },

  { 758, 135, "DataLogging/Poll KINARM/constants/arm1/decode robot/p2",
    "isHumanEXO", 1, 1, 0, 0, 1 },

  { 759, 135, "DataLogging/Poll KINARM/constants/arm1/decode robot/p3",
    "isNHPEXO", 2, 1, 0, 0, 1 },

  { 760, 135, "DataLogging/Poll KINARM/constants/arm1/decode robot/p4",
    "isClassicExo", 3, 1, 0, 0, 1 },

  { 761, 135, "DataLogging/Poll KINARM/constants/arm1/decode robot/p5",
    "isUTSEXO", 4, 1, 0, 0, 1 },

  { 762, 135, "DataLogging/Poll KINARM/constants/arm1/decode robot/p6",
    "isPMAC", 5, 1, 0, 0, 1 },

  { 763, 135, "DataLogging/Poll KINARM/constants/arm1/decode robot/p7",
    "isECAT", 6, 1, 0, 0, 1 },

  { 764, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Elbow Angle Offset",
    "elbow angle offset", 0, 1, 0, 0, 1 },

  { 765, 148, "DataLogging/Poll KINARM/constants/arm1/Arm L1",
    "L1", 0, 1, 0, 0, 1 },

  { 766, 148, "DataLogging/Poll KINARM/constants/arm1/Arm L2",
    "L2", 0, 1, 0, 0, 1 },

  { 767, 148, "DataLogging/Poll KINARM/constants/arm1/Arm L3 Error",
    "L3 Error", 0, 1, 0, 0, 1 },

  { 768, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Motor1 Gear Ratio",
    "M1 Gear Ratio", 0, 1, 0, 0, 1 },

  { 769, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Motor1 Orientation",
    "M1 orientation", 0, 1, 0, 0, 1 },

  { 770, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Motor2 Gear Ratio",
    "M2 Gear Ratio", 0, 1, 0, 0, 1 },

  { 771, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Motor2 Orientation",
    "M2 Orientation", 0, 1, 0, 0, 1 },

  { 772, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Orientation",
    "Arm Orientation", 0, 1, 0, 0, 1 },

  { 773, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Pointer Offset",
    "Pointer offset", 0, 1, 0, 0, 1 },

  { 774, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Secondary Encoders",
    "Has Secondary Enc", 0, 1, 0, 0, 1 },

  { 775, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Shoulder Angle Offset",
    "shoulder angle offset", 0, 1, 0, 0, 1 },

  { 776, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Shoulder X",
    "Shoulder X", 0, 1, 0, 0, 1 },

  { 777, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Shoulder Y",
    "Shoulder Y", 0, 1, 0, 0, 1 },

  { 778, 148, "DataLogging/Poll KINARM/constants/arm1/Arm Torque Constant",
    "torque constant", 0, 1, 0, 0, 1 },

  { 779, 148, "DataLogging/Poll KINARM/constants/arm1/Arm robot type",
    "robot type", 0, 1, 0, 0, 1 },

  { 780, 148, "DataLogging/Poll KINARM/constants/arm1/Arm robot version",
    "robot version", 0, 1, 0, 0, 1 },

  { 781, 148, "DataLogging/Poll KINARM/constants/arm1/Status read1",
    "", 0, 1, 3, 0, 1 },

  { 782, 136, "DataLogging/Poll KINARM/constants/arm2/decode robot/p1",
    "isEP", 0, 1, 0, 0, 1 },

  { 783, 136, "DataLogging/Poll KINARM/constants/arm2/decode robot/p2",
    "isHumanEXO", 1, 1, 0, 0, 1 },

  { 784, 136, "DataLogging/Poll KINARM/constants/arm2/decode robot/p3",
    "isNHPEXO", 2, 1, 0, 0, 1 },

  { 785, 136, "DataLogging/Poll KINARM/constants/arm2/decode robot/p4",
    "isClassicExo", 3, 1, 0, 0, 1 },

  { 786, 136, "DataLogging/Poll KINARM/constants/arm2/decode robot/p5",
    "isUTSEXO", 4, 1, 0, 0, 1 },

  { 787, 136, "DataLogging/Poll KINARM/constants/arm2/decode robot/p6",
    "isPMAC", 5, 1, 0, 0, 1 },

  { 788, 136, "DataLogging/Poll KINARM/constants/arm2/decode robot/p7",
    "isECAT", 6, 1, 0, 0, 1 },

  { 789, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Elbow Angle Offset",
    "elbow angle offset", 0, 1, 0, 0, 1 },

  { 790, 148, "DataLogging/Poll KINARM/constants/arm2/Arm L1",
    "L1", 0, 1, 0, 0, 1 },

  { 791, 148, "DataLogging/Poll KINARM/constants/arm2/Arm L2",
    "L2", 0, 1, 0, 0, 1 },

  { 792, 148, "DataLogging/Poll KINARM/constants/arm2/Arm L3 Error",
    "L3 Error", 0, 1, 0, 0, 1 },

  { 793, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Motor1 Gear Ratio",
    "M1 Gear Ratio", 0, 1, 0, 0, 1 },

  { 794, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Motor1 Orientation",
    "M1 orientation", 0, 1, 0, 0, 1 },

  { 795, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Motor2 Gear Ratio",
    "M2 Gear Ratio", 0, 1, 0, 0, 1 },

  { 796, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Motor2 Orientation",
    "M2 Orientation", 0, 1, 0, 0, 1 },

  { 797, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Orientation",
    "Arm Orientation", 0, 1, 0, 0, 1 },

  { 798, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Pointer Offset",
    "Pointer offset", 0, 1, 0, 0, 1 },

  { 799, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Secondary Encoders",
    "Has Secondary Enc", 0, 1, 0, 0, 1 },

  { 800, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Shoulder Angle Offset",
    "shoulder angle offset", 0, 1, 0, 0, 1 },

  { 801, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Shoulder X",
    "Shoulder X", 0, 1, 0, 0, 1 },

  { 802, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Shoulder Y",
    "Shoulder Y", 0, 1, 0, 0, 1 },

  { 803, 148, "DataLogging/Poll KINARM/constants/arm2/Arm Torque Constant",
    "torque constant", 0, 1, 0, 0, 1 },

  { 804, 148, "DataLogging/Poll KINARM/constants/arm2/Arm robot type",
    "robot type", 0, 1, 0, 0, 1 },

  { 805, 148, "DataLogging/Poll KINARM/constants/arm2/Arm robot version",
    "robot version", 0, 1, 0, 0, 1 },

  { 806, 148, "DataLogging/Poll KINARM/constants/arm2/Status read1",
    "", 0, 1, 3, 0, 1 },

  { 807, 142,
    "DataLogging/Poll KINARM/createKINData/Counter Free-Running/Output",
    "", 0, 3, 0, 0, 0 },

  { 808, 0,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Detect Increase/FixPt Relational Operator",
    "", 0, 4, 0, 0, 2 },

  { 809, 0,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Detect Increase/Delay Input1",
    "U(k-1)", 0, 0, 0, 0, 2 },

  { 810, 0,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative/Diff",
    "", 0, 1, 3, 0, 2 },

  { 811, 0,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative/TSamp",
    "", 0, 1, 3, 0, 2 },

  { 812, 0,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative/UD",
    "U(k-1)", 0, 1, 3, 0, 2 },

  { 813, 0,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative1/Diff",
    "", 0, 1, 3, 0, 2 },

  { 814, 0,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative1/TSamp",
    "", 0, 1, 3, 0, 2 },

  { 815, 0,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative1/UD",
    "U(k-1)", 0, 1, 3, 0, 2 },

  { 816, 205,
    "Subsystem/KINARM_Exo_Position_Controller/KINARM filter/get robot info/arm switch",
    "armIdx", 0, 1, 0, 0, 1 },

  { 817, 6,
    "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Increment Real World/FixPt Sum1",
    "", 0, 3, 0, 0, 0 },

  { 818, 6,
    "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Wrap To Zero/FixPt Switch",
    "", 0, 3, 0, 0, 0 },

  { 819, 18,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Control GDC Whistle State/p1",
    "ControlWord", 0, 7, 0, 0, 1 },

  { 820, 18,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Control GDC Whistle State/p2",
    "motorStatus", 1, 3, 0, 0, 1 },

  { 821, 18,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Control GDC Whistle State/p3",
    "isPermFaulted", 2, 1, 0, 0, 1 },

  { 822, 55, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Memory",
    "", 0, 1, 0, 0, 1 },

  { 823, 26,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Control GDC Whistle State/p1",
    "ControlWord", 0, 7, 0, 0, 1 },

  { 824, 26,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Control GDC Whistle State/p2",
    "motorStatus", 1, 3, 0, 0, 1 },

  { 825, 26,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Control GDC Whistle State/p3",
    "isPermFaulted", 2, 1, 0, 0, 1 },

  { 826, 55, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Memory",
    "", 0, 1, 0, 0, 1 },

  { 827, 33,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine/p1",
    "setupData", 0, 2, 5, 0, 1 },

  { 828, 33,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine/p2",
    "SDORequest", 1, 2, 38, 0, 1 },

  { 829, 33,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine/p3",
    "encoderOutputs", 2, 2, 31, 0, 1 },

  { 830, 33,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine/p4",
    "complete", 3, 2, 0, 0, 1 },

  { 831, 34,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values/p1",
    "setupValues", 0, 1, 71, 0, 1 },

  { 832, 34,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values/p2",
    "setupValuesCount", 1, 1, 0, 0, 1 },

  { 833, 34,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values/p3",
    "pollValues", 2, 1, 17, 0, 1 },

  { 834, 34,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values/p4",
    "encoderValues", 3, 1, 72, 0, 1 },

  { 835, 34,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values/p5",
    "encoderValuesCount", 4, 1, 0, 0, 1 },

  { 836, 35,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/Memory",
    "", 0, 2, 0, 0, 1 },

  { 837, 35,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/Memory1",
    "", 0, 2, 3, 0, 1 },

  { 838, 35,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Download",
    "", 0, 2, 0, 0, 1 },

  { 839, 35,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 2, 0, 0, 1 },

  { 840, 35,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 841, 36,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/AbsEncoder machine/p1",
    "setupData", 0, 2, 5, 0, 1 },

  { 842, 36,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/AbsEncoder machine/p2",
    "SDORequest", 1, 2, 38, 0, 1 },

  { 843, 36,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/AbsEncoder machine/p3",
    "encoderOutputs", 2, 2, 31, 0, 1 },

  { 844, 36,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/AbsEncoder machine/p4",
    "complete", 3, 2, 0, 0, 1 },

  { 845, 37,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/set-up values/p1",
    "setupValues", 0, 1, 71, 0, 1 },

  { 846, 37,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/set-up values/p2",
    "setupValuesCount", 1, 1, 0, 0, 1 },

  { 847, 37,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/set-up values/p3",
    "pollValues", 2, 1, 17, 0, 1 },

  { 848, 37,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/set-up values/p4",
    "encoderValues", 3, 1, 72, 0, 1 },

  { 849, 37,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/set-up values/p5",
    "encoderValuesCount", 4, 1, 0, 0, 1 },

  { 850, 38,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/Memory",
    "", 0, 2, 0, 0, 1 },

  { 851, 38,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/Memory1",
    "", 0, 2, 3, 0, 1 },

  { 852, 38,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Download",
    "", 0, 2, 0, 0, 1 },

  { 853, 38,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 2, 0, 0, 1 },

  { 854, 38,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 855, 42,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/SDO read machine/p1",
    "enable", 0, 2, 0, 0, 1 },

  { 856, 42,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/SDO read machine/p2",
    "complete", 1, 2, 0, 0, 1 },

  { 857, 43,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/values",
    "outVal", 0, 1, 38, 0, 1 },

  { 858, 44,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/readAddr",
    "", 0, 1, 38, 0, 1 },

  { 859, 44,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Data Type Conversion1",
    "", 0, 2, 0, 0, 1 },

  { 860, 44,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Data Type Conversion2",
    "", 0, 2, 0, 0, 1 },

  { 861, 44,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/convert",
    "", 0, 1, 0, 0, 1 },

  { 862, 44,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/convert1",
    "", 0, 1, 0, 0, 1 },

  { 863, 44,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/status",
    "", 0, 1, 0, 0, 1 },

  { 864, 44,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Memory",
    "", 0, 1, 0, 0, 1 },

  { 865, 45,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/SDO write machine/p1",
    "enable", 0, 2, 0, 0, 1 },

  { 866, 45,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/SDO write machine/p2",
    "complete", 1, 2, 0, 0, 1 },

  { 867, 46,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/convert",
    "y", 0, 3, 0, 0, 1 },

  { 868, 47,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/writeData",
    "", 0, 1, 47, 0, 1 },

  { 869, 47,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/Data Type Conversion1",
    "", 0, 2, 0, 0, 1 },

  { 870, 47,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/Data Type Conversion2",
    "", 0, 2, 0, 0, 1 },

  { 871, 47,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/status",
    "", 0, 1, 0, 0, 1 },

  { 872, 47,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/Memory",
    "", 0, 2, 0, 0, 1 },

  { 873, 47,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/BKIN EtherCAT Async SDO Download",
    "", 0, 2, 0, 0, 1 },

  { 874, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory",
    "", 0, 2, 0, 0, 1 },

  { 875, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory1",
    "", 0, 1, 0, 0, 1 },

  { 876, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory2",
    "", 0, 1, 0, 0, 1 },

  { 877, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Rate Transition",
    "", 0, 2, 0, 0, 1 },

  { 878, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Rate Transition1",
    "", 0, 1, 0, 0, 1 },

  { 879, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Rate Transition2",
    "", 0, 1, 0, 0, 1 },

  { 880, 58,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Control GDC Whistle State/p1",
    "ControlWord", 0, 7, 0, 0, 1 },

  { 881, 58,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Control GDC Whistle State/p2",
    "motorStatus", 1, 3, 0, 0, 1 },

  { 882, 58,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Control GDC Whistle State/p3",
    "isPermFaulted", 2, 1, 0, 0, 1 },

  { 883, 95, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Memory",
    "", 0, 1, 0, 0, 1 },

  { 884, 66,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Control GDC Whistle State/p1",
    "ControlWord", 0, 7, 0, 0, 1 },

  { 885, 66,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Control GDC Whistle State/p2",
    "motorStatus", 1, 3, 0, 0, 1 },

  { 886, 66,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Control GDC Whistle State/p3",
    "isPermFaulted", 2, 1, 0, 0, 1 },

  { 887, 95, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Memory",
    "", 0, 1, 0, 0, 1 },

  { 888, 73,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/AbsEncoder machine/p1",
    "setupData", 0, 2, 5, 0, 1 },

  { 889, 73,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/AbsEncoder machine/p2",
    "SDORequest", 1, 2, 38, 0, 1 },

  { 890, 73,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/AbsEncoder machine/p3",
    "encoderOutputs", 2, 2, 31, 0, 1 },

  { 891, 73,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/AbsEncoder machine/p4",
    "complete", 3, 2, 0, 0, 1 },

  { 892, 74,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/set-up values/p1",
    "setupValues", 0, 1, 71, 0, 1 },

  { 893, 74,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/set-up values/p2",
    "setupValuesCount", 1, 1, 0, 0, 1 },

  { 894, 74,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/set-up values/p3",
    "pollValues", 2, 1, 17, 0, 1 },

  { 895, 74,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/set-up values/p4",
    "encoderValues", 3, 1, 72, 0, 1 },

  { 896, 74,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/set-up values/p5",
    "encoderValuesCount", 4, 1, 0, 0, 1 },

  { 897, 75,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/Memory",
    "", 0, 2, 0, 0, 1 },

  { 898, 75,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/Memory1",
    "", 0, 2, 3, 0, 1 },

  { 899, 75,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Download",
    "", 0, 2, 0, 0, 1 },

  { 900, 75,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 2, 0, 0, 1 },

  { 901, 75,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 902, 76,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/AbsEncoder machine/p1",
    "setupData", 0, 2, 5, 0, 1 },

  { 903, 76,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/AbsEncoder machine/p2",
    "SDORequest", 1, 2, 38, 0, 1 },

  { 904, 76,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/AbsEncoder machine/p3",
    "encoderOutputs", 2, 2, 31, 0, 1 },

  { 905, 76,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/AbsEncoder machine/p4",
    "complete", 3, 2, 0, 0, 1 },

  { 906, 77,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/set-up values/p1",
    "setupValues", 0, 1, 71, 0, 1 },

  { 907, 77,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/set-up values/p2",
    "setupValuesCount", 1, 1, 0, 0, 1 },

  { 908, 77,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/set-up values/p3",
    "pollValues", 2, 1, 17, 0, 1 },

  { 909, 77,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/set-up values/p4",
    "encoderValues", 3, 1, 72, 0, 1 },

  { 910, 77,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/set-up values/p5",
    "encoderValuesCount", 4, 1, 0, 0, 1 },

  { 911, 78,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/Memory",
    "", 0, 2, 0, 0, 1 },

  { 912, 78,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/Memory1",
    "", 0, 2, 3, 0, 1 },

  { 913, 78,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Download",
    "", 0, 2, 0, 0, 1 },

  { 914, 78,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 2, 0, 0, 1 },

  { 915, 78,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 916, 82,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/SDO read machine/p1",
    "enable", 0, 2, 0, 0, 1 },

  { 917, 82,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/SDO read machine/p2",
    "complete", 1, 2, 0, 0, 1 },

  { 918, 83,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/values",
    "outVal", 0, 1, 38, 0, 1 },

  { 919, 84,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/readAddr",
    "", 0, 1, 38, 0, 1 },

  { 920, 84,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Data Type Conversion1",
    "", 0, 2, 0, 0, 1 },

  { 921, 84,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Data Type Conversion2",
    "", 0, 2, 0, 0, 1 },

  { 922, 84,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/convert",
    "", 0, 1, 0, 0, 1 },

  { 923, 84,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/convert1",
    "", 0, 1, 0, 0, 1 },

  { 924, 84,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/status",
    "", 0, 1, 0, 0, 1 },

  { 925, 84,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Memory",
    "", 0, 1, 0, 0, 1 },

  { 926, 85,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/SDO write machine/p1",
    "enable", 0, 2, 0, 0, 1 },

  { 927, 85,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/SDO write machine/p2",
    "complete", 1, 2, 0, 0, 1 },

  { 928, 86,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/convert",
    "y", 0, 3, 0, 0, 1 },

  { 929, 87,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/writeData",
    "", 0, 1, 47, 0, 1 },

  { 930, 87,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/Data Type Conversion1",
    "", 0, 2, 0, 0, 1 },

  { 931, 87,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/Data Type Conversion2",
    "", 0, 2, 0, 0, 1 },

  { 932, 87,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/status",
    "", 0, 1, 0, 0, 1 },

  { 933, 87,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/Memory",
    "", 0, 2, 0, 0, 1 },

  { 934, 87,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/BKIN EtherCAT Async SDO Download",
    "", 0, 2, 0, 0, 1 },

  { 935, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory",
    "", 0, 2, 0, 0, 1 },

  { 936, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory1",
    "", 0, 1, 0, 0, 1 },

  { 937, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory2",
    "", 0, 1, 0, 0, 1 },

  { 938, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Rate Transition",
    "", 0, 2, 0, 0, 1 },

  { 939, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Rate Transition1",
    "", 0, 1, 0, 0, 1 },

  { 940, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Rate Transition2",
    "", 0, 1, 0, 0, 1 },

  { 941, 148,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Increment Real World/FixPt Sum1",
    "", 0, 3, 0, 0, 1 },

  { 942, 148,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Wrap To Zero/FixPt Switch",
    "", 0, 3, 0, 0, 1 },

  { 943, 102,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/create filtered velocities/filter_velocities",
    "filteredVels", 0, 1, 23, 0, 0 },

  { 944, 103,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/create filtered velocities/rebuild",
    "outVals", 0, 1, 62, 0, 0 },

  { 945, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Detect Change/FixPt Relational Operator",
    "", 0, 4, 0, 0, 1 },

  { 946, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Detect Change/Delay Input1",
    "U(k-1)", 0, 1, 0, 0, 1 },

  { 947, 115,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Byte Reversal",
    "", 0, 7, 0, 0, 1 },

  { 948, 115,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Byte Reversal1",
    "", 0, 7, 0, 0, 1 },

  { 949, 115,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Byte Reversal2",
    "", 0, 3, 0, 0, 1 },

  { 950, 115,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Pack",
    "", 0, 4, 7, 0, 1 },

  { 951, 115,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Switch",
    "", 0, 7, 0, 0, 1 },

  { 952, 121,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Byte Reversal",
    "", 0, 3, 0, 0, 1 },

  { 953, 121,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Byte Reversal1",
    "", 0, 7, 0, 0, 1 },

  { 954, 121,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Byte Reversal2",
    "", 0, 7, 0, 0, 1 },

  { 955, 121,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Pack",
    "", 0, 4, 7, 0, 1 },

  { 956, 121,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Switch",
    "", 0, 7, 0, 0, 1 },

  { 957, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Detect Change/FixPt Relational Operator",
    "", 0, 4, 0, 0, 1 },

  { 958, 122,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Detect Change/Delay Input1",
    "U(k-1)", 0, 1, 0, 0, 1 },

  { 959, 124,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/TypeCast",
    "y", 0, 5, 0, 0, 1 },

  { 960, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Data Type Conversion",
    "", 0, 3, 0, 0, 1 },

  { 961, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM Read Value",
    "", 0, 1, 0, 0, 1 },

  { 962, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Unit Delay",
    "", 0, 1, 0, 0, 1 },

  { 963, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Unit Delay1",
    "", 0, 1, 0, 0, 1 },

  { 964, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Output",
    "", 0, 3, 0, 0, 1 },

  { 965, 142,
    "DataLogging/Poll KINARM/createKINData/Counter Free-Running/Increment Real World/FixPt Sum1",
    "", 0, 3, 0, 0, 0 },

  { 966, 142,
    "DataLogging/Poll KINARM/createKINData/Counter Free-Running/Wrap To Zero/FixPt Switch",
    "", 0, 3, 0, 0, 0 },

  { 967, 16,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p1",
    "allOK", 0, 3, 0, 0, 1 },

  { 968, 16,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p2",
    "ampStatus", 1, 3, 0, 0, 1 },

  { 969, 16,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p3",
    "servoEnabled", 2, 3, 0, 0, 1 },

  { 970, 16,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p4",
    "faultFound", 3, 3, 0, 0, 1 },

  { 971, 16,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p5",
    "currentLimitEnabled", 4, 3, 0, 0, 1 },

  { 972, 16,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p6",
    "eStopOut", 5, 3, 0, 0, 1 },

  { 973, 16,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p7",
    "motorOn", 6, 3, 0, 0, 1 },

  { 974, 17,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/A1M1Convert",
    "", 0, 1, 47, 0, 1 },

  { 975, 17,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/Data Type Conversion1",
    "", 0, 2, 0, 0, 1 },

  { 976, 17,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p1",
    "Status word", 0, 7, 0, 0, 1 },

  { 977, 17,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p2",
    "status register", 1, 3, 0, 0, 1 },

  { 978, 17,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p3",
    "primary position", 2, 2, 0, 0, 1 },

  { 979, 17,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p4",
    "secondary position", 3, 2, 0, 0, 1 },

  { 980, 17,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p5",
    "primary velocity", 4, 2, 0, 0, 1 },

  { 981, 17,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p6",
    "torque", 5, 6, 0, 0, 1 },

  { 982, 17,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p7",
    "digital inputs", 6, 2, 0, 0, 1 },

  { 983, 17,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p8",
    "actual mode of operation", 7, 8, 0, 0, 1 },

  { 984, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Compare To Constant/Compare",
    "", 0, 0, 0, 0, 1 },

  { 985, 19,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY/p1",
    "triggerCountRead", 0, 2, 0, 0, 1 },

  { 986, 19,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY/p2",
    "emcyReadTrigger", 1, 2, 3, 0, 1 },

  { 987, 19,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY/p3",
    "countOverwriteTrigger", 2, 2, 0, 0, 1 },

  { 988, 19,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY/p4",
    "emcyValPump", 3, 1, 38, 0, 1 },

  { 989, 20,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/fault monitor",
    "triggerFaultRead", 0, 1, 0, 0, 1 },

  { 990, 21,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/fault monitor1",
    "EMCYMsg", 0, 1, 47, 0, 1 },

  { 991, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/driveID",
    "", 0, 1, 0, 0, 1 },

  { 992, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 993, 23,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p1",
    "LinkAngle", 0, 1, 0, 0, 1 },

  { 994, 23,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p2",
    "PrimaryLinkAngle", 1, 1, 0, 0, 1 },

  { 995, 23,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p3",
    "PrimaryLinkVel", 2, 1, 0, 0, 1 },

  { 996, 23,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p4",
    "torque", 3, 1, 0, 0, 1 },

  { 997, 23,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p5",
    "digitalInputs", 4, 1, 15, 0, 1 },

  { 998, 23,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p6",
    "digitalDiagnostics", 5, 1, 0, 0, 1 },

  { 999, 23,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p7",
    "calibrationButton", 6, 1, 0, 0, 1 },

  { 1000, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select",
    "", 0, 1, 0, 0, 1 },

  { 1001, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select1",
    "", 0, 1, 0, 0, 1 },

  { 1002, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select2",
    "", 0, 1, 0, 0, 1 },

  { 1003, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select3",
    "", 0, 1, 0, 0, 1 },

  { 1004, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select4",
    "", 0, 1, 0, 0, 1 },

  { 1005, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select5",
    "", 0, 1, 0, 0, 1 },

  { 1006, 24,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p1",
    "allOK", 0, 3, 0, 0, 1 },

  { 1007, 24,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p2",
    "ampStatus", 1, 3, 0, 0, 1 },

  { 1008, 24,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p3",
    "servoEnabled", 2, 3, 0, 0, 1 },

  { 1009, 24,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p4",
    "faultFound", 3, 3, 0, 0, 1 },

  { 1010, 24,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p5",
    "currentLimitEnabled", 4, 3, 0, 0, 1 },

  { 1011, 24,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p6",
    "eStopOut", 5, 3, 0, 0, 1 },

  { 1012, 24,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p7",
    "motorOn", 6, 3, 0, 0, 1 },

  { 1013, 25,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/A1M2Convert",
    "", 0, 1, 47, 0, 1 },

  { 1014, 25,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/Data Type Conversion",
    "", 0, 2, 0, 0, 1 },

  { 1015, 25,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p1",
    "Status word", 0, 7, 0, 0, 1 },

  { 1016, 25,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p2",
    "status register", 1, 3, 0, 0, 1 },

  { 1017, 25,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p3",
    "primary position", 2, 2, 0, 0, 1 },

  { 1018, 25,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p4",
    "secondary position", 3, 2, 0, 0, 1 },

  { 1019, 25,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p5",
    "primary velocity", 4, 2, 0, 0, 1 },

  { 1020, 25,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p6",
    "torque", 5, 6, 0, 0, 1 },

  { 1021, 25,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p7",
    "digital inputs", 6, 2, 0, 0, 1 },

  { 1022, 25,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p8",
    "actual mode of operation", 7, 8, 0, 0, 1 },

  { 1023, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Compare/Compare",
    "", 0, 0, 0, 0, 1 },

  { 1024, 27,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY/p1",
    "triggerCountRead", 0, 2, 0, 0, 1 },

  { 1025, 27,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY/p2",
    "emcyReadTrigger", 1, 2, 3, 0, 1 },

  { 1026, 27,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY/p3",
    "countOverwriteTrigger", 2, 2, 0, 0, 1 },

  { 1027, 27,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY/p4",
    "emcyValPump", 3, 1, 38, 0, 1 },

  { 1028, 28,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/fault monitor",
    "triggerFaultRead", 0, 1, 0, 0, 1 },

  { 1029, 29,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/fault monitor1",
    "EMCYMsg", 0, 1, 47, 0, 1 },

  { 1030, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/driveID",
    "", 0, 1, 0, 0, 1 },

  { 1031, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 1032, 31,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p1",
    "LinkAngle", 0, 1, 0, 0, 1 },

  { 1033, 31,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p2",
    "PrimaryLinkAngle", 1, 1, 0, 0, 1 },

  { 1034, 31,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p3",
    "PrimaryLinkVel", 2, 1, 0, 0, 1 },

  { 1035, 31,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p4",
    "torque", 3, 1, 0, 0, 1 },

  { 1036, 31,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p5",
    "digitalInputs", 4, 1, 15, 0, 1 },

  { 1037, 31,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p6",
    "digitalDiagnostics", 5, 1, 0, 0, 1 },

  { 1038, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select",
    "", 0, 1, 0, 0, 1 },

  { 1039, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select1",
    "", 0, 1, 0, 0, 1 },

  { 1040, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select2",
    "", 0, 1, 0, 0, 1 },

  { 1041, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select3",
    "", 0, 1, 0, 0, 1 },

  { 1042, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select4",
    "", 0, 1, 0, 0, 1 },

  { 1043, 55,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select5",
    "", 0, 1, 0, 0, 1 },

  { 1044, 40,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/converter/p1",
    "uint32Out", 0, 3, 0, 0, 1 },

  { 1045, 40,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/converter/p2",
    "int32Out", 1, 2, 0, 0, 1 },

  { 1046, 40,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/converter/p3",
    "doubleOut", 2, 1, 0, 0, 1 },

  { 1047, 41,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 1048, 41,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/BKIN EtherCAT Async SDO Upload1/p1",
    "", 0, 3, 0, 0, 1 },

  { 1049, 41,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/BKIN EtherCAT Async SDO Upload1/p2",
    "", 1, 2, 0, 0, 1 },

  { 1050, 49,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/converter/p1",
    "uint32Out", 0, 3, 0, 0, 1 },

  { 1051, 49,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/converter/p2",
    "int32Out", 1, 2, 0, 0, 1 },

  { 1052, 49,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/converter/p3",
    "doubleOut", 2, 1, 0, 0, 1 },

  { 1053, 50,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 1054, 50,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/BKIN EtherCAT Async SDO Upload1/p1",
    "", 0, 3, 0, 0, 1 },

  { 1055, 50,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/BKIN EtherCAT Async SDO Upload1/p2",
    "", 1, 2, 0, 0, 1 },

  { 1056, 56,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p1",
    "allOK", 0, 3, 0, 0, 1 },

  { 1057, 56,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p2",
    "ampStatus", 1, 3, 0, 0, 1 },

  { 1058, 56,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p3",
    "servoEnabled", 2, 3, 0, 0, 1 },

  { 1059, 56,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p4",
    "faultFound", 3, 3, 0, 0, 1 },

  { 1060, 56,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p5",
    "currentLimitEnabled", 4, 3, 0, 0, 1 },

  { 1061, 56,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p6",
    "eStopOut", 5, 3, 0, 0, 1 },

  { 1062, 56,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p7",
    "motorOn", 6, 3, 0, 0, 1 },

  { 1063, 57,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/A2M1Convert",
    "", 0, 1, 47, 0, 1 },

  { 1064, 57,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/Data Type Conversion",
    "", 0, 2, 0, 0, 1 },

  { 1065, 57,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p1",
    "Status word", 0, 7, 0, 0, 1 },

  { 1066, 57,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p2",
    "status register", 1, 3, 0, 0, 1 },

  { 1067, 57,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p3",
    "primary position", 2, 2, 0, 0, 1 },

  { 1068, 57,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p4",
    "secondary position", 3, 2, 0, 0, 1 },

  { 1069, 57,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p5",
    "primary velocity", 4, 2, 0, 0, 1 },

  { 1070, 57,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p6",
    "torque", 5, 6, 0, 0, 1 },

  { 1071, 57,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p7",
    "digital input", 6, 2, 0, 0, 1 },

  { 1072, 57,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p8",
    "actual mode of operation", 7, 8, 0, 0, 1 },

  { 1073, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Compare/Compare",
    "", 0, 0, 0, 0, 1 },

  { 1074, 59,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY/p1",
    "triggerCountRead", 0, 2, 0, 0, 1 },

  { 1075, 59,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY/p2",
    "emcyReadTrigger", 1, 2, 3, 0, 1 },

  { 1076, 59,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY/p3",
    "countOverwriteTrigger", 2, 2, 0, 0, 1 },

  { 1077, 59,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY/p4",
    "emcyValPump", 3, 1, 38, 0, 1 },

  { 1078, 60,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/fault monitor",
    "triggerFaultRead", 0, 1, 0, 0, 1 },

  { 1079, 61,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/fault monitor1",
    "EMCYMsg", 0, 1, 47, 0, 1 },

  { 1080, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/driveID",
    "", 0, 1, 0, 0, 1 },

  { 1081, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 1082, 63,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p1",
    "LinkAngle", 0, 1, 0, 0, 1 },

  { 1083, 63,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p2",
    "PrimaryLinkAngle", 1, 1, 0, 0, 1 },

  { 1084, 63,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p3",
    "PrimaryLinkVel", 2, 1, 0, 0, 1 },

  { 1085, 63,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p4",
    "torque", 3, 1, 0, 0, 1 },

  { 1086, 63,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p5",
    "digitalInputs", 4, 1, 15, 0, 1 },

  { 1087, 63,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p6",
    "digitalDiagnostics", 5, 1, 0, 0, 1 },

  { 1088, 63,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p7",
    "calibrationButton", 6, 1, 0, 0, 1 },

  { 1089, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select",
    "offset rads", 0, 1, 0, 0, 1 },

  { 1090, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select1",
    "enc orient", 0, 1, 0, 0, 1 },

  { 1091, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select2",
    "", 0, 1, 0, 0, 1 },

  { 1092, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select3",
    "", 0, 1, 0, 0, 1 },

  { 1093, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select4",
    "", 0, 1, 0, 0, 1 },

  { 1094, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select5",
    "", 0, 1, 0, 0, 1 },

  { 1095, 64,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p1",
    "allOK", 0, 3, 0, 0, 1 },

  { 1096, 64,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p2",
    "ampStatus", 1, 3, 0, 0, 1 },

  { 1097, 64,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p3",
    "servoEnabled", 2, 3, 0, 0, 1 },

  { 1098, 64,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p4",
    "faultFound", 3, 3, 0, 0, 1 },

  { 1099, 64,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p5",
    "currentLimitEnabled", 4, 3, 0, 0, 1 },

  { 1100, 64,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p6",
    "eStopOut", 5, 3, 0, 0, 1 },

  { 1101, 64,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p7",
    "motorOn", 6, 3, 0, 0, 1 },

  { 1102, 65,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/A2M2Convert",
    "", 0, 1, 47, 0, 1 },

  { 1103, 65,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/Data Type Conversion",
    "", 0, 2, 0, 0, 1 },

  { 1104, 65,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p1",
    "status word", 0, 7, 0, 0, 1 },

  { 1105, 65,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p2",
    "status register", 1, 3, 0, 0, 1 },

  { 1106, 65,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p3",
    "position primary", 2, 2, 0, 0, 1 },

  { 1107, 65,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p4",
    "position secondary", 3, 2, 0, 0, 1 },

  { 1108, 65,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p5",
    "velocity primary", 4, 2, 0, 0, 1 },

  { 1109, 65,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p6",
    "torque", 5, 6, 0, 0, 1 },

  { 1110, 65,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p7",
    "digital input", 6, 2, 0, 0, 1 },

  { 1111, 65,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p8",
    "actual mode of operation", 7, 8, 0, 0, 1 },

  { 1112, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Compare/Compare",
    "", 0, 0, 0, 0, 1 },

  { 1113, 67,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY/p1",
    "triggerCountRead", 0, 2, 0, 0, 1 },

  { 1114, 67,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY/p2",
    "emcyReadTrigger", 1, 2, 3, 0, 1 },

  { 1115, 67,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY/p3",
    "countOverwriteTrigger", 2, 2, 0, 0, 1 },

  { 1116, 67,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY/p4",
    "emcyValPump", 3, 1, 38, 0, 1 },

  { 1117, 68,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/fault monitor",
    "triggerFaultRead", 0, 1, 0, 0, 1 },

  { 1118, 69,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/fault monitor1",
    "EMCYMsg", 0, 1, 47, 0, 1 },

  { 1119, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/driveID",
    "", 0, 1, 0, 0, 1 },

  { 1120, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 1121, 71,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p1",
    "LinkAngle", 0, 1, 0, 0, 1 },

  { 1122, 71,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p2",
    "PrimaryLinkAngle", 1, 1, 0, 0, 1 },

  { 1123, 71,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p3",
    "PrimaryLinkVel", 2, 1, 0, 0, 1 },

  { 1124, 71,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p4",
    "torque", 3, 1, 0, 0, 1 },

  { 1125, 71,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p5",
    "digitalInputs", 4, 1, 15, 0, 1 },

  { 1126, 71,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p6",
    "digitalDiagnostics", 5, 1, 0, 0, 1 },

  { 1127, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select",
    "", 0, 1, 0, 0, 1 },

  { 1128, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select1",
    "", 0, 1, 0, 0, 1 },

  { 1129, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select2",
    "", 0, 1, 0, 0, 1 },

  { 1130, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select3",
    "", 0, 1, 0, 0, 1 },

  { 1131, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select4",
    "", 0, 1, 0, 0, 1 },

  { 1132, 95,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select5",
    "", 0, 1, 0, 0, 1 },

  { 1133, 80,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/converter/p1",
    "uint32Out", 0, 3, 0, 0, 1 },

  { 1134, 80,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/converter/p2",
    "int32Out", 1, 2, 0, 0, 1 },

  { 1135, 80,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/converter/p3",
    "doubleOut", 2, 1, 0, 0, 1 },

  { 1136, 81,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 1137, 81,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/BKIN EtherCAT Async SDO Upload1/p1",
    "", 0, 3, 0, 0, 1 },

  { 1138, 81,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/BKIN EtherCAT Async SDO Upload1/p2",
    "", 1, 2, 0, 0, 1 },

  { 1139, 89,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/converter/p1",
    "uint32Out", 0, 3, 0, 0, 1 },

  { 1140, 89,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/converter/p2",
    "int32Out", 1, 2, 0, 0, 1 },

  { 1141, 89,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/converter/p3",
    "doubleOut", 2, 1, 0, 0, 1 },

  { 1142, 90,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/Data Type Conversion",
    "", 0, 1, 0, 0, 1 },

  { 1143, 90,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/BKIN EtherCAT Async SDO Upload1/p1",
    "", 0, 3, 0, 0, 1 },

  { 1144, 90,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/BKIN EtherCAT Async SDO Upload1/p2",
    "", 1, 2, 0, 0, 1 },

  { 1145, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Output",
    "", 0, 7, 0, 0, 1 },

  { 1146, 123,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read DPRAM/Data Type Conversion",
    "", 0, 3, 0, 0, 1 },

  { 1147, 123,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read DPRAM/Data Type Conversion1",
    "", 0, 1, 0, 0, 1 },

  { 1148, 123,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read DPRAM/Data Type Conversion2",
    "", 0, 3, 0, 0, 1 },

  { 1149, 123,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read DPRAM/Read",
    "", 0, 5, 0, 0, 1 },

  { 1150, 125,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Write DPRAM/Data Type Conversion",
    "", 0, 3, 0, 0, 1 },

  { 1151, 125,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Write DPRAM/Data Type Conversion1",
    "", 0, 5, 0, 0, 1 },

  { 1152, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Increment Real World/FixPt Sum1",
    "", 0, 3, 0, 0, 1 },

  { 1153, 133,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Wrap To Zero/FixPt Switch",
    "", 0, 3, 0, 0, 1 },

  { 1154, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Data Type Conversion",
    "", 0, 2, 0, 0, 1 },

  { 1155, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Data Type Conversion1",
    "", 0, 3, 0, 0, 1 },

  { 1156, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Data Type Conversion2",
    "", 0, 1, 3, 0, 1 },

  { 1157, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Memory",
    "", 0, 3, 3, 0, 1 },

  { 1158, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Rate Transition",
    "", 0, 3, 3, 0, 1 },

  { 1159, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 3, 0, 0, 1 },

  { 1160, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 1161, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/Data Type Conversion",
    "", 0, 1, 3, 0, 1 },

  { 1162, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/Memory",
    "", 0, 2, 3, 0, 1 },

  { 1163, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/Rate Transition",
    "", 0, 2, 3, 0, 1 },

  { 1164, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 2, 0, 0, 1 },

  { 1165, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 1166, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Data Type Conversion",
    "", 0, 2, 0, 0, 1 },

  { 1167, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Data Type Conversion1",
    "", 0, 1, 0, 0, 1 },

  { 1168, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Memory",
    "", 0, 1, 0, 0, 1 },

  { 1169, 22,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/BKIN EtherCAT Async SDO Download",
    "", 0, 2, 0, 0, 1 },

  { 1170, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Data Type Conversion",
    "", 0, 2, 0, 0, 1 },

  { 1171, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Data Type Conversion1",
    "", 0, 3, 0, 0, 1 },

  { 1172, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Data Type Conversion2",
    "", 0, 1, 3, 0, 1 },

  { 1173, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Memory",
    "", 0, 3, 3, 0, 1 },

  { 1174, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Rate Transition",
    "", 0, 3, 3, 0, 1 },

  { 1175, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 3, 0, 0, 1 },

  { 1176, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 1177, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/Data Type Conversion",
    "", 0, 1, 3, 0, 1 },

  { 1178, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/Memory",
    "", 0, 2, 3, 0, 1 },

  { 1179, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/Rate Transition",
    "", 0, 2, 3, 0, 1 },

  { 1180, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 2, 0, 0, 1 },

  { 1181, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 1182, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Data Type Conversion",
    "", 0, 2, 0, 0, 1 },

  { 1183, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Data Type Conversion1",
    "", 0, 1, 0, 0, 1 },

  { 1184, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Memory",
    "", 0, 1, 0, 0, 1 },

  { 1185, 30,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/BKIN EtherCAT Async SDO Download",
    "", 0, 2, 0, 0, 1 },

  { 1186, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Data Type Conversion",
    "", 0, 2, 0, 0, 1 },

  { 1187, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Data Type Conversion1",
    "", 0, 3, 0, 0, 1 },

  { 1188, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Data Type Conversion2",
    "", 0, 1, 3, 0, 1 },

  { 1189, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Memory",
    "", 0, 3, 3, 0, 1 },

  { 1190, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Rate Transition",
    "", 0, 3, 3, 0, 1 },

  { 1191, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 3, 0, 0, 1 },

  { 1192, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 1193, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/Data Type Conversion",
    "", 0, 1, 3, 0, 1 },

  { 1194, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/Memory",
    "", 0, 2, 3, 0, 1 },

  { 1195, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/Rate Transition",
    "", 0, 2, 3, 0, 1 },

  { 1196, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 2, 0, 0, 1 },

  { 1197, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 1198, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Data Type Conversion",
    "", 0, 2, 0, 0, 1 },

  { 1199, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Data Type Conversion1",
    "", 0, 1, 0, 0, 1 },

  { 1200, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Memory",
    "", 0, 1, 0, 0, 1 },

  { 1201, 62,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/BKIN EtherCAT Async SDO Download",
    "", 0, 2, 0, 0, 1 },

  { 1202, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Data Type Conversion",
    "", 0, 2, 0, 0, 1 },

  { 1203, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Data Type Conversion1",
    "", 0, 3, 0, 0, 1 },

  { 1204, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Data Type Conversion2",
    "", 0, 1, 3, 0, 1 },

  { 1205, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Memory",
    "", 0, 3, 3, 0, 1 },

  { 1206, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Rate Transition",
    "", 0, 3, 3, 0, 1 },

  { 1207, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 3, 0, 0, 1 },

  { 1208, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 1209, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/Data Type Conversion",
    "", 0, 1, 3, 0, 1 },

  { 1210, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/Memory",
    "", 0, 2, 3, 0, 1 },

  { 1211, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/Rate Transition",
    "", 0, 2, 3, 0, 1 },

  { 1212, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p1",
    "", 0, 2, 0, 0, 1 },

  { 1213, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p2",
    "", 1, 2, 0, 0, 1 },

  { 1214, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Data Type Conversion",
    "", 0, 2, 0, 0, 1 },

  { 1215, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Data Type Conversion1",
    "", 0, 1, 0, 0, 1 },

  { 1216, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Memory",
    "", 0, 1, 0, 0, 1 },

  { 1217, 70,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/BKIN EtherCAT Async SDO Download",
    "", 0, 2, 0, 0, 1 },

  { 1218, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Increment Real World/FixPt Sum1",
    "", 0, 7, 0, 0, 1 },

  { 1219, 129,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Wrap To Zero/FixPt Switch",
    "", 0, 7, 0, 0, 1 },

  {
    0, 0, NULL, NULL, 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 1220, "Compare To Constant",
    "const", 1, 0, 0 },

  { 1221, "GUI Control",
    "XYcols", 1, 73, 0 },

  { 1222, "GUI Control",
    "Vcols", 1, 0, 0 },

  { 1223, "GUI Control",
    "Lcols", 1, 0, 0 },

  { 1224, "Hand_Feedback",
    "feedback_cntl_src", 1, 0, 0 },

  { 1225, "KINARM_DistanceFromTarget",
    "use_dominant_hand", 1, 0, 0 },

  { 1226, "KINARM_Exo_Apply_Loads",
    "up_duration", 1, 0, 0 },

  { 1227, "KINARM_Exo_Apply_Loads",
    "down_duration", 1, 0, 0 },

  { 1228, "KINARM_Exo_Apply_Loads",
    "max_torque", 1, 0, 0 },

  { 1229, "KINARM_Exo_Apply_Loads",
    "limit_motors", 1, 0, 0 },

  { 1230, "KINARM_HandFeedbackInTarget",
    "use_dominant_hand", 1, 0, 0 },

  { 1231, "KINARM_HandFeedbackInTarget",
    "target_type", 1, 0, 0 },

  { 1232, "KINARM_HandFeedbackInTarget",
    "num_states", 1, 0, 0 },

  { 1233, "KINARM_HandFeedbackInTarget",
    "attribcol1", 1, 0, 0 },

  { 1234, "Process_Video_CMD",
    "video_delay", 1, 0, 0 },

  { 1235, "Show_Target",
    "target_type", 1, 0, 0 },

  { 1236, "Show_Target",
    "num_states", 1, 0, 0 },

  { 1237, "Show_Target",
    "attribcol1", 1, 74, 0 },

  { 1238, "Show_Target",
    "attribcol2", 1, 74, 0 },

  { 1239, "Show_Target",
    "opacity", 1, 0, 0 },

  { 1240, "Show_Target",
    "target_display", 1, 0, 0 },

  { 1241, "Show_Target1",
    "target_type", 1, 0, 0 },

  { 1242, "Show_Target1",
    "num_states", 1, 0, 0 },

  { 1243, "Show_Target1",
    "attribcol1", 1, 74, 0 },

  { 1244, "Show_Target1",
    "attribcol2", 1, 74, 0 },

  { 1245, "Show_Target1",
    "attribcol3", 1, 74, 0 },

  { 1246, "Show_Target1",
    "opacity", 1, 0, 0 },

  { 1247, "Show_Target1",
    "target_display", 1, 0, 0 },

  { 1248, "Trial_Control",
    "E_SHOW_INSTRUCT", 1, 0, 0 },

  { 1249, "Constant",
    "Value", 1, 0, 0 },

  { 1250, "Constant1",
    "Value", 0, 0, 0 },

  { 1251, "Memory",
    "X0", 1, 0, 0 },

  { 1252, "Memory1",
    "X0", 1, 0, 0 },

  { 1253, "DataLogging/ECAT Dig Diagnostic",
    "InitialValue", 3, 74, 0 },

  { 1254, "DataLogging/ECAT Status",
    "InitialValue", 1, 75, 0 },

  { 1255, "DataLogging/ECAT hardware",
    "InitialValue", 1, 76, 0 },

  { 1256, "DataLogging/ZeroDigOut",
    "Value", 1, 74, 0 },

  { 1257, "DataLogging/ZeroEPTorque",
    "Value", 1, 74, 0 },

  { 1258, "DataLogging/seconds_remaining",
    "Value", 1, 0, 0 },

  { 1259, "DataLogging/Memory",
    "X0", 1, 0, 0 },

  { 1260, "DataLogging/Memory1",
    "X0", 1, 0, 0 },

  { 1261, "DisplayInstruct/Show_Target1",
    "target_type", 1, 0, 0 },

  { 1262, "DisplayInstruct/Show_Target1",
    "num_states", 1, 0, 0 },

  { 1263, "DisplayInstruct/Show_Target1",
    "attribcol1", 1, 77, 0 },

  { 1264, "DisplayInstruct/Show_Target1",
    "opacity", 1, 0, 0 },

  { 1265, "DisplayInstruct/Show_Target1",
    "target_display", 1, 0, 0 },

  { 1266, "DisplayInstruct/Constant",
    "Value", 1, 0, 0 },

  { 1267, "DisplayText/Show_Target_With_Label",
    "target_type", 1, 0, 0 },

  { 1268, "DisplayText/Show_Target_With_Label",
    "num_states", 1, 0, 0 },

  { 1269, "DisplayText/Show_Target_With_Label",
    "attribcol1", 1, 78, 0 },

  { 1270, "DisplayText/Show_Target_With_Label",
    "opacity", 1, 0, 0 },

  { 1271, "DisplayText/Show_Target_With_Label",
    "target_display", 1, 0, 0 },

  { 1272, "DisplayText/Switch",
    "Threshold", 1, 0, 0 },

  { 1273, "GUI Control/Block Definitions",
    "Value", 1, 10, 0 },

  { 1274, "GUI Control/Block Sequence",
    "Value", 1, 11, 0 },

  { 1275, "GUI Control/Constant",
    "Value", 1, 0, 0 },

  { 1276, "GUI Control/Display Size (m)",
    "Value", 1, 73, 0 },

  { 1277, "GUI Control/Display Size (pels)",
    "Value", 1, 73, 0 },

  { 1278, "GUI Control/Docking Points",
    "Value", 1, 16, 0 },

  { 1279, "GUI Control/EL Camera Angle",
    "Value", 1, 73, 0 },

  { 1280, "GUI Control/EL Camera Focal Length",
    "Value", 1, 0, 0 },

  { 1281, "GUI Control/EL Camera Position",
    "Value", 1, 79, 0 },

  { 1282, "GUI Control/EL Tracking Available",
    "Value", 1, 0, 0 },

  { 1283, "GUI Control/Library Patch Version",
    "Value", 1, 0, 0 },

  { 1284, "GUI Control/Library Version",
    "Value", 1, 0, 0 },

  { 1285, "GUI Control/Load Table",
    "Value", 1, 12, 0 },

  { 1286, "GUI Control/Next Block",
    "Value", 1, 0, 0 },

  { 1287, "GUI Control/Pause Type",
    "Value", 1, 0, 0 },

  { 1288, "GUI Control/Repeat_Trial_Flag",
    "Value", 1, 0, 0 },

  { 1289, "GUI Control/Run Task Clock Flag",
    "Value", 1, 0, 0 },

  { 1290, "GUI Control/Seed",
    "Value", 1, 0, 0 },

  { 1291, "GUI Control/Subject Height",
    "Value", 1, 0, 0 },

  { 1292, "GUI Control/Subject Weight",
    "Value", 1, 0, 0 },

  { 1293, "GUI Control/TP Table",
    "Value", 1, 14, 0 },

  { 1294, "GUI Control/Target Labels",
    "Value", 1, 14, 0 },

  { 1295, "GUI Control/Target Table",
    "Value", 1, 80, 0 },

  { 1296, "GUI Control/Task Version",
    "Value", 1, 0, 0 },

  { 1297, "GUI Control/Task wide param",
    "Value", 1, 13, 0 },

  { 1298, "GUI Control/Use Repeat Trial Flag",
    "Value", 1, 0, 0 },

  { 1299, "GUI Control/Use Task Protocol Block Sequence Flag",
    "Value", 1, 0, 0 },

  { 1300, "GUI Control/dlm build time",
    "Value", 1, 0, 0 },

  { 1301, "GUI Control/frame_of_reference_center",
    "Value", 1, 73, 0 },

  { 1302, "GUI Control/xPC Version",
    "Value", 1, 0, 0 },

  { 1303, "Hand_Feedback/Assess_arm_VCODE",
    "Value", 1, 81, 0 },

  { 1304, "Hand_Feedback/Contralateral_arm_VCODE",
    "Value", 1, 81, 0 },

  { 1305, "Hand_Feedback/feedback_status",
    "Value", 1, 0, 0 },

  { 1306, "KINARM_Exo_Apply_Loads/Torque Limit2",
    "Value", 1, 0, 0 },

  { 1307, "KINARM_Exo_Apply_Loads/Switch",
    "Threshold", 1, 0, 0 },

  { 1308, "KINARM_HandFeedbackInTarget/Selected States",
    "Value", 1, 0, 0 },

  { 1309, "KINARM_HandFeedbackInTarget/attribcol2",
    "Value", 1, 0, 0 },

  { 1310, "KINARM_HandFeedbackInTarget/attribcol3",
    "Value", 1, 0, 0 },

  { 1311, "KINARM_HandFeedbackInTarget/attribcol4",
    "Value", 1, 0, 0 },

  { 1312, "Play Sound/PCI-6229 DA",
    "P1", 1, 0, 0 },

  { 1313, "Play Sound/PCI-6229 DA",
    "P2", 1, 0, 0 },

  { 1314, "Play Sound/PCI-6229 DA",
    "P3", 1, 0, 0 },

  { 1315, "Play Sound/PCI-6229 DA",
    "P4", 1, 0, 0 },

  { 1316, "Play Sound/PCI-6229 DA",
    "P5", 1, 0, 0 },

  { 1317, "Play Sound/PCI-6229 DA",
    "P6", 1, 0, 0 },

  { 1318, "Play Sound/PCI-6229 DA",
    "P7", 1, 0, 0 },

  { 1319, "Process_Video_CMD/GUI_VCODE",
    "Value", 1, 82, 0 },

  { 1320, "Process_Video_CMD/Gain",
    "Gain", 1, 0, 0 },

  { 1321, "Process_Video_CMD/Memory",
    "X0", 1, 0, 0 },

  { 1322, "Process_Video_CMD/Receive",
    "P1", 1, 83, 0 },

  { 1323, "Process_Video_CMD/Receive",
    "P2", 1, 0, 0 },

  { 1324, "Process_Video_CMD/Receive",
    "P3", 1, 0, 0 },

  { 1325, "Process_Video_CMD/Receive",
    "P4", 1, 0, 0 },

  { 1326, "Process_Video_CMD/Receive",
    "P5", 1, 0, 0 },

  { 1327, "Process_Video_CMD/Send",
    "P1", 1, 83, 0 },

  { 1328, "Process_Video_CMD/Send",
    "P2", 1, 0, 0 },

  { 1329, "Process_Video_CMD/Send",
    "P3", 1, 0, 0 },

  { 1330, "Process_Video_CMD/Send",
    "P4", 1, 0, 0 },

  { 1331, "Process_Video_CMD/Send",
    "P5", 1, 0, 0 },

  { 1332, "Show_Target/padder",
    "Value", 1, 84, 0 },

  { 1333, "Show_Target/state3_indices",
    "Value", 1, 74, 0 },

  { 1334, "Show_Target/state4_indices",
    "Value", 1, 74, 0 },

  { 1335, "Show_Target/state5_indices",
    "Value", 1, 74, 0 },

  { 1336, "Show_Target/xpos_index",
    "Value", 1, 0, 0 },

  { 1337, "Show_Target/ypos_index",
    "Value", 1, 0, 0 },

  { 1338, "Show_Target1/padder",
    "Value", 1, 84, 0 },

  { 1339, "Show_Target1/state4_indices",
    "Value", 1, 74, 0 },

  { 1340, "Show_Target1/state5_indices",
    "Value", 1, 74, 0 },

  { 1341, "Show_Target1/xpos_index",
    "Value", 1, 0, 0 },

  { 1342, "Show_Target1/ypos_index",
    "Value", 1, 0, 0 },

  { 1343, "Subsystem/KINARM_Exo_Position_Controller",
    "use_dom_hand", 1, 0, 0 },

  { 1344, "Subsystem/KINARM_Exo_Position_Controller",
    "KINARM_Type", 1, 0, 0 },

  { 1345, "Subsystem/KINARM_Exo_Position_Controller",
    "inertias_for_FF", 1, 0, 0 },

  { 1346, "Subsystem/KINARM_Exo_Position_Controller",
    "angles_or_XY", 1, 0, 0 },

  { 1347, "Subsystem/Show_Target",
    "target_type", 1, 0, 0 },

  { 1348, "Subsystem/Show_Target",
    "num_states", 1, 0, 0 },

  { 1349, "Subsystem/Show_Target",
    "attribcol1", 1, 74, 0 },

  { 1350, "Subsystem/Show_Target",
    "opacity", 1, 0, 0 },

  { 1351, "Subsystem/Show_Target",
    "target_display", 1, 0, 0 },

  { 1352, "Subsystem/Switch",
    "Threshold", 1, 0, 0 },

  { 1353, "Visual_Rotation/Show_Target",
    "target_type", 1, 0, 0 },

  { 1354, "Visual_Rotation/Show_Target",
    "num_states", 1, 0, 0 },

  { 1355, "Visual_Rotation/Show_Target",
    "attribcol1", 1, 74, 0 },

  { 1356, "Visual_Rotation/Show_Target",
    "opacity", 1, 0, 0 },

  { 1357, "Visual_Rotation/Show_Target",
    "target_display", 1, 0, 0 },

  { 1358, "Visual_Rotation/Show_Target1",
    "target_type", 1, 0, 0 },

  { 1359, "Visual_Rotation/Show_Target1",
    "num_states", 1, 0, 0 },

  { 1360, "Visual_Rotation/Show_Target1",
    "attribcol1", 1, 74, 0 },

  { 1361, "Visual_Rotation/Show_Target1",
    "opacity", 1, 0, 0 },

  { 1362, "Visual_Rotation/Show_Target1",
    "target_display", 1, 0, 0 },

  { 1363, "Visual_Rotation/Show_Target2",
    "target_type", 1, 0, 0 },

  { 1364, "Visual_Rotation/Show_Target2",
    "num_states", 1, 0, 0 },

  { 1365, "Visual_Rotation/Show_Target2",
    "attribcol1", 1, 74, 0 },

  { 1366, "Visual_Rotation/Show_Target2",
    "opacity", 1, 0, 0 },

  { 1367, "Visual_Rotation/Show_Target2",
    "target_display", 1, 0, 0 },

  { 1368, "Visual_Rotation/Constant",
    "Value", 1, 0, 0 },

  { 1369, "Visual_Rotation/Constant1",
    "Value", 1, 0, 0 },

  { 1370, "Visual_Rotation/Constant2",
    "Value", 1, 0, 0 },

  { 1371, "Visual_Rotation/Memory",
    "X0", 1, 0, 0 },

  { 1372, "Visual_Rotation/Memory1",
    "X0", 1, 0, 0 },

  { 1373, "Visual_Rotation/Memory2",
    "X0", 0, 0, 0 },

  { 1374, "Visual_Rotation/Switch",
    "Threshold", 1, 0, 0 },

  { 1375, "Visual_Rotation/Switch1",
    "Threshold", 1, 0, 0 },

  { 1376, "Visual_Rotation/Switch2",
    "Threshold", 1, 0, 0 },

  { 1377, "DataLogging/Create Analog Inputs Subsystem/Not Logging Analog Inputs",
    "Value", 1, 0, 0 },

  { 1378, "DataLogging/Create Custom Data Subsystem/custom_version",
    "Value", 1, 0, 0 },

  { 1379, "DataLogging/Create Custom Data Subsystem/Rate Transition2",
    "X0", 1, 0, 0 },

  { 1380, "DataLogging/Create Event Codes Subsystem/Not Logging Event Codes",
    "Value", 1, 0, 0 },

  { 1381, "DataLogging/Create Task State Subsystem/If Running",
    "const", 3, 0, 0 },

  { 1382, "DataLogging/Create Task State Subsystem/packet_version",
    "Value", 1, 0, 0 },

  { 1383, "DataLogging/Keep alive/const",
    "Value", 1, 85, 0 },

  { 1384, "DataLogging/Keep alive/Send",
    "P1", 1, 83, 0 },

  { 1385, "DataLogging/Keep alive/Send",
    "P2", 1, 0, 0 },

  { 1386, "DataLogging/Keep alive/Send",
    "P3", 1, 0, 0 },

  { 1387, "DataLogging/Keep alive/Send",
    "P4", 1, 0, 0 },

  { 1388, "DataLogging/Keep alive/Send",
    "P5", 1, 0, 0 },

  { 1389, "DataLogging/Network Transfer Subsystem/max_packet_id",
    "Value", 3, 0, 0 },

  { 1390, "DataLogging/Network Transfer Subsystem/runID",
    "Value", 1, 0, 0 },

  { 1391, "DataLogging/Network Transfer Subsystem/Task Clock",
    "Amplitude", 1, 0, 0 },

  { 1392, "DataLogging/Network Transfer Subsystem/Task Clock",
    "Period", 1, 0, 0 },

  { 1393, "DataLogging/Network Transfer Subsystem/Task Clock",
    "PulseWidth", 1, 0, 0 },

  { 1394, "DataLogging/Network Transfer Subsystem/Task Clock",
    "PhaseDelay", 1, 0, 0 },

  { 1395, "DataLogging/Poll Force Plates/ain_offset1",
    "Value", 1, 0, 0 },

  { 1396, "DataLogging/Poll Force Plates/ain_offset2",
    "Value", 1, 0, 0 },

  { 1397, "DataLogging/Poll Force Plates/ain_slope1",
    "Value", 1, 0, 0 },

  { 1398, "DataLogging/Poll Force Plates/ain_slope2",
    "Value", 1, 0, 0 },

  { 1399, "DataLogging/Poll Force Plates/calibration_matrix1",
    "Value", 1, 86, 0 },

  { 1400, "DataLogging/Poll Force Plates/calibration_matrix2",
    "Value", 1, 86, 0 },

  { 1401, "DataLogging/Poll Force Plates/enable_plate1",
    "Value", 1, 0, 0 },

  { 1402, "DataLogging/Poll Force Plates/enable_plate2",
    "Value", 1, 0, 0 },

  { 1403, "DataLogging/Poll Force Plates/gain",
    "Value", 1, 0, 0 },

  { 1404, "DataLogging/Poll Force Plates/orientation1",
    "Value", 1, 0, 0 },

  { 1405, "DataLogging/Poll Force Plates/orientation2",
    "Value", 1, 0, 0 },

  { 1406, "DataLogging/Poll Force Plates/request_packet",
    "Value", 2, 87, 0 },

  { 1407, "DataLogging/Poll Force Plates/zero_voltage",
    "Value", 1, 0, 0 },

  { 1408, "DataLogging/Poll KINARM/ECAT Digital in",
    "InitialValue", 3, 75, 0 },

  { 1409, "DataLogging/Poll KINARM/ECAT Err Msgs",
    "InitialValue", 1, 60, 0 },

  { 1410, "DataLogging/Poll KINARM/ECATTorque feedback",
    "InitialValue", 1, 75, 0 },

  { 1411, "DataLogging/Poll KINARM/HW Settings",
    "InitialValue", 1, 61, 0 },

  { 1412, "DataLogging/Poll KINARM/Kinematics",
    "InitialValue", 1, 62, 0 },

  { 1413, "DataLogging/Poll KINARM/PrimaryEnc",
    "InitialValue", 1, 57, 0 },

  { 1414, "DataLogging/Poll KINARM/Robot Calib",
    "InitialValue", 1, 9, 0 },

  { 1415, "DataLogging/Poll KINARM/RobotRevision",
    "InitialValue", 1, 73, 0 },

  { 1416, "DataLogging/Poll KINARM/ServoUpdate",
    "InitialValue", 3, 0, 0 },

  { 1417, "DataLogging/Poll KINARM/System status",
    "InitialValue", 3, 88, 0 },

  { 1418, "DataLogging/Poll KINARM/calib button",
    "InitialValue", 3, 0, 0 },

  { 1419, "DataLogging/Poll KINARM/delays",
    "InitialValue", 1, 5, 0 },

  { 1420, "DataLogging/Poll KINARM/has FT sensors",
    "InitialValue", 1, 73, 0 },

  { 1421, "DataLogging/Poll KINARM/isecat",
    "const", 1, 0, 0 },

  { 1422, "DataLogging/Poll KINARM/ispmac",
    "const", 1, 0, 0 },

  { 1423, "DataLogging/Poll KINARM/system type",
    "Value", 1, 0, 0 },

  { 1424, "DataLogging/Receive_Gaze/EL Camera Angle",
    "Value", 1, 73, 0 },

  { 1425, "DataLogging/Receive_Gaze/EL Camera Focal Length",
    "Value", 1, 0, 0 },

  { 1426, "DataLogging/Receive_Gaze/EL Camera Position",
    "Value", 1, 79, 0 },

  { 1427, "DataLogging/Receive_Gaze/EL Tracking Available",
    "Value", 1, 0, 0 },

  { 1428, "DataLogging/Receive_Gaze/Gain",
    "Gain", 1, 0, 0 },

  { 1429, "DataLogging/Receive_Gaze/Rate Transition",
    "X0", 1, 0, 0 },

  { 1430, "DataLogging/Receive_Gaze/Receive",
    "P1", 1, 88, 0 },

  { 1431, "DataLogging/Receive_Gaze/Receive",
    "P2", 1, 0, 0 },

  { 1432, "DataLogging/Receive_Gaze/Receive",
    "P3", 1, 0, 0 },

  { 1433, "DataLogging/Receive_Gaze/Receive",
    "P4", 1, 0, 0 },

  { 1434, "DataLogging/Receive_Gaze/Receive",
    "P5", 1, 0, 0 },

  { 1435, "DataLogging/apply loads/isecat",
    "const", 1, 0, 0 },

  { 1436, "DataLogging/apply loads/isecat1",
    "const", 1, 0, 0 },

  { 1437, "DataLogging/create_lab_info/arm_count",
    "Value", 1, 0, 0 },

  { 1438, "DataLogging/create_lab_info/fp1_present",
    "Value", 1, 0, 0 },

  { 1439, "DataLogging/create_lab_info/fp2_present",
    "Value", 1, 0, 0 },

  { 1440, "DataLogging/create_lab_info/gaze_tracker_present",
    "Value", 1, 0, 0 },

  { 1441, "DataLogging/create_lab_info/robot_lift_present",
    "Value", 1, 0, 0 },

  { 1442, "DisplayInstruct/Show_Target1/padder",
    "Value", 1, 89, 0 },

  { 1443, "DisplayInstruct/Show_Target1/state2_indices",
    "Value", 1, 77, 0 },

  { 1444, "DisplayInstruct/Show_Target1/state3_indices",
    "Value", 1, 77, 0 },

  { 1445, "DisplayInstruct/Show_Target1/state4_indices",
    "Value", 1, 77, 0 },

  { 1446, "DisplayInstruct/Show_Target1/state5_indices",
    "Value", 1, 77, 0 },

  { 1447, "DisplayInstruct/Show_Target1/xpos_index",
    "Value", 1, 0, 0 },

  { 1448, "DisplayInstruct/Show_Target1/ypos_index",
    "Value", 1, 0, 0 },

  { 1449, "DisplayText/Show_Target_With_Label/padder",
    "Value", 1, 16, 0 },

  { 1450, "DisplayText/Show_Target_With_Label/state2_indices",
    "Value", 1, 78, 0 },

  { 1451, "DisplayText/Show_Target_With_Label/state3_indices",
    "Value", 1, 78, 0 },

  { 1452, "DisplayText/Show_Target_With_Label/state4_indices",
    "Value", 1, 78, 0 },

  { 1453, "DisplayText/Show_Target_With_Label/state5_indices",
    "Value", 1, 78, 0 },

  { 1454, "DisplayText/Show_Target_With_Label/xpos_index",
    "Value", 1, 0, 0 },

  { 1455, "DisplayText/Show_Target_With_Label/ypos_index",
    "Value", 1, 0, 0 },

  { 1456, "GUI Control/Preview Targets Subsystem/Target_Type",
    "Value", 1, 0, 0 },

  { 1457, "GUI Control/Preview Targets Subsystem/indices_padding",
    "Value", 1, 40, 0 },

  { 1458, "GUI Control/Run Command Subsystem/Hold_to_1Khz",
    "BKIN_STEP_TIME", 1, 0, 0 },

  { 1459, "GUI Control/Run Command Subsystem/Run Command Receive",
    "P1", 1, 88, 0 },

  { 1460, "GUI Control/Run Command Subsystem/Run Command Receive",
    "P2", 1, 0, 0 },

  { 1461, "GUI Control/Run Command Subsystem/Run Command Receive",
    "P3", 1, 0, 0 },

  { 1462, "GUI Control/Run Command Subsystem/Run Command Receive",
    "P4", 1, 0, 0 },

  { 1463, "GUI Control/Run Command Subsystem/Run Command Receive",
    "P5", 1, 0, 0 },

  { 1464, "GUI Control/Task Execution Control Subsystem/Compare To Constant",
    "const", 3, 0, 0 },

  { 1465, "GUI Control/Task Execution Control Subsystem/Constant",
    "Value", 1, 0, 0 },

  { 1466, "GUI Control/Task Execution Control Subsystem/Task Clock",
    "Amplitude", 1, 0, 0 },

  { 1467, "GUI Control/Task Execution Control Subsystem/Task Clock",
    "Period", 1, 0, 0 },

  { 1468, "GUI Control/Task Execution Control Subsystem/Task Clock",
    "PulseWidth", 1, 0, 0 },

  { 1469, "GUI Control/Task Execution Control Subsystem/Task Clock",
    "PhaseDelay", 1, 0, 0 },

  { 1470, "GUI Control/Task Execution Control Subsystem/Delay",
    "X0", 0, 0, 0 },

  { 1471, "GUI Control/Task Execution Control Subsystem/Delay1",
    "X0", 1, 0, 0 },

  { 1472, "KINARM_Exo_Apply_Loads/clip motor torques/Torque Limit5",
    "Value", 1, 0, 0 },

  { 1473, "KINARM_Exo_Apply_Loads/clip motor torques/Switch1",
    "Threshold", 1, 0, 0 },

  { 1474,
    "Parameter Table Defn/TP_table/CLAMP_COL;Clamp State;integer;Flag to clamp visual feedback;;;none;;",
    "Value", 1, 0, 0 },

  { 1475,
    "Parameter Table Defn/TP_table/DELAY_POSTTRIAL_COL;Post-Trial_Delay;integer;time between trials (ms);;;none;;",
    "Value", 1, 0, 0 },

  { 1476,
    "Parameter Table Defn/TP_table/DISPLAY_TRIAL_COL;Flag for a display-only trial;integer;Flag to transition to a display-only trial (show instructions or cumulative score);;;none;;",
    "Value", 1, 0, 0 },

  { 1477,
    "Parameter Table Defn/TP_table/DO_REWARD_COL;Do Reward;integer;Flag to indicate whether to provide reward, neutral tone, or nothing on this trial;;;none;;",
    "Value", 1, 0, 0 },

  { 1478,
    "Parameter Table Defn/TP_table/END_TARGET_COL;End_Target;target;Second target to appear during a trial (i.e. reach to this target from 1st target);;;none;;",
    "Value", 1, 0, 0 },

  { 1479,
    "Parameter Table Defn/TP_table/HAND_VIS_COL;Hand Visible;integer;Flag to shut off the hand for aftereffect trials;;;none;;",
    "Value", 1, 0, 0 },

  { 1480,
    "Parameter Table Defn/TP_table/MAXREACHTIME_COL;MaxReachTime;integer;maximum time allowed for sucessful reach (ms);;;none;;",
    "Value", 1, 0, 0 },

  { 1481,
    "Parameter Table Defn/TP_table/ROTATION;Rotation;integer;Rotation (degrees CCW) (absolute or incremental, depending on Rotate_Type));;;none;;",
    "Value", 1, 0, 0 },

  { 1482,
    "Parameter Table Defn/TP_table/ROTATION_CENTER;Rotate_Center;target;Target to use for rotation center (i.e. visual rotation occurs about the position defined by this target);;;none;;",
    "Value", 1, 0, 0 },

  { 1483,
    "Parameter Table Defn/TP_table/ROTATION_TYPE;Rotate_Type;integer;0 -> no rotation, 1 -> rotate specified amount, 2 -> change rotation by specified amount;;;none;;",
    "Value", 1, 0, 0 },

  { 1484,
    "Parameter Table Defn/TP_table/START_TARGET_COL;Start_Target;target;First target to appear during a trial;;;none;;",
    "Value", 1, 0, 0 },

  { 1485,
    "Parameter Table Defn/TP_table/WAIT_AT_START_COL;1st_Target_Wait;integer;Required hold time at start target (ms);;;none;;",
    "Value", 1, 0, 0 },

  { 1486,
    "Parameter Table Defn/buttons/INSTRUCT_PAUSE_BTN;Instruct-Resume;;Resume task execution after instruction display;18;22;none;;",
    "Value", 1, 0, 0 },

  { 1487,
    "Parameter Table Defn/events/E_HIT_TARGET;Target_Hit;;Subject has intercepted the target;;;none;;",
    "Value", 1, 0, 0 },

  { 1488,
    "Parameter Table Defn/events/E_MISS_TARGET;Target_Miss;;Subject shot past the target without hitting it;;;none;;",
    "Value", 1, 0, 0 },

  { 1489,
    "Parameter Table Defn/events/E_NEUTRAL_FDBK;NFB_Trial_End;;Subject has hit or exceeded the target on a no-feedback trial;;;none;;",
    "Value", 1, 0, 0 },

  { 1490,
    "Parameter Table Defn/events/E_NO_EVENT;n|a;;This event_code does not save an event in the data file, it just clears the event;;;none;;",
    "Value", 1, 0, 0 },

  { 1491,
    "Parameter Table Defn/events/E_REWARD;Reward_On;;Reward is given;;;none;;",
    "Value", 1, 0, 0 },

  { 1492,
    "Parameter Table Defn/events/E_SHOW_INSTRUCT;Show Instructions;;Trial shows instructions ;;;none;;",
    "Value", 1, 0, 0 },

  { 1493,
    "Parameter Table Defn/events/E_SHOW_SCORE;Show_Cum_Score;;Display cumulative score;;;none;;",
    "Value", 1, 0, 0 },

  { 1494,
    "Parameter Table Defn/events/E_STAY_CENTER;Stay_Center;;Subject has reached the center target and must hold;;;none;;",
    "Value", 1, 0, 0 },

  { 1495,
    "Parameter Table Defn/events/E_TARGET_ON;Target_On;;Target ON, start waiting for subject to leave centre target;;;none;;",
    "Value", 1, 0, 0 },

  { 1496, "Parameter Table Defn/target_table/COLOR;Color;colour;Color;;;none;;",
    "Value", 1, 0, 0 },

  { 1497,
    "Parameter Table Defn/target_table/HITCOLOR;Hit Color;colour;Color when the target is hit;;;none;;",
    "Value", 1, 0, 0 },

  { 1498,
    "Parameter Table Defn/target_table/LABEL;Label text;label;Default label text;;;none;;",
    "Value", 1, 0, 0 },

  { 1499,
    "Parameter Table Defn/target_table/LABEL_HEIGHT;Label Height;float;Height of the label;;;none;;",
    "Value", 1, 0, 0 },

  { 1500,
    "Parameter Table Defn/target_table/LOGICAL_RADIUS;Logical radius;float;Logical Radius;;;none;;",
    "Value", 1, 0, 0 },

  { 1501,
    "Parameter Table Defn/target_table/ROTATED_COLOR;Rotated Color;colour;Target color for rotated trials ;;;none;;",
    "Value", 1, 0, 0 },

  { 1502,
    "Parameter Table Defn/target_table/STROKE_COLOR;Stroke Color;colour;Stroke color, for return ring;;;none;;",
    "Value", 1, 0, 0 },

  { 1503,
    "Parameter Table Defn/target_table/STROKE_WIDTH;Stroke Width;float;Stroke width, for return ring;;;none;;",
    "Value", 1, 0, 0 },

  { 1504,
    "Parameter Table Defn/target_table/VISUAL_RADIUS;Visual radius;float;Display Radius;;;none;;",
    "Value", 1, 0, 0 },

  { 1505,
    "Parameter Table Defn/target_table/col_x;X;float;X Position (cm) of the target relative to  local (0,0);;;none;;",
    "Value", 1, 0, 0 },

  { 1506,
    "Parameter Table Defn/target_table/col_y;Y;float;Y Position (cm) of the target relative to  local (0,0);;;none;;",
    "Value", 1, 0, 0 },

  { 1507, "Parameter Table Defn/task_definition/INSTRUCTIONS=",
    "Value", 1, 0, 0 },

  { 1508, "Parameter Table Defn/task_definition/LOAD_FOR=EITHER",
    "Value", 1, 0, 0 },

  { 1509,
    "Parameter Table Defn/task_wide/K_FIX_LEFTHAND;Fix Left Hand Flag;integer;Flag to hold the enable the robot to hold the left (nondominant) hand in place;;;none;;",
    "Value", 1, 0, 0 },

  { 1510,
    "Parameter Table Defn/task_wide/K_INSTRUCT_TIME;Display Instructions Hold Time;integer;Time to display instructions to the screen;;;none;;",
    "Value", 1, 0, 0 },

  { 1511,
    "Parameter Table Defn/task_wide/K_LEFTHAND_TGT;Left hand target;integer;Target defining the location where the left hand is to be fixed;;;none;;",
    "Value", 1, 0, 0 },

  { 1512,
    "Parameter Table Defn/task_wide/K_RETURN_RING_ROW;ReturnRing TgtTbl Row;integer;Row of the target table to use for feedback on return to start;;;none;;",
    "Value", 1, 0, 0 },

  { 1513,
    "Parameter Table Defn/task_wide/K_REWARD_VAL;Reward Value (cents);integer;Amount of reward offered on each trial, in cents;;;none;;",
    "Value", 1, 0, 0 },

  { 1514,
    "Parameter Table Defn/task_wide/K_ROBOT_MOVE_TIME;Robot Move Time;integer;Time the robot will move to the new position;;;none;;",
    "Value", 1, 0, 0 },

  { 1515,
    "Parameter Table Defn/task_wide/K_ROBOT_RAMP_TIME;Robot Ramp Time;integer;Time the robot will ramp up and down;;;none;;",
    "Value", 1, 0, 0 },

  { 1516,
    "Parameter Table Defn/task_wide/K_SCORETEXT_ROW;Score Text TgtTbl Row;integer;Row of the target table to use for score text display;;;none;;",
    "Value", 1, 0, 0 },

  { 1517,
    "Parameter Table Defn/task_wide/K_SCORE_TIME;Display Score Hold Time ;integer;Time to display the cumulative score (e.g., at the end of the session);;;none;;",
    "Value", 1, 0, 0 },

  { 1518,
    "Parameter Table Defn/task_wide/K_TONE_HIT_DURATION;Hit tone duration;integer;Duration of the feedback tone when the target is hit;;;none;;",
    "Value", 1, 0, 0 },

  { 1519,
    "Parameter Table Defn/task_wide/K_TONE_HIT_FREQUENCY;Hit tone frequency;integer;Frequency of the feedback tone when the target is hit;;;none;;",
    "Value", 1, 0, 0 },

  { 1520,
    "Parameter Table Defn/task_wide/K_TONE_NEUTRAL_DURATION;Neutral tone duration;integer;Duration of the neutral feedback tone indicating end of trial;;;none;;",
    "Value", 1, 0, 0 },

  { 1521,
    "Parameter Table Defn/task_wide/K_TONE_NEUTRAL_FREQUENCY;Neutral tone frequency;integer;Frequency of the neutral feedback tone indicating end of trial;;;none;;",
    "Value", 1, 0, 0 },

  { 1522,
    "Parameter Table Defn/task_wide/K_UNUSED;Unused;integer;Not currently used;;;none;;",
    "Value", 1, 0, 0 },

  { 1523,
    "Parameter Table Defn/task_wide/K_VIS_RAD;Visible Radius;float;Radius from the start target that the hand will always be visible (m);;;none;;",
    "Value", 1, 0, 0 },

  { 1524, "Play Sound/Subsystem2/Constant1",
    "Value", 1, 90, 0 },

  { 1525, "Play Sound/Subsystem4/Constant1",
    "Value", 1, 91, 0 },

  { 1526, "Process_Video_CMD/Add_requested_Delay/500 hz",
    "Value", 1, 0, 0 },

  { 1527, "Process_Video_CMD/PVC_core/Rate Transition1",
    "X0", 1, 0, 0 },

  { 1528, "Subsystem/KINARM_Exo_Position_Controller/Rate Transition1",
    "X0", 1, 0, 0 },

  { 1529, "Subsystem/KINARM_Exo_Position_Controller/Rate Transition2",
    "X0", 1, 0, 0 },

  { 1530, "Subsystem/KINARM_Exo_Position_Controller/Rate Transition4",
    "X0", 1, 0, 0 },

  { 1531, "Subsystem/Show_Target/padder",
    "Value", 1, 84, 0 },

  { 1532, "Subsystem/Show_Target/state2_indices",
    "Value", 1, 74, 0 },

  { 1533, "Subsystem/Show_Target/state3_indices",
    "Value", 1, 74, 0 },

  { 1534, "Subsystem/Show_Target/state4_indices",
    "Value", 1, 74, 0 },

  { 1535, "Subsystem/Show_Target/state5_indices",
    "Value", 1, 74, 0 },

  { 1536, "Subsystem/Show_Target/xpos_index",
    "Value", 1, 0, 0 },

  { 1537, "Subsystem/Show_Target/ypos_index",
    "Value", 1, 0, 0 },

  { 1538, "Visual_Rotation/Show_Target/padder",
    "Value", 1, 84, 0 },

  { 1539, "Visual_Rotation/Show_Target/state2_indices",
    "Value", 1, 74, 0 },

  { 1540, "Visual_Rotation/Show_Target/state3_indices",
    "Value", 1, 74, 0 },

  { 1541, "Visual_Rotation/Show_Target/state4_indices",
    "Value", 1, 74, 0 },

  { 1542, "Visual_Rotation/Show_Target/state5_indices",
    "Value", 1, 74, 0 },

  { 1543, "Visual_Rotation/Show_Target/xpos_index",
    "Value", 1, 0, 0 },

  { 1544, "Visual_Rotation/Show_Target/ypos_index",
    "Value", 1, 0, 0 },

  { 1545, "Visual_Rotation/Show_Target1/padder",
    "Value", 1, 84, 0 },

  { 1546, "Visual_Rotation/Show_Target1/state2_indices",
    "Value", 1, 74, 0 },

  { 1547, "Visual_Rotation/Show_Target1/state3_indices",
    "Value", 1, 74, 0 },

  { 1548, "Visual_Rotation/Show_Target1/state4_indices",
    "Value", 1, 74, 0 },

  { 1549, "Visual_Rotation/Show_Target1/state5_indices",
    "Value", 1, 74, 0 },

  { 1550, "Visual_Rotation/Show_Target1/xpos_index",
    "Value", 1, 0, 0 },

  { 1551, "Visual_Rotation/Show_Target1/ypos_index",
    "Value", 1, 0, 0 },

  { 1552, "Visual_Rotation/Show_Target2/padder",
    "Value", 1, 84, 0 },

  { 1553, "Visual_Rotation/Show_Target2/state2_indices",
    "Value", 1, 74, 0 },

  { 1554, "Visual_Rotation/Show_Target2/state3_indices",
    "Value", 1, 74, 0 },

  { 1555, "Visual_Rotation/Show_Target2/state4_indices",
    "Value", 1, 74, 0 },

  { 1556, "Visual_Rotation/Show_Target2/state5_indices",
    "Value", 1, 74, 0 },

  { 1557, "Visual_Rotation/Show_Target2/xpos_index",
    "Value", 1, 0, 0 },

  { 1558, "Visual_Rotation/Show_Target2/ypos_index",
    "Value", 1, 0, 0 },

  { 1559,
    "DataLogging/Create Task State Subsystem/Counter Free-Running/Wrap To Zero",
    "Threshold", 3, 0, 0 },

  { 1560, "DataLogging/Create Task State Subsystem/Counter Free-Running/Output",
    "InitialCondition", 3, 0, 0 },

  { 1561,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Constant",
    "Value", 5, 91, 0 },

  { 1562,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Constant1",
    "Value", 1, 0, 0 },

  { 1563,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Max Frames Per Packet",
    "Value", 1, 0, 0 },

  { 1564, "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/t-1",
    "X0", 5, 0, 0 },

  { 1565, "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/t-2",
    "X0", 5, 0, 0 },

  { 1566, "DataLogging/Network Transfer Subsystem/UDP Receiver/Memory2",
    "X0", 1, 0, 0 },

  { 1567, "DataLogging/Network Transfer Subsystem/UDP Receiver/Rate Transition2",
    "X0", 1, 0, 0 },

  { 1568, "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive",
    "P1", 1, 92, 0 },

  { 1569, "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive",
    "P2", 1, 0, 0 },

  { 1570, "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive",
    "P3", 1, 0, 0 },

  { 1571, "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive",
    "P4", 1, 0, 0 },

  { 1572, "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive",
    "P5", 1, 0, 0 },

  { 1573,
    "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset",
    "P1", 1, 83, 0 },

  { 1574,
    "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset",
    "P2", 1, 0, 0 },

  { 1575,
    "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset",
    "P3", 1, 0, 0 },

  { 1576,
    "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset",
    "P4", 1, 0, 0 },

  { 1577,
    "DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset",
    "P5", 1, 0, 0 },

  { 1578,
    "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/total_packets_sent",
    "InitialOutput", 3, 0, 0 },

  { 1579, "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Send",
    "P1", 1, 83, 0 },

  { 1580, "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Send",
    "P2", 1, 0, 0 },

  { 1581, "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Send",
    "P3", 1, 0, 0 },

  { 1582, "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Send",
    "P4", 1, 0, 0 },

  { 1583, "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Send",
    "P5", 1, 0, 0 },

  { 1584, "DataLogging/Poll Force Plates/plate1/Receive",
    "P1", 1, 93, 0 },

  { 1585, "DataLogging/Poll Force Plates/plate1/Receive",
    "P2", 1, 0, 0 },

  { 1586, "DataLogging/Poll Force Plates/plate1/Receive",
    "P3", 1, 0, 0 },

  { 1587, "DataLogging/Poll Force Plates/plate1/Receive",
    "P4", 1, 0, 0 },

  { 1588, "DataLogging/Poll Force Plates/plate1/Receive",
    "P5", 1, 0, 0 },

  { 1589, "DataLogging/Poll Force Plates/plate2/Receive1",
    "P1", 1, 93, 0 },

  { 1590, "DataLogging/Poll Force Plates/plate2/Receive1",
    "P2", 1, 0, 0 },

  { 1591, "DataLogging/Poll Force Plates/plate2/Receive1",
    "P3", 1, 0, 0 },

  { 1592, "DataLogging/Poll Force Plates/plate2/Receive1",
    "P4", 1, 0, 0 },

  { 1593, "DataLogging/Poll Force Plates/plate2/Receive1",
    "P5", 1, 0, 0 },

  { 1594, "DataLogging/Poll Force Plates/send poll 1/Send",
    "P1", 1, 93, 0 },

  { 1595, "DataLogging/Poll Force Plates/send poll 1/Send",
    "P2", 1, 0, 0 },

  { 1596, "DataLogging/Poll Force Plates/send poll 1/Send",
    "P3", 1, 0, 0 },

  { 1597, "DataLogging/Poll Force Plates/send poll 1/Send",
    "P4", 1, 0, 0 },

  { 1598, "DataLogging/Poll Force Plates/send poll 1/Send",
    "P5", 1, 0, 0 },

  { 1599, "DataLogging/Poll Force Plates/send poll 2/Send1",
    "P1", 1, 93, 0 },

  { 1600, "DataLogging/Poll Force Plates/send poll 2/Send1",
    "P2", 1, 0, 0 },

  { 1601, "DataLogging/Poll Force Plates/send poll 2/Send1",
    "P3", 1, 0, 0 },

  { 1602, "DataLogging/Poll Force Plates/send poll 2/Send1",
    "P4", 1, 0, 0 },

  { 1603, "DataLogging/Poll Force Plates/send poll 2/Send1",
    "P5", 1, 0, 0 },

  { 1604, "DataLogging/Poll KINARM/EtherCAT Subsystem/Compare",
    "const", 3, 0, 0 },

  { 1605, "DataLogging/Poll KINARM/EtherCAT Subsystem/PCI Bus Slot",
    "Value", 2, 73, 0 },

  { 1606, "DataLogging/Poll KINARM/EtherCAT Subsystem/activation",
    "Value", 2, 73, 0 },

  { 1607, "DataLogging/Poll KINARM/EtherCAT Subsystem/ep part nums",
    "Value", 1, 77, 0 },

  { 1608, "DataLogging/Poll KINARM/EtherCAT Subsystem/exo part nums",
    "Value", 1, 77, 0 },

  { 1609, "DataLogging/Poll KINARM/EtherCAT Subsystem/force primary only",
    "Value", 1, 0, 0 },

  { 1610, "DataLogging/Poll KINARM/EtherCAT Subsystem/max errors to fault",
    "Value", 1, 0, 0 },

  { 1611, "DataLogging/Poll KINARM/EtherCAT Subsystem/nhp part nums",
    "Value", 1, 77, 0 },

  { 1612, "DataLogging/Poll KINARM/EtherCAT Subsystem/Switch",
    "Threshold", 2, 0, 0 },

  { 1613, "DataLogging/Poll KINARM/bkin_internal_testing/ispmac1",
    "const", 1, 0, 0 },

  { 1614, "DataLogging/Poll KINARM/constants/update constants",
    "Value", 1, 0, 0 },

  { 1615, "DataLogging/Poll KINARM/createKINData/Dominant Arm",
    "Value", 1, 0, 0 },

  { 1616, "DataLogging/Poll KINARM/createKINData/step time",
    "Value", 1, 0, 0 },

  { 1617,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Detect Increase",
    "vinit", 0, 0, 0 },

  { 1618,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative",
    "ICPrevScaledInput", 1, 0, 0 },

  { 1619,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative1",
    "ICPrevScaledInput", 1, 0, 0 },

  { 1620, "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Constant",
    "Value", 1, 73, 0 },

  { 1621, "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Switch",
    "Threshold", 1, 0, 0 },

  { 1622, "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Switch1",
    "Threshold", 4, 0, 0 },

  { 1623, "Subsystem/KINARM_Exo_Position_Controller/KINARM filter/Constant",
    "Value", 1, 0, 0 },

  { 1624,
    "DataLogging/Create Task State Subsystem/Counter Free-Running/Increment Real World/FixPt Constant",
    "Value", 3, 0, 0 },

  { 1625,
    "DataLogging/Create Task State Subsystem/Counter Free-Running/Wrap To Zero/Constant",
    "Value", 3, 0, 0 },

  { 1626,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Counter/Constant",
    "Value", 1, 0, 0 },

  { 1627,
    "DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Counter/Unit Delay",
    "InitialCondition", 1, 0, 0 },

  { 1628,
    "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Wrap To Zero",
    "Threshold", 3, 0, 0 },

  { 1629,
    "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Output",
    "InitialCondition", 3, 0, 0 },

  { 1630, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Torque Mode",
    "Value", 8, 0, 0 },

  { 1631, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/enableCalibration",
    "Value", 1, 0, 0 },

  { 1632, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/enableMotors",
    "Value", 1, 0, 0 },

  { 1633, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/readTrigger",
    "Value", 2, 0, 0 },

  { 1634, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Memory2",
    "X0", 1, 0, 0 },

  { 1635, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Memory3",
    "X0", 1, 0, 0 },

  { 1636,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ",
    "P1", 1, 94, 0 },

  { 1637,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ",
    "P2", 1, 0, 0 },

  { 1638,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ",
    "P3", 1, 0, 0 },

  { 1639,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ",
    "P4", 1, 0, 0 },

  { 1640,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ",
    "P5", 1, 0, 0 },

  { 1641,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ",
    "P6", 1, 0, 0 },

  { 1642,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ",
    "P7", 1, 0, 0 },

  { 1643,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1",
    "P1", 1, 94, 0 },

  { 1644,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1",
    "P2", 1, 0, 0 },

  { 1645,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1",
    "P3", 1, 0, 0 },

  { 1646,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1",
    "P4", 1, 0, 0 },

  { 1647,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1",
    "P5", 1, 0, 0 },

  { 1648,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1",
    "P6", 1, 0, 0 },

  { 1649,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1",
    "P7", 1, 0, 0 },

  { 1650, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Torque Mode",
    "Value", 8, 0, 0 },

  { 1651, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/enableCalibration",
    "Value", 1, 0, 0 },

  { 1652, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/enableMotors",
    "Value", 1, 0, 0 },

  { 1653, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/readTrigger",
    "Value", 2, 0, 0 },

  { 1654, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Memory2",
    "X0", 1, 0, 0 },

  { 1655, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Memory3",
    "X0", 1, 0, 0 },

  { 1656,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ",
    "P1", 1, 94, 0 },

  { 1657,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ",
    "P2", 1, 0, 0 },

  { 1658,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ",
    "P3", 1, 0, 0 },

  { 1659,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ",
    "P4", 1, 0, 0 },

  { 1660,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ",
    "P5", 1, 0, 0 },

  { 1661,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ",
    "P6", 1, 0, 0 },

  { 1662,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ",
    "P7", 1, 0, 0 },

  { 1663,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1",
    "P1", 1, 94, 0 },

  { 1664,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1",
    "P2", 1, 0, 0 },

  { 1665,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1",
    "P3", 1, 0, 0 },

  { 1666,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1",
    "P4", 1, 0, 0 },

  { 1667,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1",
    "P5", 1, 0, 0 },

  { 1668,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1",
    "P6", 1, 0, 0 },

  { 1669,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1",
    "P7", 1, 0, 0 },

  { 1670,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Wrap To Zero",
    "Threshold", 3, 0, 0 },

  { 1671,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Output",
    "InitialCondition", 3, 0, 0 },

  { 1672,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ",
    "P1", 1, 95, 0 },

  { 1673,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ",
    "P2", 1, 0, 0 },

  { 1674,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ",
    "P3", 1, 0, 0 },

  { 1675,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ",
    "P4", 1, 0, 0 },

  { 1676,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ",
    "P5", 1, 0, 0 },

  { 1677,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ",
    "P6", 1, 0, 0 },

  { 1678,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ",
    "P7", 1, 0, 0 },

  { 1679,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1",
    "P1", 1, 95, 0 },

  { 1680,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1",
    "P2", 1, 0, 0 },

  { 1681,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1",
    "P3", 1, 0, 0 },

  { 1682,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1",
    "P4", 1, 0, 0 },

  { 1683,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1",
    "P5", 1, 0, 0 },

  { 1684,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1",
    "P6", 1, 0, 0 },

  { 1685,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1",
    "P7", 1, 0, 0 },

  { 1686,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2",
    "P1", 1, 95, 0 },

  { 1687,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2",
    "P2", 1, 0, 0 },

  { 1688,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2",
    "P3", 1, 0, 0 },

  { 1689,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2",
    "P4", 1, 0, 0 },

  { 1690,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2",
    "P5", 1, 0, 0 },

  { 1691,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2",
    "P6", 1, 0, 0 },

  { 1692,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2",
    "P7", 1, 0, 0 },

  { 1693,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3",
    "P1", 1, 95, 0 },

  { 1694,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3",
    "P2", 1, 0, 0 },

  { 1695,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3",
    "P3", 1, 0, 0 },

  { 1696,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3",
    "P4", 1, 0, 0 },

  { 1697,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3",
    "P5", 1, 0, 0 },

  { 1698,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3",
    "P6", 1, 0, 0 },

  { 1699,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3",
    "P7", 1, 0, 0 },

  { 1700, "DataLogging/Poll KINARM/EtherCAT Subsystem/update/Constant",
    "Value", 1, 0, 0 },

  { 1701, "DataLogging/Poll KINARM/EtherCAT Subsystem/update/Constant1",
    "Value", 3, 0, 0 },

  { 1702,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Detect Change",
    "vinit", 1, 0, 0 },

  { 1703,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Constant",
    "Value", 1, 88, 0 },

  { 1704,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor",
    "P1", 1, 96, 0 },

  { 1705,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor",
    "P2", 1, 0, 0 },

  { 1706,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor",
    "P3", 1, 0, 0 },

  { 1707,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor",
    "P4", 1, 0, 0 },

  { 1708,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor",
    "P5", 1, 0, 0 },

  { 1709,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Switch",
    "Threshold", 1, 0, 0 },

  { 1710,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Detect Change",
    "vinit", 1, 0, 0 },

  { 1711,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Constant1",
    "Value", 1, 88, 0 },

  { 1712,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor",
    "P1", 1, 96, 0 },

  { 1713,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor",
    "P2", 1, 0, 0 },

  { 1714,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor",
    "P3", 1, 0, 0 },

  { 1715,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor",
    "P4", 1, 0, 0 },

  { 1716,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor",
    "P5", 1, 0, 0 },

  { 1717,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Switch1",
    "Threshold", 1, 0, 0 },

  { 1718, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/robot_count",
    "Value", 1, 0, 0 },

  { 1719, "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/step duration",
    "Value", 1, 0, 0 },

  { 1720,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/servo counter",
    "InitialOutput", 3, 0, 0 },

  { 1721,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/EP calibration btn",
    "InitialOutput", 3, 0, 0 },

  { 1722,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Status bits",
    "InitialOutput", 3, 63, 0 },

  { 1723,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/MATLAB Function",
    "BKIN_STEP_TIME", 1, 0, 0 },

  { 1724, "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Constant",
    "Value", 3, 0, 0 },

  { 1725, "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Constant1",
    "Value", 3, 63, 0 },

  { 1726, "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive",
    "P1", 1, 83, 0 },

  { 1727, "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive",
    "P2", 1, 0, 0 },

  { 1728, "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive",
    "P3", 1, 0, 0 },

  { 1729, "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive",
    "P4", 1, 0, 0 },

  { 1730, "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive",
    "P5", 1, 0, 0 },

  { 1731, "DataLogging/Poll KINARM/bkin_internal_testing/Data write/Constant",
    "Value", 1, 5, 0 },

  { 1732, "DataLogging/Poll KINARM/constants/arm1/Arm Elbow Angle Offset",
    "Value", 1, 0, 0 },

  { 1733, "DataLogging/Poll KINARM/constants/arm1/Arm Encoder Orientation 1",
    "Value", 1, 0, 0 },

  { 1734, "DataLogging/Poll KINARM/constants/arm1/Arm Encoder Orientation 2",
    "Value", 1, 0, 0 },

  { 1735, "DataLogging/Poll KINARM/constants/arm1/Arm Force Sensor Angle Offset",
    "Value", 1, 0, 0 },

  { 1736, "DataLogging/Poll KINARM/constants/arm1/Arm L1",
    "Value", 1, 0, 0 },

  { 1737, "DataLogging/Poll KINARM/constants/arm1/Arm L2",
    "Value", 1, 0, 0 },

  { 1738, "DataLogging/Poll KINARM/constants/arm1/Arm L2 L5 Angle",
    "Value", 1, 0, 0 },

  { 1739, "DataLogging/Poll KINARM/constants/arm1/Arm L3 Error",
    "Value", 1, 0, 0 },

  { 1740, "DataLogging/Poll KINARM/constants/arm1/Arm L5",
    "Value", 1, 0, 0 },

  { 1741, "DataLogging/Poll KINARM/constants/arm1/Arm Motor1 Gear Ratio",
    "Value", 1, 0, 0 },

  { 1742, "DataLogging/Poll KINARM/constants/arm1/Arm Motor1 Orientation",
    "Value", 1, 0, 0 },

  { 1743, "DataLogging/Poll KINARM/constants/arm1/Arm Motor2 Gear Ratio",
    "Value", 1, 0, 0 },

  { 1744, "DataLogging/Poll KINARM/constants/arm1/Arm Motor2 Orientation",
    "Value", 1, 0, 0 },

  { 1745, "DataLogging/Poll KINARM/constants/arm1/Arm Orientation",
    "Value", 1, 0, 0 },

  { 1746, "DataLogging/Poll KINARM/constants/arm1/Arm Pointer Offset",
    "Value", 1, 0, 0 },

  { 1747, "DataLogging/Poll KINARM/constants/arm1/Arm Secondary Encoders",
    "Value", 1, 0, 0 },

  { 1748, "DataLogging/Poll KINARM/constants/arm1/Arm Shoulder Angle Offset",
    "Value", 1, 0, 0 },

  { 1749, "DataLogging/Poll KINARM/constants/arm1/Arm Shoulder X",
    "Value", 1, 0, 0 },

  { 1750, "DataLogging/Poll KINARM/constants/arm1/Arm Shoulder Y",
    "Value", 1, 0, 0 },

  { 1751, "DataLogging/Poll KINARM/constants/arm1/Arm Torque Constant",
    "Value", 1, 0, 0 },

  { 1752, "DataLogging/Poll KINARM/constants/arm1/Arm primary encoder counts",
    "Value", 1, 0, 0 },

  { 1753, "DataLogging/Poll KINARM/constants/arm1/Arm robot type",
    "Value", 1, 0, 0 },

  { 1754, "DataLogging/Poll KINARM/constants/arm1/Arm robot version",
    "Value", 1, 0, 0 },

  { 1755, "DataLogging/Poll KINARM/constants/arm1/Arm secondary encoder counts",
    "Value", 1, 0, 0 },

  { 1756, "DataLogging/Poll KINARM/constants/arm2/Arm Elbow Angle Offset",
    "Value", 1, 0, 0 },

  { 1757, "DataLogging/Poll KINARM/constants/arm2/Arm Encoder Orientation 1",
    "Value", 1, 0, 0 },

  { 1758, "DataLogging/Poll KINARM/constants/arm2/Arm Encoder Orientation 2",
    "Value", 1, 0, 0 },

  { 1759, "DataLogging/Poll KINARM/constants/arm2/Arm Force Sensor Angle Offset",
    "Value", 1, 0, 0 },

  { 1760, "DataLogging/Poll KINARM/constants/arm2/Arm L1",
    "Value", 1, 0, 0 },

  { 1761, "DataLogging/Poll KINARM/constants/arm2/Arm L2",
    "Value", 1, 0, 0 },

  { 1762, "DataLogging/Poll KINARM/constants/arm2/Arm L2 L5 Angle",
    "Value", 1, 0, 0 },

  { 1763, "DataLogging/Poll KINARM/constants/arm2/Arm L3 Error",
    "Value", 1, 0, 0 },

  { 1764, "DataLogging/Poll KINARM/constants/arm2/Arm L5",
    "Value", 1, 0, 0 },

  { 1765, "DataLogging/Poll KINARM/constants/arm2/Arm Motor1 Gear Ratio",
    "Value", 1, 0, 0 },

  { 1766, "DataLogging/Poll KINARM/constants/arm2/Arm Motor1 Orientation",
    "Value", 1, 0, 0 },

  { 1767, "DataLogging/Poll KINARM/constants/arm2/Arm Motor2 Gear Ratio",
    "Value", 1, 0, 0 },

  { 1768, "DataLogging/Poll KINARM/constants/arm2/Arm Motor2 Orientation",
    "Value", 1, 0, 0 },

  { 1769, "DataLogging/Poll KINARM/constants/arm2/Arm Orientation",
    "Value", 1, 0, 0 },

  { 1770, "DataLogging/Poll KINARM/constants/arm2/Arm Pointer Offset",
    "Value", 1, 0, 0 },

  { 1771, "DataLogging/Poll KINARM/constants/arm2/Arm Secondary Encoders",
    "Value", 1, 0, 0 },

  { 1772, "DataLogging/Poll KINARM/constants/arm2/Arm Shoulder Angle Offset",
    "Value", 1, 0, 0 },

  { 1773, "DataLogging/Poll KINARM/constants/arm2/Arm Shoulder X",
    "Value", 1, 0, 0 },

  { 1774, "DataLogging/Poll KINARM/constants/arm2/Arm Shoulder Y",
    "Value", 1, 0, 0 },

  { 1775, "DataLogging/Poll KINARM/constants/arm2/Arm Torque Constant",
    "Value", 1, 0, 0 },

  { 1776, "DataLogging/Poll KINARM/constants/arm2/Arm primary encoder counts",
    "Value", 1, 0, 0 },

  { 1777, "DataLogging/Poll KINARM/constants/arm2/Arm robot type",
    "Value", 1, 0, 0 },

  { 1778, "DataLogging/Poll KINARM/constants/arm2/Arm robot version",
    "Value", 1, 0, 0 },

  { 1779, "DataLogging/Poll KINARM/constants/arm2/Arm secondary encoder counts",
    "Value", 1, 0, 0 },

  { 1780,
    "DataLogging/Poll KINARM/constants/update constants subsystem/Arm Force Sensors",
    "Value", 1, 73, 0 },

  { 1781,
    "DataLogging/Poll KINARM/createKINData/Counter Free-Running/Wrap To Zero",
    "Threshold", 3, 0, 0 },

  { 1782, "DataLogging/Poll KINARM/createKINData/Counter Free-Running/Output",
    "InitialCondition", 3, 0, 0 },

  { 1783,
    "DataLogging/Poll KINARM/createKINData/hand feedback/Gaze Feedback Status",
    "Value", 1, 0, 0 },

  { 1784,
    "DataLogging/Poll KINARM/createKINData/hand feedback/Hand Feedback Colour",
    "Value", 1, 0, 0 },

  { 1785,
    "DataLogging/Poll KINARM/createKINData/hand feedback/Hand Feedback Feed Forward",
    "Value", 1, 0, 0 },

  { 1786,
    "DataLogging/Poll KINARM/createKINData/hand feedback/Hand Feedback Radius",
    "Value", 1, 0, 0 },

  { 1787,
    "DataLogging/Poll KINARM/createKINData/hand feedback/Hand Feedback Source",
    "Value", 1, 0, 0 },

  { 1788,
    "DataLogging/Poll KINARM/createKINData/hand feedback/Hand Feedback Status",
    "Value", 1, 0, 0 },

  { 1789,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P1", 1, 97, 0 },

  { 1790,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P2", 1, 0, 0 },

  { 1791,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P3", 1, 0, 0 },

  { 1792,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P4", 1, 0, 0 },

  { 1793,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P5", 1, 0, 0 },

  { 1794,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P6", 1, 0, 0 },

  { 1795,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P7", 1, 0, 0 },

  { 1796,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P1", 1, 97, 0 },

  { 1797,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P2", 1, 0, 0 },

  { 1798,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P3", 1, 0, 0 },

  { 1799,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P4", 1, 0, 0 },

  { 1800,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P5", 1, 0, 0 },

  { 1801,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P6", 1, 0, 0 },

  { 1802,
    "DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P7", 1, 0, 0 },

  { 1803,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P1", 1, 97, 0 },

  { 1804,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P2", 1, 0, 0 },

  { 1805,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P3", 1, 0, 0 },

  { 1806,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P4", 1, 0, 0 },

  { 1807,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P5", 1, 0, 0 },

  { 1808,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P6", 1, 0, 0 },

  { 1809,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1",
    "P7", 1, 0, 0 },

  { 1810,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P1", 1, 97, 0 },

  { 1811,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P2", 1, 0, 0 },

  { 1812,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P3", 1, 0, 0 },

  { 1813,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P4", 1, 0, 0 },

  { 1814,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P5", 1, 0, 0 },

  { 1815,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P6", 1, 0, 0 },

  { 1816,
    "DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2",
    "P7", 1, 0, 0 },

  { 1817,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative/TSamp",
    "WtEt", 1, 0, 0 },

  { 1818,
    "Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative1/TSamp",
    "WtEt", 1, 0, 0 },

  { 1819,
    "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Increment Real World/FixPt Constant",
    "Value", 3, 0, 0 },

  { 1820,
    "DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Wrap To Zero/Constant",
    "Value", 3, 0, 0 },

  { 1821,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Compare To Constant",
    "const", 2, 0, 0 },

  { 1822, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/MotorIdx",
    "Value", 1, 0, 0 },

  { 1823, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Memory",
    "X0", 1, 0, 0 },

  { 1824,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ",
    "P1", 1, 98, 0 },

  { 1825,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ",
    "P2", 1, 0, 0 },

  { 1826,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ",
    "P3", 1, 0, 0 },

  { 1827,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ",
    "P4", 1, 0, 0 },

  { 1828,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ",
    "P5", 1, 0, 0 },

  { 1829,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ",
    "P6", 1, 0, 0 },

  { 1830,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ",
    "P7", 1, 0, 0 },

  { 1831, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Compare",
    "const", 2, 0, 0 },

  { 1832, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/MotorIdx",
    "Value", 1, 0, 0 },

  { 1833, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Memory",
    "X0", 1, 0, 0 },

  { 1834,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ",
    "P1", 1, 98, 0 },

  { 1835,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ",
    "P2", 1, 0, 0 },

  { 1836,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ",
    "P3", 1, 0, 0 },

  { 1837,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ",
    "P4", 1, 0, 0 },

  { 1838,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ",
    "P5", 1, 0, 0 },

  { 1839,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ",
    "P6", 1, 0, 0 },

  { 1840,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ",
    "P7", 1, 0, 0 },

  { 1841,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/Memory",
    "X0", 2, 0, 0 },

  { 1842,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/Memory1",
    "X0", 2, 0, 0 },

  { 1843,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/Memory",
    "X0", 2, 0, 0 },

  { 1844,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/Memory1",
    "X0", 2, 0, 0 },

  { 1845,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/readAddr",
    "Value", 1, 79, 0 },

  { 1846, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Memory",
    "X0", 1, 0, 0 },

  { 1847,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/writeData",
    "Value", 1, 85, 0 },

  { 1848, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/Memory",
    "X0", 2, 0, 0 },

  { 1849,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory",
    "X0", 2, 0, 0 },

  { 1850,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory1",
    "X0", 1, 0, 0 },

  { 1851,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory2",
    "X0", 1, 0, 0 },

  { 1852, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Compare",
    "const", 2, 0, 0 },

  { 1853, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/MotorIdx",
    "Value", 1, 0, 0 },

  { 1854, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Memory",
    "X0", 1, 0, 0 },

  { 1855,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ",
    "P1", 1, 98, 0 },

  { 1856,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ",
    "P2", 1, 0, 0 },

  { 1857,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ",
    "P3", 1, 0, 0 },

  { 1858,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ",
    "P4", 1, 0, 0 },

  { 1859,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ",
    "P5", 1, 0, 0 },

  { 1860,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ",
    "P6", 1, 0, 0 },

  { 1861,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ",
    "P7", 1, 0, 0 },

  { 1862, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Compare",
    "const", 2, 0, 0 },

  { 1863, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/MotorIdx",
    "Value", 1, 0, 0 },

  { 1864, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Memory",
    "X0", 1, 0, 0 },

  { 1865,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ",
    "P1", 1, 98, 0 },

  { 1866,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ",
    "P2", 1, 0, 0 },

  { 1867,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ",
    "P3", 1, 0, 0 },

  { 1868,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ",
    "P4", 1, 0, 0 },

  { 1869,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ",
    "P5", 1, 0, 0 },

  { 1870,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ",
    "P6", 1, 0, 0 },

  { 1871,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ",
    "P7", 1, 0, 0 },

  { 1872,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/Memory",
    "X0", 2, 0, 0 },

  { 1873,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/Memory1",
    "X0", 2, 0, 0 },

  { 1874,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/Memory",
    "X0", 2, 0, 0 },

  { 1875,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/Memory1",
    "X0", 2, 0, 0 },

  { 1876,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/readAddr",
    "Value", 1, 79, 0 },

  { 1877, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Memory",
    "X0", 1, 0, 0 },

  { 1878,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/writeData",
    "Value", 1, 85, 0 },

  { 1879, "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/Memory",
    "X0", 2, 0, 0 },

  { 1880,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory",
    "X0", 2, 0, 0 },

  { 1881,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory1",
    "X0", 1, 0, 0 },

  { 1882,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory2",
    "X0", 1, 0, 0 },

  { 1883,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Increment Real World/FixPt Constant",
    "Value", 3, 0, 0 },

  { 1884,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Wrap To Zero/Constant",
    "Value", 3, 0, 0 },

  { 1885,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/update/create filtered velocities/2nd order butterworth, 4Khz, 10hz cutoff",
    "Value", 1, 79, 0 },

  { 1886,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Constant",
    "Value", 7, 0, 0 },

  { 1887,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Constant1",
    "Value", 3, 0, 0 },

  { 1888,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Constant2",
    "Value", 7, 0, 0 },

  { 1889,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Constant3",
    "Value", 7, 0, 0 },

  { 1890,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Send",
    "P1", 1, 96, 0 },

  { 1891,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Send",
    "P2", 1, 0, 0 },

  { 1892,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Send",
    "P3", 1, 0, 0 },

  { 1893,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Send",
    "P4", 1, 0, 0 },

  { 1894,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Send",
    "P5", 1, 0, 0 },

  { 1895,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Switch",
    "Threshold", 1, 0, 0 },

  { 1896,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Constant",
    "Value", 7, 0, 0 },

  { 1897,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Constant1",
    "Value", 3, 0, 0 },

  { 1898,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Constant2",
    "Value", 7, 0, 0 },

  { 1899,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Constant3",
    "Value", 7, 0, 0 },

  { 1900,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Send",
    "P1", 1, 96, 0 },

  { 1901,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Send",
    "P2", 1, 0, 0 },

  { 1902,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Send",
    "P3", 1, 0, 0 },

  { 1903,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Send",
    "P4", 1, 0, 0 },

  { 1904,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Send",
    "P5", 1, 0, 0 },

  { 1905,
    "DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Switch",
    "Threshold", 1, 0, 0 },

  { 1906,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM Read Offset",
    "Value", 1, 0, 0 },

  { 1907,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM WatchDog offset",
    "Value", 1, 0, 0 },

  { 1908,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM Write Offset",
    "Value", 1, 0, 0 },

  { 1909,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM Write Value",
    "Value", 1, 0, 0 },

  { 1910,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read Switch",
    "Value", 1, 0, 0 },

  { 1911,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read as UInt32",
    "Value", 1, 0, 0 },

  { 1912,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Write Switch",
    "Value", 1, 0, 0 },

  { 1913,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM Read Value",
    "Gain", 1, 0, 0 },

  { 1914,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Unit Delay",
    "InitialCondition", 1, 0, 0 },

  { 1915,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Unit Delay1",
    "InitialCondition", 1, 0, 0 },

  { 1916,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Wrap To Zero",
    "Threshold", 3, 0, 0 },

  { 1917,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Output",
    "InitialCondition", 3, 0, 0 },

  { 1918,
    "DataLogging/Poll KINARM/createKINData/Counter Free-Running/Increment Real World/FixPt Constant",
    "Value", 3, 0, 0 },

  { 1919,
    "DataLogging/Poll KINARM/createKINData/Counter Free-Running/Wrap To Zero/Constant",
    "Value", 3, 0, 0 },

  { 1920,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P1", 1, 99, 0 },

  { 1921,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P2", 1, 0, 0 },

  { 1922,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P3", 1, 0, 0 },

  { 1923,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P4", 1, 0, 0 },

  { 1924,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P5", 1, 0, 0 },

  { 1925,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P6", 1, 0, 0 },

  { 1926,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P7", 1, 0, 0 },

  { 1927,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/driveID",
    "Value", 1, 0, 0 },

  { 1928,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P1", 1, 99, 0 },

  { 1929,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P2", 1, 0, 0 },

  { 1930,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P3", 1, 0, 0 },

  { 1931,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P4", 1, 0, 0 },

  { 1932,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P5", 1, 0, 0 },

  { 1933,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P6", 1, 0, 0 },

  { 1934,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P7", 1, 0, 0 },

  { 1935,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/driveID",
    "Value", 1, 0, 0 },

  { 1936,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P1", 1, 99, 0 },

  { 1937,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P2", 1, 0, 0 },

  { 1938,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P3", 1, 0, 0 },

  { 1939,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P4", 1, 0, 0 },

  { 1940,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P5", 1, 0, 0 },

  { 1941,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P6", 1, 0, 0 },

  { 1942,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive",
    "P7", 1, 0, 0 },

  { 1943,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/driveID",
    "Value", 1, 0, 0 },

  { 1944,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P1", 1, 99, 0 },

  { 1945,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P2", 1, 0, 0 },

  { 1946,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P3", 1, 0, 0 },

  { 1947,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P4", 1, 0, 0 },

  { 1948,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P5", 1, 0, 0 },

  { 1949,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P6", 1, 0, 0 },

  { 1950,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive",
    "P7", 1, 0, 0 },

  { 1951,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/driveID",
    "Value", 1, 0, 0 },

  { 1952,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Wrap To Zero",
    "Threshold", 7, 0, 0 },

  { 1953,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Output",
    "InitialCondition", 7, 0, 0 },

  { 1954,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Increment Real World/FixPt Constant",
    "Value", 3, 0, 0 },

  { 1955,
    "DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Wrap To Zero/Constant",
    "Value", 3, 0, 0 },

  { 1956,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Constant",
    "Value", 2, 0, 0 },

  { 1957,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Constant1",
    "Value", 2, 0, 0 },

  { 1958,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Memory",
    "X0", 3, 0, 0 },

  { 1959,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/Constant",
    "Value", 2, 0, 0 },

  { 1960,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/Memory",
    "X0", 2, 0, 0 },

  { 1961,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Constant",
    "Value", 3, 0, 0 },

  { 1962,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Constant1",
    "Value", 2, 0, 0 },

  { 1963,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Memory",
    "X0", 1, 0, 0 },

  { 1964,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Constant",
    "Value", 2, 0, 0 },

  { 1965,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Constant1",
    "Value", 2, 0, 0 },

  { 1966,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Memory",
    "X0", 3, 0, 0 },

  { 1967,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/Constant",
    "Value", 2, 0, 0 },

  { 1968,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/Memory",
    "X0", 2, 0, 0 },

  { 1969,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Constant",
    "Value", 3, 0, 0 },

  { 1970,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Constant1",
    "Value", 2, 0, 0 },

  { 1971,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Memory",
    "X0", 1, 0, 0 },

  { 1972,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Constant",
    "Value", 2, 0, 0 },

  { 1973,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Constant1",
    "Value", 2, 0, 0 },

  { 1974,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Memory",
    "X0", 3, 0, 0 },

  { 1975,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/Constant",
    "Value", 2, 0, 0 },

  { 1976,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/Memory",
    "X0", 2, 0, 0 },

  { 1977,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Constant",
    "Value", 3, 0, 0 },

  { 1978,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Constant1",
    "Value", 2, 0, 0 },

  { 1979,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Memory",
    "X0", 1, 0, 0 },

  { 1980,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Constant",
    "Value", 2, 0, 0 },

  { 1981,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Constant1",
    "Value", 2, 0, 0 },

  { 1982,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Memory",
    "X0", 3, 0, 0 },

  { 1983,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/Constant",
    "Value", 2, 0, 0 },

  { 1984,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/Memory",
    "X0", 2, 0, 0 },

  { 1985,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Constant",
    "Value", 3, 0, 0 },

  { 1986,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Constant1",
    "Value", 2, 0, 0 },

  { 1987,
    "DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Memory",
    "X0", 1, 0, 0 },

  { 1988,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Increment Real World/FixPt Constant",
    "Value", 7, 0, 0 },

  { 1989,
    "DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Wrap To Zero/Constant",
    "Value", 7, 0, 0 },

  {
    0, NULL, NULL, 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, NULL, 0, 0, 0 }
};

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &vmr_rwd_fix_leftarm_B.logging_enable,/* 0: Signal */
  &vmr_rwd_fix_leftarm_B.event_code,   /* 1: Signal */
  &vmr_rwd_fix_leftarm_B.targetA_row,  /* 2: Signal */
  &vmr_rwd_fix_leftarm_B.targetA_state,/* 3: Signal */
  &vmr_rwd_fix_leftarm_B.targetB_row,  /* 4: Signal */
  &vmr_rwd_fix_leftarm_B.targetB_state,/* 5: Signal */
  &vmr_rwd_fix_leftarm_B.reward_state, /* 6: Signal */
  &vmr_rwd_fix_leftarm_B.score,        /* 7: Signal */
  &vmr_rwd_fix_leftarm_B.reward,       /* 8: Signal */
  &vmr_rwd_fix_leftarm_B.fdbk_text,    /* 9: Signal */
  &vmr_rwd_fix_leftarm_B.instruct_num, /* 10: Signal */
  &vmr_rwd_fix_leftarm_B.tone,         /* 11: Signal */
  &vmr_rwd_fix_leftarm_B.rotation_on,  /* 12: Signal */
  &vmr_rwd_fix_leftarm_B.handvis_state,/* 13: Signal */
  &vmr_rwd_fix_leftarm_B.do_clamp,     /* 14: Signal */
  &vmr_rwd_fix_leftarm_B.robot_enable_controller,/* 15: Signal */
  &vmr_rwd_fix_leftarm_B.e_ApplyNewRotation,/* 16: Signal */
  &vmr_rwd_fix_leftarm_B.e_Trial_End,  /* 17: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation_b[0],/* 18: Signal */
  &vmr_rwd_fix_leftarm_B.VectorConcatenate[0],/* 19: Signal */
  &vmr_rwd_fix_leftarm_B.VectorConcatenate1[0],/* 20: Signal */
  &vmr_rwd_fix_leftarm_B.Constant,     /* 21: Signal */
  &vmr_rwd_fix_leftarm_B.VectorConcatenate[0],/* 22: Signal */
  &vmr_rwd_fix_leftarm_B.Memory[0],    /* 23: Signal */
  &vmr_rwd_fix_leftarm_B.Memory1,      /* 24: Signal */
  &vmr_rwd_fix_leftarm_B.Reshape_k[0], /* 25: Signal */
  &vmr_rwd_fix_leftarm_B.Selector2[0], /* 26: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_j,    /* 27: Signal */
  &vmr_rwd_fix_leftarm_B.readDigitaldiag[0],/* 28: Signal */
  &vmr_rwd_fix_leftarm_B.readstatus[0],/* 29: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_n[0],  /* 30: Signal */
  &vmr_rwd_fix_leftarm_B.Memory1_p,    /* 31: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_d[0],/* 32: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition1_i[0],/* 33: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition2_ea[0],/* 34: Signal */
  &vmr_rwd_fix_leftarm_B.AddTorques[0],/* 35: Signal */
  &vmr_rwd_fix_leftarm_B.Abs,          /* 36: Signal */
  &vmr_rwd_fix_leftarm_B.Sign,         /* 37: Signal */
  &vmr_rwd_fix_leftarm_B.Add,          /* 38: Signal */
  &vmr_rwd_fix_leftarm_B.VCODE_mod[0], /* 39: Signal */
  &vmr_rwd_fix_leftarm_B.Abs_c,        /* 40: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_j,/* 41: Signal */
  &vmr_rwd_fix_leftarm_B.LogicalOperator,/* 42: Signal */
  &vmr_rwd_fix_leftarm_B.Switch_h,     /* 43: Signal */
  &vmr_rwd_fix_leftarm_B.BlockDefinitions[0],/* 44: Signal */
  &vmr_rwd_fix_leftarm_B.BlockSequence[0],/* 45: Signal */
  &vmr_rwd_fix_leftarm_B.LibraryPatchVersion,/* 46: Signal */
  &vmr_rwd_fix_leftarm_B.LibraryVersion,/* 47: Signal */
  &vmr_rwd_fix_leftarm_B.LoadTable[0], /* 48: Signal */
  &vmr_rwd_fix_leftarm_B.NextBlock,    /* 49: Signal */
  &vmr_rwd_fix_leftarm_B.PauseType,    /* 50: Signal */
  &vmr_rwd_fix_leftarm_B.TaskVersion,  /* 51: Signal */
  &vmr_rwd_fix_leftarm_B.Taskwideparam[0],/* 52: Signal */
  &vmr_rwd_fix_leftarm_B.UseTaskProtocolBlockSequenceFlag,/* 53: Signal */
  &vmr_rwd_fix_leftarm_B.dlmbuildtime, /* 54: Signal */
  &vmr_rwd_fix_leftarm_B.frame_of_reference_center[0],/* 55: Signal */
  &vmr_rwd_fix_leftarm_B.xPCVersion,   /* 56: Signal */
  &vmr_rwd_fix_leftarm_B.Convert1[0],  /* 57: Signal */
  &vmr_rwd_fix_leftarm_B.Convert10[0], /* 58: Signal */
  &vmr_rwd_fix_leftarm_B.Convert11[0], /* 59: Signal */
  &vmr_rwd_fix_leftarm_B.Convert12,    /* 60: Signal */
  &vmr_rwd_fix_leftarm_B.Convert13[0], /* 61: Signal */
  &vmr_rwd_fix_leftarm_B.Convert14[0], /* 62: Signal */
  &vmr_rwd_fix_leftarm_B.Convert15,    /* 63: Signal */
  &vmr_rwd_fix_leftarm_B.Convert16,    /* 64: Signal */
  &vmr_rwd_fix_leftarm_B.Convert17,    /* 65: Signal */
  &vmr_rwd_fix_leftarm_B.Convert18,    /* 66: Signal */
  &vmr_rwd_fix_leftarm_B.Convert19_b,  /* 67: Signal */
  &vmr_rwd_fix_leftarm_B.Convert20,    /* 68: Signal */
  &vmr_rwd_fix_leftarm_B.Convert21,    /* 69: Signal */
  &vmr_rwd_fix_leftarm_B.Convert22,    /* 70: Signal */
  &vmr_rwd_fix_leftarm_B.Convert23,    /* 71: Signal */
  &vmr_rwd_fix_leftarm_B.Convert24,    /* 72: Signal */
  &vmr_rwd_fix_leftarm_B.Convert25,    /* 73: Signal */
  &vmr_rwd_fix_leftarm_B.Convert7,     /* 74: Signal */
  &vmr_rwd_fix_leftarm_B.Convert8,     /* 75: Signal */
  &vmr_rwd_fix_leftarm_B.Convert9[0],  /* 76: Signal */
  &vmr_rwd_fix_leftarm_B.MinMax,       /* 77: Signal */
  &vmr_rwd_fix_leftarm_B.TPSelector[0],/* 78: Signal */
  &vmr_rwd_fix_leftarm_B.VCODES_out[0],/* 79: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation[0],/* 80: Signal */
  &vmr_rwd_fix_leftarm_B.Reshape[0],   /* 81: Signal */
  &vmr_rwd_fix_leftarm_B.Reshape1[0],  /* 82: Signal */
  &vmr_rwd_fix_leftarm_B.distance_e[0],/* 83: Signal */
  &vmr_rwd_fix_leftarm_B.distance[0],  /* 84: Signal */
  &vmr_rwd_fix_leftarm_B.hand_k,       /* 85: Signal */
  &vmr_rwd_fix_leftarm_B.MultiportSwitch[0],/* 86: Signal */
  &vmr_rwd_fix_leftarm_B.Arm1_j[0],    /* 87: Signal */
  &vmr_rwd_fix_leftarm_B.Arm2_c[0],    /* 88: Signal */
  &vmr_rwd_fix_leftarm_B.Dominant_Arm_j,/* 89: Signal */
  &vmr_rwd_fix_leftarm_B.Hand_Pos[0],  /* 90: Signal */
  &vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down.scaling,/* 91: Signal */
  &vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down1.scaling,/* 92: Signal */
  &vmr_rwd_fix_leftarm_B.out_e[0],     /* 93: Signal */
  &vmr_rwd_fix_leftarm_B.out[0],       /* 94: Signal */
  &vmr_rwd_fix_leftarm_B.y[0],         /* 95: Signal */
  &vmr_rwd_fix_leftarm_B.down_durationms,/* 96: Signal */
  &vmr_rwd_fix_leftarm_B.up_durationms,/* 97: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_a,/* 98: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1,/* 99: Signal */
  &vmr_rwd_fix_leftarm_B.Product[0],   /* 100: Signal */
  &vmr_rwd_fix_leftarm_B.Product1[0],  /* 101: Signal */
  &vmr_rwd_fix_leftarm_B.Switch_i,     /* 102: Signal */
  &vmr_rwd_fix_leftarm_B.intarget[0],  /* 103: Signal */
  &vmr_rwd_fix_leftarm_B.hand,         /* 104: Signal */
  &vmr_rwd_fix_leftarm_B.cursor,       /* 105: Signal */
  &vmr_rwd_fix_leftarm_B.MultiportSwitch_p[0],/* 106: Signal */
  &vmr_rwd_fix_leftarm_B.Arm1[0],      /* 107: Signal */
  &vmr_rwd_fix_leftarm_B.Arm2[0],      /* 108: Signal */
  &vmr_rwd_fix_leftarm_B.ArraySelector[0],/* 109: Signal */
  &vmr_rwd_fix_leftarm_B.Array_Selector1[0],/* 110: Signal */
  &vmr_rwd_fix_leftarm_B.Dominant_Arm, /* 111: Signal */
  &vmr_rwd_fix_leftarm_B.Hand_Pos_j[0],/* 112: Signal */
  &vmr_rwd_fix_leftarm_B.output,       /* 113: Signal */
  &vmr_rwd_fix_leftarm_B.soundON,      /* 114: Signal */
  &vmr_rwd_fix_leftarm_B.last_frame_ack,/* 115: Signal */
  &vmr_rwd_fix_leftarm_B.last_perm_ack,/* 116: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenate[0],/* 117: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenate[0],/* 118: Signal */
  &vmr_rwd_fix_leftarm_B.Convert,      /* 119: Signal */
  &vmr_rwd_fix_leftarm_B.Convert1_m,   /* 120: Signal */
  &vmr_rwd_fix_leftarm_B.Gain,         /* 121: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_e,     /* 122: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenate[0],/* 123: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition2[0],/* 124: Signal */
  &vmr_rwd_fix_leftarm_B.Receive_o1[0],/* 125: Signal */
  &vmr_rwd_fix_leftarm_B.Receive_o2,   /* 126: Signal */
  &vmr_rwd_fix_leftarm_B.Unpack_c,     /* 127: Signal */
  &vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_l.VCODE[0],/* 128: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1[0],/* 129: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1[0],/* 130: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1[0],/* 131: Signal */
  &vmr_rwd_fix_leftarm_B.Selector[0],  /* 132: Signal */
  &vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_p.VCODE[0],/* 133: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_i[0],/* 134: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_i[0],/* 135: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_i[0],/* 136: Signal */
  &vmr_rwd_fix_leftarm_B.Selector_b[0],/* 137: Signal */
  &vmr_rwd_fix_leftarm_B.force_scale,  /* 138: Signal */
  &vmr_rwd_fix_leftarm_B.virtual_pos[0],/* 139: Signal */
  &vmr_rwd_fix_leftarm_B.state,        /* 140: Signal */
  &vmr_rwd_fix_leftarm_B.reset_controller,/* 141: Signal */
  &vmr_rwd_fix_leftarm_B.VCODE_MOD[0], /* 142: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_c,/* 143: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_d,/* 144: Signal */
  &vmr_rwd_fix_leftarm_B.LogicalOperator_p,/* 145: Signal */
  &vmr_rwd_fix_leftarm_B.Product2[0],  /* 146: Signal */
  &vmr_rwd_fix_leftarm_B.Switch_o[0],  /* 147: Signal */
  &vmr_rwd_fix_leftarm_B.CursorPos_p[0],/* 148: Signal */
  &vmr_rwd_fix_leftarm_B.VCODES_k[0],  /* 149: Signal */
  &vmr_rwd_fix_leftarm_B.VCODES[0],    /* 150: Signal */
  &vmr_rwd_fix_leftarm_B.CursorPos[0], /* 151: Signal */
  &vmr_rwd_fix_leftarm_B.VCODE_n[0],   /* 152: Signal */
  &vmr_rwd_fix_leftarm_B.cursstate,    /* 153: Signal */
  &vmr_rwd_fix_leftarm_B.fbswitch,     /* 154: Signal */
  &vmr_rwd_fix_leftarm_B.ringstate,    /* 155: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_d[0],  /* 156: Signal */
  &vmr_rwd_fix_leftarm_B.Memory1_m,    /* 157: Signal */
  &vmr_rwd_fix_leftarm_B.Memory2_a,    /* 158: Signal */
  &vmr_rwd_fix_leftarm_B.Subtract,     /* 159: Signal */
  &vmr_rwd_fix_leftarm_B.Switch[0],    /* 160: Signal */
  &vmr_rwd_fix_leftarm_B.Switch1_ot[0],/* 161: Signal */
  &vmr_rwd_fix_leftarm_B.Switch2[0],   /* 162: Signal */
  &vmr_rwd_fix_leftarm_B.AnalogData[0],/* 163: Signal */
  &vmr_rwd_fix_leftarm_B.AnalogDataWidth,/* 164: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_c,/* 165: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition1_c[0],/* 166: Signal */
  &vmr_rwd_fix_leftarm_B.Subtract_h,   /* 167: Signal */
  (void *) &vmr_rwd_fix_leftarm_ConstB.Width_a,/* 168: Signal */
  &vmr_rwd_fix_leftarm_B.CustomData1[0],/* 169: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_b[0],/* 170: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition1_b,/* 171: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition2_eo,/* 172: Signal */
  (void *) &vmr_rwd_fix_leftarm_ConstB.Width_g,/* 173: Signal */
  &vmr_rwd_fix_leftarm_B.EventCodes,   /* 174: Signal */
  &vmr_rwd_fix_leftarm_B.NumberofEventCodes,/* 175: Signal */
  &vmr_rwd_fix_leftarm_B.Subtract_g,   /* 176: Signal */
  (void *) &vmr_rwd_fix_leftarm_ConstB.Width_c,/* 177: Signal */
  &vmr_rwd_fix_leftarm_B.bitfield,     /* 178: Signal */
  &vmr_rwd_fix_leftarm_B.ArmKinematics[0],/* 179: Signal */
  &vmr_rwd_fix_leftarm_B.KinarmDataWidth,/* 180: Signal */
  &vmr_rwd_fix_leftarm_B.touint[0],    /* 181: Signal */
  &vmr_rwd_fix_leftarm_B.touint1,      /* 182: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_k[0],/* 183: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition1_n,/* 184: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition2_er[0],/* 185: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition3_n[0],/* 186: Signal */
  (void *) &vmr_rwd_fix_leftarm_ConstB.Width_d,/* 187: Signal */
  &vmr_rwd_fix_leftarm_B.ButtonStatus, /* 188: Signal */
  &vmr_rwd_fix_leftarm_B.CurrentBlockIndex,/* 189: Signal */
  &vmr_rwd_fix_leftarm_B.CurrentBlockNumberinSet,/* 190: Signal */
  &vmr_rwd_fix_leftarm_B.CurrentTPIndex,/* 191: Signal */
  &vmr_rwd_fix_leftarm_B.CurrentTrialNumberinBlock,/* 192: Signal */
  &vmr_rwd_fix_leftarm_B.CurrentTrialNumberinSet,/* 193: Signal */
  &vmr_rwd_fix_leftarm_B.LastFrameAcknowledged,/* 194: Signal */
  &vmr_rwd_fix_leftarm_B.LastFrameSent,/* 195: Signal */
  &vmr_rwd_fix_leftarm_B.LastFrameSent1,/* 196: Signal */
  &vmr_rwd_fix_leftarm_B.LoggingEnable,/* 197: Signal */
  &vmr_rwd_fix_leftarm_B.RunStatus,    /* 198: Signal */
  &vmr_rwd_fix_leftarm_B.Servoupdatecount,/* 199: Signal */
  &vmr_rwd_fix_leftarm_B.TaskControlButton,/* 200: Signal */
  &vmr_rwd_fix_leftarm_B.Timestamp,    /* 201: Signal */
  &vmr_rwd_fix_leftarm_B.conv,         /* 202: Signal */
  &vmr_rwd_fix_leftarm_B.Product_g,    /* 203: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition,/* 204: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition1,/* 205: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition10,/* 206: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition11,/* 207: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition12,/* 208: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition2_e,/* 209: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition3,/* 210: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition4,/* 211: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition5,/* 212: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition6,/* 213: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition7,/* 214: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition8,/* 215: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition9,/* 216: Signal */
  (void *) &vmr_rwd_fix_leftarm_ConstB.Width,/* 217: Signal */
  &vmr_rwd_fix_leftarm_B.Pack_g[0],    /* 218: Signal */
  &vmr_rwd_fix_leftarm_B.resetUDP,     /* 219: Signal */
  &vmr_rwd_fix_leftarm_B.data_out[0],  /* 220: Signal */
  &vmr_rwd_fix_leftarm_B.queue_size_e, /* 221: Signal */
  &vmr_rwd_fix_leftarm_B.total_timeouts,/* 222: Signal */
  &vmr_rwd_fix_leftarm_B.strobe_out,   /* 223: Signal */
  &vmr_rwd_fix_leftarm_B.max_packet_id,/* 224: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_k,/* 225: Signal */
  &vmr_rwd_fix_leftarm_B.queue_size,   /* 226: Signal */
  &vmr_rwd_fix_leftarm_B.timeouts,     /* 227: Signal */
  &vmr_rwd_fix_leftarm_B.TaskClock_a,  /* 228: Signal */
  &vmr_rwd_fix_leftarm_B.Convert1_c[0],/* 229: Signal */
  &vmr_rwd_fix_leftarm_B.Convert19_e[0],/* 230: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_g,/* 231: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition1_h,/* 232: Signal */
  &vmr_rwd_fix_leftarm_B.systemtype,   /* 233: Signal */
  &vmr_rwd_fix_leftarm_B.ReadHasFT[0], /* 234: Signal */
  &vmr_rwd_fix_leftarm_B.timestamp_out,/* 235: Signal */
  &vmr_rwd_fix_leftarm_B.start_time_out,/* 236: Signal */
  &vmr_rwd_fix_leftarm_B.gazeXYCalculated[0],/* 237: Signal */
  &vmr_rwd_fix_leftarm_B.pupil_area_GLOBAL,/* 238: Signal */
  &vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0],/* 239: Signal */
  &vmr_rwd_fix_leftarm_B.pupil_GLOBAL[0],/* 240: Signal */
  &vmr_rwd_fix_leftarm_B.pack_out[0],  /* 241: Signal */
  &vmr_rwd_fix_leftarm_B.len_out,      /* 242: Signal */
  &vmr_rwd_fix_leftarm_B.event_data_out[0],/* 243: Signal */
  &vmr_rwd_fix_leftarm_B.Convert1_p,   /* 244: Signal */
  &vmr_rwd_fix_leftarm_B.Convert19[0], /* 245: Signal */
  &vmr_rwd_fix_leftarm_B.Convert2[0],  /* 246: Signal */
  &vmr_rwd_fix_leftarm_B.Convert3,     /* 247: Signal */
  &vmr_rwd_fix_leftarm_B.Convert4[0],  /* 248: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_i,/* 249: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_l[0],/* 250: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion3[0],/* 251: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion4,/* 252: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion5,/* 253: Signal */
  &vmr_rwd_fix_leftarm_B.convert_bp,   /* 254: Signal */
  &vmr_rwd_fix_leftarm_B.Gain_b[0],    /* 255: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_kg[0],/* 256: Signal */
  &vmr_rwd_fix_leftarm_B.Reshape_i[0], /* 257: Signal */
  &vmr_rwd_fix_leftarm_B.SelectorLeftEye[0],/* 258: Signal */
  &vmr_rwd_fix_leftarm_B.Receive_o1_i[0],/* 259: Signal */
  &vmr_rwd_fix_leftarm_B.Receive_o2_j, /* 260: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o1_n,/* 261: Signal */
  &vmr_rwd_fix_leftarm_B.SAMPE_TYPE,   /* 262: Signal */
  &vmr_rwd_fix_leftarm_B.ContentFlags, /* 263: Signal */
  &vmr_rwd_fix_leftarm_B.pupilX[0],    /* 264: Signal */
  &vmr_rwd_fix_leftarm_B.pupilY[0],    /* 265: Signal */
  &vmr_rwd_fix_leftarm_B.HREFX[0],     /* 266: Signal */
  &vmr_rwd_fix_leftarm_B.HREFY[0],     /* 267: Signal */
  &vmr_rwd_fix_leftarm_B.pupilarea[0], /* 268: Signal */
  &vmr_rwd_fix_leftarm_B.screengazeX[0],/* 269: Signal */
  &vmr_rwd_fix_leftarm_B.screengazeY[0],/* 270: Signal */
  &vmr_rwd_fix_leftarm_B.resolutionX,  /* 271: Signal */
  &vmr_rwd_fix_leftarm_B.resolutionY,  /* 272: Signal */
  &vmr_rwd_fix_leftarm_B.statusflags,  /* 273: Signal */
  &vmr_rwd_fix_leftarm_B.extrainput,   /* 274: Signal */
  &vmr_rwd_fix_leftarm_B.buttons,      /* 275: Signal */
  &vmr_rwd_fix_leftarm_B.htype,        /* 276: Signal */
  &vmr_rwd_fix_leftarm_B.hdata[0],     /* 277: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o18[0],/* 278: Signal */
  &vmr_rwd_fix_leftarm_B.deltas[0],    /* 279: Signal */
  &vmr_rwd_fix_leftarm_B.robot_count,  /* 280: Signal */
  &vmr_rwd_fix_leftarm_B.has_force_plate_1,/* 281: Signal */
  &vmr_rwd_fix_leftarm_B.has_force_plate_2,/* 282: Signal */
  &vmr_rwd_fix_leftarm_B.has_gaze_tracker,/* 283: Signal */
  &vmr_rwd_fix_leftarm_B.has_robot_lift,/* 284: Signal */
  &vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_h.VCODE[0],/* 285: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_e[0],/* 286: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_e[0],/* 287: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_e[0],/* 288: Signal */
  &vmr_rwd_fix_leftarm_B.Selector_e[0],/* 289: Signal */
  &vmr_rwd_fix_leftarm_B.VCODE_l[0],   /* 290: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[0],/* 291: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[0],/* 292: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[0],/* 293: Signal */
  &vmr_rwd_fix_leftarm_B.Selector_a[0],/* 294: Signal */
  &vmr_rwd_fix_leftarm_B.target_vector[0],/* 295: Signal */
  &vmr_rwd_fix_leftarm_B.target_vector_length,/* 296: Signal */
  &vmr_rwd_fix_leftarm_B.Concatenation1[0],/* 297: Signal */
  &vmr_rwd_fix_leftarm_B.Concatenation1[0],/* 298: Signal */
  &vmr_rwd_fix_leftarm_B.Concatenation1[0],/* 299: Signal */
  &vmr_rwd_fix_leftarm_B.Concatenation1[0],/* 300: Signal */
  &vmr_rwd_fix_leftarm_B.Concatenation1[0],/* 301: Signal */
  &vmr_rwd_fix_leftarm_B.y_b,          /* 302: Signal */
  &vmr_rwd_fix_leftarm_B.z,            /* 303: Signal */
  &vmr_rwd_fix_leftarm_B.value,        /* 304: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion,/* 305: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw,/* 306: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2,/* 307: Signal */
  &vmr_rwd_fix_leftarm_B.RunCommandReceive_o1,/* 308: Signal */
  &vmr_rwd_fix_leftarm_B.RunCommandReceive_o2,/* 309: Signal */
  &vmr_rwd_fix_leftarm_B.task_status,  /* 310: Signal */
  &vmr_rwd_fix_leftarm_B.tp,           /* 311: Signal */
  &vmr_rwd_fix_leftarm_B.block,        /* 312: Signal */
  &vmr_rwd_fix_leftarm_B.trial_in_block,/* 313: Signal */
  &vmr_rwd_fix_leftarm_B.block_in_set, /* 314: Signal */
  &vmr_rwd_fix_leftarm_B.trial_in_set, /* 315: Signal */
  &vmr_rwd_fix_leftarm_B.repeat_last_trial,/* 316: Signal */
  &vmr_rwd_fix_leftarm_B.extra_trials[0],/* 317: Signal */
  &vmr_rwd_fix_leftarm_B.e_exit_trial, /* 318: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_g,/* 319: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_m,/* 320: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_n,/* 321: Signal */
  &vmr_rwd_fix_leftarm_B.TaskClock,    /* 322: Signal */
  &vmr_rwd_fix_leftarm_B.Delay,        /* 323: Signal */
  &vmr_rwd_fix_leftarm_B.Delay1,       /* 324: Signal */
  &vmr_rwd_fix_leftarm_B.Product_i,    /* 325: Signal */
  &vmr_rwd_fix_leftarm_B.Product2_n,   /* 326: Signal */
  &vmr_rwd_fix_leftarm_B.Product3,     /* 327: Signal */
  &vmr_rwd_fix_leftarm_B.Selector_n[0],/* 328: Signal */
  &vmr_rwd_fix_leftarm_B.Selector1[0], /* 329: Signal */
  &vmr_rwd_fix_leftarm_B.Selector2_l[0],/* 330: Signal */
  &vmr_rwd_fix_leftarm_B.Subtract_p,   /* 331: Signal */
  &vmr_rwd_fix_leftarm_B.Width_j,      /* 332: Signal */
  (void *) &vmr_rwd_fix_leftarm_ConstB.Width1,/* 333: Signal */
  &vmr_rwd_fix_leftarm_B.Width2,       /* 334: Signal */
  &vmr_rwd_fix_leftarm_B.total_trials, /* 335: Signal */
  &vmr_rwd_fix_leftarm_B.trials_in_block,/* 336: Signal */
  &vmr_rwd_fix_leftarm_B.total_blocks, /* 337: Signal */
  &vmr_rwd_fix_leftarm_B.total_trials_in_exam,/* 338: Signal */
  &vmr_rwd_fix_leftarm_B.total_trials_in_block,/* 339: Signal */
  &vmr_rwd_fix_leftarm_B.total_blocks_in_exam,/* 340: Signal */
  &vmr_rwd_fix_leftarm_B.clipped_torques[0],/* 341: Signal */
  &vmr_rwd_fix_leftarm_B.Switch1,      /* 342: Signal */
  &vmr_rwd_fix_leftarm_B.CLAMP_COLClampStateintegerFlagtoclampvisualfeedbacknone,/* 343: Signal */
  &vmr_rwd_fix_leftarm_B.DELAY_POSTTRIAL_COLPostTrial_Delayintegertimebetweentrialsmsnon,/* 344: Signal */
  &vmr_rwd_fix_leftarm_B.DISPLAY_TRIAL_COLFlagforadisplayonlytrialintegerFlagtotransitio,/* 345: Signal */
  &vmr_rwd_fix_leftarm_B.DO_REWARD_COLDoRewardintegerFlagtoindicatewhethertoproviderewar,/* 346: Signal */
  &vmr_rwd_fix_leftarm_B.END_TARGET_COLEnd_TargettargetSecondtargettoappearduringatriali,/* 347: Signal */
  &vmr_rwd_fix_leftarm_B.HAND_VIS_COLHandVisibleintegerFlagtoshutoffthehandforaftereffec,/* 348: Signal */
  &vmr_rwd_fix_leftarm_B.MAXREACHTIME_COLMaxReachTimeintegermaximumtimeallowedforsucessf,/* 349: Signal */
  &vmr_rwd_fix_leftarm_B.ROTATIONRotationintegerRotationdegreesCCWabsoluteorincrementald,/* 350: Signal */
  &vmr_rwd_fix_leftarm_B.ROTATION_CENTERRotate_CentertargetTargettouseforrotationcenteri,/* 351: Signal */
  &vmr_rwd_fix_leftarm_B.ROTATION_TYPERotate_Typeinteger0norotation1rotatespecifiedamoun,/* 352: Signal */
  &vmr_rwd_fix_leftarm_B.START_TARGET_COLStart_TargettargetFirsttargettoappearduringatri,/* 353: Signal */
  &vmr_rwd_fix_leftarm_B.WAIT_AT_START_COL1st_Target_WaitintegerRequiredholdtimeatstartt,/* 354: Signal */
  &vmr_rwd_fix_leftarm_B.INSTRUCT_PAUSE_BTNInstructResumeResumetaskexecutionafterinstruc,/* 355: Signal */
  &vmr_rwd_fix_leftarm_B.E_HIT_TARGETTarget_HitSubjecthasinterceptedthetargetnone,/* 356: Signal */
  &vmr_rwd_fix_leftarm_B.E_MISS_TARGETTarget_MissSubjectshotpastthetargetwithouthittingi,/* 357: Signal */
  &vmr_rwd_fix_leftarm_B.E_NEUTRAL_FDBKNFB_Trial_EndSubjecthashitorexceededthetargetonan,/* 358: Signal */
  &vmr_rwd_fix_leftarm_B.E_NO_EVENTnaThisevent_codedoesnotsaveaneventinthedatafileitjust,/* 359: Signal */
  &vmr_rwd_fix_leftarm_B.E_REWARDReward_OnRewardisgivennone,/* 360: Signal */
  &vmr_rwd_fix_leftarm_B.E_SHOW_INSTRUCTShowInstructionsTrialshowsinstructionsnone,/* 361: Signal */
  &vmr_rwd_fix_leftarm_B.E_SHOW_SCOREShow_Cum_ScoreDisplaycumulativescorenone,/* 362: Signal */
  &vmr_rwd_fix_leftarm_B.E_STAY_CENTERStay_CenterSubjecthasreachedthecentertargetandmust,/* 363: Signal */
  &vmr_rwd_fix_leftarm_B.E_TARGET_ONTarget_OnTargetONstartwaitingforsubjecttoleavecentre,/* 364: Signal */
  &vmr_rwd_fix_leftarm_B.COLORColorcolourColornone,/* 365: Signal */
  &vmr_rwd_fix_leftarm_B.HITCOLORHitColorcolourColorwhenthetargetishitnone,/* 366: Signal */
  &vmr_rwd_fix_leftarm_B.LABELLabeltextlabelDefaultlabeltextnone,/* 367: Signal */
  &vmr_rwd_fix_leftarm_B.LABEL_HEIGHTLabelHeightfloatHeightofthelabelnone,/* 368: Signal */
  &vmr_rwd_fix_leftarm_B.LOGICAL_RADIUSLogicalradiusfloatLogicalRadiusnone,/* 369: Signal */
  &vmr_rwd_fix_leftarm_B.ROTATED_COLORRotatedColorcolourTargetcolorforrotatedtrialsnone,/* 370: Signal */
  &vmr_rwd_fix_leftarm_B.STROKE_COLORStrokeColorcolourStrokecolorforreturnringnone,/* 371: Signal */
  &vmr_rwd_fix_leftarm_B.STROKE_WIDTHStrokeWidthfloatStrokewidthforreturnringnone,/* 372: Signal */
  &vmr_rwd_fix_leftarm_B.VISUAL_RADIUSVisualradiusfloatDisplayRadiusnone,/* 373: Signal */
  &vmr_rwd_fix_leftarm_B.col_xXfloatXPositioncmofthetargetrelativetolocal00none,/* 374: Signal */
  &vmr_rwd_fix_leftarm_B.col_yYfloatYPositioncmofthetargetrelativetolocal00none,/* 375: Signal */
  &vmr_rwd_fix_leftarm_B.INSTRUCTIONS, /* 376: Signal */
  &vmr_rwd_fix_leftarm_B.LOAD_FOREITHER,/* 377: Signal */
  &vmr_rwd_fix_leftarm_B.K_FIX_LEFTHANDFixLeftHandFlagintegerFlagtoholdtheenabletherobot,/* 378: Signal */
  &vmr_rwd_fix_leftarm_B.K_INSTRUCT_TIMEDisplayInstructionsHoldTimeintegerTimetodisplayi,/* 379: Signal */
  &vmr_rwd_fix_leftarm_B.K_LEFTHAND_TGTLefthandtargetintegerTargetdefiningthelocationwhe,/* 380: Signal */
  &vmr_rwd_fix_leftarm_B.K_RETURN_RING_ROWReturnRingTgtTblRowintegerRowofthetargettablet,/* 381: Signal */
  &vmr_rwd_fix_leftarm_B.K_REWARD_VALRewardValuecentsintegerAmountofrewardofferedoneacht,/* 382: Signal */
  &vmr_rwd_fix_leftarm_B.K_ROBOT_MOVE_TIMERobotMoveTimeintegerTimetherobotwillmovetothen,/* 383: Signal */
  &vmr_rwd_fix_leftarm_B.K_ROBOT_RAMP_TIMERobotRampTimeintegerTimetherobotwillrampupandd,/* 384: Signal */
  &vmr_rwd_fix_leftarm_B.K_SCORETEXT_ROWScoreTextTgtTblRowintegerRowofthetargettabletous,/* 385: Signal */
  &vmr_rwd_fix_leftarm_B.K_SCORE_TIMEDisplayScoreHoldTimeintegerTimetodisplaythecumulati,/* 386: Signal */
  &vmr_rwd_fix_leftarm_B.K_TONE_HIT_DURATIONHittonedurationintegerDurationofthefeedbackt,/* 387: Signal */
  &vmr_rwd_fix_leftarm_B.K_TONE_HIT_FREQUENCYHittonefrequencyintegerFrequencyofthefeedba,/* 388: Signal */
  &vmr_rwd_fix_leftarm_B.K_TONE_NEUTRAL_DURATIONNeutraltonedurationintegerDurationofthen,/* 389: Signal */
  &vmr_rwd_fix_leftarm_B.K_TONE_NEUTRAL_FREQUENCYNeutraltonefrequencyintegerFrequencyoft,/* 390: Signal */
  &vmr_rwd_fix_leftarm_B.K_UNUSEDUnusedintegerNotcurrentlyusednone,/* 391: Signal */
  &vmr_rwd_fix_leftarm_B.K_VIS_RADVisibleRadiusfloatRadiusfromthestarttargetthatthehandw,/* 392: Signal */
  &vmr_rwd_fix_leftarm_B.delay,        /* 393: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition1_d,/* 394: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition2_j,/* 395: Signal */
  &vmr_rwd_fix_leftarm_B.SFunctionBuilder_o1[0],/* 396: Signal */
  &vmr_rwd_fix_leftarm_B.SFunctionBuilder_o2,/* 397: Signal */
  &vmr_rwd_fix_leftarm_B.SFunctionBuilder_o3[0],/* 398: Signal */
  &vmr_rwd_fix_leftarm_B.vis_cmd[0],   /* 399: Signal */
  &vmr_rwd_fix_leftarm_B.vis_cmd_len,  /* 400: Signal */
  &vmr_rwd_fix_leftarm_B.vis_cmd_cropped,/* 401: Signal */
  &vmr_rwd_fix_leftarm_B.frame_number, /* 402: Signal */
  &vmr_rwd_fix_leftarm_B.vcode_err_id, /* 403: Signal */
  &vmr_rwd_fix_leftarm_B.Convert_j,    /* 404: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition1_p,/* 405: Signal */
  &vmr_rwd_fix_leftarm_B.TorqueFB[0],  /* 406: Signal */
  &vmr_rwd_fix_leftarm_B.TorqueFF[0],  /* 407: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_p[0],/* 408: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition1_c2[0],/* 409: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition2_m[0],/* 410: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition3_h,/* 411: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition4_n[0],/* 412: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition5_o,/* 413: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition6_a[0],/* 414: Signal */
  &vmr_rwd_fix_leftarm_B.Sum[0],       /* 415: Signal */
  &vmr_rwd_fix_leftarm_B.VCODE_o[0],   /* 416: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[0],/* 417: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[0],/* 418: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[0],/* 419: Signal */
  &vmr_rwd_fix_leftarm_B.Selector_j[0],/* 420: Signal */
  &vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_k.VCODE[0],/* 421: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_l[0],/* 422: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_l[0],/* 423: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_l[0],/* 424: Signal */
  &vmr_rwd_fix_leftarm_B.Selector_p[0],/* 425: Signal */
  &vmr_rwd_fix_leftarm_B.VCODE_e[0],   /* 426: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[0],/* 427: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[0],/* 428: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[0],/* 429: Signal */
  &vmr_rwd_fix_leftarm_B.Selector_ec[0],/* 430: Signal */
  &vmr_rwd_fix_leftarm_B.VCODE[0],     /* 431: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[0],/* 432: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[0],/* 433: Signal */
  &vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[0],/* 434: Signal */
  &vmr_rwd_fix_leftarm_B.Selector_l[0],/* 435: Signal */
  &vmr_rwd_fix_leftarm_B.rotation,     /* 436: Signal */
  &vmr_rwd_fix_leftarm_B.dd_out[0],    /* 437: Signal */
  &vmr_rwd_fix_leftarm_B.Output,       /* 438: Signal */
  &vmr_rwd_fix_leftarm_B.Compare,      /* 439: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[0],/* 440: Signal */
  &vmr_rwd_fix_leftarm_B.IdealFramesPerPacket,/* 441: Signal */
  &vmr_rwd_fix_leftarm_B.MathFunction, /* 442: Signal */
  &vmr_rwd_fix_leftarm_B.t1[0],        /* 443: Signal */
  &vmr_rwd_fix_leftarm_B.t2[0],        /* 444: Signal */
  &vmr_rwd_fix_leftarm_B.MinMax_k,     /* 445: Signal */
  &vmr_rwd_fix_leftarm_B.Product_l,    /* 446: Signal */
  &vmr_rwd_fix_leftarm_B.RelationalOperator,/* 447: Signal */
  &vmr_rwd_fix_leftarm_B.Selector_eu[0],/* 448: Signal */
  &vmr_rwd_fix_leftarm_B.Subtract_o,   /* 449: Signal */
  &vmr_rwd_fix_leftarm_B.Width,        /* 450: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_cb,/* 451: Signal */
  &vmr_rwd_fix_leftarm_B.trigger,      /* 452: Signal */
  &vmr_rwd_fix_leftarm_B.RqstUDPReset, /* 453: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition2_js[0],/* 454: Signal */
  &vmr_rwd_fix_leftarm_B.Data[0],      /* 455: Signal */
  &vmr_rwd_fix_leftarm_B.Pckt_Recd,    /* 456: Signal */
  &vmr_rwd_fix_leftarm_B.Data2[0],     /* 457: Signal */
  &vmr_rwd_fix_leftarm_B.Pckt_Recd2,   /* 458: Signal */
  &vmr_rwd_fix_leftarm_B.doublereads,  /* 459: Signal */
  &vmr_rwd_fix_leftarm_B.UDPReceive_o6,/* 460: Signal */
  &vmr_rwd_fix_leftarm_B.UDPResets,    /* 461: Signal */
  &vmr_rwd_fix_leftarm_B.UDPReceivePortReset_o2[0],/* 462: Signal */
  &vmr_rwd_fix_leftarm_B.Unpack,       /* 463: Signal */
  &vmr_rwd_fix_leftarm_B.Pack_i[0],    /* 464: Signal */
  &vmr_rwd_fix_leftarm_B.forces_g[0],  /* 465: Signal */
  &vmr_rwd_fix_leftarm_B.moments_p[0], /* 466: Signal */
  &vmr_rwd_fix_leftarm_B.timer_c,      /* 467: Signal */
  &vmr_rwd_fix_leftarm_B.Receive_o1_k[0],/* 468: Signal */
  &vmr_rwd_fix_leftarm_B.Receive_o2_m, /* 469: Signal */
  &vmr_rwd_fix_leftarm_B.forces[0],    /* 470: Signal */
  &vmr_rwd_fix_leftarm_B.moments[0],   /* 471: Signal */
  &vmr_rwd_fix_leftarm_B.timer,        /* 472: Signal */
  &vmr_rwd_fix_leftarm_B.Receive1_o1[0],/* 473: Signal */
  &vmr_rwd_fix_leftarm_B.Receive1_o2,  /* 474: Signal */
  &vmr_rwd_fix_leftarm_B.errVals[0],   /* 475: Signal */
  &vmr_rwd_fix_leftarm_B.DCErrVals[0], /* 476: Signal */
  &vmr_rwd_fix_leftarm_B.intAddresses[0],/* 477: Signal */
  &vmr_rwd_fix_leftarm_B.floatAddresses[0],/* 478: Signal */
  &vmr_rwd_fix_leftarm_B.motorEnableState,/* 479: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_h,/* 480: Signal */
  &vmr_rwd_fix_leftarm_B.convert[0],   /* 481: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o1[0],/* 482: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o2,/* 483: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o3,/* 484: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o1[0],/* 485: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o2,/* 486: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o3,/* 487: Signal */
  &vmr_rwd_fix_leftarm_B.Switch_m[0],  /* 488: Signal */
  &vmr_rwd_fix_leftarm_B.kinarm_data[0],/* 489: Signal */
  &vmr_rwd_fix_leftarm_B.primary_encoder_data_out[0],/* 490: Signal */
  &vmr_rwd_fix_leftarm_B.statusInts[0],/* 491: Signal */
  &vmr_rwd_fix_leftarm_B.newMessage[0],/* 492: Signal */
  &vmr_rwd_fix_leftarm_B.sentMessageCount,/* 493: Signal */
  &vmr_rwd_fix_leftarm_B.DataStoreRead_l,/* 494: Signal */
  &vmr_rwd_fix_leftarm_B.DelayRead[0], /* 495: Signal */
  &vmr_rwd_fix_leftarm_B.ErrMsgs[0],   /* 496: Signal */
  &vmr_rwd_fix_leftarm_B.Primaryread[0],/* 497: Signal */
  &vmr_rwd_fix_leftarm_B.Read[0],      /* 498: Signal */
  &vmr_rwd_fix_leftarm_B.ReadHW[0],    /* 499: Signal */
  &vmr_rwd_fix_leftarm_B.ReadKinematics[0],/* 500: Signal */
  &vmr_rwd_fix_leftarm_B.ServoRead,    /* 501: Signal */
  &vmr_rwd_fix_leftarm_B.Statusread[0],/* 502: Signal */
  &vmr_rwd_fix_leftarm_B.Statusread1_e[0],/* 503: Signal */
  &vmr_rwd_fix_leftarm_B.torquefeedback1[0],/* 504: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_nq[0],/* 505: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_n,    /* 506: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_c,    /* 507: Signal */
  &vmr_rwd_fix_leftarm_B.link_lengths_o[0],/* 508: Signal */
  &vmr_rwd_fix_leftarm_B.pointer_offset_k,/* 509: Signal */
  &vmr_rwd_fix_leftarm_B.shoulder_loc_o[0],/* 510: Signal */
  &vmr_rwd_fix_leftarm_B.arm_orientation_o,/* 511: Signal */
  &vmr_rwd_fix_leftarm_B.shoulder_ang_h,/* 512: Signal */
  &vmr_rwd_fix_leftarm_B.elbow_ang_k,  /* 513: Signal */
  &vmr_rwd_fix_leftarm_B.shoulder_velocity_k,/* 514: Signal */
  &vmr_rwd_fix_leftarm_B.elbow_velocity_j,/* 515: Signal */
  &vmr_rwd_fix_leftarm_B.shoulder_acceleration_c,/* 516: Signal */
  &vmr_rwd_fix_leftarm_B.elbow_acceleration_j,/* 517: Signal */
  &vmr_rwd_fix_leftarm_B.joint_torque_cmd_k[0],/* 518: Signal */
  &vmr_rwd_fix_leftarm_B.motor_torque_cmd_b[0],/* 519: Signal */
  &vmr_rwd_fix_leftarm_B.link_angle_b[0],/* 520: Signal */
  &vmr_rwd_fix_leftarm_B.link_velocity_k[0],/* 521: Signal */
  &vmr_rwd_fix_leftarm_B.link_acceleration_c[0],/* 522: Signal */
  &vmr_rwd_fix_leftarm_B.hand_position_g[0],/* 523: Signal */
  &vmr_rwd_fix_leftarm_B.hand_velocity_p[0],/* 524: Signal */
  &vmr_rwd_fix_leftarm_B.hand_acceleration_e[0],/* 525: Signal */
  &vmr_rwd_fix_leftarm_B.motor_status_c,/* 526: Signal */
  &vmr_rwd_fix_leftarm_B.force_sensor_force_uvw_g[0],/* 527: Signal */
  &vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw_d[0],/* 528: Signal */
  &vmr_rwd_fix_leftarm_B.force_sensor_force_xyz_g[0],/* 529: Signal */
  &vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz_g[0],/* 530: Signal */
  &vmr_rwd_fix_leftarm_B.force_sensor_timestamp_k,/* 531: Signal */
  &vmr_rwd_fix_leftarm_B.link_lengths[0],/* 532: Signal */
  &vmr_rwd_fix_leftarm_B.pointer_offset,/* 533: Signal */
  &vmr_rwd_fix_leftarm_B.shoulder_loc[0],/* 534: Signal */
  &vmr_rwd_fix_leftarm_B.arm_orientation,/* 535: Signal */
  &vmr_rwd_fix_leftarm_B.shoulder_ang, /* 536: Signal */
  &vmr_rwd_fix_leftarm_B.elbow_ang,    /* 537: Signal */
  &vmr_rwd_fix_leftarm_B.shoulder_velocity,/* 538: Signal */
  &vmr_rwd_fix_leftarm_B.elbow_velocity,/* 539: Signal */
  &vmr_rwd_fix_leftarm_B.shoulder_acceleration,/* 540: Signal */
  &vmr_rwd_fix_leftarm_B.elbow_acceleration,/* 541: Signal */
  &vmr_rwd_fix_leftarm_B.joint_torque_cmd[0],/* 542: Signal */
  &vmr_rwd_fix_leftarm_B.motor_torque_cmd[0],/* 543: Signal */
  &vmr_rwd_fix_leftarm_B.link_angle[0],/* 544: Signal */
  &vmr_rwd_fix_leftarm_B.link_velocity[0],/* 545: Signal */
  &vmr_rwd_fix_leftarm_B.link_acceleration[0],/* 546: Signal */
  &vmr_rwd_fix_leftarm_B.hand_position[0],/* 547: Signal */
  &vmr_rwd_fix_leftarm_B.hand_velocity[0],/* 548: Signal */
  &vmr_rwd_fix_leftarm_B.hand_acceleration[0],/* 549: Signal */
  &vmr_rwd_fix_leftarm_B.motor_status, /* 550: Signal */
  &vmr_rwd_fix_leftarm_B.force_sensor_force_uvw[0],/* 551: Signal */
  &vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw[0],/* 552: Signal */
  &vmr_rwd_fix_leftarm_B.force_sensor_force_xyz[0],/* 553: Signal */
  &vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz[0],/* 554: Signal */
  &vmr_rwd_fix_leftarm_B.force_sensor_timestamp,/* 555: Signal */
  &vmr_rwd_fix_leftarm_B.active_arm,   /* 556: Signal */
  &vmr_rwd_fix_leftarm_B.delayEstimates[0],/* 557: Signal */
  &vmr_rwd_fix_leftarm_B.servoCounter, /* 558: Signal */
  &vmr_rwd_fix_leftarm_B.calibrationButtonBits,/* 559: Signal */
  &vmr_rwd_fix_leftarm_B.handFF,       /* 560: Signal */
  &vmr_rwd_fix_leftarm_B.handFF_Dex,   /* 561: Signal */
  &vmr_rwd_fix_leftarm_B.handFBArm,    /* 562: Signal */
  &vmr_rwd_fix_leftarm_B.handFBRadius, /* 563: Signal */
  &vmr_rwd_fix_leftarm_B.handFBControl,/* 564: Signal */
  &vmr_rwd_fix_leftarm_B.handFBColor,  /* 565: Signal */
  &vmr_rwd_fix_leftarm_B.hasGaze,      /* 566: Signal */
  &vmr_rwd_fix_leftarm_B.gazeFB,       /* 567: Signal */
  &vmr_rwd_fix_leftarm_B.gazeLocation[0],/* 568: Signal */
  &vmr_rwd_fix_leftarm_B.gazeTimestamp,/* 569: Signal */
  &vmr_rwd_fix_leftarm_B.gazePupilArea,/* 570: Signal */
  &vmr_rwd_fix_leftarm_B.gazeEvent[0], /* 571: Signal */
  &vmr_rwd_fix_leftarm_B.gazeVector[0],/* 572: Signal */
  &vmr_rwd_fix_leftarm_B.gazePupilLoc[0],/* 573: Signal */
  &vmr_rwd_fix_leftarm_B.Selector_c[0],/* 574: Signal */
  &vmr_rwd_fix_leftarm_B.Selector1_m[0],/* 575: Signal */
  &vmr_rwd_fix_leftarm_B.Selector2_o[0],/* 576: Signal */
  &vmr_rwd_fix_leftarm_B.sf_split_primary.link_angles[0],/* 577: Signal */
  &vmr_rwd_fix_leftarm_B.sf_split_primary.link_velocities[0],/* 578: Signal */
  &vmr_rwd_fix_leftarm_B.sf_split_primary.link_acceleration[0],/* 579: Signal */
  &vmr_rwd_fix_leftarm_B.sf_split_primary1.link_angles[0],/* 580: Signal */
  &vmr_rwd_fix_leftarm_B.sf_split_primary1.link_velocities[0],/* 581: Signal */
  &vmr_rwd_fix_leftarm_B.sf_split_primary1.link_acceleration[0],/* 582: Signal */
  &vmr_rwd_fix_leftarm_B.Selector1_a[0],/* 583: Signal */
  &vmr_rwd_fix_leftarm_B.Selector2_i[0],/* 584: Signal */
  &vmr_rwd_fix_leftarm_B.ecatTorques[0],/* 585: Signal */
  &vmr_rwd_fix_leftarm_B.DataStoreRead[0],/* 586: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_a1[0],/* 587: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_cq[0],/* 588: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion6[0],/* 589: Signal */
  &vmr_rwd_fix_leftarm_B.Product_m[0], /* 590: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_b,    /* 591: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_l,    /* 592: Signal */
  &vmr_rwd_fix_leftarm_B.sf_MATLABFunction_o.is_right_arm,/* 593: Signal */
  &vmr_rwd_fix_leftarm_B.sf_MATLABFunction_o.isExo,/* 594: Signal */
  &vmr_rwd_fix_leftarm_B.sf_MATLABFunction_o.has_high_res_encoders,/* 595: Signal */
  &vmr_rwd_fix_leftarm_B.sf_MATLABFunction1_m.is_right_arm,/* 596: Signal */
  &vmr_rwd_fix_leftarm_B.sf_MATLABFunction1_m.isExo,/* 597: Signal */
  &vmr_rwd_fix_leftarm_B.sf_MATLABFunction1_m.has_high_res_encoders,/* 598: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_o,    /* 599: Signal */
  &vmr_rwd_fix_leftarm_B.SEGMENT_ANG_m[0],/* 600: Signal */
  &vmr_rwd_fix_leftarm_B.SEGMENT_ANG[0],/* 601: Signal */
  &vmr_rwd_fix_leftarm_B.Switch_ir[0], /* 602: Signal */
  &vmr_rwd_fix_leftarm_B.Switch1_o[0], /* 603: Signal */
  &vmr_rwd_fix_leftarm_B.constants[0], /* 604: Signal */
  &vmr_rwd_fix_leftarm_B.filteredVals[0],/* 605: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSum1,    /* 606: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSwitch,  /* 607: Signal */
  &vmr_rwd_fix_leftarm_B.Sum_j,        /* 608: Signal */
  &vmr_rwd_fix_leftarm_B.UnitDelay_h,  /* 609: Signal */
  &vmr_rwd_fix_leftarm_B.Output_n,     /* 610: Signal */
  &vmr_rwd_fix_leftarm_B.sf_FindRobottype.robotType,/* 611: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.SDOCommand[0],/* 612: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues[0],/* 613: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[0],/* 614: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.complete,/* 615: Signal */
  &vmr_rwd_fix_leftarm_B.sf_forceEnableDisable.forceMotorState,/* 616: Signal */
  &vmr_rwd_fix_leftarm_B.sf_size.count,/* 617: Signal */
  &vmr_rwd_fix_leftarm_B.sf_size1.count,/* 618: Signal */
  &vmr_rwd_fix_leftarm_B.encoderCounts_h[0],/* 619: Signal */
  &vmr_rwd_fix_leftarm_B.FTSensorOffset_j,/* 620: Signal */
  &vmr_rwd_fix_leftarm_B.calibPinAngles_m[0],/* 621: Signal */
  &vmr_rwd_fix_leftarm_B.absAngOffsets_c[0],/* 622: Signal */
  &vmr_rwd_fix_leftarm_B.linkLengths_j[0],/* 623: Signal */
  &vmr_rwd_fix_leftarm_B.L2CalibPinOffset_c,/* 624: Signal */
  &vmr_rwd_fix_leftarm_B.continuousTorques_j[0],/* 625: Signal */
  &vmr_rwd_fix_leftarm_B.gearRatios_p[0],/* 626: Signal */
  &vmr_rwd_fix_leftarm_B.isCalibrated_p,/* 627: Signal */
  &vmr_rwd_fix_leftarm_B.offsetRads_f[0],/* 628: Signal */
  &vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[0],/* 629: Signal */
  &vmr_rwd_fix_leftarm_B.robotRevision_n,/* 630: Signal */
  &vmr_rwd_fix_leftarm_B.constantsReady_j,/* 631: Signal */
  &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.hasSecondary,/* 632: Signal */
  &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.hasFT,/* 633: Signal */
  &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.robotOrientation,/* 634: Signal */
  &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.motorOrientation[0],/* 635: Signal */
  &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.encOrientation[0],/* 636: Signal */
  &vmr_rwd_fix_leftarm_B.TorqueMode_i, /* 637: Signal */
  &vmr_rwd_fix_leftarm_B.readTrigger_k,/* 638: Signal */
  &vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque[0],/* 639: Signal */
  &vmr_rwd_fix_leftarm_B.R1_constantsReady,/* 640: Signal */
  &vmr_rwd_fix_leftarm_B.sf_FindRobottype_d.robotType,/* 641: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.SDOCommand[0],/* 642: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues[0],/* 643: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[0],/* 644: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.complete,/* 645: Signal */
  &vmr_rwd_fix_leftarm_B.sf_forceEnableDisable_k.forceMotorState,/* 646: Signal */
  &vmr_rwd_fix_leftarm_B.sf_size_d.count,/* 647: Signal */
  &vmr_rwd_fix_leftarm_B.sf_size1_e.count,/* 648: Signal */
  &vmr_rwd_fix_leftarm_B.encoderCounts[0],/* 649: Signal */
  &vmr_rwd_fix_leftarm_B.FTSensorOffset,/* 650: Signal */
  &vmr_rwd_fix_leftarm_B.calibPinAngles[0],/* 651: Signal */
  &vmr_rwd_fix_leftarm_B.absAngOffsets[0],/* 652: Signal */
  &vmr_rwd_fix_leftarm_B.linkLengths[0],/* 653: Signal */
  &vmr_rwd_fix_leftarm_B.L2CalibPinOffset,/* 654: Signal */
  &vmr_rwd_fix_leftarm_B.continuousTorques[0],/* 655: Signal */
  &vmr_rwd_fix_leftarm_B.gearRatios[0],/* 656: Signal */
  &vmr_rwd_fix_leftarm_B.isCalibrated, /* 657: Signal */
  &vmr_rwd_fix_leftarm_B.offsetRads[0],/* 658: Signal */
  &vmr_rwd_fix_leftarm_B.offsetRadsPrimary[0],/* 659: Signal */
  &vmr_rwd_fix_leftarm_B.robotRevision_o,/* 660: Signal */
  &vmr_rwd_fix_leftarm_B.constantsReady,/* 661: Signal */
  &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.hasSecondary,/* 662: Signal */
  &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.hasFT,/* 663: Signal */
  &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.robotOrientation,/* 664: Signal */
  &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.motorOrientation[0],/* 665: Signal */
  &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.encOrientation[0],/* 666: Signal */
  &vmr_rwd_fix_leftarm_B.TorqueMode,   /* 667: Signal */
  &vmr_rwd_fix_leftarm_B.readTrigger,  /* 668: Signal */
  &vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque[0],/* 669: Signal */
  &vmr_rwd_fix_leftarm_B.R2_constantsReady,/* 670: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_i,    /* 671: Signal */
  &vmr_rwd_fix_leftarm_B.Output_a,     /* 672: Signal */
  &vmr_rwd_fix_leftarm_B.drive1,       /* 673: Signal */
  &vmr_rwd_fix_leftarm_B.drive2,       /* 674: Signal */
  &vmr_rwd_fix_leftarm_B.drive3,       /* 675: Signal */
  &vmr_rwd_fix_leftarm_B.drive4,       /* 676: Signal */
  &vmr_rwd_fix_leftarm_B.errVal,       /* 677: Signal */
  &vmr_rwd_fix_leftarm_B.masterState,  /* 678: Signal */
  &vmr_rwd_fix_leftarm_B.DCErrVal,     /* 679: Signal */
  &vmr_rwd_fix_leftarm_B.MasterToNetworkClkDiff,/* 680: Signal */
  &vmr_rwd_fix_leftarm_B.DCInitState,  /* 681: Signal */
  &vmr_rwd_fix_leftarm_B.NetworkToSlaveClkDiff,/* 682: Signal */
  &vmr_rwd_fix_leftarm_B.bitField,     /* 683: Signal */
  &vmr_rwd_fix_leftarm_B.kinematicsOut[0],/* 684: Signal */
  &vmr_rwd_fix_leftarm_B.kinematicsOutPrimary[0],/* 685: Signal */
  &vmr_rwd_fix_leftarm_B.delays[0],    /* 686: Signal */
  &vmr_rwd_fix_leftarm_B.servoCounterOut,/* 687: Signal */
  &vmr_rwd_fix_leftarm_B.outMem[0],    /* 688: Signal */
  &vmr_rwd_fix_leftarm_B.settingsOut[0],/* 689: Signal */
  &vmr_rwd_fix_leftarm_B.calibrationsOut[0],/* 690: Signal */
  &vmr_rwd_fix_leftarm_B.DataStore[0], /* 691: Signal */
  &vmr_rwd_fix_leftarm_B.DataStore1[0],/* 692: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_jq[0],/* 693: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_ju[0],/* 694: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_ir,/* 695: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[0],/* 696: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion4_j[0],/* 697: Signal */
  &vmr_rwd_fix_leftarm_B.sf_Createtimestamp.timestamp_out,/* 698: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_e[0],/* 699: Signal */
  &vmr_rwd_fix_leftarm_B.ByteReversal[0],/* 700: Signal */
  &vmr_rwd_fix_leftarm_B.ByteReversal1[0],/* 701: Signal */
  &vmr_rwd_fix_leftarm_B.ReceivefromRobot1ForceSensor_o1[0],/* 702: Signal */
  &vmr_rwd_fix_leftarm_B.ReceivefromRobot1ForceSensor_o2,/* 703: Signal */
  &vmr_rwd_fix_leftarm_B.Unpack_o1_m[0],/* 704: Signal */
  &vmr_rwd_fix_leftarm_B.Unpack_o2_o[0],/* 705: Signal */
  &vmr_rwd_fix_leftarm_B.Switch_p[0],  /* 706: Signal */
  &vmr_rwd_fix_leftarm_B.sf_Createtimestamp_b.timestamp_out,/* 707: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_g[0],/* 708: Signal */
  &vmr_rwd_fix_leftarm_B.ByteReversal_o[0],/* 709: Signal */
  &vmr_rwd_fix_leftarm_B.ByteReversal1_f[0],/* 710: Signal */
  &vmr_rwd_fix_leftarm_B.ReceivefromRobot2ForceSensor_o1[0],/* 711: Signal */
  &vmr_rwd_fix_leftarm_B.ReceivefromRobot2ForceSensor_o2,/* 712: Signal */
  &vmr_rwd_fix_leftarm_B.Unpack1_o1[0],/* 713: Signal */
  &vmr_rwd_fix_leftarm_B.Unpack1_o2[0],/* 714: Signal */
  &vmr_rwd_fix_leftarm_B.Switch1_b[0], /* 715: Signal */
  &vmr_rwd_fix_leftarm_B.force_scale_b,/* 716: Signal */
  &vmr_rwd_fix_leftarm_B.robot1DataOut_p[0],/* 717: Signal */
  &vmr_rwd_fix_leftarm_B.robot2DataOut_g[0],/* 718: Signal */
  &vmr_rwd_fix_leftarm_B.robot1PrimaryEncDataOut[0],/* 719: Signal */
  &vmr_rwd_fix_leftarm_B.robot2PrimaryEncDataOut[0],/* 720: Signal */
  &vmr_rwd_fix_leftarm_B.robot1DataOut[0],/* 721: Signal */
  &vmr_rwd_fix_leftarm_B.robot2DataOut[0],/* 722: Signal */
  &vmr_rwd_fix_leftarm_B.Conversion1[0],/* 723: Signal */
  &vmr_rwd_fix_leftarm_B.Conversion2[0],/* 724: Signal */
  &vmr_rwd_fix_leftarm_B.Conversion7[0],/* 725: Signal */
  &vmr_rwd_fix_leftarm_B.Convert2_n[0],/* 726: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[0],/* 727: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[0],/* 728: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_h,/* 729: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion3_d[0],/* 730: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion4_g[0],/* 731: Signal */
  &vmr_rwd_fix_leftarm_B.MinMax_b,     /* 732: Signal */
  &vmr_rwd_fix_leftarm_B.MinMax1,      /* 733: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o1[0],/* 734: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o2[0],/* 735: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o3[0],/* 736: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o4[0],/* 737: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o5[0],/* 738: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o6[0],/* 739: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o7, /* 740: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o8, /* 741: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o9[0],/* 742: Signal */
  &vmr_rwd_fix_leftarm_B.SFunction_o10,/* 743: Signal */
  &vmr_rwd_fix_leftarm_B.outStatus[0], /* 744: Signal */
  &vmr_rwd_fix_leftarm_B.kinematics[0],/* 745: Signal */
  &vmr_rwd_fix_leftarm_B.primary[0],   /* 746: Signal */
  &vmr_rwd_fix_leftarm_B.Constant_k,   /* 747: Signal */
  &vmr_rwd_fix_leftarm_B.Constant1[0], /* 748: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_k[0],/* 749: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_a[0],/* 750: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_i,/* 751: Signal */
  &vmr_rwd_fix_leftarm_B.Receive_o1_n[0],/* 752: Signal */
  &vmr_rwd_fix_leftarm_B.Receive_o2_o, /* 753: Signal */
  &vmr_rwd_fix_leftarm_B.Unpack_o1[0], /* 754: Signal */
  &vmr_rwd_fix_leftarm_B.Unpack_o2[0], /* 755: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_a,    /* 756: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot.isEP,/* 757: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot.isHumanEXO,/* 758: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot.isNHPEXO,/* 759: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot.isClassicExo,/* 760: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot.isUTSEXO,/* 761: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot.isPMAC,/* 762: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot.isECAT,/* 763: Signal */
  &vmr_rwd_fix_leftarm_B.elbowangleoffset,/* 764: Signal */
  &vmr_rwd_fix_leftarm_B.L1,           /* 765: Signal */
  &vmr_rwd_fix_leftarm_B.L2,           /* 766: Signal */
  &vmr_rwd_fix_leftarm_B.L3Error,      /* 767: Signal */
  &vmr_rwd_fix_leftarm_B.M1GearRatio_b,/* 768: Signal */
  &vmr_rwd_fix_leftarm_B.M1orientation_h,/* 769: Signal */
  &vmr_rwd_fix_leftarm_B.M2GearRatio_p,/* 770: Signal */
  &vmr_rwd_fix_leftarm_B.M2Orientation_l,/* 771: Signal */
  &vmr_rwd_fix_leftarm_B.ArmOrientation_b,/* 772: Signal */
  &vmr_rwd_fix_leftarm_B.Pointeroffset,/* 773: Signal */
  &vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n,/* 774: Signal */
  &vmr_rwd_fix_leftarm_B.shoulderangleoffset,/* 775: Signal */
  &vmr_rwd_fix_leftarm_B.ShoulderX,    /* 776: Signal */
  &vmr_rwd_fix_leftarm_B.ShoulderY,    /* 777: Signal */
  &vmr_rwd_fix_leftarm_B.torqueconstant_g,/* 778: Signal */
  &vmr_rwd_fix_leftarm_B.robottype_e,  /* 779: Signal */
  &vmr_rwd_fix_leftarm_B.robotversion_g,/* 780: Signal */
  &vmr_rwd_fix_leftarm_B.Statusread1[0],/* 781: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isEP,/* 782: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isHumanEXO,/* 783: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isNHPEXO,/* 784: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isClassicExo,/* 785: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isUTSEXO,/* 786: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isPMAC,/* 787: Signal */
  &vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isECAT,/* 788: Signal */
  &vmr_rwd_fix_leftarm_B.elbowangleoffset_a,/* 789: Signal */
  &vmr_rwd_fix_leftarm_B.L1_c,         /* 790: Signal */
  &vmr_rwd_fix_leftarm_B.L2_f,         /* 791: Signal */
  &vmr_rwd_fix_leftarm_B.L3Error_f,    /* 792: Signal */
  &vmr_rwd_fix_leftarm_B.M1GearRatio_k,/* 793: Signal */
  &vmr_rwd_fix_leftarm_B.M1orientation_n,/* 794: Signal */
  &vmr_rwd_fix_leftarm_B.M2GearRatio_l,/* 795: Signal */
  &vmr_rwd_fix_leftarm_B.M2Orientation_cw,/* 796: Signal */
  &vmr_rwd_fix_leftarm_B.ArmOrientation_l,/* 797: Signal */
  &vmr_rwd_fix_leftarm_B.Pointeroffset_b,/* 798: Signal */
  &vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f,/* 799: Signal */
  &vmr_rwd_fix_leftarm_B.shoulderangleoffset_b,/* 800: Signal */
  &vmr_rwd_fix_leftarm_B.ShoulderX_a,  /* 801: Signal */
  &vmr_rwd_fix_leftarm_B.ShoulderY_b,  /* 802: Signal */
  &vmr_rwd_fix_leftarm_B.torqueconstant_i,/* 803: Signal */
  &vmr_rwd_fix_leftarm_B.robottype_cs, /* 804: Signal */
  &vmr_rwd_fix_leftarm_B.robotversion_f,/* 805: Signal */
  &vmr_rwd_fix_leftarm_B.Statusread1_m[0],/* 806: Signal */
  &vmr_rwd_fix_leftarm_B.Output_h,     /* 807: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtRelationalOperator,/* 808: Signal */
  &vmr_rwd_fix_leftarm_B.Uk1_e,        /* 809: Signal */
  &vmr_rwd_fix_leftarm_B.Diff[0],      /* 810: Signal */
  &vmr_rwd_fix_leftarm_B.TSamp[0],     /* 811: Signal */
  &vmr_rwd_fix_leftarm_B.Uk1[0],       /* 812: Signal */
  &vmr_rwd_fix_leftarm_B.Diff_p[0],    /* 813: Signal */
  &vmr_rwd_fix_leftarm_B.TSamp_d[0],   /* 814: Signal */
  &vmr_rwd_fix_leftarm_B.Uk1_d[0],     /* 815: Signal */
  &vmr_rwd_fix_leftarm_B.armIdx,       /* 816: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSum1_eh, /* 817: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSwitch_dp,/* 818: Signal */
  &vmr_rwd_fix_leftarm_B.ControlWord_o,/* 819: Signal */
  &vmr_rwd_fix_leftarm_B.motorStatus_f,/* 820: Signal */
  &vmr_rwd_fix_leftarm_B.isPermFaulted_i,/* 821: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_j,     /* 822: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f.ControlWord,/* 823: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f.motorStatus,/* 824: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f.isPermFaulted,/* 825: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_f,     /* 826: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.setupData[0],/* 827: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.SDORequest[0],/* 828: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.encoderOutputs[0],/* 829: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.complete,/* 830: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues.setupValues[0],/* 831: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues.setupValuesCount,/* 832: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues.pollValues[0],/* 833: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues.encoderValues[0],/* 834: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues.encoderValuesCount,/* 835: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_c,     /* 836: Signal */
  &vmr_rwd_fix_leftarm_B.Memory1_b[0], /* 837: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_i,/* 838: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_p,/* 839: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_a,/* 840: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.setupData[0],/* 841: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.SDORequest[0],/* 842: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.encoderOutputs[0],/* 843: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.complete,/* 844: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_p.setupValues[0],/* 845: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_p.setupValuesCount,/* 846: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_p.pollValues[0],/* 847: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_p.encoderValues[0],/* 848: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_p.encoderValuesCount,/* 849: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_n0,    /* 850: Signal */
  &vmr_rwd_fix_leftarm_B.Memory1_n[0], /* 851: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_ce,/* 852: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_dq,/* 853: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_m,/* 854: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_p.enable,/* 855: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_p.complete,/* 856: Signal */
  &vmr_rwd_fix_leftarm_B.sf_values.outVal[0],/* 857: Signal */
  &vmr_rwd_fix_leftarm_B.readAddr_p[0],/* 858: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_dx,/* 859: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_l,/* 860: Signal */
  &vmr_rwd_fix_leftarm_B.convert_b,    /* 861: Signal */
  &vmr_rwd_fix_leftarm_B.convert1_f,   /* 862: Signal */
  &vmr_rwd_fix_leftarm_B.status_d,     /* 863: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_ns,    /* 864: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOwritemachine.enable,/* 865: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOwritemachine.complete,/* 866: Signal */
  &vmr_rwd_fix_leftarm_B.sf_convert.y, /* 867: Signal */
  &vmr_rwd_fix_leftarm_B.writeData_e[0],/* 868: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_d,/* 869: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_b,/* 870: Signal */
  &vmr_rwd_fix_leftarm_B.status_n,     /* 871: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_nf,    /* 872: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_f,/* 873: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_d3,    /* 874: Signal */
  &vmr_rwd_fix_leftarm_B.Memory1_o,    /* 875: Signal */
  &vmr_rwd_fix_leftarm_B.Memory2_n,    /* 876: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_bs,/* 877: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition1_dsj,/* 878: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition2_d,/* 879: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p.ControlWord,/* 880: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p.motorStatus,/* 881: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p.isPermFaulted,/* 882: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_m,     /* 883: Signal */
  &vmr_rwd_fix_leftarm_B.ControlWord,  /* 884: Signal */
  &vmr_rwd_fix_leftarm_B.motorStatus,  /* 885: Signal */
  &vmr_rwd_fix_leftarm_B.isPermFaulted,/* 886: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_i,     /* 887: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.setupData[0],/* 888: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.SDORequest[0],/* 889: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.encoderOutputs[0],/* 890: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.complete,/* 891: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_k.setupValues[0],/* 892: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_k.setupValuesCount,/* 893: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_k.pollValues[0],/* 894: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_k.encoderValues[0],/* 895: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_k.encoderValuesCount,/* 896: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_h,     /* 897: Signal */
  &vmr_rwd_fix_leftarm_B.Memory1_f[0], /* 898: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_g0,/* 899: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_k,/* 900: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_o,/* 901: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.setupData[0],/* 902: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.SDORequest[0],/* 903: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.encoderOutputs[0],/* 904: Signal */
  &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.complete,/* 905: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_g.setupValues[0],/* 906: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_g.setupValuesCount,/* 907: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_g.pollValues[0],/* 908: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_g.encoderValues[0],/* 909: Signal */
  &vmr_rwd_fix_leftarm_B.sf_setupvalues_g.encoderValuesCount,/* 910: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_pb,    /* 911: Signal */
  &vmr_rwd_fix_leftarm_B.Memory1_et[0],/* 912: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_g,/* 913: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1,/* 914: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2,/* 915: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_g.enable,/* 916: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_g.complete,/* 917: Signal */
  &vmr_rwd_fix_leftarm_B.sf_values_n.outVal[0],/* 918: Signal */
  &vmr_rwd_fix_leftarm_B.readAddr[0],  /* 919: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_k2,/* 920: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_m,/* 921: Signal */
  &vmr_rwd_fix_leftarm_B.convert_l,    /* 922: Signal */
  &vmr_rwd_fix_leftarm_B.convert1,     /* 923: Signal */
  &vmr_rwd_fix_leftarm_B.status_e,     /* 924: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_ip,    /* 925: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOwritemachine_j.enable,/* 926: Signal */
  &vmr_rwd_fix_leftarm_B.sf_SDOwritemachine_j.complete,/* 927: Signal */
  &vmr_rwd_fix_leftarm_B.sf_convert_i.y,/* 928: Signal */
  &vmr_rwd_fix_leftarm_B.writeData[0], /* 929: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_aq,/* 930: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_p,/* 931: Signal */
  &vmr_rwd_fix_leftarm_B.status,       /* 932: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_lf,    /* 933: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload,/* 934: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_p,     /* 935: Signal */
  &vmr_rwd_fix_leftarm_B.Memory1_e,    /* 936: Signal */
  &vmr_rwd_fix_leftarm_B.Memory2,      /* 937: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_bx,/* 938: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition1_ds,/* 939: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition2_jr,/* 940: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSum1_e,  /* 941: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSwitch_m,/* 942: Signal */
  &vmr_rwd_fix_leftarm_B.filteredVels[0],/* 943: Signal */
  &vmr_rwd_fix_leftarm_B.outVals[0],   /* 944: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtRelationalOperator_l,/* 945: Signal */
  &vmr_rwd_fix_leftarm_B.Uk1_o,        /* 946: Signal */
  &vmr_rwd_fix_leftarm_B.ByteReversal_n,/* 947: Signal */
  &vmr_rwd_fix_leftarm_B.ByteReversal1_m,/* 948: Signal */
  &vmr_rwd_fix_leftarm_B.ByteReversal2,/* 949: Signal */
  &vmr_rwd_fix_leftarm_B.Pack_f[0],    /* 950: Signal */
  &vmr_rwd_fix_leftarm_B.Switch_n,     /* 951: Signal */
  &vmr_rwd_fix_leftarm_B.ByteReversal_g,/* 952: Signal */
  &vmr_rwd_fix_leftarm_B.ByteReversal1_a,/* 953: Signal */
  &vmr_rwd_fix_leftarm_B.ByteReversal2_g,/* 954: Signal */
  &vmr_rwd_fix_leftarm_B.Pack[0],      /* 955: Signal */
  &vmr_rwd_fix_leftarm_B.Switch_g,     /* 956: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtRelationalOperator_i,/* 957: Signal */
  &vmr_rwd_fix_leftarm_B.Uk1_p,        /* 958: Signal */
  &vmr_rwd_fix_leftarm_B.y_j,          /* 959: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_l,/* 960: Signal */
  &vmr_rwd_fix_leftarm_B.DPRAMReadValue,/* 961: Signal */
  &vmr_rwd_fix_leftarm_B.UnitDelay,    /* 962: Signal */
  &vmr_rwd_fix_leftarm_B.UnitDelay1,   /* 963: Signal */
  &vmr_rwd_fix_leftarm_B.Output_e,     /* 964: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSum1_o,  /* 965: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSwitch_h,/* 966: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister.allOK,/* 967: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister.ampStatus,/* 968: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister.servoEnabled,/* 969: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister.faultFound,/* 970: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister.currentLimitEnabled,/* 971: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister.eStopOut,/* 972: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister.motorOn,/* 973: Signal */
  &vmr_rwd_fix_leftarm_B.A1M1Convert[0],/* 974: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_j1,/* 975: Signal */
  &vmr_rwd_fix_leftarm_B.Statusword_k, /* 976: Signal */
  &vmr_rwd_fix_leftarm_B.statusregister_c4,/* 977: Signal */
  &vmr_rwd_fix_leftarm_B.primaryposition_l,/* 978: Signal */
  &vmr_rwd_fix_leftarm_B.secondaryposition_n,/* 979: Signal */
  &vmr_rwd_fix_leftarm_B.primaryvelocity_d,/* 980: Signal */
  &vmr_rwd_fix_leftarm_B.torque_ky,    /* 981: Signal */
  &vmr_rwd_fix_leftarm_B.digitalinputs_j,/* 982: Signal */
  &vmr_rwd_fix_leftarm_B.actualmodeofoperation_g,/* 983: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_g,    /* 984: Signal */
  &vmr_rwd_fix_leftarm_B.triggerCountRead_n,/* 985: Signal */
  &vmr_rwd_fix_leftarm_B.emcyReadTrigger_e[0],/* 986: Signal */
  &vmr_rwd_fix_leftarm_B.countOverwriteTrigger_n,/* 987: Signal */
  &vmr_rwd_fix_leftarm_B.emcyValPump_g[0],/* 988: Signal */
  &vmr_rwd_fix_leftarm_B.sf_faultmonitor.triggerFaultRead,/* 989: Signal */
  &vmr_rwd_fix_leftarm_B.sf_faultmonitor1.EMCYMsg[0],/* 990: Signal */
  &vmr_rwd_fix_leftarm_B.driveID_n2,   /* 991: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_c3,/* 992: Signal */
  &vmr_rwd_fix_leftarm_B.LinkAngle_c,  /* 993: Signal */
  &vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_m,/* 994: Signal */
  &vmr_rwd_fix_leftarm_B.PrimaryLinkVel_m,/* 995: Signal */
  &vmr_rwd_fix_leftarm_B.torque_d,     /* 996: Signal */
  &vmr_rwd_fix_leftarm_B.digitalInputs_e[0],/* 997: Signal */
  &vmr_rwd_fix_leftarm_B.digitalDiagnostics_e,/* 998: Signal */
  &vmr_rwd_fix_leftarm_B.calibrationButton_e,/* 999: Signal */
  &vmr_rwd_fix_leftarm_B.L2select_i,   /* 1000: Signal */
  &vmr_rwd_fix_leftarm_B.L2select1_h,  /* 1001: Signal */
  &vmr_rwd_fix_leftarm_B.L2select2_o,  /* 1002: Signal */
  &vmr_rwd_fix_leftarm_B.L2select3_cn, /* 1003: Signal */
  &vmr_rwd_fix_leftarm_B.L2select4_o,  /* 1004: Signal */
  &vmr_rwd_fix_leftarm_B.L2select5_c,  /* 1005: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.allOK,/* 1006: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.ampStatus,/* 1007: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.servoEnabled,/* 1008: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.faultFound,/* 1009: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.currentLimitEnabled,/* 1010: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.eStopOut,/* 1011: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.motorOn,/* 1012: Signal */
  &vmr_rwd_fix_leftarm_B.A1M2Convert[0],/* 1013: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_em,/* 1014: Signal */
  &vmr_rwd_fix_leftarm_B.Statusword_b, /* 1015: Signal */
  &vmr_rwd_fix_leftarm_B.statusregister_c,/* 1016: Signal */
  &vmr_rwd_fix_leftarm_B.primaryposition_e,/* 1017: Signal */
  &vmr_rwd_fix_leftarm_B.secondaryposition_d,/* 1018: Signal */
  &vmr_rwd_fix_leftarm_B.primaryvelocity_p,/* 1019: Signal */
  &vmr_rwd_fix_leftarm_B.torque_h,     /* 1020: Signal */
  &vmr_rwd_fix_leftarm_B.digitalinputs,/* 1021: Signal */
  &vmr_rwd_fix_leftarm_B.actualmodeofoperation_a,/* 1022: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_h,    /* 1023: Signal */
  &vmr_rwd_fix_leftarm_B.triggerCountRead,/* 1024: Signal */
  &vmr_rwd_fix_leftarm_B.emcyReadTrigger[0],/* 1025: Signal */
  &vmr_rwd_fix_leftarm_B.countOverwriteTrigger,/* 1026: Signal */
  &vmr_rwd_fix_leftarm_B.emcyValPump[0],/* 1027: Signal */
  &vmr_rwd_fix_leftarm_B.sf_faultmonitor_k.triggerFaultRead,/* 1028: Signal */
  &vmr_rwd_fix_leftarm_B.sf_faultmonitor1_l.EMCYMsg[0],/* 1029: Signal */
  &vmr_rwd_fix_leftarm_B.driveID_a,    /* 1030: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_kb,/* 1031: Signal */
  &vmr_rwd_fix_leftarm_B.LinkAngle_g,  /* 1032: Signal */
  &vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_b,/* 1033: Signal */
  &vmr_rwd_fix_leftarm_B.PrimaryLinkVel_d,/* 1034: Signal */
  &vmr_rwd_fix_leftarm_B.torque_g,     /* 1035: Signal */
  &vmr_rwd_fix_leftarm_B.digitalInputs_h[0],/* 1036: Signal */
  &vmr_rwd_fix_leftarm_B.digitalDiagnostics_a,/* 1037: Signal */
  &vmr_rwd_fix_leftarm_B.L2select_e,   /* 1038: Signal */
  &vmr_rwd_fix_leftarm_B.L2select1_hf, /* 1039: Signal */
  &vmr_rwd_fix_leftarm_B.L2select2_d,  /* 1040: Signal */
  &vmr_rwd_fix_leftarm_B.L2select3_p,  /* 1041: Signal */
  &vmr_rwd_fix_leftarm_B.L2select4_g,  /* 1042: Signal */
  &vmr_rwd_fix_leftarm_B.L2select5_f,  /* 1043: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter.uint32Out,/* 1044: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter.int32Out,/* 1045: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter.doubleOut,/* 1046: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_ba,/* 1047: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_p,/* 1048: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_i,/* 1049: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter_p.uint32Out,/* 1050: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter_p.int32Out,/* 1051: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter_p.doubleOut,/* 1052: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_f,/* 1053: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_l,/* 1054: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_g,/* 1055: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.allOK,/* 1056: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.ampStatus,/* 1057: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.servoEnabled,/* 1058: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.faultFound,/* 1059: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.currentLimitEnabled,/* 1060: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.eStopOut,/* 1061: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.motorOn,/* 1062: Signal */
  &vmr_rwd_fix_leftarm_B.A2M1Convert[0],/* 1063: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_et,/* 1064: Signal */
  &vmr_rwd_fix_leftarm_B.Statusword,   /* 1065: Signal */
  &vmr_rwd_fix_leftarm_B.statusregister_i,/* 1066: Signal */
  &vmr_rwd_fix_leftarm_B.primaryposition,/* 1067: Signal */
  &vmr_rwd_fix_leftarm_B.secondaryposition,/* 1068: Signal */
  &vmr_rwd_fix_leftarm_B.primaryvelocity,/* 1069: Signal */
  &vmr_rwd_fix_leftarm_B.torque_g5,    /* 1070: Signal */
  &vmr_rwd_fix_leftarm_B.digitalinput_d,/* 1071: Signal */
  &vmr_rwd_fix_leftarm_B.actualmodeofoperation_j,/* 1072: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_oe,   /* 1073: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.triggerCountRead,/* 1074: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.emcyReadTrigger[0],/* 1075: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.countOverwriteTrigger,/* 1076: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.emcyValPump[0],/* 1077: Signal */
  &vmr_rwd_fix_leftarm_B.sf_faultmonitor_f.triggerFaultRead,/* 1078: Signal */
  &vmr_rwd_fix_leftarm_B.sf_faultmonitor1_c.EMCYMsg[0],/* 1079: Signal */
  &vmr_rwd_fix_leftarm_B.driveID_n,    /* 1080: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_b,/* 1081: Signal */
  &vmr_rwd_fix_leftarm_B.LinkAngle_l,  /* 1082: Signal */
  &vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_f,/* 1083: Signal */
  &vmr_rwd_fix_leftarm_B.PrimaryLinkVel_i,/* 1084: Signal */
  &vmr_rwd_fix_leftarm_B.torque_f,     /* 1085: Signal */
  &vmr_rwd_fix_leftarm_B.digitalInputs_m[0],/* 1086: Signal */
  &vmr_rwd_fix_leftarm_B.digitalDiagnostics_c,/* 1087: Signal */
  &vmr_rwd_fix_leftarm_B.calibrationButton,/* 1088: Signal */
  &vmr_rwd_fix_leftarm_B.offsetrads,   /* 1089: Signal */
  &vmr_rwd_fix_leftarm_B.encorient,    /* 1090: Signal */
  &vmr_rwd_fix_leftarm_B.L2select2,    /* 1091: Signal */
  &vmr_rwd_fix_leftarm_B.L2select3,    /* 1092: Signal */
  &vmr_rwd_fix_leftarm_B.L2select4,    /* 1093: Signal */
  &vmr_rwd_fix_leftarm_B.L2select5,    /* 1094: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.allOK,/* 1095: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.ampStatus,/* 1096: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.servoEnabled,/* 1097: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.faultFound,/* 1098: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.currentLimitEnabled,/* 1099: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.eStopOut,/* 1100: Signal */
  &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.motorOn,/* 1101: Signal */
  &vmr_rwd_fix_leftarm_B.A2M2Convert[0],/* 1102: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_bv,/* 1103: Signal */
  &vmr_rwd_fix_leftarm_B.statusword,   /* 1104: Signal */
  &vmr_rwd_fix_leftarm_B.statusregister,/* 1105: Signal */
  &vmr_rwd_fix_leftarm_B.positionprimary,/* 1106: Signal */
  &vmr_rwd_fix_leftarm_B.positionsecondary,/* 1107: Signal */
  &vmr_rwd_fix_leftarm_B.velocityprimary,/* 1108: Signal */
  &vmr_rwd_fix_leftarm_B.torque_k,     /* 1109: Signal */
  &vmr_rwd_fix_leftarm_B.digitalinput, /* 1110: Signal */
  &vmr_rwd_fix_leftarm_B.actualmodeofoperation,/* 1111: Signal */
  &vmr_rwd_fix_leftarm_B.Compare_oo,   /* 1112: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.triggerCountRead,/* 1113: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.emcyReadTrigger[0],/* 1114: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.countOverwriteTrigger,/* 1115: Signal */
  &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.emcyValPump[0],/* 1116: Signal */
  &vmr_rwd_fix_leftarm_B.sf_faultmonitor_i.triggerFaultRead,/* 1117: Signal */
  &vmr_rwd_fix_leftarm_B.sf_faultmonitor1_h.EMCYMsg[0],/* 1118: Signal */
  &vmr_rwd_fix_leftarm_B.driveID,      /* 1119: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_ju,/* 1120: Signal */
  &vmr_rwd_fix_leftarm_B.LinkAngle,    /* 1121: Signal */
  &vmr_rwd_fix_leftarm_B.PrimaryLinkAngle,/* 1122: Signal */
  &vmr_rwd_fix_leftarm_B.PrimaryLinkVel,/* 1123: Signal */
  &vmr_rwd_fix_leftarm_B.torque,       /* 1124: Signal */
  &vmr_rwd_fix_leftarm_B.digitalInputs[0],/* 1125: Signal */
  &vmr_rwd_fix_leftarm_B.digitalDiagnostics,/* 1126: Signal */
  &vmr_rwd_fix_leftarm_B.L2select,     /* 1127: Signal */
  &vmr_rwd_fix_leftarm_B.L2select1,    /* 1128: Signal */
  &vmr_rwd_fix_leftarm_B.L2select2_p,  /* 1129: Signal */
  &vmr_rwd_fix_leftarm_B.L2select3_c,  /* 1130: Signal */
  &vmr_rwd_fix_leftarm_B.L2select4_b,  /* 1131: Signal */
  &vmr_rwd_fix_leftarm_B.L2select5_a,  /* 1132: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter_j.uint32Out,/* 1133: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter_j.int32Out,/* 1134: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter_j.doubleOut,/* 1135: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_d,/* 1136: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_f,/* 1137: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_a,/* 1138: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter_jl.uint32Out,/* 1139: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter_jl.int32Out,/* 1140: Signal */
  &vmr_rwd_fix_leftarm_B.sf_converter_jl.doubleOut,/* 1141: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_iq,/* 1142: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1,/* 1143: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2,/* 1144: Signal */
  &vmr_rwd_fix_leftarm_B.Output_b,     /* 1145: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_pj,/* 1146: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_j,/* 1147: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_pm,/* 1148: Signal */
  &vmr_rwd_fix_leftarm_B.Read_h,       /* 1149: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_dd,/* 1150: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_o,/* 1151: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSum1_n,  /* 1152: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSwitch_d,/* 1153: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_je,/* 1154: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_jd,/* 1155: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_j[0],/* 1156: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_pr[0], /* 1157: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_e[0],/* 1158: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_b,/* 1159: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_db,/* 1160: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_hm[0],/* 1161: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_ne[0], /* 1162: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_cg[0],/* 1163: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_h,/* 1164: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_di,/* 1165: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_mf,/* 1166: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_av,/* 1167: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_dp,    /* 1168: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_n,/* 1169: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_n,/* 1170: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_ke,/* 1171: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_dj[0],/* 1172: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_d4[0], /* 1173: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_m[0],/* 1174: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_ln,/* 1175: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_d,/* 1176: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_m[0],/* 1177: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_k[0],  /* 1178: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_o[0],/* 1179: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_n,/* 1180: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_k,/* 1181: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_gy,/* 1182: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_i,/* 1183: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_dt,    /* 1184: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_a,/* 1185: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_b3,/* 1186: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_ij,/* 1187: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_nh[0],/* 1188: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_c1[0], /* 1189: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_l[0],/* 1190: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_l,/* 1191: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_c,/* 1192: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_pr[0],/* 1193: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_a[0],  /* 1194: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_k4[0],/* 1195: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_d,/* 1196: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_p,/* 1197: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_ek,/* 1198: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_k,/* 1199: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_g,     /* 1200: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_c,/* 1201: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_dc,/* 1202: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_of,/* 1203: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion2_g[0],/* 1204: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_kg[0], /* 1205: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_gy[0],/* 1206: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_m,/* 1207: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_i,/* 1208: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_i1[0],/* 1209: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_f3[0], /* 1210: Signal */
  &vmr_rwd_fix_leftarm_B.RateTransition_i[0],/* 1211: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_f,/* 1212: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_j,/* 1213: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion_dh,/* 1214: Signal */
  &vmr_rwd_fix_leftarm_B.DataTypeConversion1_c,/* 1215: Signal */
  &vmr_rwd_fix_leftarm_B.Memory_l,     /* 1216: Signal */
  &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_gy,/* 1217: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSum1_ea, /* 1218: Signal */
  &vmr_rwd_fix_leftarm_B.FixPtSwitch_j,/* 1219: Signal */
  &vmr_rwd_fix_leftarm_P.CompareToConstant_const,/* 1220: Block Parameter */
  &vmr_rwd_fix_leftarm_P.GUIControl_XYcols[0],/* 1221: Block Parameter */
  &vmr_rwd_fix_leftarm_P.GUIControl_Vcols,/* 1222: Block Parameter */
  &vmr_rwd_fix_leftarm_P.GUIControl_Lcols,/* 1223: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Hand_Feedback_feedback_cntl_src,/* 1224: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_DistanceFromTarget_use_dominant_hand,/* 1225: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_up_duration,/* 1226: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_down_duration,/* 1227: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_max_torque,/* 1228: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_limit_motors,/* 1229: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_use_dominant_hand,/* 1230: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_target_type,/* 1231: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_num_states,/* 1232: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_attribcol1,/* 1233: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Process_Video_CMD_video_delay,/* 1234: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_target_type,/* 1235: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_num_states,/* 1236: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_attribcol1[0],/* 1237: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_attribcol2[0],/* 1238: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_opacity,/* 1239: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_target_display,/* 1240: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_target_type,/* 1241: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_num_states,/* 1242: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1[0],/* 1243: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_attribcol2[0],/* 1244: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_attribcol3[0],/* 1245: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_opacity,/* 1246: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_target_display,/* 1247: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Trial_Control_E_SHOW_INSTRUCT,/* 1248: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_i,/* 1249: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_p,/* 1250: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_gn, /* 1251: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory1_X0_i, /* 1252: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ECATDigDiagnostic_InitialValue[0],/* 1253: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ECATStatus_InitialValue[0],/* 1254: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ECAThardware_InitialValue[0],/* 1255: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ZeroDigOut_Value[0],/* 1256: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ZeroEPTorque_Value[0],/* 1257: Block Parameter */
  &vmr_rwd_fix_leftarm_P.seconds_remaining_Value,/* 1258: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_gv, /* 1259: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory1_X0_b, /* 1260: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_target_type_l,/* 1261: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_num_states_m,/* 1262: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1_n[0],/* 1263: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_opacity_e,/* 1264: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_target_display_k,/* 1265: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_k,/* 1266: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_With_Label_target_type,/* 1267: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_With_Label_num_states,/* 1268: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_With_Label_attribcol1[0],/* 1269: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_With_Label_opacity,/* 1270: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_With_Label_target_display,/* 1271: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch_Threshold_n,/* 1272: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BlockDefinitions_Value[0],/* 1273: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BlockSequence_Value[0],/* 1274: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_h,/* 1275: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DisplaySizem_Value[0],/* 1276: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DisplaySizepels_Value[0],/* 1277: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DockingPoints_Value[0],/* 1278: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ELCameraAngle_Value_h[0],/* 1279: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ELCameraFocalLength_Value_b,/* 1280: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ELCameraPosition_Value_k[0],/* 1281: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ELTrackingAvailable_Value_a,/* 1282: Block Parameter */
  &vmr_rwd_fix_leftarm_P.LibraryPatchVersion_Value,/* 1283: Block Parameter */
  &vmr_rwd_fix_leftarm_P.LibraryVersion_Value,/* 1284: Block Parameter */
  &vmr_rwd_fix_leftarm_P.LoadTable_Value[0],/* 1285: Block Parameter */
  &vmr_rwd_fix_leftarm_P.NextBlock_Value,/* 1286: Block Parameter */
  &vmr_rwd_fix_leftarm_P.PauseType_Value,/* 1287: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Repeat_Trial_Flag_Value,/* 1288: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RunTaskClockFlag_Value,/* 1289: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Seed_Value,   /* 1290: Block Parameter */
  &vmr_rwd_fix_leftarm_P.SubjectHeight_Value,/* 1291: Block Parameter */
  &vmr_rwd_fix_leftarm_P.SubjectWeight_Value,/* 1292: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TPTable_Value[0],/* 1293: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TargetLabels_Value[0],/* 1294: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TargetTable_Value[0],/* 1295: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TaskVersion_Value,/* 1296: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Taskwideparam_Value[0],/* 1297: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UseRepeatTrialFlag_Value,/* 1298: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UseTaskProtocolBlockSequenceFlag_Value,/* 1299: Block Parameter */
  &vmr_rwd_fix_leftarm_P.dlmbuildtime_Value,/* 1300: Block Parameter */
  &vmr_rwd_fix_leftarm_P.frame_of_reference_center_Value[0],/* 1301: Block Parameter */
  &vmr_rwd_fix_leftarm_P.xPCVersion_Value,/* 1302: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Assess_arm_VCODE_Value[0],/* 1303: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Contralateral_arm_VCODE_Value[0],/* 1304: Block Parameter */
  &vmr_rwd_fix_leftarm_P.feedback_status_Value,/* 1305: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TorqueLimit2_Value,/* 1306: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch_Threshold_h,/* 1307: Block Parameter */
  &vmr_rwd_fix_leftarm_P.SelectedStates_Value,/* 1308: Block Parameter */
  &vmr_rwd_fix_leftarm_P.attribcol2_Value,/* 1309: Block Parameter */
  &vmr_rwd_fix_leftarm_P.attribcol3_Value,/* 1310: Block Parameter */
  &vmr_rwd_fix_leftarm_P.attribcol4_Value,/* 1311: Block Parameter */
  &vmr_rwd_fix_leftarm_P.PCI6229DA_P1, /* 1312: Block Parameter */
  &vmr_rwd_fix_leftarm_P.PCI6229DA_P2, /* 1313: Block Parameter */
  &vmr_rwd_fix_leftarm_P.PCI6229DA_P3, /* 1314: Block Parameter */
  &vmr_rwd_fix_leftarm_P.PCI6229DA_P4, /* 1315: Block Parameter */
  &vmr_rwd_fix_leftarm_P.PCI6229DA_P5, /* 1316: Block Parameter */
  &vmr_rwd_fix_leftarm_P.PCI6229DA_P6, /* 1317: Block Parameter */
  &vmr_rwd_fix_leftarm_P.PCI6229DA_P7, /* 1318: Block Parameter */
  &vmr_rwd_fix_leftarm_P.GUI_VCODE_Value[0],/* 1319: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Gain_Gain_m,  /* 1320: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_h,  /* 1321: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P1_j[0],/* 1322: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P2_ka,/* 1323: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P3_k, /* 1324: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P4_l, /* 1325: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P5_m, /* 1326: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P1_h[0], /* 1327: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P2_mm,   /* 1328: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P3_k,    /* 1329: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P4_m,    /* 1330: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P5_p,    /* 1331: Block Parameter */
  &vmr_rwd_fix_leftarm_P.padder_Value[0],/* 1332: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state3_indices_Value[0],/* 1333: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state4_indices_Value[0],/* 1334: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state5_indices_Value[0],/* 1335: Block Parameter */
  &vmr_rwd_fix_leftarm_P.xpos_index_Value,/* 1336: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ypos_index_Value,/* 1337: Block Parameter */
  &vmr_rwd_fix_leftarm_P.padder_Value_o[0],/* 1338: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state4_indices_Value_d[0],/* 1339: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state5_indices_Value_c[0],/* 1340: Block Parameter */
  &vmr_rwd_fix_leftarm_P.xpos_index_Value_b,/* 1341: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ypos_index_Value_j,/* 1342: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_use_dom_hand,/* 1343: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_KINARM_Type,/* 1344: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_inertias_for_FF,/* 1345: Block Parameter */
  &vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_angles_or_XY,/* 1346: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_target_type_f,/* 1347: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_num_states_f,/* 1348: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_attribcol1_f[0],/* 1349: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_opacity_b,/* 1350: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_target_display_a,/* 1351: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch_Threshold_k,/* 1352: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_target_type_e,/* 1353: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_num_states_c,/* 1354: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_attribcol1_p[0],/* 1355: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_opacity_j,/* 1356: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target_target_display_d,/* 1357: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_target_type_b,/* 1358: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_num_states_e,/* 1359: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1_j[0],/* 1360: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_opacity_g,/* 1361: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target1_target_display_j,/* 1362: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target2_target_type,/* 1363: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target2_num_states,/* 1364: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target2_attribcol1[0],/* 1365: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target2_opacity,/* 1366: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Show_Target2_target_display,/* 1367: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_e,/* 1368: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_c,/* 1369: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant2_Value,/* 1370: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_fw, /* 1371: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory1_X0_c, /* 1372: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory2_X0_l, /* 1373: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch_Threshold_e,/* 1374: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch1_Threshold_n,/* 1375: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch2_Threshold,/* 1376: Block Parameter */
  &vmr_rwd_fix_leftarm_P.NotLoggingAnalogInputs_Value,/* 1377: Block Parameter */
  &vmr_rwd_fix_leftarm_P.custom_version_Value,/* 1378: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RateTransition2_X0_o,/* 1379: Block Parameter */
  &vmr_rwd_fix_leftarm_P.NotLoggingEventCodes_Value,/* 1380: Block Parameter */
  &vmr_rwd_fix_leftarm_P.IfRunning_const,/* 1381: Block Parameter */
  &vmr_rwd_fix_leftarm_P.packet_version_Value,/* 1382: Block Parameter */
  &vmr_rwd_fix_leftarm_P.const_Value[0],/* 1383: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P1[0],   /* 1384: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P2,      /* 1385: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P3,      /* 1386: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P4,      /* 1387: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P5,      /* 1388: Block Parameter */
  &vmr_rwd_fix_leftarm_P.max_packet_id_Value,/* 1389: Block Parameter */
  &vmr_rwd_fix_leftarm_P.runID_Value,  /* 1390: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TaskClock_Amp,/* 1391: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TaskClock_Period,/* 1392: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TaskClock_Duty,/* 1393: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TaskClock_PhaseDelay,/* 1394: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ain_offset1_Value,/* 1395: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ain_offset2_Value,/* 1396: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ain_slope1_Value,/* 1397: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ain_slope2_Value,/* 1398: Block Parameter */
  &vmr_rwd_fix_leftarm_P.calibration_matrix1_Value[0],/* 1399: Block Parameter */
  &vmr_rwd_fix_leftarm_P.calibration_matrix2_Value[0],/* 1400: Block Parameter */
  &vmr_rwd_fix_leftarm_P.enable_plate1_Value,/* 1401: Block Parameter */
  &vmr_rwd_fix_leftarm_P.enable_plate2_Value,/* 1402: Block Parameter */
  &vmr_rwd_fix_leftarm_P.gain_Value,   /* 1403: Block Parameter */
  &vmr_rwd_fix_leftarm_P.orientation1_Value,/* 1404: Block Parameter */
  &vmr_rwd_fix_leftarm_P.orientation2_Value,/* 1405: Block Parameter */
  &vmr_rwd_fix_leftarm_P.request_packet_Value[0],/* 1406: Block Parameter */
  &vmr_rwd_fix_leftarm_P.zero_voltage_Value,/* 1407: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ECATDigitalin_InitialValue[0],/* 1408: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ECATErrMsgs_InitialValue[0],/* 1409: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ECATTorquefeedback_InitialValue[0],/* 1410: Block Parameter */
  &vmr_rwd_fix_leftarm_P.HWSettings_InitialValue[0],/* 1411: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Kinematics_InitialValue[0],/* 1412: Block Parameter */
  &vmr_rwd_fix_leftarm_P.PrimaryEnc_InitialValue[0],/* 1413: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RobotCalib_InitialValue[0],/* 1414: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RobotRevision_InitialValue[0],/* 1415: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ServoUpdate_InitialValue,/* 1416: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Systemstatus_InitialValue[0],/* 1417: Block Parameter */
  &vmr_rwd_fix_leftarm_P.calibbutton_InitialValue,/* 1418: Block Parameter */
  &vmr_rwd_fix_leftarm_P.delays_InitialValue[0],/* 1419: Block Parameter */
  &vmr_rwd_fix_leftarm_P.hasFTsensors_InitialValue[0],/* 1420: Block Parameter */
  &vmr_rwd_fix_leftarm_P.isecat_const, /* 1421: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ispmac_const, /* 1422: Block Parameter */
  &vmr_rwd_fix_leftarm_P.systemtype_Value,/* 1423: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ELCameraAngle_Value[0],/* 1424: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ELCameraFocalLength_Value,/* 1425: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ELCameraPosition_Value[0],/* 1426: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ELTrackingAvailable_Value,/* 1427: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Gain_Gain,    /* 1428: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RateTransition_X0,/* 1429: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P1_i[0],/* 1430: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P2_i, /* 1431: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P3_l, /* 1432: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P4_g, /* 1433: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P5_a, /* 1434: Block Parameter */
  &vmr_rwd_fix_leftarm_P.isecat_const_a,/* 1435: Block Parameter */
  &vmr_rwd_fix_leftarm_P.isecat1_const,/* 1436: Block Parameter */
  &vmr_rwd_fix_leftarm_P.arm_count_Value,/* 1437: Block Parameter */
  &vmr_rwd_fix_leftarm_P.fp1_present_Value,/* 1438: Block Parameter */
  &vmr_rwd_fix_leftarm_P.fp2_present_Value,/* 1439: Block Parameter */
  &vmr_rwd_fix_leftarm_P.gaze_tracker_present_Value,/* 1440: Block Parameter */
  &vmr_rwd_fix_leftarm_P.robot_lift_present_Value,/* 1441: Block Parameter */
  &vmr_rwd_fix_leftarm_P.padder_Value_i[0],/* 1442: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state2_indices_Value_a[0],/* 1443: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state3_indices_Value_m[0],/* 1444: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state4_indices_Value_c2[0],/* 1445: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state5_indices_Value_p[0],/* 1446: Block Parameter */
  &vmr_rwd_fix_leftarm_P.xpos_index_Value_m,/* 1447: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ypos_index_Value_l,/* 1448: Block Parameter */
  &vmr_rwd_fix_leftarm_P.padder_Value_e[0],/* 1449: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state2_indices_Value[0],/* 1450: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state3_indices_Value_f[0],/* 1451: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state4_indices_Value_c[0],/* 1452: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state5_indices_Value_j[0],/* 1453: Block Parameter */
  &vmr_rwd_fix_leftarm_P.xpos_index_Value_k,/* 1454: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ypos_index_Value_ju,/* 1455: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Target_Type_Value,/* 1456: Block Parameter */
  &vmr_rwd_fix_leftarm_P.indices_padding_Value[0],/* 1457: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Hold_to_1Khz_BKIN_STEP_TIME,/* 1458: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RunCommandReceive_P1[0],/* 1459: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RunCommandReceive_P2,/* 1460: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RunCommandReceive_P3,/* 1461: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RunCommandReceive_P4,/* 1462: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RunCommandReceive_P5,/* 1463: Block Parameter */
  &vmr_rwd_fix_leftarm_P.CompareToConstant_const_b,/* 1464: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_o1,/* 1465: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TaskClock_Amp_m,/* 1466: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TaskClock_Period_n,/* 1467: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TaskClock_Duty_e,/* 1468: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TaskClock_PhaseDelay_b,/* 1469: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Delay_X0,     /* 1470: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Delay1_X0,    /* 1471: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TorqueLimit5_Value,/* 1472: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch1_Threshold_nq,/* 1473: Block Parameter */
  &vmr_rwd_fix_leftarm_P.CLAMP_COLClampStateintegerFlagtoclampvisualfeedbacknone_Value,/* 1474: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DELAY_POSTTRIAL_COLPostTrial_Delayintegertimebetweentrialsmsnon,/* 1475: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DISPLAY_TRIAL_COLFlagforadisplayonlytrialintegerFlagtotransitio,/* 1476: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DO_REWARD_COLDoRewardintegerFlagtoindicatewhethertoproviderewar,/* 1477: Block Parameter */
  &vmr_rwd_fix_leftarm_P.END_TARGET_COLEnd_TargettargetSecondtargettoappearduringatriali,/* 1478: Block Parameter */
  &vmr_rwd_fix_leftarm_P.HAND_VIS_COLHandVisibleintegerFlagtoshutoffthehandforaftereffec,/* 1479: Block Parameter */
  &vmr_rwd_fix_leftarm_P.MAXREACHTIME_COLMaxReachTimeintegermaximumtimeallowedforsucessf,/* 1480: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ROTATIONRotationintegerRotationdegreesCCWabsoluteorincrementald,/* 1481: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ROTATION_CENTERRotate_CentertargetTargettouseforrotationcenteri,/* 1482: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ROTATION_TYPERotate_Typeinteger0norotation1rotatespecifiedamoun,/* 1483: Block Parameter */
  &vmr_rwd_fix_leftarm_P.START_TARGET_COLStart_TargettargetFirsttargettoappearduringatri,/* 1484: Block Parameter */
  &vmr_rwd_fix_leftarm_P.WAIT_AT_START_COL1st_Target_WaitintegerRequiredholdtimeatstartt,/* 1485: Block Parameter */
  &vmr_rwd_fix_leftarm_P.INSTRUCT_PAUSE_BTNInstructResumeResumetaskexecutionafterinstruc,/* 1486: Block Parameter */
  &vmr_rwd_fix_leftarm_P.E_HIT_TARGETTarget_HitSubjecthasinterceptedthetargetnone_Value,/* 1487: Block Parameter */
  &vmr_rwd_fix_leftarm_P.E_MISS_TARGETTarget_MissSubjectshotpastthetargetwithouthittingi,/* 1488: Block Parameter */
  &vmr_rwd_fix_leftarm_P.E_NEUTRAL_FDBKNFB_Trial_EndSubjecthashitorexceededthetargetonan,/* 1489: Block Parameter */
  &vmr_rwd_fix_leftarm_P.E_NO_EVENTnaThisevent_codedoesnotsaveaneventinthedatafileitjust,/* 1490: Block Parameter */
  &vmr_rwd_fix_leftarm_P.E_REWARDReward_OnRewardisgivennone_Value,/* 1491: Block Parameter */
  &vmr_rwd_fix_leftarm_P.E_SHOW_INSTRUCTShowInstructionsTrialshowsinstructionsnone_Value,/* 1492: Block Parameter */
  &vmr_rwd_fix_leftarm_P.E_SHOW_SCOREShow_Cum_ScoreDisplaycumulativescorenone_Value,/* 1493: Block Parameter */
  &vmr_rwd_fix_leftarm_P.E_STAY_CENTERStay_CenterSubjecthasreachedthecentertargetandmust,/* 1494: Block Parameter */
  &vmr_rwd_fix_leftarm_P.E_TARGET_ONTarget_OnTargetONstartwaitingforsubjecttoleavecentre,/* 1495: Block Parameter */
  &vmr_rwd_fix_leftarm_P.COLORColorcolourColornone_Value,/* 1496: Block Parameter */
  &vmr_rwd_fix_leftarm_P.HITCOLORHitColorcolourColorwhenthetargetishitnone_Value,/* 1497: Block Parameter */
  &vmr_rwd_fix_leftarm_P.LABELLabeltextlabelDefaultlabeltextnone_Value,/* 1498: Block Parameter */
  &vmr_rwd_fix_leftarm_P.LABEL_HEIGHTLabelHeightfloatHeightofthelabelnone_Value,/* 1499: Block Parameter */
  &vmr_rwd_fix_leftarm_P.LOGICAL_RADIUSLogicalradiusfloatLogicalRadiusnone_Value,/* 1500: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ROTATED_COLORRotatedColorcolourTargetcolorforrotatedtrialsnone_,/* 1501: Block Parameter */
  &vmr_rwd_fix_leftarm_P.STROKE_COLORStrokeColorcolourStrokecolorforreturnringnone_Value,/* 1502: Block Parameter */
  &vmr_rwd_fix_leftarm_P.STROKE_WIDTHStrokeWidthfloatStrokewidthforreturnringnone_Value,/* 1503: Block Parameter */
  &vmr_rwd_fix_leftarm_P.VISUAL_RADIUSVisualradiusfloatDisplayRadiusnone_Value,/* 1504: Block Parameter */
  &vmr_rwd_fix_leftarm_P.col_xXfloatXPositioncmofthetargetrelativetolocal00none_Value,/* 1505: Block Parameter */
  &vmr_rwd_fix_leftarm_P.col_yYfloatYPositioncmofthetargetrelativetolocal00none_Value,/* 1506: Block Parameter */
  &vmr_rwd_fix_leftarm_P.INSTRUCTIONS_Value,/* 1507: Block Parameter */
  &vmr_rwd_fix_leftarm_P.LOAD_FOREITHER_Value,/* 1508: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_FIX_LEFTHANDFixLeftHandFlagintegerFlagtoholdtheenabletherobot,/* 1509: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_INSTRUCT_TIMEDisplayInstructionsHoldTimeintegerTimetodisplayi,/* 1510: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_LEFTHAND_TGTLefthandtargetintegerTargetdefiningthelocationwhe,/* 1511: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_RETURN_RING_ROWReturnRingTgtTblRowintegerRowofthetargettablet,/* 1512: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_REWARD_VALRewardValuecentsintegerAmountofrewardofferedoneacht,/* 1513: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_ROBOT_MOVE_TIMERobotMoveTimeintegerTimetherobotwillmovetothen,/* 1514: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_ROBOT_RAMP_TIMERobotRampTimeintegerTimetherobotwillrampupandd,/* 1515: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_SCORETEXT_ROWScoreTextTgtTblRowintegerRowofthetargettabletous,/* 1516: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_SCORE_TIMEDisplayScoreHoldTimeintegerTimetodisplaythecumulati,/* 1517: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_TONE_HIT_DURATIONHittonedurationintegerDurationofthefeedbackt,/* 1518: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_TONE_HIT_FREQUENCYHittonefrequencyintegerFrequencyofthefeedba,/* 1519: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_TONE_NEUTRAL_DURATIONNeutraltonedurationintegerDurationofthen,/* 1520: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_TONE_NEUTRAL_FREQUENCYNeutraltonefrequencyintegerFrequencyoft,/* 1521: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_UNUSEDUnusedintegerNotcurrentlyusednone_Value,/* 1522: Block Parameter */
  &vmr_rwd_fix_leftarm_P.K_VIS_RADVisibleRadiusfloatRadiusfromthestarttargetthatthehandw,/* 1523: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_i[0],/* 1524: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_cs[0],/* 1525: Block Parameter */
  &vmr_rwd_fix_leftarm_P.u0hz_Value,   /* 1526: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RateTransition1_X0,/* 1527: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RateTransition1_X0_l,/* 1528: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RateTransition2_X0_m,/* 1529: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RateTransition4_X0,/* 1530: Block Parameter */
  &vmr_rwd_fix_leftarm_P.padder_Value_n3[0],/* 1531: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state2_indices_Value_c4[0],/* 1532: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state3_indices_Value_n[0],/* 1533: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state4_indices_Value_g[0],/* 1534: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state5_indices_Value_m[0],/* 1535: Block Parameter */
  &vmr_rwd_fix_leftarm_P.xpos_index_Value_no,/* 1536: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ypos_index_Value_e,/* 1537: Block Parameter */
  &vmr_rwd_fix_leftarm_P.padder_Value_n[0],/* 1538: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state2_indices_Value_c[0],/* 1539: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state3_indices_Value_o[0],/* 1540: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state4_indices_Value_a[0],/* 1541: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state5_indices_Value_nf[0],/* 1542: Block Parameter */
  &vmr_rwd_fix_leftarm_P.xpos_index_Value_a,/* 1543: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ypos_index_Value_d,/* 1544: Block Parameter */
  &vmr_rwd_fix_leftarm_P.padder_Value_p[0],/* 1545: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state2_indices_Value_h[0],/* 1546: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state3_indices_Value_e[0],/* 1547: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state4_indices_Value_h[0],/* 1548: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state5_indices_Value_n[0],/* 1549: Block Parameter */
  &vmr_rwd_fix_leftarm_P.xpos_index_Value_n,/* 1550: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ypos_index_Value_f,/* 1551: Block Parameter */
  &vmr_rwd_fix_leftarm_P.padder_Value_a[0],/* 1552: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state2_indices_Value_af[0],/* 1553: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state3_indices_Value_k[0],/* 1554: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state4_indices_Value_l[0],/* 1555: Block Parameter */
  &vmr_rwd_fix_leftarm_P.state5_indices_Value_g[0],/* 1556: Block Parameter */
  &vmr_rwd_fix_leftarm_P.xpos_index_Value_nf,/* 1557: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ypos_index_Value_b,/* 1558: Block Parameter */
  &vmr_rwd_fix_leftarm_P.WrapToZero_Threshold_c,/* 1559: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Output_InitialCondition_a,/* 1560: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_g[0],/* 1561: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value,/* 1562: Block Parameter */
  &vmr_rwd_fix_leftarm_P.MaxFramesPerPacket_Value,/* 1563: Block Parameter */
  &vmr_rwd_fix_leftarm_P.t1_X0,        /* 1564: Block Parameter */
  &vmr_rwd_fix_leftarm_P.t2_X0,        /* 1565: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory2_X0,   /* 1566: Block Parameter */
  &vmr_rwd_fix_leftarm_P.RateTransition2_X0,/* 1567: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UDPReceive_P1[0],/* 1568: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UDPReceive_P2,/* 1569: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UDPReceive_P3,/* 1570: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UDPReceive_P4,/* 1571: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UDPReceive_P5,/* 1572: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UDPReceivePortReset_P1[0],/* 1573: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UDPReceivePortReset_P2,/* 1574: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UDPReceivePortReset_P3,/* 1575: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UDPReceivePortReset_P4,/* 1576: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UDPReceivePortReset_P5,/* 1577: Block Parameter */
  &vmr_rwd_fix_leftarm_P.total_packets_sent_Y0,/* 1578: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P1_f[0], /* 1579: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P2_g,    /* 1580: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P3_j,    /* 1581: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P4_k,    /* 1582: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P5_k,    /* 1583: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P1[0],/* 1584: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P2,   /* 1585: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P3,   /* 1586: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P4,   /* 1587: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P5,   /* 1588: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive1_P1[0],/* 1589: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive1_P2,  /* 1590: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive1_P3,  /* 1591: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive1_P4,  /* 1592: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive1_P5,  /* 1593: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P1_e[0], /* 1594: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P2_e,    /* 1595: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P3_p,    /* 1596: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P4_k1,   /* 1597: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P5_n,    /* 1598: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send1_P1[0],  /* 1599: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send1_P2,     /* 1600: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send1_P3,     /* 1601: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send1_P4,     /* 1602: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send1_P5,     /* 1603: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Compare_const_j,/* 1604: Block Parameter */
  &vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[0],/* 1605: Block Parameter */
  &vmr_rwd_fix_leftarm_P.activation_Value[0],/* 1606: Block Parameter */
  &vmr_rwd_fix_leftarm_P.eppartnums_Value[0],/* 1607: Block Parameter */
  &vmr_rwd_fix_leftarm_P.exopartnums_Value[0],/* 1608: Block Parameter */
  &vmr_rwd_fix_leftarm_P.forceprimaryonly_Value,/* 1609: Block Parameter */
  &vmr_rwd_fix_leftarm_P.maxerrorstofault_Value,/* 1610: Block Parameter */
  &vmr_rwd_fix_leftarm_P.nhppartnums_Value[0],/* 1611: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch_Threshold_b,/* 1612: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ispmac1_const,/* 1613: Block Parameter */
  &vmr_rwd_fix_leftarm_P.updateconstants_Value,/* 1614: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DominantArm_Value,/* 1615: Block Parameter */
  &vmr_rwd_fix_leftarm_P.steptime_Value,/* 1616: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DetectIncrease_vinit,/* 1617: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DiscreteDerivative_ICPrevScaledInput,/* 1618: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DiscreteDerivative1_ICPrevScaledInput,/* 1619: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_m[0],/* 1620: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch_Threshold_a,/* 1621: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch1_Threshold_h,/* 1622: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_n,/* 1623: Block Parameter */
  &vmr_rwd_fix_leftarm_P.FixPtConstant_Value_g,/* 1624: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_cq,/* 1625: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value,/* 1626: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UnitDelay_InitialCondition,/* 1627: Block Parameter */
  &vmr_rwd_fix_leftarm_P.WrapToZero_Threshold,/* 1628: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Output_InitialCondition,/* 1629: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TorqueMode_Value,/* 1630: Block Parameter */
  &vmr_rwd_fix_leftarm_P.enableCalibration_Value,/* 1631: Block Parameter */
  &vmr_rwd_fix_leftarm_P.enableMotors_Value,/* 1632: Block Parameter */
  &vmr_rwd_fix_leftarm_P.readTrigger_Value,/* 1633: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory2_X0_i, /* 1634: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory3_X0,   /* 1635: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1[0],/* 1636: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2,/* 1637: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3,/* 1638: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4,/* 1639: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5,/* 1640: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6,/* 1641: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7,/* 1642: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P1[0],/* 1643: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P2,/* 1644: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P3,/* 1645: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P4,/* 1646: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P5,/* 1647: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P6,/* 1648: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P7,/* 1649: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TorqueMode_Value_k,/* 1650: Block Parameter */
  &vmr_rwd_fix_leftarm_P.enableCalibration_Value_h,/* 1651: Block Parameter */
  &vmr_rwd_fix_leftarm_P.enableMotors_Value_c,/* 1652: Block Parameter */
  &vmr_rwd_fix_leftarm_P.readTrigger_Value_l,/* 1653: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory2_X0_o, /* 1654: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory3_X0_i, /* 1655: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_o[0],/* 1656: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_m,/* 1657: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_n,/* 1658: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_l,/* 1659: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_g,/* 1660: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_d,/* 1661: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_o,/* 1662: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P1_b[0],/* 1663: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P2_a,/* 1664: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P3_m,/* 1665: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P4_e,/* 1666: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P5_a,/* 1667: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P6_j,/* 1668: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P7_n,/* 1669: Block Parameter */
  &vmr_rwd_fix_leftarm_P.WrapToZero_Threshold_e,/* 1670: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Output_InitialCondition_pe,/* 1671: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_h[0],/* 1672: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_i,/* 1673: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_k,/* 1674: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_dw,/* 1675: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_n,/* 1676: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_oc,/* 1677: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_bj,/* 1678: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P1_j[0],/* 1679: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P2_i,/* 1680: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P3_e,/* 1681: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P4_j,/* 1682: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P5_c,/* 1683: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P6_m,/* 1684: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P7_h,/* 1685: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P1[0],/* 1686: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P2,/* 1687: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P3,/* 1688: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P4,/* 1689: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P5,/* 1690: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P6,/* 1691: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P7,/* 1692: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P1[0],/* 1693: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P2,/* 1694: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P3,/* 1695: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P4,/* 1696: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P5,/* 1697: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P6,/* 1698: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P7,/* 1699: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_d,/* 1700: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_k,/* 1701: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DetectChange_vinit,/* 1702: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_o[0],/* 1703: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReceivefromRobot1ForceSensor_P1[0],/* 1704: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReceivefromRobot1ForceSensor_P2,/* 1705: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReceivefromRobot1ForceSensor_P3,/* 1706: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReceivefromRobot1ForceSensor_P4,/* 1707: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReceivefromRobot1ForceSensor_P5,/* 1708: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch_Threshold_m,/* 1709: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DetectChange_vinit_n,/* 1710: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_a[0],/* 1711: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReceivefromRobot2ForceSensor_P1[0],/* 1712: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReceivefromRobot2ForceSensor_P2,/* 1713: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReceivefromRobot2ForceSensor_P3,/* 1714: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReceivefromRobot2ForceSensor_P4,/* 1715: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReceivefromRobot2ForceSensor_P5,/* 1716: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch1_Threshold,/* 1717: Block Parameter */
  &vmr_rwd_fix_leftarm_P.robot_count_Value,/* 1718: Block Parameter */
  &vmr_rwd_fix_leftarm_P.stepduration_Value,/* 1719: Block Parameter */
  &vmr_rwd_fix_leftarm_P.servocounter_Y0,/* 1720: Block Parameter */
  &vmr_rwd_fix_leftarm_P.EPcalibrationbtn_Y0,/* 1721: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Statusbits_Y0[0],/* 1722: Block Parameter */
  &vmr_rwd_fix_leftarm_P.MATLABFunction_BKIN_STEP_TIME,/* 1723: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_di,/* 1724: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_gt[0],/* 1725: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P1_m[0],/* 1726: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P2_k, /* 1727: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P3_e, /* 1728: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P4_h, /* 1729: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Receive_P5_i, /* 1730: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_l[0],/* 1731: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmElbowAngleOffset_Value,/* 1732: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmEncoderOrientation1_Value,/* 1733: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmEncoderOrientation2_Value,/* 1734: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmForceSensorAngleOffset_Value,/* 1735: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmL1_Value,  /* 1736: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmL2_Value,  /* 1737: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmL2L5Angle_Value,/* 1738: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmL3Error_Value,/* 1739: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmL5_Value,  /* 1740: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmMotor1GearRatio_Value,/* 1741: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmMotor1Orientation_Value,/* 1742: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmMotor2GearRatio_Value,/* 1743: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmMotor2Orientation_Value,/* 1744: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmOrientation_Value,/* 1745: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmPointerOffset_Value,/* 1746: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmSecondaryEncoders_Value,/* 1747: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmShoulderAngleOffset_Value,/* 1748: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmShoulderX_Value,/* 1749: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmShoulderY_Value,/* 1750: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmTorqueConstant_Value,/* 1751: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Armprimaryencodercounts_Value,/* 1752: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Armrobottype_Value,/* 1753: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Armrobotversion_Value,/* 1754: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Armsecondaryencodercounts_Value,/* 1755: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmElbowAngleOffset_Value_n,/* 1756: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmEncoderOrientation1_Value_f,/* 1757: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmEncoderOrientation2_Value_i,/* 1758: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmForceSensorAngleOffset_Value_c,/* 1759: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmL1_Value_c,/* 1760: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmL2_Value_i,/* 1761: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmL2L5Angle_Value_g,/* 1762: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmL3Error_Value_l,/* 1763: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmL5_Value_m,/* 1764: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmMotor1GearRatio_Value_b,/* 1765: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmMotor1Orientation_Value_a,/* 1766: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmMotor2GearRatio_Value_a,/* 1767: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmMotor2Orientation_Value_a,/* 1768: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmOrientation_Value_p,/* 1769: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmPointerOffset_Value_b,/* 1770: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmSecondaryEncoders_Value_h,/* 1771: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmShoulderAngleOffset_Value_l,/* 1772: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmShoulderX_Value_j,/* 1773: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmShoulderY_Value_p,/* 1774: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmTorqueConstant_Value_a,/* 1775: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Armprimaryencodercounts_Value_j,/* 1776: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Armrobottype_Value_m,/* 1777: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Armrobotversion_Value_b,/* 1778: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Armsecondaryencodercounts_Value_i,/* 1779: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ArmForceSensors_Value[0],/* 1780: Block Parameter */
  &vmr_rwd_fix_leftarm_P.WrapToZero_Threshold_o,/* 1781: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Output_InitialCondition_b,/* 1782: Block Parameter */
  &vmr_rwd_fix_leftarm_P.GazeFeedbackStatus_Value,/* 1783: Block Parameter */
  &vmr_rwd_fix_leftarm_P.HandFeedbackColour_Value,/* 1784: Block Parameter */
  &vmr_rwd_fix_leftarm_P.HandFeedbackFeedForward_Value,/* 1785: Block Parameter */
  &vmr_rwd_fix_leftarm_P.HandFeedbackRadius_Value,/* 1786: Block Parameter */
  &vmr_rwd_fix_leftarm_P.HandFeedbackSource_Value,/* 1787: Block Parameter */
  &vmr_rwd_fix_leftarm_P.HandFeedbackStatus_Value,/* 1788: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P1_d[0],/* 1789: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P2_e,/* 1790: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P3_n,/* 1791: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P4_f,/* 1792: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P5_e,/* 1793: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P6_jb,/* 1794: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P7_i,/* 1795: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P1_d[0],/* 1796: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P2_m,/* 1797: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P3_a,/* 1798: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P4_m,/* 1799: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P5_f,/* 1800: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P6_m,/* 1801: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P7_f,/* 1802: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P1_h[0],/* 1803: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P2_k,/* 1804: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P3_p,/* 1805: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P4_k,/* 1806: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P5_g,/* 1807: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P6_jg,/* 1808: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P7_m,/* 1809: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P1_p[0],/* 1810: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P2_j,/* 1811: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P3_f,/* 1812: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P4_j,/* 1813: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P5_m,/* 1814: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P6_h,/* 1815: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P7_a,/* 1816: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TSamp_WtEt,   /* 1817: Block Parameter */
  &vmr_rwd_fix_leftarm_P.TSamp_WtEt_o, /* 1818: Block Parameter */
  &vmr_rwd_fix_leftarm_P.FixPtConstant_Value,/* 1819: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_f,/* 1820: Block Parameter */
  &vmr_rwd_fix_leftarm_P.CompareToConstant_const_m,/* 1821: Block Parameter */
  &vmr_rwd_fix_leftarm_P.MotorIdx_Value,/* 1822: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_f,  /* 1823: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_d[0],/* 1824: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_c,/* 1825: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_g,/* 1826: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_n,/* 1827: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_e,/* 1828: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_n,/* 1829: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_b,/* 1830: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Compare_const,/* 1831: Block Parameter */
  &vmr_rwd_fix_leftarm_P.MotorIdx_Value_n,/* 1832: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_jg, /* 1833: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_i[0],/* 1834: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_n,/* 1835: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_l,/* 1836: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_m,/* 1837: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_d,/* 1838: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_o,/* 1839: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_l,/* 1840: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_e,  /* 1841: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory1_X0_h, /* 1842: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_gr, /* 1843: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory1_X0_p, /* 1844: Block Parameter */
  &vmr_rwd_fix_leftarm_P.readAddr_Value[0],/* 1845: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_j,  /* 1846: Block Parameter */
  &vmr_rwd_fix_leftarm_P.writeData_Value[0],/* 1847: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_hk, /* 1848: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_hu, /* 1849: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory1_X0,   /* 1850: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory2_X0_k, /* 1851: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Compare_const_b,/* 1852: Block Parameter */
  &vmr_rwd_fix_leftarm_P.MotorIdx_Value_d,/* 1853: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_g,  /* 1854: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_k[0],/* 1855: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_no,/* 1856: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_gf,/* 1857: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_d,/* 1858: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_eg,/* 1859: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_l,/* 1860: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_m,/* 1861: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Compare_const_h,/* 1862: Block Parameter */
  &vmr_rwd_fix_leftarm_P.MotorIdx_Value_n1,/* 1863: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_fo, /* 1864: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_ib[0],/* 1865: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_g,/* 1866: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_e,/* 1867: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_g,/* 1868: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_f,/* 1869: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_di,/* 1870: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_c,/* 1871: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_nj, /* 1872: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory1_X0_hb,/* 1873: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_id, /* 1874: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory1_X0_a, /* 1875: Block Parameter */
  &vmr_rwd_fix_leftarm_P.readAddr_Value_b[0],/* 1876: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_i,  /* 1877: Block Parameter */
  &vmr_rwd_fix_leftarm_P.writeData_Value_f[0],/* 1878: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_c,  /* 1879: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_ge, /* 1880: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory1_X0_f, /* 1881: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory2_X0_e, /* 1882: Block Parameter */
  &vmr_rwd_fix_leftarm_P.FixPtConstant_Value_m,/* 1883: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_kn,/* 1884: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ndorderbutterworth4Khz10hzcutoff_Value[0],/* 1885: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_md,/* 1886: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_c3,/* 1887: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant2_Value_k,/* 1888: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant3_Value,/* 1889: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P1_c[0], /* 1890: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P2_o,    /* 1891: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P3_d,    /* 1892: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P4_o,    /* 1893: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P5_m,    /* 1894: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch_Threshold,/* 1895: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_cn,/* 1896: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_me,/* 1897: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant2_Value_o,/* 1898: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant3_Value_k,/* 1899: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P1_i[0], /* 1900: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P2_m,    /* 1901: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P3_a,    /* 1902: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P4_b,    /* 1903: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Send_P5_o,    /* 1904: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Switch_Threshold_j,/* 1905: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DPRAMReadOffset_Value,/* 1906: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DPRAMWatchDogoffset_Value,/* 1907: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DPRAMWriteOffset_Value,/* 1908: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DPRAMWriteValue_Value,/* 1909: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReadSwitch_Value,/* 1910: Block Parameter */
  &vmr_rwd_fix_leftarm_P.ReadasUInt32_Value,/* 1911: Block Parameter */
  &vmr_rwd_fix_leftarm_P.WriteSwitch_Value,/* 1912: Block Parameter */
  &vmr_rwd_fix_leftarm_P.DPRAMReadValue_Gain,/* 1913: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UnitDelay_InitialCondition_p,/* 1914: Block Parameter */
  &vmr_rwd_fix_leftarm_P.UnitDelay1_InitialCondition,/* 1915: Block Parameter */
  &vmr_rwd_fix_leftarm_P.WrapToZero_Threshold_k,/* 1916: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Output_InitialCondition_p,/* 1917: Block Parameter */
  &vmr_rwd_fix_leftarm_P.FixPtConstant_Value_n,/* 1918: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_mf,/* 1919: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P1[0],/* 1920: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P2,/* 1921: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P3,/* 1922: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P4,/* 1923: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P5,/* 1924: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P6,/* 1925: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P7,/* 1926: Block Parameter */
  &vmr_rwd_fix_leftarm_P.driveID_Value,/* 1927: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P1_o[0],/* 1928: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P2_f,/* 1929: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P3_n,/* 1930: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P4_d,/* 1931: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P5_b,/* 1932: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P6_m,/* 1933: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P7_d,/* 1934: Block Parameter */
  &vmr_rwd_fix_leftarm_P.driveID_Value_c,/* 1935: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P1_l[0],/* 1936: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P2_c,/* 1937: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P3_i,/* 1938: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P4_m,/* 1939: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P5_g,/* 1940: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P6_e,/* 1941: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P7_n,/* 1942: Block Parameter */
  &vmr_rwd_fix_leftarm_P.driveID_Value_i,/* 1943: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P1_h[0],/* 1944: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P2_h,/* 1945: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P3_k,/* 1946: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P4_g,/* 1947: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P5_n,/* 1948: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P6_n,/* 1949: Block Parameter */
  &vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P7_l,/* 1950: Block Parameter */
  &vmr_rwd_fix_leftarm_P.driveID_Value_p,/* 1951: Block Parameter */
  &vmr_rwd_fix_leftarm_P.WrapToZero_Threshold_d,/* 1952: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Output_InitialCondition_bg,/* 1953: Block Parameter */
  &vmr_rwd_fix_leftarm_P.FixPtConstant_Value_j,/* 1954: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_dz,/* 1955: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_g0,/* 1956: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_h,/* 1957: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_o2, /* 1958: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_nd,/* 1959: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_m,  /* 1960: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_p,/* 1961: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_e,/* 1962: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0,    /* 1963: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_gd,/* 1964: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_h4,/* 1965: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_hp, /* 1966: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_iv,/* 1967: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_fd, /* 1968: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_nx,/* 1969: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_m,/* 1970: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_a,  /* 1971: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_lk,/* 1972: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_o,/* 1973: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_co, /* 1974: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_kv,/* 1975: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_n5, /* 1976: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_c,/* 1977: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_g,/* 1978: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_n,  /* 1979: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_ik,/* 1980: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_j,/* 1981: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_er, /* 1982: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_ly,/* 1983: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_ic, /* 1984: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_pq,/* 1985: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant1_Value_ol,/* 1986: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Memory_X0_o,  /* 1987: Block Parameter */
  &vmr_rwd_fix_leftarm_P.FixPtConstant_Value_c,/* 1988: Block Parameter */
  &vmr_rwd_fix_leftarm_P.Constant_Value_j/* 1989: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

/* Data Type Map - use dataTypeMapIndex to access this structure */
static const rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "int", "int32_T", 0, 0, sizeof(int32_T), SS_INT32, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "float", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0 },

  { "short", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0 },

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "signed char", "int8_T", 0, 0, sizeof(int8_T), SS_INT8, 0, 0 }
};

/* Structure Element Map - use elemMapIndex to access this structure */
static const rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { NULL, 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 2, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 20, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 22, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 24, 2, 0 },

  { rtwCAPI_VECTOR, 26, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 28, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 30, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 32, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 34, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 36, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 38, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 40, 2, 0 },

  { rtwCAPI_VECTOR, 42, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 44, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 46, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 48, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 42, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 50, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 52, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 54, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 56, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 58, 2, 0 },

  { rtwCAPI_VECTOR, 60, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 62, 2, 0 },

  { rtwCAPI_VECTOR, 64, 2, 0 },

  { rtwCAPI_VECTOR, 66, 2, 0 },

  { rtwCAPI_VECTOR, 68, 2, 0 },

  { rtwCAPI_VECTOR, 70, 2, 0 },

  { rtwCAPI_VECTOR, 72, 2, 0 },

  { rtwCAPI_VECTOR, 74, 2, 0 },

  { rtwCAPI_VECTOR, 76, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 78, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 80, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 82, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 26, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 84, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 86, 2, 0 },

  { rtwCAPI_VECTOR, 88, 2, 0 },

  { rtwCAPI_VECTOR, 90, 2, 0 },

  { rtwCAPI_VECTOR, 92, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 94, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 96, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 98, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 100, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 102, 2, 0 },

  { rtwCAPI_VECTOR, 104, 2, 0 },

  { rtwCAPI_VECTOR, 106, 2, 0 },

  { rtwCAPI_VECTOR, 108, 2, 0 },

  { rtwCAPI_VECTOR, 110, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 112, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 114, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 116, 2, 0 },

  { rtwCAPI_VECTOR, 118, 2, 0 },

  { rtwCAPI_VECTOR, 120, 2, 0 },

  { rtwCAPI_VECTOR, 122, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 124, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 126, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 128, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 130, 2, 0 },

  { rtwCAPI_VECTOR, 132, 2, 0 },

  { rtwCAPI_VECTOR, 134, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 136, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 138, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 140, 2, 0 },

  { rtwCAPI_VECTOR, 30, 2, 0 },

  { rtwCAPI_VECTOR, 46, 2, 0 },

  { rtwCAPI_VECTOR, 130, 2, 0 },

  { rtwCAPI_VECTOR, 142, 2, 0 },

  { rtwCAPI_VECTOR, 114, 2, 0 },

  { rtwCAPI_VECTOR, 144, 2, 0 },

  { rtwCAPI_VECTOR, 34, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 146, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 148, 2, 0 },

  { rtwCAPI_VECTOR, 150, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 152, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 154, 2, 0 },

  { rtwCAPI_VECTOR, 156, 2, 0 },

  { rtwCAPI_VECTOR, 136, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 158, 2, 0 },

  { rtwCAPI_VECTOR, 160, 2, 0 },

  { rtwCAPI_VECTOR, 102, 2, 0 },

  { rtwCAPI_VECTOR, 162, 2, 0 },

  { rtwCAPI_VECTOR, 164, 2, 0 },

  { rtwCAPI_VECTOR, 166, 2, 0 },

  { rtwCAPI_VECTOR, 168, 2, 0 },

  { rtwCAPI_VECTOR, 170, 2, 0 },

  { rtwCAPI_VECTOR, 172, 2, 0 },

  { rtwCAPI_VECTOR, 174, 2, 0 },

  { rtwCAPI_VECTOR, 176, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  7,                                   /* 2 */
  70,                                  /* 3 */
  1,                                   /* 4 */
  5,                                   /* 5 */
  2,                                   /* 6 */
  1,                                   /* 7 */
  2,                                   /* 8 */
  2,                                   /* 9 */
  4,                                   /* 10 */
  1,                                   /* 11 */
  1,                                   /* 12 */
  70,                                  /* 13 */
  8,                                   /* 14 */
  1,                                   /* 15 */
  1,                                   /* 16 */
  18,                                  /* 17 */
  16,                                  /* 18 */
  1,                                   /* 19 */
  50,                                  /* 20 */
  500,                                 /* 21 */
  1000,                                /* 22 */
  2,                                   /* 23 */
  20,                                  /* 24 */
  20,                                  /* 25 */
  50,                                  /* 26 */
  1,                                   /* 27 */
  100,                                 /* 28 */
  50,                                  /* 29 */
  1,                                   /* 30 */
  2,                                   /* 31 */
  5,                                   /* 32 */
  2,                                   /* 33 */
  1,                                   /* 34 */
  3,                                   /* 35 */
  1,                                   /* 36 */
  50,                                  /* 37 */
  2,                                   /* 38 */
  70,                                  /* 39 */
  32,                                  /* 40 */
  32,                                  /* 41 */
  32,                                  /* 42 */
  1,                                   /* 43 */
  3,                                   /* 44 */
  2,                                   /* 45 */
  1,                                   /* 46 */
  4,                                   /* 47 */
  32,                                  /* 48 */
  4,                                   /* 49 */
  70,                                  /* 50 */
  16,                                  /* 51 */
  5,                                   /* 52 */
  11,                                  /* 53 */
  1,                                   /* 54 */
  25,                                  /* 55 */
  1,                                   /* 56 */
  10,                                  /* 57 */
  1,                                   /* 58 */
  68,                                  /* 59 */
  6,                                   /* 60 */
  1,                                   /* 61 */
  1,                                   /* 62 */
  40,                                  /* 63 */
  13,                                  /* 64 */
  1,                                   /* 65 */
  14,                                  /* 66 */
  1,                                   /* 67 */
  40,                                  /* 68 */
  1,                                   /* 69 */
  410,                                 /* 70 */
  1,                                   /* 71 */
  34,                                  /* 72 */
  1,                                   /* 73 */
  3,                                   /* 74 */
  1,                                   /* 75 */
  512,                                 /* 76 */
  1,                                   /* 77 */
  2,                                   /* 78 */
  4,                                   /* 79 */
  1,                                   /* 80 */
  352,                                 /* 81 */
  2,                                   /* 82 */
  5,                                   /* 83 */
  1,                                   /* 84 */
  500,                                 /* 85 */
  1000,                                /* 86 */
  1,                                   /* 87 */
  27240,                               /* 88 */
  1,                                   /* 89 */
  5,                                   /* 90 */
  1,                                   /* 91 */
  6810,                                /* 92 */
  1,                                   /* 93 */
  2,                                   /* 94 */
  6,                                   /* 95 */
  3,                                   /* 96 */
  50,                                  /* 97 */
  2,                                   /* 98 */
  25,                                  /* 99 */
  1,                                   /* 100 */
  108,                                 /* 101 */
  1,                                   /* 102 */
  400,                                 /* 103 */
  21,                                  /* 104 */
  1,                                   /* 105 */
  1640,                                /* 106 */
  1,                                   /* 107 */
  64,                                  /* 108 */
  1,                                   /* 109 */
  12,                                  /* 110 */
  1,                                   /* 111 */
  12,                                  /* 112 */
  2,                                   /* 113 */
  1,                                   /* 114 */
  6,                                   /* 115 */
  4,                                   /* 116 */
  5,                                   /* 117 */
  24,                                  /* 118 */
  1,                                   /* 119 */
  20,                                  /* 120 */
  1,                                   /* 121 */
  7,                                   /* 122 */
  1,                                   /* 123 */
  1,                                   /* 124 */
  20,                                  /* 125 */
  1,                                   /* 126 */
  24,                                  /* 127 */
  1,                                   /* 128 */
  16,                                  /* 129 */
  1,                                   /* 130 */
  8,                                   /* 131 */
  36,                                  /* 132 */
  1,                                   /* 133 */
  10,                                  /* 134 */
  1,                                   /* 135 */
  1,                                   /* 136 */
  7,                                   /* 137 */
  8,                                   /* 138 */
  3,                                   /* 139 */
  6,                                   /* 140 */
  2,                                   /* 141 */
  1,                                   /* 142 */
  14,                                  /* 143 */
  1,                                   /* 144 */
  9,                                   /* 145 */
  32,                                  /* 146 */
  25,                                  /* 147 */
  70,                                  /* 148 */
  9,                                   /* 149 */
  1,                                   /* 150 */
  11,                                  /* 151 */
  5,                                   /* 152 */
  7,                                   /* 153 */
  6,                                   /* 154 */
  8,                                   /* 155 */
  1,                                   /* 156 */
  34,                                  /* 157 */
  5,                                   /* 158 */
  5,                                   /* 159 */
  1,                                   /* 160 */
  3781,                                /* 161 */
  1,                                   /* 162 */
  15,                                  /* 163 */
  1,                                   /* 164 */
  13,                                  /* 165 */
  1,                                   /* 166 */
  48,                                  /* 167 */
  1,                                   /* 168 */
  46,                                  /* 169 */
  1,                                   /* 170 */
  12,                                  /* 171 */
  1,                                   /* 172 */
  42,                                  /* 173 */
  1,                                   /* 174 */
  41,                                  /* 175 */
  1,                                   /* 176 */
  39                                   /* 177 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.00025, 0.0, 0.001, 0.002, 0.1, 0.0005
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { NULL, NULL, rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (NULL), (NULL), -1, 0 },

  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    3, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    4, 0 },

  { (NULL), (NULL), -2, 0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[1],
    5, 0 },

  { (const void *) &rtcapiStoredFloats[5], (const void *) &rtcapiStoredFloats[1],
    2, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 1220 },

  { rtBlockParameters, 770,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3206908395U,
    2997485084U,
    1669780935U,
    2577020884U },
  NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void vmr_rwd_fix_leftarm_InitializeDataMapInfo(RT_MODEL_vmr_rwd_fix_leftarm_T
  *vmr_rwd_fix_leftarm_M
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(vmr_rwd_fix_leftarm_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(vmr_rwd_fix_leftarm_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(vmr_rwd_fix_leftarm_M->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(vmr_rwd_fix_leftarm_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(vmr_rwd_fix_leftarm_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  vmr_rwd_fix_leftarm_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(vmr_rwd_fix_leftarm_M);
  vmr_rwd_fix_leftarm_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_vmr_rwd_fix_leftarm_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(vmr_rwd_fix_leftarm_M->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(vmr_rwd_fix_leftarm_M->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(vmr_rwd_fix_leftarm_M->DataMapInfo.mmi, 0);
}

/* EOF: vmr_rwd_fix_leftarm_capi.c */
