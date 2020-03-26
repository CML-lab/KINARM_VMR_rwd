/*
 * Code generation for system system '<S5>/Preview Targets Subsystem'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_PreviewTargetsSubsystem.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Output and update for atomic system: '<S5>/Preview Targets Subsystem' */
void vmr_rwd_fix_leftarm_PreviewTargetsSubsystem(void)
{
  int32_T num_attributes;
  int32_T target_entry_size;
  int32_T start_index;
  int32_T attrib_start;
  int32_T i;

  /* Reshape: '<S266>/Reshape1' incorporates:
   *  Constant: '<S266>/V_cols'
   */
  vmr_rwd_fix_leftarm_B.Concatenation1[0] =
    vmr_rwd_fix_leftarm_P.GUIControl_Vcols;

  /* Reshape: '<S266>/Reshape' incorporates:
   *  Constant: '<S266>/L_cols'
   */
  vmr_rwd_fix_leftarm_B.Concatenation1[1] =
    vmr_rwd_fix_leftarm_P.GUIControl_Lcols;

  /* Constant: '<S266>/indices_padding' */
  memcpy(&vmr_rwd_fix_leftarm_B.Concatenation1[2],
         &vmr_rwd_fix_leftarm_P.indices_padding_Value[0], sizeof(real_T) << 3U);

  /* MATLAB Function: '<S266>/Create Target Vector' incorporates:
   *  Constant: '<S266>/Target_Type'
   *  Constant: '<S266>/XY_cols'
   *  Constant: '<S5>/Target Table'
   */
  /* MATLAB Function 'GUI Control/Preview Targets Subsystem/Create Target Vector': '<S271>:1' */
  /*  Assemble the target vector for reading by the GUI. The vector consists of n entries back-to-back, */
  /*  where n is the number of rows in the target table, and each entry consists of */
  /*  */
  /*    target type, x position, y position, visual attribute values, logical attribute values */
  /*  */
  /*  for a target, where all values are taken out of the target table and processed so that they are ready */
  /*  to be used by the GUI. This is kind of a compressed version of the process of creating a target using */
  /*  Show_Target block -> VCODE -> Process_Video_CMD block. */
  /*  */
  /*  The visual and logical attributes are the target type-specific information corresponding to the visual */
  /*  and logical versions of that target. Distances and rotations are converted from cm and degrees, as they */
  /*  are specified in the GUI, to um and and urads. For more information on how these are defined for each  */
  /*  target type, refer to the mask help for this block or for the Show_Target block. */
  /*  Note the number of attribute columns based on the target type. */
  /* '<S271>:1:18' */
  num_attributes = 1;
  if (!(vmr_rwd_fix_leftarm_P.Target_Type_Value == 1.0)) {
    if ((vmr_rwd_fix_leftarm_P.Target_Type_Value == 2.0) ||
        (vmr_rwd_fix_leftarm_P.Target_Type_Value == 3.0) ||
        (vmr_rwd_fix_leftarm_P.Target_Type_Value == 4.0)) {
      /* '<S271>:1:22' */
      /* '<S271>:1:23' */
      num_attributes = 3;
    } else {
      if (vmr_rwd_fix_leftarm_P.Target_Type_Value == 5.0) {
        /* '<S271>:1:24' */
        /* '<S271>:1:25' */
        num_attributes = 4;
      }
    }
  } else {
    /* '<S271>:1:20' */
    /* '<S271>:1:21' */
  }

  /* '<S271>:1:28' */
  target_entry_size = (num_attributes << 1) + 3;

  /*  size of type, x,y position, and all attributes */
  /*  Set the vector length to the maximum that might be required, as it has to be constant at build time. */
  /* '<S271>:1:32' */
  vmr_rwd_fix_leftarm_B.target_vector_length = 352.0;

  /* '<S271>:1:33' */
  for (i = 0; i < 352; i++) {
    vmr_rwd_fix_leftarm_B.target_vector[i] = 0.0;
  }

  /*  For each target, set... */
  /* '<S271>:1:38' */
  for (i = 0; i < 32; i++) {
    /* '<S271>:1:38' */
    /* '<S271>:1:39' */
    start_index = i * target_entry_size;

    /* '<S271>:1:41' */
    vmr_rwd_fix_leftarm_B.target_vector[start_index] =
      vmr_rwd_fix_leftarm_P.Target_Type_Value;

    /*  target type */
    /* '<S271>:1:43' */
    vmr_rwd_fix_leftarm_B.target_vector[start_index + 1] =
      vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
      vmr_rwd_fix_leftarm_P.GUIControl_XYcols[0] - 1) << 5) + i] * 0.01;

    /*  x position (m) */
    /* '<S271>:1:44' */
    vmr_rwd_fix_leftarm_B.target_vector[start_index + 2] =
      vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
      vmr_rwd_fix_leftarm_P.GUIControl_XYcols[1] - 1) << 5) + i] * 0.01;

    /*  y position (m) */
    /*  For each vector of visual and logical column indices... */
    /* '<S271>:1:47' */
    /* '<S271>:1:48' */
    attrib_start = start_index + 5;

    /*  Copy circle attributes: radius (m). */
    if (vmr_rwd_fix_leftarm_P.Target_Type_Value == 1.0) {
      /* '<S271>:1:51' */
      /* '<S271>:1:52' */
      vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] =
        vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
        vmr_rwd_fix_leftarm_B.Concatenation1[0] - 1) << 5) + i] * 0.01;

      /*  Copy ellipse attributes: major radius (m), minor radius (m), rotation (degrees). */
    } else if (vmr_rwd_fix_leftarm_P.Target_Type_Value == 2.0) {
      /* '<S271>:1:55' */
      if ((vmr_rwd_fix_leftarm_B.Concatenation1[0] == 0.0) ||
          (vmr_rwd_fix_leftarm_B.Concatenation1[2] == 0.0)) {
        /* '<S271>:1:56' */
        /* '<S271>:1:57' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] = 0.0;

        /* '<S271>:1:58' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] = 0.0;
      } else {
        /* '<S271>:1:60' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[0] - 1) << 5) + i] * 0.01;

        /* '<S271>:1:61' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[2] - 1) << 5) + i] * 0.01;
      }

      if (vmr_rwd_fix_leftarm_B.Concatenation1[4] == 0.0) {
        /* '<S271>:1:64' */
        /* '<S271>:1:65' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start] = 0.0;
      } else {
        /* '<S271>:1:67' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start] =
          (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
             vmr_rwd_fix_leftarm_B.Concatenation1[4] - 1) << 5) + i] - floor
           (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
              vmr_rwd_fix_leftarm_B.Concatenation1[4] - 1) << 5) + i] / 360.0) *
           360.0) * 3.1415926535897931 / 180.0;
      }

      /*  Copy rectangle attributes: length (m), height (m), rotation (degrees). */
      /*  This amounts to the same procedure as for an ellipse. */
    } else if (vmr_rwd_fix_leftarm_P.Target_Type_Value == 3.0) {
      /* '<S271>:1:72' */
      if ((vmr_rwd_fix_leftarm_B.Concatenation1[0] == 0.0) ||
          (vmr_rwd_fix_leftarm_B.Concatenation1[2] == 0.0)) {
        /* '<S271>:1:73' */
        /* '<S271>:1:74' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] = 0.0;

        /* '<S271>:1:75' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] = 0.0;
      } else {
        /* '<S271>:1:77' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[0] - 1) << 5) + i] * 0.01;

        /* '<S271>:1:78' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[2] - 1) << 5) + i] * 0.01;
      }

      if (vmr_rwd_fix_leftarm_B.Concatenation1[4] == 0.0) {
        /* '<S271>:1:81' */
        /* '<S271>:1:82' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start] = 0.0;
      } else {
        /* '<S271>:1:84' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start] =
          (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
             vmr_rwd_fix_leftarm_B.Concatenation1[4] - 1) << 5) + i] - floor
           (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
              vmr_rwd_fix_leftarm_B.Concatenation1[4] - 1) << 5) + i] / 360.0) *
           360.0) * 3.1415926535897931 / 180.0;
      }

      /*  Copy line attributes: relative endpoint x coordinate (m), relative endpoint y coordinate (m), width */
    } else if (vmr_rwd_fix_leftarm_P.Target_Type_Value == 4.0) {
      /* '<S271>:1:88' */
      if (((vmr_rwd_fix_leftarm_B.Concatenation1[0] == 0.0) &&
           (vmr_rwd_fix_leftarm_B.Concatenation1[2] == 0.0)) ||
          (vmr_rwd_fix_leftarm_B.Concatenation1[4] == 0.0)) {
        /* '<S271>:1:89' */
        /* '<S271>:1:90' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] = 0.0;

        /* '<S271>:1:91' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] = 0.0;

        /* '<S271>:1:92' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start] = 0.0;
      } else {
        /* '<S271>:1:94' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[0] - 1) << 5) + i] * 0.01;

        /* '<S271>:1:95' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[2] - 1) << 5) + i] * 0.01;
        if (vmr_rwd_fix_leftarm_B.Concatenation1[4] < 0.0) {
          /* '<S271>:1:97' */
          /* '<S271>:1:98' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start] = 0.001;
        } else {
          /* '<S271>:1:100' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start] =
            vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
            vmr_rwd_fix_leftarm_B.Concatenation1[4] - 1) << 5) + i] * 0.01;
        }
      }

      /*  Copy triangle attributes: length (m), height (m), peak offset (m), rotation (degrees). */
    } else {
      if (vmr_rwd_fix_leftarm_P.Target_Type_Value == 5.0) {
        /* '<S271>:1:105' */
        if (vmr_rwd_fix_leftarm_B.Concatenation1[0] == 0.0) {
          /* '<S271>:1:106' */
          /* '<S271>:1:107' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] = 0.0;
        } else {
          /* '<S271>:1:109' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] =
            vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
            vmr_rwd_fix_leftarm_B.Concatenation1[0] - 1) << 5) + i] * 0.01;
        }

        if (vmr_rwd_fix_leftarm_B.Concatenation1[2] == 0.0) {
          /* '<S271>:1:112' */
          /*  create an equilateral triangle if no height column is specified */
          /* '<S271>:1:113' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] =
            vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
            vmr_rwd_fix_leftarm_B.Concatenation1[0] - 1) << 5) + i] *
            0.8660254037844386 * 0.01;

          /* '<S271>:1:114' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start] = 0.0;
        } else {
          /* '<S271>:1:116' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] =
            vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
            vmr_rwd_fix_leftarm_B.Concatenation1[2] - 1) << 5) + i] * 0.01;

          /* '<S271>:1:117' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start] =
            vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
            vmr_rwd_fix_leftarm_B.Concatenation1[4] - 1) << 5) + i] * 0.01;
        }

        if (vmr_rwd_fix_leftarm_B.Concatenation1[6] == 0.0) {
          /* '<S271>:1:120' */
          /* '<S271>:1:121' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start + 1] = 0.0;
        } else {
          /* '<S271>:1:123' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start + 1] =
            (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
               vmr_rwd_fix_leftarm_B.Concatenation1[6] - 1) << 5) + i] - floor
             (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
                vmr_rwd_fix_leftarm_B.Concatenation1[6] - 1) << 5) + i] / 360.0)
             * 360.0) * 3.1415926535897931 / 180.0;
        }
      }
    }

    /* '<S271>:1:47' */
    /* '<S271>:1:48' */
    attrib_start = (start_index + num_attributes) + 5;

    /*  Copy circle attributes: radius (m). */
    if (vmr_rwd_fix_leftarm_P.Target_Type_Value == 1.0) {
      /* '<S271>:1:51' */
      /* '<S271>:1:52' */
      vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] =
        vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
        vmr_rwd_fix_leftarm_B.Concatenation1[1] - 1) << 5) + i] * 0.01;

      /*  Copy ellipse attributes: major radius (m), minor radius (m), rotation (degrees). */
    } else if (vmr_rwd_fix_leftarm_P.Target_Type_Value == 2.0) {
      /* '<S271>:1:55' */
      if ((vmr_rwd_fix_leftarm_B.Concatenation1[1] == 0.0) ||
          (vmr_rwd_fix_leftarm_B.Concatenation1[3] == 0.0)) {
        /* '<S271>:1:56' */
        /* '<S271>:1:57' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] = 0.0;

        /* '<S271>:1:58' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] = 0.0;
      } else {
        /* '<S271>:1:60' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[1] - 1) << 5) + i] * 0.01;

        /* '<S271>:1:61' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[3] - 1) << 5) + i] * 0.01;
      }

      if (vmr_rwd_fix_leftarm_B.Concatenation1[5] == 0.0) {
        /* '<S271>:1:64' */
        /* '<S271>:1:65' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start] = 0.0;
      } else {
        /* '<S271>:1:67' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start] =
          (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
             vmr_rwd_fix_leftarm_B.Concatenation1[5] - 1) << 5) + i] - floor
           (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
              vmr_rwd_fix_leftarm_B.Concatenation1[5] - 1) << 5) + i] / 360.0) *
           360.0) * 3.1415926535897931 / 180.0;
      }

      /*  Copy rectangle attributes: length (m), height (m), rotation (degrees). */
      /*  This amounts to the same procedure as for an ellipse. */
    } else if (vmr_rwd_fix_leftarm_P.Target_Type_Value == 3.0) {
      /* '<S271>:1:72' */
      if ((vmr_rwd_fix_leftarm_B.Concatenation1[1] == 0.0) ||
          (vmr_rwd_fix_leftarm_B.Concatenation1[3] == 0.0)) {
        /* '<S271>:1:73' */
        /* '<S271>:1:74' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] = 0.0;

        /* '<S271>:1:75' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] = 0.0;
      } else {
        /* '<S271>:1:77' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[1] - 1) << 5) + i] * 0.01;

        /* '<S271>:1:78' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[3] - 1) << 5) + i] * 0.01;
      }

      if (vmr_rwd_fix_leftarm_B.Concatenation1[5] == 0.0) {
        /* '<S271>:1:81' */
        /* '<S271>:1:82' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start] = 0.0;
      } else {
        /* '<S271>:1:84' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start] =
          (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
             vmr_rwd_fix_leftarm_B.Concatenation1[5] - 1) << 5) + i] - floor
           (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
              vmr_rwd_fix_leftarm_B.Concatenation1[5] - 1) << 5) + i] / 360.0) *
           360.0) * 3.1415926535897931 / 180.0;
      }

      /*  Copy line attributes: relative endpoint x coordinate (m), relative endpoint y coordinate (m), width */
    } else if (vmr_rwd_fix_leftarm_P.Target_Type_Value == 4.0) {
      /* '<S271>:1:88' */
      if (((vmr_rwd_fix_leftarm_B.Concatenation1[1] == 0.0) &&
           (vmr_rwd_fix_leftarm_B.Concatenation1[3] == 0.0)) ||
          (vmr_rwd_fix_leftarm_B.Concatenation1[5] == 0.0)) {
        /* '<S271>:1:89' */
        /* '<S271>:1:90' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] = 0.0;

        /* '<S271>:1:91' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] = 0.0;

        /* '<S271>:1:92' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start] = 0.0;
      } else {
        /* '<S271>:1:94' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[1] - 1) << 5) + i] * 0.01;

        /* '<S271>:1:95' */
        vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] =
          vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
          vmr_rwd_fix_leftarm_B.Concatenation1[3] - 1) << 5) + i] * 0.01;
        if (vmr_rwd_fix_leftarm_B.Concatenation1[5] < 0.0) {
          /* '<S271>:1:97' */
          /* '<S271>:1:98' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start] = 0.001;
        } else {
          /* '<S271>:1:100' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start] =
            vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
            vmr_rwd_fix_leftarm_B.Concatenation1[5] - 1) << 5) + i] * 0.01;
        }
      }

      /*  Copy triangle attributes: length (m), height (m), peak offset (m), rotation (degrees). */
    } else {
      if (vmr_rwd_fix_leftarm_P.Target_Type_Value == 5.0) {
        /* '<S271>:1:105' */
        if (vmr_rwd_fix_leftarm_B.Concatenation1[1] == 0.0) {
          /* '<S271>:1:106' */
          /* '<S271>:1:107' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] = 0.0;
        } else {
          /* '<S271>:1:109' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 2] =
            vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
            vmr_rwd_fix_leftarm_B.Concatenation1[1] - 1) << 5) + i] * 0.01;
        }

        if (vmr_rwd_fix_leftarm_B.Concatenation1[3] == 0.0) {
          /* '<S271>:1:112' */
          /*  create an equilateral triangle if no height column is specified */
          /* '<S271>:1:113' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] =
            vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
            vmr_rwd_fix_leftarm_B.Concatenation1[1] - 1) << 5) + i] *
            0.8660254037844386 * 0.01;

          /* '<S271>:1:114' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start] = 0.0;
        } else {
          /* '<S271>:1:116' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start - 1] =
            vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
            vmr_rwd_fix_leftarm_B.Concatenation1[3] - 1) << 5) + i] * 0.01;

          /* '<S271>:1:117' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start] =
            vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
            vmr_rwd_fix_leftarm_B.Concatenation1[5] - 1) << 5) + i] * 0.01;
        }

        if (vmr_rwd_fix_leftarm_B.Concatenation1[7] == 0.0) {
          /* '<S271>:1:120' */
          /* '<S271>:1:121' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start + 1] = 0.0;
        } else {
          /* '<S271>:1:123' */
          vmr_rwd_fix_leftarm_B.target_vector[attrib_start + 1] =
            (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
               vmr_rwd_fix_leftarm_B.Concatenation1[7] - 1) << 5) + i] - floor
             (vmr_rwd_fix_leftarm_P.TargetTable_Value[(((int32_T)
                vmr_rwd_fix_leftarm_B.Concatenation1[7] - 1) << 5) + i] / 360.0)
             * 360.0) * 3.1415926535897931 / 180.0;
        }
      }
    }

    /* '<S271>:1:47' */
    /* '<S271>:1:38' */
  }

  /* End of MATLAB Function: '<S266>/Create Target Vector' */
}
