function pt=vmr_rwd_fix_leftarmpt
pt = [];
pt(1).blockname = 'Compare To Constant';
pt(1).paramname = 'const';
pt(1).class     = 'scalar';
pt(1).nrows     = 1;
pt(1).ncols     = 1;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(getlenPT) = pt(1);

pt(2).blockname = 'GUI Control';
pt(2).paramname = 'XYcols';
pt(2).class     = 'vector';
pt(2).nrows     = 1;
pt(2).ncols     = 2;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';

pt(3).blockname = 'GUI Control';
pt(3).paramname = 'Vcols';
pt(3).class     = 'scalar';
pt(3).nrows     = 1;
pt(3).ncols     = 1;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';

pt(4).blockname = 'GUI Control';
pt(4).paramname = 'Lcols';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_DOUBLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';

pt(5).blockname = 'Hand_Feedback';
pt(5).paramname = 'feedback_cntl_src';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';

pt(6).blockname = 'KINARM_DistanceFromTarget';
pt(6).paramname = 'use_dominant_hand';
pt(6).class     = 'scalar';
pt(6).nrows     = 1;
pt(6).ncols     = 1;
pt(6).subsource = 'SS_DOUBLE';
pt(6).ndims     = '2';
pt(6).size      = '[]';

pt(7).blockname = 'KINARM_Exo_Apply_Loads';
pt(7).paramname = 'up_duration';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_DOUBLE';
pt(7).ndims     = '2';
pt(7).size      = '[]';

pt(8).blockname = 'KINARM_Exo_Apply_Loads';
pt(8).paramname = 'down_duration';
pt(8).class     = 'scalar';
pt(8).nrows     = 1;
pt(8).ncols     = 1;
pt(8).subsource = 'SS_DOUBLE';
pt(8).ndims     = '2';
pt(8).size      = '[]';

pt(9).blockname = 'KINARM_Exo_Apply_Loads';
pt(9).paramname = 'max_torque';
pt(9).class     = 'scalar';
pt(9).nrows     = 1;
pt(9).ncols     = 1;
pt(9).subsource = 'SS_DOUBLE';
pt(9).ndims     = '2';
pt(9).size      = '[]';

pt(10).blockname = 'KINARM_Exo_Apply_Loads';
pt(10).paramname = 'limit_motors';
pt(10).class     = 'scalar';
pt(10).nrows     = 1;
pt(10).ncols     = 1;
pt(10).subsource = 'SS_DOUBLE';
pt(10).ndims     = '2';
pt(10).size      = '[]';

pt(11).blockname = 'KINARM_HandFeedbackInTarget';
pt(11).paramname = 'use_dominant_hand';
pt(11).class     = 'scalar';
pt(11).nrows     = 1;
pt(11).ncols     = 1;
pt(11).subsource = 'SS_DOUBLE';
pt(11).ndims     = '2';
pt(11).size      = '[]';

pt(12).blockname = 'KINARM_HandFeedbackInTarget';
pt(12).paramname = 'target_type';
pt(12).class     = 'scalar';
pt(12).nrows     = 1;
pt(12).ncols     = 1;
pt(12).subsource = 'SS_DOUBLE';
pt(12).ndims     = '2';
pt(12).size      = '[]';

pt(13).blockname = 'KINARM_HandFeedbackInTarget';
pt(13).paramname = 'num_states';
pt(13).class     = 'scalar';
pt(13).nrows     = 1;
pt(13).ncols     = 1;
pt(13).subsource = 'SS_DOUBLE';
pt(13).ndims     = '2';
pt(13).size      = '[]';

pt(14).blockname = 'KINARM_HandFeedbackInTarget';
pt(14).paramname = 'attribcol1';
pt(14).class     = 'scalar';
pt(14).nrows     = 1;
pt(14).ncols     = 1;
pt(14).subsource = 'SS_DOUBLE';
pt(14).ndims     = '2';
pt(14).size      = '[]';

pt(15).blockname = 'Process_Video_CMD';
pt(15).paramname = 'video_delay';
pt(15).class     = 'scalar';
pt(15).nrows     = 1;
pt(15).ncols     = 1;
pt(15).subsource = 'SS_DOUBLE';
pt(15).ndims     = '2';
pt(15).size      = '[]';

pt(16).blockname = 'Show_Target';
pt(16).paramname = 'target_type';
pt(16).class     = 'scalar';
pt(16).nrows     = 1;
pt(16).ncols     = 1;
pt(16).subsource = 'SS_DOUBLE';
pt(16).ndims     = '2';
pt(16).size      = '[]';

pt(17).blockname = 'Show_Target';
pt(17).paramname = 'num_states';
pt(17).class     = 'scalar';
pt(17).nrows     = 1;
pt(17).ncols     = 1;
pt(17).subsource = 'SS_DOUBLE';
pt(17).ndims     = '2';
pt(17).size      = '[]';

pt(18).blockname = 'Show_Target';
pt(18).paramname = 'attribcol1';
pt(18).class     = 'vector';
pt(18).nrows     = 1;
pt(18).ncols     = 4;
pt(18).subsource = 'SS_DOUBLE';
pt(18).ndims     = '2';
pt(18).size      = '[]';

pt(19).blockname = 'Show_Target';
pt(19).paramname = 'attribcol2';
pt(19).class     = 'vector';
pt(19).nrows     = 1;
pt(19).ncols     = 4;
pt(19).subsource = 'SS_DOUBLE';
pt(19).ndims     = '2';
pt(19).size      = '[]';

pt(20).blockname = 'Show_Target';
pt(20).paramname = 'opacity';
pt(20).class     = 'scalar';
pt(20).nrows     = 1;
pt(20).ncols     = 1;
pt(20).subsource = 'SS_DOUBLE';
pt(20).ndims     = '2';
pt(20).size      = '[]';

pt(21).blockname = 'Show_Target';
pt(21).paramname = 'target_display';
pt(21).class     = 'scalar';
pt(21).nrows     = 1;
pt(21).ncols     = 1;
pt(21).subsource = 'SS_DOUBLE';
pt(21).ndims     = '2';
pt(21).size      = '[]';

pt(22).blockname = 'Show_Target1';
pt(22).paramname = 'target_type';
pt(22).class     = 'scalar';
pt(22).nrows     = 1;
pt(22).ncols     = 1;
pt(22).subsource = 'SS_DOUBLE';
pt(22).ndims     = '2';
pt(22).size      = '[]';

pt(23).blockname = 'Show_Target1';
pt(23).paramname = 'num_states';
pt(23).class     = 'scalar';
pt(23).nrows     = 1;
pt(23).ncols     = 1;
pt(23).subsource = 'SS_DOUBLE';
pt(23).ndims     = '2';
pt(23).size      = '[]';

pt(24).blockname = 'Show_Target1';
pt(24).paramname = 'attribcol1';
pt(24).class     = 'vector';
pt(24).nrows     = 1;
pt(24).ncols     = 4;
pt(24).subsource = 'SS_DOUBLE';
pt(24).ndims     = '2';
pt(24).size      = '[]';

pt(25).blockname = 'Show_Target1';
pt(25).paramname = 'attribcol2';
pt(25).class     = 'vector';
pt(25).nrows     = 1;
pt(25).ncols     = 4;
pt(25).subsource = 'SS_DOUBLE';
pt(25).ndims     = '2';
pt(25).size      = '[]';

pt(26).blockname = 'Show_Target1';
pt(26).paramname = 'attribcol3';
pt(26).class     = 'vector';
pt(26).nrows     = 1;
pt(26).ncols     = 4;
pt(26).subsource = 'SS_DOUBLE';
pt(26).ndims     = '2';
pt(26).size      = '[]';

pt(27).blockname = 'Show_Target1';
pt(27).paramname = 'opacity';
pt(27).class     = 'scalar';
pt(27).nrows     = 1;
pt(27).ncols     = 1;
pt(27).subsource = 'SS_DOUBLE';
pt(27).ndims     = '2';
pt(27).size      = '[]';

pt(28).blockname = 'Show_Target1';
pt(28).paramname = 'target_display';
pt(28).class     = 'scalar';
pt(28).nrows     = 1;
pt(28).ncols     = 1;
pt(28).subsource = 'SS_DOUBLE';
pt(28).ndims     = '2';
pt(28).size      = '[]';

pt(29).blockname = 'Trial_Control';
pt(29).paramname = 'E_SHOW_INSTRUCT';
pt(29).class     = 'scalar';
pt(29).nrows     = 1;
pt(29).ncols     = 1;
pt(29).subsource = 'SS_DOUBLE';
pt(29).ndims     = '2';
pt(29).size      = '[]';

pt(30).blockname = 'Constant';
pt(30).paramname = 'Value';
pt(30).class     = 'scalar';
pt(30).nrows     = 1;
pt(30).ncols     = 1;
pt(30).subsource = 'SS_DOUBLE';
pt(30).ndims     = '2';
pt(30).size      = '[]';

pt(31).blockname = 'Constant1';
pt(31).paramname = 'Value';
pt(31).class     = 'scalar';
pt(31).nrows     = 1;
pt(31).ncols     = 1;
pt(31).subsource = 'SS_BOOLEAN';
pt(31).ndims     = '2';
pt(31).size      = '[]';

pt(32).blockname = 'Memory';
pt(32).paramname = 'X0';
pt(32).class     = 'scalar';
pt(32).nrows     = 1;
pt(32).ncols     = 1;
pt(32).subsource = 'SS_DOUBLE';
pt(32).ndims     = '2';
pt(32).size      = '[]';

pt(33).blockname = 'Memory1';
pt(33).paramname = 'X0';
pt(33).class     = 'scalar';
pt(33).nrows     = 1;
pt(33).ncols     = 1;
pt(33).subsource = 'SS_DOUBLE';
pt(33).ndims     = '2';
pt(33).size      = '[]';

pt(34).blockname = 'DataLogging/ECAT Dig Diagnostic';
pt(34).paramname = 'InitialValue';
pt(34).class     = 'vector';
pt(34).nrows     = 1;
pt(34).ncols     = 4;
pt(34).subsource = 'SS_UINT32';
pt(34).ndims     = '2';
pt(34).size      = '[]';

pt(35).blockname = 'DataLogging/ECAT Status';
pt(35).paramname = 'InitialValue';
pt(35).class     = 'vector';
pt(35).nrows     = 1;
pt(35).ncols     = 8;
pt(35).subsource = 'SS_DOUBLE';
pt(35).ndims     = '2';
pt(35).size      = '[]';

pt(36).blockname = 'DataLogging/ECAT hardware';
pt(36).paramname = 'InitialValue';
pt(36).class     = 'vector';
pt(36).nrows     = 1;
pt(36).ncols     = 14;
pt(36).subsource = 'SS_DOUBLE';
pt(36).ndims     = '2';
pt(36).size      = '[]';

pt(37).blockname = 'DataLogging/ZeroDigOut';
pt(37).paramname = 'Value';
pt(37).class     = 'vector';
pt(37).nrows     = 1;
pt(37).ncols     = 4;
pt(37).subsource = 'SS_DOUBLE';
pt(37).ndims     = '2';
pt(37).size      = '[]';

pt(38).blockname = 'DataLogging/ZeroEPTorque';
pt(38).paramname = 'Value';
pt(38).class     = 'vector';
pt(38).nrows     = 1;
pt(38).ncols     = 4;
pt(38).subsource = 'SS_DOUBLE';
pt(38).ndims     = '2';
pt(38).size      = '[]';

pt(39).blockname = 'DataLogging/seconds_remaining';
pt(39).paramname = 'Value';
pt(39).class     = 'scalar';
pt(39).nrows     = 1;
pt(39).ncols     = 1;
pt(39).subsource = 'SS_DOUBLE';
pt(39).ndims     = '2';
pt(39).size      = '[]';

pt(40).blockname = 'DataLogging/Memory';
pt(40).paramname = 'X0';
pt(40).class     = 'scalar';
pt(40).nrows     = 1;
pt(40).ncols     = 1;
pt(40).subsource = 'SS_DOUBLE';
pt(40).ndims     = '2';
pt(40).size      = '[]';

pt(41).blockname = 'DataLogging/Memory1';
pt(41).paramname = 'X0';
pt(41).class     = 'scalar';
pt(41).nrows     = 1;
pt(41).ncols     = 1;
pt(41).subsource = 'SS_DOUBLE';
pt(41).ndims     = '2';
pt(41).size      = '[]';

pt(42).blockname = 'DisplayInstruct/Show_Target1';
pt(42).paramname = 'target_type';
pt(42).class     = 'scalar';
pt(42).nrows     = 1;
pt(42).ncols     = 1;
pt(42).subsource = 'SS_DOUBLE';
pt(42).ndims     = '2';
pt(42).size      = '[]';

pt(43).blockname = 'DisplayInstruct/Show_Target1';
pt(43).paramname = 'num_states';
pt(43).class     = 'scalar';
pt(43).nrows     = 1;
pt(43).ncols     = 1;
pt(43).subsource = 'SS_DOUBLE';
pt(43).ndims     = '2';
pt(43).size      = '[]';

pt(44).blockname = 'DisplayInstruct/Show_Target1';
pt(44).paramname = 'attribcol1';
pt(44).class     = 'vector';
pt(44).nrows     = 1;
pt(44).ncols     = 6;
pt(44).subsource = 'SS_DOUBLE';
pt(44).ndims     = '2';
pt(44).size      = '[]';

pt(45).blockname = 'DisplayInstruct/Show_Target1';
pt(45).paramname = 'opacity';
pt(45).class     = 'scalar';
pt(45).nrows     = 1;
pt(45).ncols     = 1;
pt(45).subsource = 'SS_DOUBLE';
pt(45).ndims     = '2';
pt(45).size      = '[]';

pt(46).blockname = 'DisplayInstruct/Show_Target1';
pt(46).paramname = 'target_display';
pt(46).class     = 'scalar';
pt(46).nrows     = 1;
pt(46).ncols     = 1;
pt(46).subsource = 'SS_DOUBLE';
pt(46).ndims     = '2';
pt(46).size      = '[]';

pt(47).blockname = 'DisplayInstruct/Constant';
pt(47).paramname = 'Value';
pt(47).class     = 'scalar';
pt(47).nrows     = 1;
pt(47).ncols     = 1;
pt(47).subsource = 'SS_DOUBLE';
pt(47).ndims     = '2';
pt(47).size      = '[]';

pt(48).blockname = 'DisplayText/Show_Target_With_Label';
pt(48).paramname = 'target_type';
pt(48).class     = 'scalar';
pt(48).nrows     = 1;
pt(48).ncols     = 1;
pt(48).subsource = 'SS_DOUBLE';
pt(48).ndims     = '2';
pt(48).size      = '[]';

pt(49).blockname = 'DisplayText/Show_Target_With_Label';
pt(49).paramname = 'num_states';
pt(49).class     = 'scalar';
pt(49).nrows     = 1;
pt(49).ncols     = 1;
pt(49).subsource = 'SS_DOUBLE';
pt(49).ndims     = '2';
pt(49).size      = '[]';

pt(50).blockname = 'DisplayText/Show_Target_With_Label';
pt(50).paramname = 'attribcol1';
pt(50).class     = 'vector';
pt(50).nrows     = 1;
pt(50).ncols     = 9;
pt(50).subsource = 'SS_DOUBLE';
pt(50).ndims     = '2';
pt(50).size      = '[]';

pt(51).blockname = 'DisplayText/Show_Target_With_Label';
pt(51).paramname = 'opacity';
pt(51).class     = 'scalar';
pt(51).nrows     = 1;
pt(51).ncols     = 1;
pt(51).subsource = 'SS_DOUBLE';
pt(51).ndims     = '2';
pt(51).size      = '[]';

pt(52).blockname = 'DisplayText/Show_Target_With_Label';
pt(52).paramname = 'target_display';
pt(52).class     = 'scalar';
pt(52).nrows     = 1;
pt(52).ncols     = 1;
pt(52).subsource = 'SS_DOUBLE';
pt(52).ndims     = '2';
pt(52).size      = '[]';

pt(53).blockname = 'DisplayText/Switch';
pt(53).paramname = 'Threshold';
pt(53).class     = 'scalar';
pt(53).nrows     = 1;
pt(53).ncols     = 1;
pt(53).subsource = 'SS_DOUBLE';
pt(53).ndims     = '2';
pt(53).size      = '[]';

pt(54).blockname = 'GUI Control/Block Definitions';
pt(54).paramname = 'Value';
pt(54).class     = 'col-mat';
pt(54).nrows     = 50;
pt(54).ncols     = 500;
pt(54).subsource = 'SS_DOUBLE';
pt(54).ndims     = '2';
pt(54).size      = '[]';

pt(55).blockname = 'GUI Control/Block Sequence';
pt(55).paramname = 'Value';
pt(55).class     = 'col-mat';
pt(55).nrows     = 1000;
pt(55).ncols     = 2;
pt(55).subsource = 'SS_DOUBLE';
pt(55).ndims     = '2';
pt(55).size      = '[]';

pt(56).blockname = 'GUI Control/Constant';
pt(56).paramname = 'Value';
pt(56).class     = 'scalar';
pt(56).nrows     = 1;
pt(56).ncols     = 1;
pt(56).subsource = 'SS_DOUBLE';
pt(56).ndims     = '2';
pt(56).size      = '[]';

pt(57).blockname = 'GUI Control/Display Size (m)';
pt(57).paramname = 'Value';
pt(57).class     = 'vector';
pt(57).nrows     = 1;
pt(57).ncols     = 2;
pt(57).subsource = 'SS_DOUBLE';
pt(57).ndims     = '2';
pt(57).size      = '[]';

pt(58).blockname = 'GUI Control/Display Size (pels)';
pt(58).paramname = 'Value';
pt(58).class     = 'vector';
pt(58).nrows     = 1;
pt(58).ncols     = 2;
pt(58).subsource = 'SS_DOUBLE';
pt(58).ndims     = '2';
pt(58).size      = '[]';

pt(59).blockname = 'GUI Control/Docking Points';
pt(59).paramname = 'Value';
pt(59).class     = 'col-mat';
pt(59).nrows     = 5;
pt(59).ncols     = 2;
pt(59).subsource = 'SS_DOUBLE';
pt(59).ndims     = '2';
pt(59).size      = '[]';

pt(60).blockname = 'GUI Control/EL Camera Angle';
pt(60).paramname = 'Value';
pt(60).class     = 'vector';
pt(60).nrows     = 1;
pt(60).ncols     = 2;
pt(60).subsource = 'SS_DOUBLE';
pt(60).ndims     = '2';
pt(60).size      = '[]';

pt(61).blockname = 'GUI Control/EL Camera Focal Length';
pt(61).paramname = 'Value';
pt(61).class     = 'scalar';
pt(61).nrows     = 1;
pt(61).ncols     = 1;
pt(61).subsource = 'SS_DOUBLE';
pt(61).ndims     = '2';
pt(61).size      = '[]';

pt(62).blockname = 'GUI Control/EL Camera Position';
pt(62).paramname = 'Value';
pt(62).class     = 'vector';
pt(62).nrows     = 1;
pt(62).ncols     = 3;
pt(62).subsource = 'SS_DOUBLE';
pt(62).ndims     = '2';
pt(62).size      = '[]';

pt(63).blockname = 'GUI Control/EL Tracking Available';
pt(63).paramname = 'Value';
pt(63).class     = 'scalar';
pt(63).nrows     = 1;
pt(63).ncols     = 1;
pt(63).subsource = 'SS_DOUBLE';
pt(63).ndims     = '2';
pt(63).size      = '[]';

pt(64).blockname = 'GUI Control/Library Patch Version';
pt(64).paramname = 'Value';
pt(64).class     = 'scalar';
pt(64).nrows     = 1;
pt(64).ncols     = 1;
pt(64).subsource = 'SS_DOUBLE';
pt(64).ndims     = '2';
pt(64).size      = '[]';

pt(65).blockname = 'GUI Control/Library Version';
pt(65).paramname = 'Value';
pt(65).class     = 'scalar';
pt(65).nrows     = 1;
pt(65).ncols     = 1;
pt(65).subsource = 'SS_DOUBLE';
pt(65).ndims     = '2';
pt(65).size      = '[]';

pt(66).blockname = 'GUI Control/Load Table';
pt(66).paramname = 'Value';
pt(66).class     = 'col-mat';
pt(66).nrows     = 20;
pt(66).ncols     = 20;
pt(66).subsource = 'SS_DOUBLE';
pt(66).ndims     = '2';
pt(66).size      = '[]';

pt(67).blockname = 'GUI Control/Next Block';
pt(67).paramname = 'Value';
pt(67).class     = 'scalar';
pt(67).nrows     = 1;
pt(67).ncols     = 1;
pt(67).subsource = 'SS_DOUBLE';
pt(67).ndims     = '2';
pt(67).size      = '[]';

pt(68).blockname = 'GUI Control/Pause Type';
pt(68).paramname = 'Value';
pt(68).class     = 'scalar';
pt(68).nrows     = 1;
pt(68).ncols     = 1;
pt(68).subsource = 'SS_DOUBLE';
pt(68).ndims     = '2';
pt(68).size      = '[]';

pt(69).blockname = 'GUI Control/Repeat_Trial_Flag';
pt(69).paramname = 'Value';
pt(69).class     = 'scalar';
pt(69).nrows     = 1;
pt(69).ncols     = 1;
pt(69).subsource = 'SS_DOUBLE';
pt(69).ndims     = '2';
pt(69).size      = '[]';

pt(70).blockname = 'GUI Control/Run Task Clock Flag';
pt(70).paramname = 'Value';
pt(70).class     = 'scalar';
pt(70).nrows     = 1;
pt(70).ncols     = 1;
pt(70).subsource = 'SS_DOUBLE';
pt(70).ndims     = '2';
pt(70).size      = '[]';

pt(71).blockname = 'GUI Control/Seed';
pt(71).paramname = 'Value';
pt(71).class     = 'scalar';
pt(71).nrows     = 1;
pt(71).ncols     = 1;
pt(71).subsource = 'SS_DOUBLE';
pt(71).ndims     = '2';
pt(71).size      = '[]';

pt(72).blockname = 'GUI Control/Subject Height';
pt(72).paramname = 'Value';
pt(72).class     = 'scalar';
pt(72).nrows     = 1;
pt(72).ncols     = 1;
pt(72).subsource = 'SS_DOUBLE';
pt(72).ndims     = '2';
pt(72).size      = '[]';

pt(73).blockname = 'GUI Control/Subject Weight';
pt(73).paramname = 'Value';
pt(73).class     = 'scalar';
pt(73).nrows     = 1;
pt(73).ncols     = 1;
pt(73).subsource = 'SS_DOUBLE';
pt(73).ndims     = '2';
pt(73).size      = '[]';

pt(74).blockname = 'GUI Control/TP Table';
pt(74).paramname = 'Value';
pt(74).class     = 'col-mat';
pt(74).nrows     = 100;
pt(74).ncols     = 50;
pt(74).subsource = 'SS_DOUBLE';
pt(74).ndims     = '2';
pt(74).size      = '[]';

pt(75).blockname = 'GUI Control/Target Labels';
pt(75).paramname = 'Value';
pt(75).class     = 'col-mat';
pt(75).nrows     = 100;
pt(75).ncols     = 50;
pt(75).subsource = 'SS_DOUBLE';
pt(75).ndims     = '2';
pt(75).size      = '[]';

pt(76).blockname = 'GUI Control/Target Table';
pt(76).paramname = 'Value';
pt(76).class     = 'col-mat';
pt(76).nrows     = 32;
pt(76).ncols     = 25;
pt(76).subsource = 'SS_DOUBLE';
pt(76).ndims     = '2';
pt(76).size      = '[]';

pt(77).blockname = 'GUI Control/Task Version';
pt(77).paramname = 'Value';
pt(77).class     = 'scalar';
pt(77).nrows     = 1;
pt(77).ncols     = 1;
pt(77).subsource = 'SS_DOUBLE';
pt(77).ndims     = '2';
pt(77).size      = '[]';

pt(78).blockname = 'GUI Control/Task wide param';
pt(78).paramname = 'Value';
pt(78).class     = 'vector';
pt(78).nrows     = 50;
pt(78).ncols     = 1;
pt(78).subsource = 'SS_DOUBLE';
pt(78).ndims     = '2';
pt(78).size      = '[]';

pt(79).blockname = 'GUI Control/Use Repeat Trial Flag';
pt(79).paramname = 'Value';
pt(79).class     = 'scalar';
pt(79).nrows     = 1;
pt(79).ncols     = 1;
pt(79).subsource = 'SS_DOUBLE';
pt(79).ndims     = '2';
pt(79).size      = '[]';

pt(80).blockname = 'GUI Control/Use Task Protocol Block Sequence Flag';
pt(80).paramname = 'Value';
pt(80).class     = 'scalar';
pt(80).nrows     = 1;
pt(80).ncols     = 1;
pt(80).subsource = 'SS_DOUBLE';
pt(80).ndims     = '2';
pt(80).size      = '[]';

pt(81).blockname = 'GUI Control/dlm build time';
pt(81).paramname = 'Value';
pt(81).class     = 'scalar';
pt(81).nrows     = 1;
pt(81).ncols     = 1;
pt(81).subsource = 'SS_DOUBLE';
pt(81).ndims     = '2';
pt(81).size      = '[]';

pt(82).blockname = 'GUI Control/frame_of_reference_center';
pt(82).paramname = 'Value';
pt(82).class     = 'vector';
pt(82).nrows     = 1;
pt(82).ncols     = 2;
pt(82).subsource = 'SS_DOUBLE';
pt(82).ndims     = '2';
pt(82).size      = '[]';

pt(83).blockname = 'GUI Control/xPC Version';
pt(83).paramname = 'Value';
pt(83).class     = 'scalar';
pt(83).nrows     = 1;
pt(83).ncols     = 1;
pt(83).subsource = 'SS_DOUBLE';
pt(83).ndims     = '2';
pt(83).size      = '[]';

pt(84).blockname = 'Hand_Feedback/Assess_arm_VCODE';
pt(84).paramname = 'Value';
pt(84).class     = 'vector';
pt(84).nrows     = 1;
pt(84).ncols     = 70;
pt(84).subsource = 'SS_DOUBLE';
pt(84).ndims     = '2';
pt(84).size      = '[]';

pt(85).blockname = 'Hand_Feedback/Contralateral_arm_VCODE';
pt(85).paramname = 'Value';
pt(85).class     = 'vector';
pt(85).nrows     = 1;
pt(85).ncols     = 70;
pt(85).subsource = 'SS_DOUBLE';
pt(85).ndims     = '2';
pt(85).size      = '[]';

pt(86).blockname = 'Hand_Feedback/feedback_status';
pt(86).paramname = 'Value';
pt(86).class     = 'scalar';
pt(86).nrows     = 1;
pt(86).ncols     = 1;
pt(86).subsource = 'SS_DOUBLE';
pt(86).ndims     = '2';
pt(86).size      = '[]';

pt(87).blockname = 'KINARM_Exo_Apply_Loads/Torque Limit2';
pt(87).paramname = 'Value';
pt(87).class     = 'scalar';
pt(87).nrows     = 1;
pt(87).ncols     = 1;
pt(87).subsource = 'SS_DOUBLE';
pt(87).ndims     = '2';
pt(87).size      = '[]';

pt(88).blockname = 'KINARM_Exo_Apply_Loads/Switch';
pt(88).paramname = 'Threshold';
pt(88).class     = 'scalar';
pt(88).nrows     = 1;
pt(88).ncols     = 1;
pt(88).subsource = 'SS_DOUBLE';
pt(88).ndims     = '2';
pt(88).size      = '[]';

pt(89).blockname = 'KINARM_HandFeedbackInTarget/Selected States';
pt(89).paramname = 'Value';
pt(89).class     = 'scalar';
pt(89).nrows     = 1;
pt(89).ncols     = 1;
pt(89).subsource = 'SS_DOUBLE';
pt(89).ndims     = '2';
pt(89).size      = '[]';

pt(90).blockname = 'KINARM_HandFeedbackInTarget/attribcol2';
pt(90).paramname = 'Value';
pt(90).class     = 'scalar';
pt(90).nrows     = 1;
pt(90).ncols     = 1;
pt(90).subsource = 'SS_DOUBLE';
pt(90).ndims     = '2';
pt(90).size      = '[]';

pt(91).blockname = 'KINARM_HandFeedbackInTarget/attribcol3';
pt(91).paramname = 'Value';
pt(91).class     = 'scalar';
pt(91).nrows     = 1;
pt(91).ncols     = 1;
pt(91).subsource = 'SS_DOUBLE';
pt(91).ndims     = '2';
pt(91).size      = '[]';

pt(92).blockname = 'KINARM_HandFeedbackInTarget/attribcol4';
pt(92).paramname = 'Value';
pt(92).class     = 'scalar';
pt(92).nrows     = 1;
pt(92).ncols     = 1;
pt(92).subsource = 'SS_DOUBLE';
pt(92).ndims     = '2';
pt(92).size      = '[]';

pt(93).blockname = 'Play Sound/PCI-6229 DA';
pt(93).paramname = 'P1';
pt(93).class     = 'scalar';
pt(93).nrows     = 1;
pt(93).ncols     = 1;
pt(93).subsource = 'SS_DOUBLE';
pt(93).ndims     = '2';
pt(93).size      = '[]';

pt(94).blockname = 'Play Sound/PCI-6229 DA';
pt(94).paramname = 'P2';
pt(94).class     = 'scalar';
pt(94).nrows     = 1;
pt(94).ncols     = 1;
pt(94).subsource = 'SS_DOUBLE';
pt(94).ndims     = '2';
pt(94).size      = '[]';

pt(95).blockname = 'Play Sound/PCI-6229 DA';
pt(95).paramname = 'P3';
pt(95).class     = 'scalar';
pt(95).nrows     = 1;
pt(95).ncols     = 1;
pt(95).subsource = 'SS_DOUBLE';
pt(95).ndims     = '2';
pt(95).size      = '[]';

pt(96).blockname = 'Play Sound/PCI-6229 DA';
pt(96).paramname = 'P4';
pt(96).class     = 'scalar';
pt(96).nrows     = 1;
pt(96).ncols     = 1;
pt(96).subsource = 'SS_DOUBLE';
pt(96).ndims     = '2';
pt(96).size      = '[]';

pt(97).blockname = 'Play Sound/PCI-6229 DA';
pt(97).paramname = 'P5';
pt(97).class     = 'scalar';
pt(97).nrows     = 1;
pt(97).ncols     = 1;
pt(97).subsource = 'SS_DOUBLE';
pt(97).ndims     = '2';
pt(97).size      = '[]';

pt(98).blockname = 'Play Sound/PCI-6229 DA';
pt(98).paramname = 'P6';
pt(98).class     = 'scalar';
pt(98).nrows     = 1;
pt(98).ncols     = 1;
pt(98).subsource = 'SS_DOUBLE';
pt(98).ndims     = '2';
pt(98).size      = '[]';

pt(99).blockname = 'Play Sound/PCI-6229 DA';
pt(99).paramname = 'P7';
pt(99).class     = 'scalar';
pt(99).nrows     = 1;
pt(99).ncols     = 1;
pt(99).subsource = 'SS_DOUBLE';
pt(99).ndims     = '2';
pt(99).size      = '[]';

pt(100).blockname = 'Process_Video_CMD/GUI_VCODE';
pt(100).paramname = 'Value';
pt(100).class     = 'col-mat';
pt(100).nrows     = 70;
pt(100).ncols     = 9;
pt(100).subsource = 'SS_DOUBLE';
pt(100).ndims     = '2';
pt(100).size      = '[]';

pt(101).blockname = 'Process_Video_CMD/Gain';
pt(101).paramname = 'Gain';
pt(101).class     = 'scalar';
pt(101).nrows     = 1;
pt(101).ncols     = 1;
pt(101).subsource = 'SS_DOUBLE';
pt(101).ndims     = '2';
pt(101).size      = '[]';

pt(102).blockname = 'Process_Video_CMD/Memory';
pt(102).paramname = 'X0';
pt(102).class     = 'scalar';
pt(102).nrows     = 1;
pt(102).ncols     = 1;
pt(102).subsource = 'SS_DOUBLE';
pt(102).ndims     = '2';
pt(102).size      = '[]';

pt(103).blockname = 'Process_Video_CMD/Receive';
pt(103).paramname = 'P1';
pt(103).class     = 'vector';
pt(103).nrows     = 1;
pt(103).ncols     = 11;
pt(103).subsource = 'SS_DOUBLE';
pt(103).ndims     = '2';
pt(103).size      = '[]';

pt(104).blockname = 'Process_Video_CMD/Receive';
pt(104).paramname = 'P2';
pt(104).class     = 'scalar';
pt(104).nrows     = 1;
pt(104).ncols     = 1;
pt(104).subsource = 'SS_DOUBLE';
pt(104).ndims     = '2';
pt(104).size      = '[]';

pt(105).blockname = 'Process_Video_CMD/Receive';
pt(105).paramname = 'P3';
pt(105).class     = 'scalar';
pt(105).nrows     = 1;
pt(105).ncols     = 1;
pt(105).subsource = 'SS_DOUBLE';
pt(105).ndims     = '2';
pt(105).size      = '[]';

pt(106).blockname = 'Process_Video_CMD/Receive';
pt(106).paramname = 'P4';
pt(106).class     = 'scalar';
pt(106).nrows     = 1;
pt(106).ncols     = 1;
pt(106).subsource = 'SS_DOUBLE';
pt(106).ndims     = '2';
pt(106).size      = '[]';

pt(107).blockname = 'Process_Video_CMD/Receive';
pt(107).paramname = 'P5';
pt(107).class     = 'scalar';
pt(107).nrows     = 1;
pt(107).ncols     = 1;
pt(107).subsource = 'SS_DOUBLE';
pt(107).ndims     = '2';
pt(107).size      = '[]';

pt(108).blockname = 'Process_Video_CMD/Send';
pt(108).paramname = 'P1';
pt(108).class     = 'vector';
pt(108).nrows     = 1;
pt(108).ncols     = 11;
pt(108).subsource = 'SS_DOUBLE';
pt(108).ndims     = '2';
pt(108).size      = '[]';

pt(109).blockname = 'Process_Video_CMD/Send';
pt(109).paramname = 'P2';
pt(109).class     = 'scalar';
pt(109).nrows     = 1;
pt(109).ncols     = 1;
pt(109).subsource = 'SS_DOUBLE';
pt(109).ndims     = '2';
pt(109).size      = '[]';

pt(110).blockname = 'Process_Video_CMD/Send';
pt(110).paramname = 'P3';
pt(110).class     = 'scalar';
pt(110).nrows     = 1;
pt(110).ncols     = 1;
pt(110).subsource = 'SS_DOUBLE';
pt(110).ndims     = '2';
pt(110).size      = '[]';

pt(111).blockname = 'Process_Video_CMD/Send';
pt(111).paramname = 'P4';
pt(111).class     = 'scalar';
pt(111).nrows     = 1;
pt(111).ncols     = 1;
pt(111).subsource = 'SS_DOUBLE';
pt(111).ndims     = '2';
pt(111).size      = '[]';

pt(112).blockname = 'Process_Video_CMD/Send';
pt(112).paramname = 'P5';
pt(112).class     = 'scalar';
pt(112).nrows     = 1;
pt(112).ncols     = 1;
pt(112).subsource = 'SS_DOUBLE';
pt(112).ndims     = '2';
pt(112).size      = '[]';

pt(113).blockname = 'Show_Target/padder';
pt(113).paramname = 'Value';
pt(113).class     = 'col-mat';
pt(113).nrows     = 5;
pt(113).ncols     = 7;
pt(113).subsource = 'SS_DOUBLE';
pt(113).ndims     = '2';
pt(113).size      = '[]';

pt(114).blockname = 'Show_Target/state3_indices';
pt(114).paramname = 'Value';
pt(114).class     = 'vector';
pt(114).nrows     = 1;
pt(114).ncols     = 4;
pt(114).subsource = 'SS_DOUBLE';
pt(114).ndims     = '2';
pt(114).size      = '[]';

pt(115).blockname = 'Show_Target/state4_indices';
pt(115).paramname = 'Value';
pt(115).class     = 'vector';
pt(115).nrows     = 1;
pt(115).ncols     = 4;
pt(115).subsource = 'SS_DOUBLE';
pt(115).ndims     = '2';
pt(115).size      = '[]';

pt(116).blockname = 'Show_Target/state5_indices';
pt(116).paramname = 'Value';
pt(116).class     = 'vector';
pt(116).nrows     = 1;
pt(116).ncols     = 4;
pt(116).subsource = 'SS_DOUBLE';
pt(116).ndims     = '2';
pt(116).size      = '[]';

pt(117).blockname = 'Show_Target/xpos_index';
pt(117).paramname = 'Value';
pt(117).class     = 'scalar';
pt(117).nrows     = 1;
pt(117).ncols     = 1;
pt(117).subsource = 'SS_DOUBLE';
pt(117).ndims     = '2';
pt(117).size      = '[]';

pt(118).blockname = 'Show_Target/ypos_index';
pt(118).paramname = 'Value';
pt(118).class     = 'scalar';
pt(118).nrows     = 1;
pt(118).ncols     = 1;
pt(118).subsource = 'SS_DOUBLE';
pt(118).ndims     = '2';
pt(118).size      = '[]';

pt(119).blockname = 'Show_Target1/padder';
pt(119).paramname = 'Value';
pt(119).class     = 'col-mat';
pt(119).nrows     = 5;
pt(119).ncols     = 7;
pt(119).subsource = 'SS_DOUBLE';
pt(119).ndims     = '2';
pt(119).size      = '[]';

pt(120).blockname = 'Show_Target1/state4_indices';
pt(120).paramname = 'Value';
pt(120).class     = 'vector';
pt(120).nrows     = 1;
pt(120).ncols     = 4;
pt(120).subsource = 'SS_DOUBLE';
pt(120).ndims     = '2';
pt(120).size      = '[]';

pt(121).blockname = 'Show_Target1/state5_indices';
pt(121).paramname = 'Value';
pt(121).class     = 'vector';
pt(121).nrows     = 1;
pt(121).ncols     = 4;
pt(121).subsource = 'SS_DOUBLE';
pt(121).ndims     = '2';
pt(121).size      = '[]';

pt(122).blockname = 'Show_Target1/xpos_index';
pt(122).paramname = 'Value';
pt(122).class     = 'scalar';
pt(122).nrows     = 1;
pt(122).ncols     = 1;
pt(122).subsource = 'SS_DOUBLE';
pt(122).ndims     = '2';
pt(122).size      = '[]';

pt(123).blockname = 'Show_Target1/ypos_index';
pt(123).paramname = 'Value';
pt(123).class     = 'scalar';
pt(123).nrows     = 1;
pt(123).ncols     = 1;
pt(123).subsource = 'SS_DOUBLE';
pt(123).ndims     = '2';
pt(123).size      = '[]';

pt(124).blockname = 'Subsystem/KINARM_Exo_Position_Controller';
pt(124).paramname = 'use_dom_hand';
pt(124).class     = 'scalar';
pt(124).nrows     = 1;
pt(124).ncols     = 1;
pt(124).subsource = 'SS_DOUBLE';
pt(124).ndims     = '2';
pt(124).size      = '[]';

pt(125).blockname = 'Subsystem/KINARM_Exo_Position_Controller';
pt(125).paramname = 'KINARM_Type';
pt(125).class     = 'scalar';
pt(125).nrows     = 1;
pt(125).ncols     = 1;
pt(125).subsource = 'SS_DOUBLE';
pt(125).ndims     = '2';
pt(125).size      = '[]';

pt(126).blockname = 'Subsystem/KINARM_Exo_Position_Controller';
pt(126).paramname = 'inertias_for_FF';
pt(126).class     = 'scalar';
pt(126).nrows     = 1;
pt(126).ncols     = 1;
pt(126).subsource = 'SS_DOUBLE';
pt(126).ndims     = '2';
pt(126).size      = '[]';

pt(127).blockname = 'Subsystem/KINARM_Exo_Position_Controller';
pt(127).paramname = 'angles_or_XY';
pt(127).class     = 'scalar';
pt(127).nrows     = 1;
pt(127).ncols     = 1;
pt(127).subsource = 'SS_DOUBLE';
pt(127).ndims     = '2';
pt(127).size      = '[]';

pt(128).blockname = 'Subsystem/Show_Target';
pt(128).paramname = 'target_type';
pt(128).class     = 'scalar';
pt(128).nrows     = 1;
pt(128).ncols     = 1;
pt(128).subsource = 'SS_DOUBLE';
pt(128).ndims     = '2';
pt(128).size      = '[]';

pt(129).blockname = 'Subsystem/Show_Target';
pt(129).paramname = 'num_states';
pt(129).class     = 'scalar';
pt(129).nrows     = 1;
pt(129).ncols     = 1;
pt(129).subsource = 'SS_DOUBLE';
pt(129).ndims     = '2';
pt(129).size      = '[]';

pt(130).blockname = 'Subsystem/Show_Target';
pt(130).paramname = 'attribcol1';
pt(130).class     = 'vector';
pt(130).nrows     = 1;
pt(130).ncols     = 4;
pt(130).subsource = 'SS_DOUBLE';
pt(130).ndims     = '2';
pt(130).size      = '[]';

pt(131).blockname = 'Subsystem/Show_Target';
pt(131).paramname = 'opacity';
pt(131).class     = 'scalar';
pt(131).nrows     = 1;
pt(131).ncols     = 1;
pt(131).subsource = 'SS_DOUBLE';
pt(131).ndims     = '2';
pt(131).size      = '[]';

pt(132).blockname = 'Subsystem/Show_Target';
pt(132).paramname = 'target_display';
pt(132).class     = 'scalar';
pt(132).nrows     = 1;
pt(132).ncols     = 1;
pt(132).subsource = 'SS_DOUBLE';
pt(132).ndims     = '2';
pt(132).size      = '[]';

pt(133).blockname = 'Subsystem/Switch';
pt(133).paramname = 'Threshold';
pt(133).class     = 'scalar';
pt(133).nrows     = 1;
pt(133).ncols     = 1;
pt(133).subsource = 'SS_DOUBLE';
pt(133).ndims     = '2';
pt(133).size      = '[]';

pt(134).blockname = 'Visual_Rotation/Show_Target';
pt(134).paramname = 'target_type';
pt(134).class     = 'scalar';
pt(134).nrows     = 1;
pt(134).ncols     = 1;
pt(134).subsource = 'SS_DOUBLE';
pt(134).ndims     = '2';
pt(134).size      = '[]';

pt(135).blockname = 'Visual_Rotation/Show_Target';
pt(135).paramname = 'num_states';
pt(135).class     = 'scalar';
pt(135).nrows     = 1;
pt(135).ncols     = 1;
pt(135).subsource = 'SS_DOUBLE';
pt(135).ndims     = '2';
pt(135).size      = '[]';

pt(136).blockname = 'Visual_Rotation/Show_Target';
pt(136).paramname = 'attribcol1';
pt(136).class     = 'vector';
pt(136).nrows     = 1;
pt(136).ncols     = 4;
pt(136).subsource = 'SS_DOUBLE';
pt(136).ndims     = '2';
pt(136).size      = '[]';

pt(137).blockname = 'Visual_Rotation/Show_Target';
pt(137).paramname = 'opacity';
pt(137).class     = 'scalar';
pt(137).nrows     = 1;
pt(137).ncols     = 1;
pt(137).subsource = 'SS_DOUBLE';
pt(137).ndims     = '2';
pt(137).size      = '[]';

pt(138).blockname = 'Visual_Rotation/Show_Target';
pt(138).paramname = 'target_display';
pt(138).class     = 'scalar';
pt(138).nrows     = 1;
pt(138).ncols     = 1;
pt(138).subsource = 'SS_DOUBLE';
pt(138).ndims     = '2';
pt(138).size      = '[]';

pt(139).blockname = 'Visual_Rotation/Show_Target1';
pt(139).paramname = 'target_type';
pt(139).class     = 'scalar';
pt(139).nrows     = 1;
pt(139).ncols     = 1;
pt(139).subsource = 'SS_DOUBLE';
pt(139).ndims     = '2';
pt(139).size      = '[]';

pt(140).blockname = 'Visual_Rotation/Show_Target1';
pt(140).paramname = 'num_states';
pt(140).class     = 'scalar';
pt(140).nrows     = 1;
pt(140).ncols     = 1;
pt(140).subsource = 'SS_DOUBLE';
pt(140).ndims     = '2';
pt(140).size      = '[]';

pt(141).blockname = 'Visual_Rotation/Show_Target1';
pt(141).paramname = 'attribcol1';
pt(141).class     = 'vector';
pt(141).nrows     = 1;
pt(141).ncols     = 4;
pt(141).subsource = 'SS_DOUBLE';
pt(141).ndims     = '2';
pt(141).size      = '[]';

pt(142).blockname = 'Visual_Rotation/Show_Target1';
pt(142).paramname = 'opacity';
pt(142).class     = 'scalar';
pt(142).nrows     = 1;
pt(142).ncols     = 1;
pt(142).subsource = 'SS_DOUBLE';
pt(142).ndims     = '2';
pt(142).size      = '[]';

pt(143).blockname = 'Visual_Rotation/Show_Target1';
pt(143).paramname = 'target_display';
pt(143).class     = 'scalar';
pt(143).nrows     = 1;
pt(143).ncols     = 1;
pt(143).subsource = 'SS_DOUBLE';
pt(143).ndims     = '2';
pt(143).size      = '[]';

pt(144).blockname = 'Visual_Rotation/Show_Target2';
pt(144).paramname = 'target_type';
pt(144).class     = 'scalar';
pt(144).nrows     = 1;
pt(144).ncols     = 1;
pt(144).subsource = 'SS_DOUBLE';
pt(144).ndims     = '2';
pt(144).size      = '[]';

pt(145).blockname = 'Visual_Rotation/Show_Target2';
pt(145).paramname = 'num_states';
pt(145).class     = 'scalar';
pt(145).nrows     = 1;
pt(145).ncols     = 1;
pt(145).subsource = 'SS_DOUBLE';
pt(145).ndims     = '2';
pt(145).size      = '[]';

pt(146).blockname = 'Visual_Rotation/Show_Target2';
pt(146).paramname = 'attribcol1';
pt(146).class     = 'vector';
pt(146).nrows     = 1;
pt(146).ncols     = 4;
pt(146).subsource = 'SS_DOUBLE';
pt(146).ndims     = '2';
pt(146).size      = '[]';

pt(147).blockname = 'Visual_Rotation/Show_Target2';
pt(147).paramname = 'opacity';
pt(147).class     = 'scalar';
pt(147).nrows     = 1;
pt(147).ncols     = 1;
pt(147).subsource = 'SS_DOUBLE';
pt(147).ndims     = '2';
pt(147).size      = '[]';

pt(148).blockname = 'Visual_Rotation/Show_Target2';
pt(148).paramname = 'target_display';
pt(148).class     = 'scalar';
pt(148).nrows     = 1;
pt(148).ncols     = 1;
pt(148).subsource = 'SS_DOUBLE';
pt(148).ndims     = '2';
pt(148).size      = '[]';

pt(149).blockname = 'Visual_Rotation/Constant';
pt(149).paramname = 'Value';
pt(149).class     = 'scalar';
pt(149).nrows     = 1;
pt(149).ncols     = 1;
pt(149).subsource = 'SS_DOUBLE';
pt(149).ndims     = '2';
pt(149).size      = '[]';

pt(150).blockname = 'Visual_Rotation/Constant1';
pt(150).paramname = 'Value';
pt(150).class     = 'scalar';
pt(150).nrows     = 1;
pt(150).ncols     = 1;
pt(150).subsource = 'SS_DOUBLE';
pt(150).ndims     = '2';
pt(150).size      = '[]';

pt(151).blockname = 'Visual_Rotation/Constant2';
pt(151).paramname = 'Value';
pt(151).class     = 'scalar';
pt(151).nrows     = 1;
pt(151).ncols     = 1;
pt(151).subsource = 'SS_DOUBLE';
pt(151).ndims     = '2';
pt(151).size      = '[]';

pt(152).blockname = 'Visual_Rotation/Memory';
pt(152).paramname = 'X0';
pt(152).class     = 'scalar';
pt(152).nrows     = 1;
pt(152).ncols     = 1;
pt(152).subsource = 'SS_DOUBLE';
pt(152).ndims     = '2';
pt(152).size      = '[]';

pt(153).blockname = 'Visual_Rotation/Memory1';
pt(153).paramname = 'X0';
pt(153).class     = 'scalar';
pt(153).nrows     = 1;
pt(153).ncols     = 1;
pt(153).subsource = 'SS_DOUBLE';
pt(153).ndims     = '2';
pt(153).size      = '[]';

pt(154).blockname = 'Visual_Rotation/Memory2';
pt(154).paramname = 'X0';
pt(154).class     = 'scalar';
pt(154).nrows     = 1;
pt(154).ncols     = 1;
pt(154).subsource = 'SS_BOOLEAN';
pt(154).ndims     = '2';
pt(154).size      = '[]';

pt(155).blockname = 'Visual_Rotation/Switch';
pt(155).paramname = 'Threshold';
pt(155).class     = 'scalar';
pt(155).nrows     = 1;
pt(155).ncols     = 1;
pt(155).subsource = 'SS_DOUBLE';
pt(155).ndims     = '2';
pt(155).size      = '[]';

pt(156).blockname = 'Visual_Rotation/Switch1';
pt(156).paramname = 'Threshold';
pt(156).class     = 'scalar';
pt(156).nrows     = 1;
pt(156).ncols     = 1;
pt(156).subsource = 'SS_DOUBLE';
pt(156).ndims     = '2';
pt(156).size      = '[]';

pt(157).blockname = 'Visual_Rotation/Switch2';
pt(157).paramname = 'Threshold';
pt(157).class     = 'scalar';
pt(157).nrows     = 1;
pt(157).ncols     = 1;
pt(157).subsource = 'SS_DOUBLE';
pt(157).ndims     = '2';
pt(157).size      = '[]';

pt(158).blockname = 'DataLogging/Create Analog Inputs Subsystem/Not Logging Analog Inputs';
pt(158).paramname = 'Value';
pt(158).class     = 'scalar';
pt(158).nrows     = 1;
pt(158).ncols     = 1;
pt(158).subsource = 'SS_DOUBLE';
pt(158).ndims     = '2';
pt(158).size      = '[]';

pt(159).blockname = 'DataLogging/Create Custom Data Subsystem/custom_version';
pt(159).paramname = 'Value';
pt(159).class     = 'scalar';
pt(159).nrows     = 1;
pt(159).ncols     = 1;
pt(159).subsource = 'SS_DOUBLE';
pt(159).ndims     = '2';
pt(159).size      = '[]';

pt(160).blockname = 'DataLogging/Create Custom Data Subsystem/Rate Transition2';
pt(160).paramname = 'X0';
pt(160).class     = 'scalar';
pt(160).nrows     = 1;
pt(160).ncols     = 1;
pt(160).subsource = 'SS_DOUBLE';
pt(160).ndims     = '2';
pt(160).size      = '[]';

pt(161).blockname = 'DataLogging/Create Event Codes Subsystem/Not Logging Event Codes';
pt(161).paramname = 'Value';
pt(161).class     = 'scalar';
pt(161).nrows     = 1;
pt(161).ncols     = 1;
pt(161).subsource = 'SS_DOUBLE';
pt(161).ndims     = '2';
pt(161).size      = '[]';

pt(162).blockname = 'DataLogging/Create Task State Subsystem/If Running';
pt(162).paramname = 'const';
pt(162).class     = 'scalar';
pt(162).nrows     = 1;
pt(162).ncols     = 1;
pt(162).subsource = 'SS_UINT32';
pt(162).ndims     = '2';
pt(162).size      = '[]';

pt(163).blockname = 'DataLogging/Create Task State Subsystem/packet_version';
pt(163).paramname = 'Value';
pt(163).class     = 'scalar';
pt(163).nrows     = 1;
pt(163).ncols     = 1;
pt(163).subsource = 'SS_DOUBLE';
pt(163).ndims     = '2';
pt(163).size      = '[]';

pt(164).blockname = 'DataLogging/Keep alive/const';
pt(164).paramname = 'Value';
pt(164).class     = 'vector';
pt(164).nrows     = 1;
pt(164).ncols     = 5;
pt(164).subsource = 'SS_DOUBLE';
pt(164).ndims     = '2';
pt(164).size      = '[]';

pt(165).blockname = 'DataLogging/Keep alive/Send';
pt(165).paramname = 'P1';
pt(165).class     = 'vector';
pt(165).nrows     = 1;
pt(165).ncols     = 11;
pt(165).subsource = 'SS_DOUBLE';
pt(165).ndims     = '2';
pt(165).size      = '[]';

pt(166).blockname = 'DataLogging/Keep alive/Send';
pt(166).paramname = 'P2';
pt(166).class     = 'scalar';
pt(166).nrows     = 1;
pt(166).ncols     = 1;
pt(166).subsource = 'SS_DOUBLE';
pt(166).ndims     = '2';
pt(166).size      = '[]';

pt(167).blockname = 'DataLogging/Keep alive/Send';
pt(167).paramname = 'P3';
pt(167).class     = 'scalar';
pt(167).nrows     = 1;
pt(167).ncols     = 1;
pt(167).subsource = 'SS_DOUBLE';
pt(167).ndims     = '2';
pt(167).size      = '[]';

pt(168).blockname = 'DataLogging/Keep alive/Send';
pt(168).paramname = 'P4';
pt(168).class     = 'scalar';
pt(168).nrows     = 1;
pt(168).ncols     = 1;
pt(168).subsource = 'SS_DOUBLE';
pt(168).ndims     = '2';
pt(168).size      = '[]';

pt(169).blockname = 'DataLogging/Keep alive/Send';
pt(169).paramname = 'P5';
pt(169).class     = 'scalar';
pt(169).nrows     = 1;
pt(169).ncols     = 1;
pt(169).subsource = 'SS_DOUBLE';
pt(169).ndims     = '2';
pt(169).size      = '[]';

pt(170).blockname = 'DataLogging/Network Transfer Subsystem/max_packet_id';
pt(170).paramname = 'Value';
pt(170).class     = 'scalar';
pt(170).nrows     = 1;
pt(170).ncols     = 1;
pt(170).subsource = 'SS_UINT32';
pt(170).ndims     = '2';
pt(170).size      = '[]';

pt(171).blockname = 'DataLogging/Network Transfer Subsystem/runID';
pt(171).paramname = 'Value';
pt(171).class     = 'scalar';
pt(171).nrows     = 1;
pt(171).ncols     = 1;
pt(171).subsource = 'SS_DOUBLE';
pt(171).ndims     = '2';
pt(171).size      = '[]';

pt(172).blockname = 'DataLogging/Network Transfer Subsystem/Task Clock';
pt(172).paramname = 'Amplitude';
pt(172).class     = 'scalar';
pt(172).nrows     = 1;
pt(172).ncols     = 1;
pt(172).subsource = 'SS_DOUBLE';
pt(172).ndims     = '2';
pt(172).size      = '[]';

pt(173).blockname = 'DataLogging/Network Transfer Subsystem/Task Clock';
pt(173).paramname = 'Period';
pt(173).class     = 'scalar';
pt(173).nrows     = 1;
pt(173).ncols     = 1;
pt(173).subsource = 'SS_DOUBLE';
pt(173).ndims     = '2';
pt(173).size      = '[]';

pt(174).blockname = 'DataLogging/Network Transfer Subsystem/Task Clock';
pt(174).paramname = 'PulseWidth';
pt(174).class     = 'scalar';
pt(174).nrows     = 1;
pt(174).ncols     = 1;
pt(174).subsource = 'SS_DOUBLE';
pt(174).ndims     = '2';
pt(174).size      = '[]';

pt(175).blockname = 'DataLogging/Network Transfer Subsystem/Task Clock';
pt(175).paramname = 'PhaseDelay';
pt(175).class     = 'scalar';
pt(175).nrows     = 1;
pt(175).ncols     = 1;
pt(175).subsource = 'SS_DOUBLE';
pt(175).ndims     = '2';
pt(175).size      = '[]';

pt(176).blockname = 'DataLogging/Poll Force Plates/ain_offset1';
pt(176).paramname = 'Value';
pt(176).class     = 'scalar';
pt(176).nrows     = 1;
pt(176).ncols     = 1;
pt(176).subsource = 'SS_DOUBLE';
pt(176).ndims     = '2';
pt(176).size      = '[]';

pt(177).blockname = 'DataLogging/Poll Force Plates/ain_offset2';
pt(177).paramname = 'Value';
pt(177).class     = 'scalar';
pt(177).nrows     = 1;
pt(177).ncols     = 1;
pt(177).subsource = 'SS_DOUBLE';
pt(177).ndims     = '2';
pt(177).size      = '[]';

pt(178).blockname = 'DataLogging/Poll Force Plates/ain_slope1';
pt(178).paramname = 'Value';
pt(178).class     = 'scalar';
pt(178).nrows     = 1;
pt(178).ncols     = 1;
pt(178).subsource = 'SS_DOUBLE';
pt(178).ndims     = '2';
pt(178).size      = '[]';

pt(179).blockname = 'DataLogging/Poll Force Plates/ain_slope2';
pt(179).paramname = 'Value';
pt(179).class     = 'scalar';
pt(179).nrows     = 1;
pt(179).ncols     = 1;
pt(179).subsource = 'SS_DOUBLE';
pt(179).ndims     = '2';
pt(179).size      = '[]';

pt(180).blockname = 'DataLogging/Poll Force Plates/calibration_matrix1';
pt(180).paramname = 'Value';
pt(180).class     = 'col-mat';
pt(180).nrows     = 6;
pt(180).ncols     = 8;
pt(180).subsource = 'SS_DOUBLE';
pt(180).ndims     = '2';
pt(180).size      = '[]';

pt(181).blockname = 'DataLogging/Poll Force Plates/calibration_matrix2';
pt(181).paramname = 'Value';
pt(181).class     = 'col-mat';
pt(181).nrows     = 6;
pt(181).ncols     = 8;
pt(181).subsource = 'SS_DOUBLE';
pt(181).ndims     = '2';
pt(181).size      = '[]';

pt(182).blockname = 'DataLogging/Poll Force Plates/enable_plate1';
pt(182).paramname = 'Value';
pt(182).class     = 'scalar';
pt(182).nrows     = 1;
pt(182).ncols     = 1;
pt(182).subsource = 'SS_DOUBLE';
pt(182).ndims     = '2';
pt(182).size      = '[]';

pt(183).blockname = 'DataLogging/Poll Force Plates/enable_plate2';
pt(183).paramname = 'Value';
pt(183).class     = 'scalar';
pt(183).nrows     = 1;
pt(183).ncols     = 1;
pt(183).subsource = 'SS_DOUBLE';
pt(183).ndims     = '2';
pt(183).size      = '[]';

pt(184).blockname = 'DataLogging/Poll Force Plates/gain';
pt(184).paramname = 'Value';
pt(184).class     = 'scalar';
pt(184).nrows     = 1;
pt(184).ncols     = 1;
pt(184).subsource = 'SS_DOUBLE';
pt(184).ndims     = '2';
pt(184).size      = '[]';

pt(185).blockname = 'DataLogging/Poll Force Plates/orientation1';
pt(185).paramname = 'Value';
pt(185).class     = 'scalar';
pt(185).nrows     = 1;
pt(185).ncols     = 1;
pt(185).subsource = 'SS_DOUBLE';
pt(185).ndims     = '2';
pt(185).size      = '[]';

pt(186).blockname = 'DataLogging/Poll Force Plates/orientation2';
pt(186).paramname = 'Value';
pt(186).class     = 'scalar';
pt(186).nrows     = 1;
pt(186).ncols     = 1;
pt(186).subsource = 'SS_DOUBLE';
pt(186).ndims     = '2';
pt(186).size      = '[]';

pt(187).blockname = 'DataLogging/Poll Force Plates/request_packet';
pt(187).paramname = 'Value';
pt(187).class     = 'vector';
pt(187).nrows     = 1;
pt(187).ncols     = 34;
pt(187).subsource = 'SS_INT32';
pt(187).ndims     = '2';
pt(187).size      = '[]';

pt(188).blockname = 'DataLogging/Poll Force Plates/zero_voltage';
pt(188).paramname = 'Value';
pt(188).class     = 'scalar';
pt(188).nrows     = 1;
pt(188).ncols     = 1;
pt(188).subsource = 'SS_DOUBLE';
pt(188).ndims     = '2';
pt(188).size      = '[]';

pt(189).blockname = 'DataLogging/Poll KINARM/ECAT Digital in';
pt(189).paramname = 'InitialValue';
pt(189).class     = 'vector';
pt(189).nrows     = 1;
pt(189).ncols     = 8;
pt(189).subsource = 'SS_UINT32';
pt(189).ndims     = '2';
pt(189).size      = '[]';

pt(190).blockname = 'DataLogging/Poll KINARM/ECAT Err Msgs';
pt(190).paramname = 'InitialValue';
pt(190).class     = 'col-mat';
pt(190).nrows     = 4;
pt(190).ncols     = 5;
pt(190).subsource = 'SS_DOUBLE';
pt(190).ndims     = '2';
pt(190).size      = '[]';

pt(191).blockname = 'DataLogging/Poll KINARM/ECATTorque feedback';
pt(191).paramname = 'InitialValue';
pt(191).class     = 'vector';
pt(191).nrows     = 1;
pt(191).ncols     = 8;
pt(191).subsource = 'SS_DOUBLE';
pt(191).ndims     = '2';
pt(191).size      = '[]';

pt(192).blockname = 'DataLogging/Poll KINARM/HW Settings';
pt(192).paramname = 'InitialValue';
pt(192).class     = 'vector';
pt(192).nrows     = 24;
pt(192).ncols     = 1;
pt(192).subsource = 'SS_DOUBLE';
pt(192).ndims     = '2';
pt(192).size      = '[]';

pt(193).blockname = 'DataLogging/Poll KINARM/Kinematics';
pt(193).paramname = 'InitialValue';
pt(193).class     = 'vector';
pt(193).nrows     = 20;
pt(193).ncols     = 1;
pt(193).subsource = 'SS_DOUBLE';
pt(193).ndims     = '2';
pt(193).size      = '[]';

pt(194).blockname = 'DataLogging/Poll KINARM/PrimaryEnc';
pt(194).paramname = 'InitialValue';
pt(194).class     = 'vector';
pt(194).nrows     = 12;
pt(194).ncols     = 1;
pt(194).subsource = 'SS_DOUBLE';
pt(194).ndims     = '2';
pt(194).size      = '[]';

pt(195).blockname = 'DataLogging/Poll KINARM/Robot Calib';
pt(195).paramname = 'InitialValue';
pt(195).class     = 'vector';
pt(195).nrows     = 16;
pt(195).ncols     = 1;
pt(195).subsource = 'SS_DOUBLE';
pt(195).ndims     = '2';
pt(195).size      = '[]';

pt(196).blockname = 'DataLogging/Poll KINARM/RobotRevision';
pt(196).paramname = 'InitialValue';
pt(196).class     = 'vector';
pt(196).nrows     = 1;
pt(196).ncols     = 2;
pt(196).subsource = 'SS_DOUBLE';
pt(196).ndims     = '2';
pt(196).size      = '[]';

pt(197).blockname = 'DataLogging/Poll KINARM/ServoUpdate';
pt(197).paramname = 'InitialValue';
pt(197).class     = 'scalar';
pt(197).nrows     = 1;
pt(197).ncols     = 1;
pt(197).subsource = 'SS_UINT32';
pt(197).ndims     = '2';
pt(197).size      = '[]';

pt(198).blockname = 'DataLogging/Poll KINARM/System status';
pt(198).paramname = 'InitialValue';
pt(198).class     = 'vector';
pt(198).nrows     = 1;
pt(198).ncols     = 7;
pt(198).subsource = 'SS_UINT32';
pt(198).ndims     = '2';
pt(198).size      = '[]';

pt(199).blockname = 'DataLogging/Poll KINARM/calib button';
pt(199).paramname = 'InitialValue';
pt(199).class     = 'scalar';
pt(199).nrows     = 1;
pt(199).ncols     = 1;
pt(199).subsource = 'SS_UINT32';
pt(199).ndims     = '2';
pt(199).size      = '[]';

pt(200).blockname = 'DataLogging/Poll KINARM/delays';
pt(200).paramname = 'InitialValue';
pt(200).class     = 'vector';
pt(200).nrows     = 4;
pt(200).ncols     = 1;
pt(200).subsource = 'SS_DOUBLE';
pt(200).ndims     = '2';
pt(200).size      = '[]';

pt(201).blockname = 'DataLogging/Poll KINARM/has FT sensors';
pt(201).paramname = 'InitialValue';
pt(201).class     = 'vector';
pt(201).nrows     = 1;
pt(201).ncols     = 2;
pt(201).subsource = 'SS_DOUBLE';
pt(201).ndims     = '2';
pt(201).size      = '[]';

pt(202).blockname = 'DataLogging/Poll KINARM/isecat';
pt(202).paramname = 'const';
pt(202).class     = 'scalar';
pt(202).nrows     = 1;
pt(202).ncols     = 1;
pt(202).subsource = 'SS_DOUBLE';
pt(202).ndims     = '2';
pt(202).size      = '[]';

pt(203).blockname = 'DataLogging/Poll KINARM/ispmac';
pt(203).paramname = 'const';
pt(203).class     = 'scalar';
pt(203).nrows     = 1;
pt(203).ncols     = 1;
pt(203).subsource = 'SS_DOUBLE';
pt(203).ndims     = '2';
pt(203).size      = '[]';

pt(204).blockname = 'DataLogging/Poll KINARM/system type';
pt(204).paramname = 'Value';
pt(204).class     = 'scalar';
pt(204).nrows     = 1;
pt(204).ncols     = 1;
pt(204).subsource = 'SS_DOUBLE';
pt(204).ndims     = '2';
pt(204).size      = '[]';

pt(205).blockname = 'DataLogging/Receive_Gaze/EL Camera Angle';
pt(205).paramname = 'Value';
pt(205).class     = 'vector';
pt(205).nrows     = 1;
pt(205).ncols     = 2;
pt(205).subsource = 'SS_DOUBLE';
pt(205).ndims     = '2';
pt(205).size      = '[]';

pt(206).blockname = 'DataLogging/Receive_Gaze/EL Camera Focal Length';
pt(206).paramname = 'Value';
pt(206).class     = 'scalar';
pt(206).nrows     = 1;
pt(206).ncols     = 1;
pt(206).subsource = 'SS_DOUBLE';
pt(206).ndims     = '2';
pt(206).size      = '[]';

pt(207).blockname = 'DataLogging/Receive_Gaze/EL Camera Position';
pt(207).paramname = 'Value';
pt(207).class     = 'vector';
pt(207).nrows     = 1;
pt(207).ncols     = 3;
pt(207).subsource = 'SS_DOUBLE';
pt(207).ndims     = '2';
pt(207).size      = '[]';

pt(208).blockname = 'DataLogging/Receive_Gaze/EL Tracking Available';
pt(208).paramname = 'Value';
pt(208).class     = 'scalar';
pt(208).nrows     = 1;
pt(208).ncols     = 1;
pt(208).subsource = 'SS_DOUBLE';
pt(208).ndims     = '2';
pt(208).size      = '[]';

pt(209).blockname = 'DataLogging/Receive_Gaze/Gain';
pt(209).paramname = 'Gain';
pt(209).class     = 'scalar';
pt(209).nrows     = 1;
pt(209).ncols     = 1;
pt(209).subsource = 'SS_DOUBLE';
pt(209).ndims     = '2';
pt(209).size      = '[]';

pt(210).blockname = 'DataLogging/Receive_Gaze/Rate Transition';
pt(210).paramname = 'X0';
pt(210).class     = 'scalar';
pt(210).nrows     = 1;
pt(210).ncols     = 1;
pt(210).subsource = 'SS_DOUBLE';
pt(210).ndims     = '2';
pt(210).size      = '[]';

pt(211).blockname = 'DataLogging/Receive_Gaze/Receive';
pt(211).paramname = 'P1';
pt(211).class     = 'vector';
pt(211).nrows     = 1;
pt(211).ncols     = 7;
pt(211).subsource = 'SS_DOUBLE';
pt(211).ndims     = '2';
pt(211).size      = '[]';

pt(212).blockname = 'DataLogging/Receive_Gaze/Receive';
pt(212).paramname = 'P2';
pt(212).class     = 'scalar';
pt(212).nrows     = 1;
pt(212).ncols     = 1;
pt(212).subsource = 'SS_DOUBLE';
pt(212).ndims     = '2';
pt(212).size      = '[]';

pt(213).blockname = 'DataLogging/Receive_Gaze/Receive';
pt(213).paramname = 'P3';
pt(213).class     = 'scalar';
pt(213).nrows     = 1;
pt(213).ncols     = 1;
pt(213).subsource = 'SS_DOUBLE';
pt(213).ndims     = '2';
pt(213).size      = '[]';

pt(214).blockname = 'DataLogging/Receive_Gaze/Receive';
pt(214).paramname = 'P4';
pt(214).class     = 'scalar';
pt(214).nrows     = 1;
pt(214).ncols     = 1;
pt(214).subsource = 'SS_DOUBLE';
pt(214).ndims     = '2';
pt(214).size      = '[]';

pt(215).blockname = 'DataLogging/Receive_Gaze/Receive';
pt(215).paramname = 'P5';
pt(215).class     = 'scalar';
pt(215).nrows     = 1;
pt(215).ncols     = 1;
pt(215).subsource = 'SS_DOUBLE';
pt(215).ndims     = '2';
pt(215).size      = '[]';

pt(216).blockname = 'DataLogging/apply loads/isecat';
pt(216).paramname = 'const';
pt(216).class     = 'scalar';
pt(216).nrows     = 1;
pt(216).ncols     = 1;
pt(216).subsource = 'SS_DOUBLE';
pt(216).ndims     = '2';
pt(216).size      = '[]';

pt(217).blockname = 'DataLogging/apply loads/isecat1';
pt(217).paramname = 'const';
pt(217).class     = 'scalar';
pt(217).nrows     = 1;
pt(217).ncols     = 1;
pt(217).subsource = 'SS_DOUBLE';
pt(217).ndims     = '2';
pt(217).size      = '[]';

pt(218).blockname = 'DataLogging/create_lab_info/arm_count';
pt(218).paramname = 'Value';
pt(218).class     = 'scalar';
pt(218).nrows     = 1;
pt(218).ncols     = 1;
pt(218).subsource = 'SS_DOUBLE';
pt(218).ndims     = '2';
pt(218).size      = '[]';

pt(219).blockname = 'DataLogging/create_lab_info/fp1_present';
pt(219).paramname = 'Value';
pt(219).class     = 'scalar';
pt(219).nrows     = 1;
pt(219).ncols     = 1;
pt(219).subsource = 'SS_DOUBLE';
pt(219).ndims     = '2';
pt(219).size      = '[]';

pt(220).blockname = 'DataLogging/create_lab_info/fp2_present';
pt(220).paramname = 'Value';
pt(220).class     = 'scalar';
pt(220).nrows     = 1;
pt(220).ncols     = 1;
pt(220).subsource = 'SS_DOUBLE';
pt(220).ndims     = '2';
pt(220).size      = '[]';

pt(221).blockname = 'DataLogging/create_lab_info/gaze_tracker_present';
pt(221).paramname = 'Value';
pt(221).class     = 'scalar';
pt(221).nrows     = 1;
pt(221).ncols     = 1;
pt(221).subsource = 'SS_DOUBLE';
pt(221).ndims     = '2';
pt(221).size      = '[]';

pt(222).blockname = 'DataLogging/create_lab_info/robot_lift_present';
pt(222).paramname = 'Value';
pt(222).class     = 'scalar';
pt(222).nrows     = 1;
pt(222).ncols     = 1;
pt(222).subsource = 'SS_DOUBLE';
pt(222).ndims     = '2';
pt(222).size      = '[]';

pt(223).blockname = 'DisplayInstruct/Show_Target1/padder';
pt(223).paramname = 'Value';
pt(223).class     = 'col-mat';
pt(223).nrows     = 5;
pt(223).ncols     = 5;
pt(223).subsource = 'SS_DOUBLE';
pt(223).ndims     = '2';
pt(223).size      = '[]';

pt(224).blockname = 'DisplayInstruct/Show_Target1/state2_indices';
pt(224).paramname = 'Value';
pt(224).class     = 'vector';
pt(224).nrows     = 1;
pt(224).ncols     = 6;
pt(224).subsource = 'SS_DOUBLE';
pt(224).ndims     = '2';
pt(224).size      = '[]';

pt(225).blockname = 'DisplayInstruct/Show_Target1/state3_indices';
pt(225).paramname = 'Value';
pt(225).class     = 'vector';
pt(225).nrows     = 1;
pt(225).ncols     = 6;
pt(225).subsource = 'SS_DOUBLE';
pt(225).ndims     = '2';
pt(225).size      = '[]';

pt(226).blockname = 'DisplayInstruct/Show_Target1/state4_indices';
pt(226).paramname = 'Value';
pt(226).class     = 'vector';
pt(226).nrows     = 1;
pt(226).ncols     = 6;
pt(226).subsource = 'SS_DOUBLE';
pt(226).ndims     = '2';
pt(226).size      = '[]';

pt(227).blockname = 'DisplayInstruct/Show_Target1/state5_indices';
pt(227).paramname = 'Value';
pt(227).class     = 'vector';
pt(227).nrows     = 1;
pt(227).ncols     = 6;
pt(227).subsource = 'SS_DOUBLE';
pt(227).ndims     = '2';
pt(227).size      = '[]';

pt(228).blockname = 'DisplayInstruct/Show_Target1/xpos_index';
pt(228).paramname = 'Value';
pt(228).class     = 'scalar';
pt(228).nrows     = 1;
pt(228).ncols     = 1;
pt(228).subsource = 'SS_DOUBLE';
pt(228).ndims     = '2';
pt(228).size      = '[]';

pt(229).blockname = 'DisplayInstruct/Show_Target1/ypos_index';
pt(229).paramname = 'Value';
pt(229).class     = 'scalar';
pt(229).nrows     = 1;
pt(229).ncols     = 1;
pt(229).subsource = 'SS_DOUBLE';
pt(229).ndims     = '2';
pt(229).size      = '[]';

pt(230).blockname = 'DisplayText/Show_Target_With_Label/padder';
pt(230).paramname = 'Value';
pt(230).class     = 'col-mat';
pt(230).nrows     = 5;
pt(230).ncols     = 2;
pt(230).subsource = 'SS_DOUBLE';
pt(230).ndims     = '2';
pt(230).size      = '[]';

pt(231).blockname = 'DisplayText/Show_Target_With_Label/state2_indices';
pt(231).paramname = 'Value';
pt(231).class     = 'vector';
pt(231).nrows     = 1;
pt(231).ncols     = 9;
pt(231).subsource = 'SS_DOUBLE';
pt(231).ndims     = '2';
pt(231).size      = '[]';

pt(232).blockname = 'DisplayText/Show_Target_With_Label/state3_indices';
pt(232).paramname = 'Value';
pt(232).class     = 'vector';
pt(232).nrows     = 1;
pt(232).ncols     = 9;
pt(232).subsource = 'SS_DOUBLE';
pt(232).ndims     = '2';
pt(232).size      = '[]';

pt(233).blockname = 'DisplayText/Show_Target_With_Label/state4_indices';
pt(233).paramname = 'Value';
pt(233).class     = 'vector';
pt(233).nrows     = 1;
pt(233).ncols     = 9;
pt(233).subsource = 'SS_DOUBLE';
pt(233).ndims     = '2';
pt(233).size      = '[]';

pt(234).blockname = 'DisplayText/Show_Target_With_Label/state5_indices';
pt(234).paramname = 'Value';
pt(234).class     = 'vector';
pt(234).nrows     = 1;
pt(234).ncols     = 9;
pt(234).subsource = 'SS_DOUBLE';
pt(234).ndims     = '2';
pt(234).size      = '[]';

pt(235).blockname = 'DisplayText/Show_Target_With_Label/xpos_index';
pt(235).paramname = 'Value';
pt(235).class     = 'scalar';
pt(235).nrows     = 1;
pt(235).ncols     = 1;
pt(235).subsource = 'SS_DOUBLE';
pt(235).ndims     = '2';
pt(235).size      = '[]';

pt(236).blockname = 'DisplayText/Show_Target_With_Label/ypos_index';
pt(236).paramname = 'Value';
pt(236).class     = 'scalar';
pt(236).nrows     = 1;
pt(236).ncols     = 1;
pt(236).subsource = 'SS_DOUBLE';
pt(236).ndims     = '2';
pt(236).size      = '[]';

pt(237).blockname = 'GUI Control/Preview Targets Subsystem/Target_Type';
pt(237).paramname = 'Value';
pt(237).class     = 'scalar';
pt(237).nrows     = 1;
pt(237).ncols     = 1;
pt(237).subsource = 'SS_DOUBLE';
pt(237).ndims     = '2';
pt(237).size      = '[]';

pt(238).blockname = 'GUI Control/Preview Targets Subsystem/indices_padding';
pt(238).paramname = 'Value';
pt(238).class     = 'col-mat';
pt(238).nrows     = 2;
pt(238).ncols     = 4;
pt(238).subsource = 'SS_DOUBLE';
pt(238).ndims     = '2';
pt(238).size      = '[]';

pt(239).blockname = 'GUI Control/Run Command Subsystem/Hold_to_1Khz';
pt(239).paramname = 'BKIN_STEP_TIME';
pt(239).class     = 'scalar';
pt(239).nrows     = 1;
pt(239).ncols     = 1;
pt(239).subsource = 'SS_DOUBLE';
pt(239).ndims     = '2';
pt(239).size      = '[]';

pt(240).blockname = 'GUI Control/Run Command Subsystem/Run Command Receive';
pt(240).paramname = 'P1';
pt(240).class     = 'vector';
pt(240).nrows     = 1;
pt(240).ncols     = 7;
pt(240).subsource = 'SS_DOUBLE';
pt(240).ndims     = '2';
pt(240).size      = '[]';

pt(241).blockname = 'GUI Control/Run Command Subsystem/Run Command Receive';
pt(241).paramname = 'P2';
pt(241).class     = 'scalar';
pt(241).nrows     = 1;
pt(241).ncols     = 1;
pt(241).subsource = 'SS_DOUBLE';
pt(241).ndims     = '2';
pt(241).size      = '[]';

pt(242).blockname = 'GUI Control/Run Command Subsystem/Run Command Receive';
pt(242).paramname = 'P3';
pt(242).class     = 'scalar';
pt(242).nrows     = 1;
pt(242).ncols     = 1;
pt(242).subsource = 'SS_DOUBLE';
pt(242).ndims     = '2';
pt(242).size      = '[]';

pt(243).blockname = 'GUI Control/Run Command Subsystem/Run Command Receive';
pt(243).paramname = 'P4';
pt(243).class     = 'scalar';
pt(243).nrows     = 1;
pt(243).ncols     = 1;
pt(243).subsource = 'SS_DOUBLE';
pt(243).ndims     = '2';
pt(243).size      = '[]';

pt(244).blockname = 'GUI Control/Run Command Subsystem/Run Command Receive';
pt(244).paramname = 'P5';
pt(244).class     = 'scalar';
pt(244).nrows     = 1;
pt(244).ncols     = 1;
pt(244).subsource = 'SS_DOUBLE';
pt(244).ndims     = '2';
pt(244).size      = '[]';

pt(245).blockname = 'GUI Control/Task Execution Control Subsystem/Compare To Constant';
pt(245).paramname = 'const';
pt(245).class     = 'scalar';
pt(245).nrows     = 1;
pt(245).ncols     = 1;
pt(245).subsource = 'SS_UINT32';
pt(245).ndims     = '2';
pt(245).size      = '[]';

pt(246).blockname = 'GUI Control/Task Execution Control Subsystem/Constant';
pt(246).paramname = 'Value';
pt(246).class     = 'scalar';
pt(246).nrows     = 1;
pt(246).ncols     = 1;
pt(246).subsource = 'SS_DOUBLE';
pt(246).ndims     = '2';
pt(246).size      = '[]';

pt(247).blockname = 'GUI Control/Task Execution Control Subsystem/Task Clock';
pt(247).paramname = 'Amplitude';
pt(247).class     = 'scalar';
pt(247).nrows     = 1;
pt(247).ncols     = 1;
pt(247).subsource = 'SS_DOUBLE';
pt(247).ndims     = '2';
pt(247).size      = '[]';

pt(248).blockname = 'GUI Control/Task Execution Control Subsystem/Task Clock';
pt(248).paramname = 'Period';
pt(248).class     = 'scalar';
pt(248).nrows     = 1;
pt(248).ncols     = 1;
pt(248).subsource = 'SS_DOUBLE';
pt(248).ndims     = '2';
pt(248).size      = '[]';

pt(249).blockname = 'GUI Control/Task Execution Control Subsystem/Task Clock';
pt(249).paramname = 'PulseWidth';
pt(249).class     = 'scalar';
pt(249).nrows     = 1;
pt(249).ncols     = 1;
pt(249).subsource = 'SS_DOUBLE';
pt(249).ndims     = '2';
pt(249).size      = '[]';

pt(250).blockname = 'GUI Control/Task Execution Control Subsystem/Task Clock';
pt(250).paramname = 'PhaseDelay';
pt(250).class     = 'scalar';
pt(250).nrows     = 1;
pt(250).ncols     = 1;
pt(250).subsource = 'SS_DOUBLE';
pt(250).ndims     = '2';
pt(250).size      = '[]';

pt(251).blockname = 'GUI Control/Task Execution Control Subsystem/Delay';
pt(251).paramname = 'X0';
pt(251).class     = 'scalar';
pt(251).nrows     = 1;
pt(251).ncols     = 1;
pt(251).subsource = 'SS_BOOLEAN';
pt(251).ndims     = '2';
pt(251).size      = '[]';

pt(252).blockname = 'GUI Control/Task Execution Control Subsystem/Delay1';
pt(252).paramname = 'X0';
pt(252).class     = 'scalar';
pt(252).nrows     = 1;
pt(252).ncols     = 1;
pt(252).subsource = 'SS_DOUBLE';
pt(252).ndims     = '2';
pt(252).size      = '[]';

pt(253).blockname = 'KINARM_Exo_Apply_Loads/clip motor torques/Torque Limit5';
pt(253).paramname = 'Value';
pt(253).class     = 'scalar';
pt(253).nrows     = 1;
pt(253).ncols     = 1;
pt(253).subsource = 'SS_DOUBLE';
pt(253).ndims     = '2';
pt(253).size      = '[]';

pt(254).blockname = 'KINARM_Exo_Apply_Loads/clip motor torques/Switch1';
pt(254).paramname = 'Threshold';
pt(254).class     = 'scalar';
pt(254).nrows     = 1;
pt(254).ncols     = 1;
pt(254).subsource = 'SS_DOUBLE';
pt(254).ndims     = '2';
pt(254).size      = '[]';

pt(255).blockname = 'Parameter Table Defn/TP_table/CLAMP_COL;Clamp State;integer;Flag to clamp visual feedback;;;none;;';
pt(255).paramname = 'Value';
pt(255).class     = 'scalar';
pt(255).nrows     = 1;
pt(255).ncols     = 1;
pt(255).subsource = 'SS_DOUBLE';
pt(255).ndims     = '2';
pt(255).size      = '[]';

pt(256).blockname = 'Parameter Table Defn/TP_table/DELAY_POSTTRIAL_COL;Post-Trial_Delay;integer;time between trials (ms);;;none;;';
pt(256).paramname = 'Value';
pt(256).class     = 'scalar';
pt(256).nrows     = 1;
pt(256).ncols     = 1;
pt(256).subsource = 'SS_DOUBLE';
pt(256).ndims     = '2';
pt(256).size      = '[]';

pt(257).blockname = 'Parameter Table Defn/TP_table/DISPLAY_TRIAL_COL;Flag for a display-only trial;integer;Flag to transition to a display-only trial (show instructions or cumulative score);;;none;;';
pt(257).paramname = 'Value';
pt(257).class     = 'scalar';
pt(257).nrows     = 1;
pt(257).ncols     = 1;
pt(257).subsource = 'SS_DOUBLE';
pt(257).ndims     = '2';
pt(257).size      = '[]';

pt(258).blockname = 'Parameter Table Defn/TP_table/DO_REWARD_COL;Do Reward;integer;Flag to indicate whether to provide reward, neutral tone, or nothing on this trial;;;none;;';
pt(258).paramname = 'Value';
pt(258).class     = 'scalar';
pt(258).nrows     = 1;
pt(258).ncols     = 1;
pt(258).subsource = 'SS_DOUBLE';
pt(258).ndims     = '2';
pt(258).size      = '[]';

pt(259).blockname = 'Parameter Table Defn/TP_table/END_TARGET_COL;End_Target;target;Second target to appear during a trial (i.e. reach to this target from 1st target);;;none;;';
pt(259).paramname = 'Value';
pt(259).class     = 'scalar';
pt(259).nrows     = 1;
pt(259).ncols     = 1;
pt(259).subsource = 'SS_DOUBLE';
pt(259).ndims     = '2';
pt(259).size      = '[]';

pt(260).blockname = 'Parameter Table Defn/TP_table/HAND_VIS_COL;Hand Visible;integer;Flag to shut off the hand for aftereffect trials;;;none;;';
pt(260).paramname = 'Value';
pt(260).class     = 'scalar';
pt(260).nrows     = 1;
pt(260).ncols     = 1;
pt(260).subsource = 'SS_DOUBLE';
pt(260).ndims     = '2';
pt(260).size      = '[]';

pt(261).blockname = 'Parameter Table Defn/TP_table/MAXREACHTIME_COL;MaxReachTime;integer;maximum time allowed for sucessful reach (ms);;;none;;';
pt(261).paramname = 'Value';
pt(261).class     = 'scalar';
pt(261).nrows     = 1;
pt(261).ncols     = 1;
pt(261).subsource = 'SS_DOUBLE';
pt(261).ndims     = '2';
pt(261).size      = '[]';

pt(262).blockname = 'Parameter Table Defn/TP_table/ROTATION;Rotation;integer;Rotation (degrees CCW) (absolute or incremental, depending on Rotate_Type));;;none;;';
pt(262).paramname = 'Value';
pt(262).class     = 'scalar';
pt(262).nrows     = 1;
pt(262).ncols     = 1;
pt(262).subsource = 'SS_DOUBLE';
pt(262).ndims     = '2';
pt(262).size      = '[]';

pt(263).blockname = 'Parameter Table Defn/TP_table/ROTATION_CENTER;Rotate_Center;target;Target to use for rotation center (i.e. visual rotation occurs about the position defined by this target);;;none;;';
pt(263).paramname = 'Value';
pt(263).class     = 'scalar';
pt(263).nrows     = 1;
pt(263).ncols     = 1;
pt(263).subsource = 'SS_DOUBLE';
pt(263).ndims     = '2';
pt(263).size      = '[]';

pt(264).blockname = 'Parameter Table Defn/TP_table/ROTATION_TYPE;Rotate_Type;integer;0 -> no rotation, 1 -> rotate specified amount, 2 -> change rotation by specified amount;;;none;;';
pt(264).paramname = 'Value';
pt(264).class     = 'scalar';
pt(264).nrows     = 1;
pt(264).ncols     = 1;
pt(264).subsource = 'SS_DOUBLE';
pt(264).ndims     = '2';
pt(264).size      = '[]';

pt(265).blockname = 'Parameter Table Defn/TP_table/START_TARGET_COL;Start_Target;target;First target to appear during a trial;;;none;;';
pt(265).paramname = 'Value';
pt(265).class     = 'scalar';
pt(265).nrows     = 1;
pt(265).ncols     = 1;
pt(265).subsource = 'SS_DOUBLE';
pt(265).ndims     = '2';
pt(265).size      = '[]';

pt(266).blockname = 'Parameter Table Defn/TP_table/WAIT_AT_START_COL;1st_Target_Wait;integer;Required hold time at start target (ms);;;none;;';
pt(266).paramname = 'Value';
pt(266).class     = 'scalar';
pt(266).nrows     = 1;
pt(266).ncols     = 1;
pt(266).subsource = 'SS_DOUBLE';
pt(266).ndims     = '2';
pt(266).size      = '[]';

pt(267).blockname = 'Parameter Table Defn/buttons/INSTRUCT_PAUSE_BTN;Instruct-Resume;;Resume task execution after instruction display;18;22;none;;';
pt(267).paramname = 'Value';
pt(267).class     = 'scalar';
pt(267).nrows     = 1;
pt(267).ncols     = 1;
pt(267).subsource = 'SS_DOUBLE';
pt(267).ndims     = '2';
pt(267).size      = '[]';

pt(268).blockname = 'Parameter Table Defn/events/E_HIT_TARGET;Target_Hit;;Subject has intercepted the target;;;none;;';
pt(268).paramname = 'Value';
pt(268).class     = 'scalar';
pt(268).nrows     = 1;
pt(268).ncols     = 1;
pt(268).subsource = 'SS_DOUBLE';
pt(268).ndims     = '2';
pt(268).size      = '[]';

pt(269).blockname = 'Parameter Table Defn/events/E_MISS_TARGET;Target_Miss;;Subject shot past the target without hitting it;;;none;;';
pt(269).paramname = 'Value';
pt(269).class     = 'scalar';
pt(269).nrows     = 1;
pt(269).ncols     = 1;
pt(269).subsource = 'SS_DOUBLE';
pt(269).ndims     = '2';
pt(269).size      = '[]';

pt(270).blockname = 'Parameter Table Defn/events/E_NEUTRAL_FDBK;NFB_Trial_End;;Subject has hit or exceeded the target on a no-feedback trial;;;none;;';
pt(270).paramname = 'Value';
pt(270).class     = 'scalar';
pt(270).nrows     = 1;
pt(270).ncols     = 1;
pt(270).subsource = 'SS_DOUBLE';
pt(270).ndims     = '2';
pt(270).size      = '[]';

pt(271).blockname = 'Parameter Table Defn/events/E_NO_EVENT;n|a;;This event_code does not save an event in the data file, it just clears the event;;;none;;';
pt(271).paramname = 'Value';
pt(271).class     = 'scalar';
pt(271).nrows     = 1;
pt(271).ncols     = 1;
pt(271).subsource = 'SS_DOUBLE';
pt(271).ndims     = '2';
pt(271).size      = '[]';

pt(272).blockname = 'Parameter Table Defn/events/E_REWARD;Reward_On;;Reward is given;;;none;;';
pt(272).paramname = 'Value';
pt(272).class     = 'scalar';
pt(272).nrows     = 1;
pt(272).ncols     = 1;
pt(272).subsource = 'SS_DOUBLE';
pt(272).ndims     = '2';
pt(272).size      = '[]';

pt(273).blockname = 'Parameter Table Defn/events/E_SHOW_INSTRUCT;Show Instructions;;Trial shows instructions ;;;none;;';
pt(273).paramname = 'Value';
pt(273).class     = 'scalar';
pt(273).nrows     = 1;
pt(273).ncols     = 1;
pt(273).subsource = 'SS_DOUBLE';
pt(273).ndims     = '2';
pt(273).size      = '[]';

pt(274).blockname = 'Parameter Table Defn/events/E_SHOW_SCORE;Show_Cum_Score;;Display cumulative score;;;none;;';
pt(274).paramname = 'Value';
pt(274).class     = 'scalar';
pt(274).nrows     = 1;
pt(274).ncols     = 1;
pt(274).subsource = 'SS_DOUBLE';
pt(274).ndims     = '2';
pt(274).size      = '[]';

pt(275).blockname = 'Parameter Table Defn/events/E_STAY_CENTER;Stay_Center;;Subject has reached the center target and must hold;;;none;;';
pt(275).paramname = 'Value';
pt(275).class     = 'scalar';
pt(275).nrows     = 1;
pt(275).ncols     = 1;
pt(275).subsource = 'SS_DOUBLE';
pt(275).ndims     = '2';
pt(275).size      = '[]';

pt(276).blockname = 'Parameter Table Defn/events/E_TARGET_ON;Target_On;;Target ON, start waiting for subject to leave centre target;;;none;;';
pt(276).paramname = 'Value';
pt(276).class     = 'scalar';
pt(276).nrows     = 1;
pt(276).ncols     = 1;
pt(276).subsource = 'SS_DOUBLE';
pt(276).ndims     = '2';
pt(276).size      = '[]';

pt(277).blockname = 'Parameter Table Defn/target_table/COLOR;Color;colour;Color;;;none;;';
pt(277).paramname = 'Value';
pt(277).class     = 'scalar';
pt(277).nrows     = 1;
pt(277).ncols     = 1;
pt(277).subsource = 'SS_DOUBLE';
pt(277).ndims     = '2';
pt(277).size      = '[]';

pt(278).blockname = 'Parameter Table Defn/target_table/HITCOLOR;Hit Color;colour;Color when the target is hit;;;none;;';
pt(278).paramname = 'Value';
pt(278).class     = 'scalar';
pt(278).nrows     = 1;
pt(278).ncols     = 1;
pt(278).subsource = 'SS_DOUBLE';
pt(278).ndims     = '2';
pt(278).size      = '[]';

pt(279).blockname = 'Parameter Table Defn/target_table/LABEL;Label text;label;Default label text;;;none;;';
pt(279).paramname = 'Value';
pt(279).class     = 'scalar';
pt(279).nrows     = 1;
pt(279).ncols     = 1;
pt(279).subsource = 'SS_DOUBLE';
pt(279).ndims     = '2';
pt(279).size      = '[]';

pt(280).blockname = 'Parameter Table Defn/target_table/LABEL_HEIGHT;Label Height;float;Height of the label;;;none;;';
pt(280).paramname = 'Value';
pt(280).class     = 'scalar';
pt(280).nrows     = 1;
pt(280).ncols     = 1;
pt(280).subsource = 'SS_DOUBLE';
pt(280).ndims     = '2';
pt(280).size      = '[]';

pt(281).blockname = 'Parameter Table Defn/target_table/LOGICAL_RADIUS;Logical radius;float;Logical Radius;;;none;;';
pt(281).paramname = 'Value';
pt(281).class     = 'scalar';
pt(281).nrows     = 1;
pt(281).ncols     = 1;
pt(281).subsource = 'SS_DOUBLE';
pt(281).ndims     = '2';
pt(281).size      = '[]';

pt(282).blockname = 'Parameter Table Defn/target_table/ROTATED_COLOR;Rotated Color;colour;Target color for rotated trials ;;;none;;';
pt(282).paramname = 'Value';
pt(282).class     = 'scalar';
pt(282).nrows     = 1;
pt(282).ncols     = 1;
pt(282).subsource = 'SS_DOUBLE';
pt(282).ndims     = '2';
pt(282).size      = '[]';

pt(283).blockname = 'Parameter Table Defn/target_table/STROKE_COLOR;Stroke Color;colour;Stroke color, for return ring;;;none;;';
pt(283).paramname = 'Value';
pt(283).class     = 'scalar';
pt(283).nrows     = 1;
pt(283).ncols     = 1;
pt(283).subsource = 'SS_DOUBLE';
pt(283).ndims     = '2';
pt(283).size      = '[]';

pt(284).blockname = 'Parameter Table Defn/target_table/STROKE_WIDTH;Stroke Width;float;Stroke width, for return ring;;;none;;';
pt(284).paramname = 'Value';
pt(284).class     = 'scalar';
pt(284).nrows     = 1;
pt(284).ncols     = 1;
pt(284).subsource = 'SS_DOUBLE';
pt(284).ndims     = '2';
pt(284).size      = '[]';

pt(285).blockname = 'Parameter Table Defn/target_table/VISUAL_RADIUS;Visual radius;float;Display Radius;;;none;;';
pt(285).paramname = 'Value';
pt(285).class     = 'scalar';
pt(285).nrows     = 1;
pt(285).ncols     = 1;
pt(285).subsource = 'SS_DOUBLE';
pt(285).ndims     = '2';
pt(285).size      = '[]';

pt(286).blockname = 'Parameter Table Defn/target_table/col_x;X;float;X Position (cm) of the target relative to  local (0,0);;;none;;';
pt(286).paramname = 'Value';
pt(286).class     = 'scalar';
pt(286).nrows     = 1;
pt(286).ncols     = 1;
pt(286).subsource = 'SS_DOUBLE';
pt(286).ndims     = '2';
pt(286).size      = '[]';

pt(287).blockname = 'Parameter Table Defn/target_table/col_y;Y;float;Y Position (cm) of the target relative to  local (0,0);;;none;;';
pt(287).paramname = 'Value';
pt(287).class     = 'scalar';
pt(287).nrows     = 1;
pt(287).ncols     = 1;
pt(287).subsource = 'SS_DOUBLE';
pt(287).ndims     = '2';
pt(287).size      = '[]';

pt(288).blockname = 'Parameter Table Defn/task_definition/INSTRUCTIONS=';
pt(288).paramname = 'Value';
pt(288).class     = 'scalar';
pt(288).nrows     = 1;
pt(288).ncols     = 1;
pt(288).subsource = 'SS_DOUBLE';
pt(288).ndims     = '2';
pt(288).size      = '[]';

pt(289).blockname = 'Parameter Table Defn/task_definition/LOAD_FOR=EITHER';
pt(289).paramname = 'Value';
pt(289).class     = 'scalar';
pt(289).nrows     = 1;
pt(289).ncols     = 1;
pt(289).subsource = 'SS_DOUBLE';
pt(289).ndims     = '2';
pt(289).size      = '[]';

pt(290).blockname = 'Parameter Table Defn/task_wide/K_FIX_LEFTHAND;Fix Left Hand Flag;integer;Flag to hold the enable the robot to hold the left (nondominant) hand in place;;;none;;';
pt(290).paramname = 'Value';
pt(290).class     = 'scalar';
pt(290).nrows     = 1;
pt(290).ncols     = 1;
pt(290).subsource = 'SS_DOUBLE';
pt(290).ndims     = '2';
pt(290).size      = '[]';

pt(291).blockname = 'Parameter Table Defn/task_wide/K_INSTRUCT_TIME;Display Instructions Hold Time;integer;Time to display instructions to the screen;;;none;;';
pt(291).paramname = 'Value';
pt(291).class     = 'scalar';
pt(291).nrows     = 1;
pt(291).ncols     = 1;
pt(291).subsource = 'SS_DOUBLE';
pt(291).ndims     = '2';
pt(291).size      = '[]';

pt(292).blockname = 'Parameter Table Defn/task_wide/K_LEFTHAND_TGT;Left hand target;integer;Target defining the location where the left hand is to be fixed;;;none;;';
pt(292).paramname = 'Value';
pt(292).class     = 'scalar';
pt(292).nrows     = 1;
pt(292).ncols     = 1;
pt(292).subsource = 'SS_DOUBLE';
pt(292).ndims     = '2';
pt(292).size      = '[]';

pt(293).blockname = 'Parameter Table Defn/task_wide/K_RETURN_RING_ROW;ReturnRing TgtTbl Row;integer;Row of the target table to use for feedback on return to start;;;none;;';
pt(293).paramname = 'Value';
pt(293).class     = 'scalar';
pt(293).nrows     = 1;
pt(293).ncols     = 1;
pt(293).subsource = 'SS_DOUBLE';
pt(293).ndims     = '2';
pt(293).size      = '[]';

pt(294).blockname = 'Parameter Table Defn/task_wide/K_REWARD_VAL;Reward Value (cents);integer;Amount of reward offered on each trial, in cents;;;none;;';
pt(294).paramname = 'Value';
pt(294).class     = 'scalar';
pt(294).nrows     = 1;
pt(294).ncols     = 1;
pt(294).subsource = 'SS_DOUBLE';
pt(294).ndims     = '2';
pt(294).size      = '[]';

pt(295).blockname = 'Parameter Table Defn/task_wide/K_ROBOT_MOVE_TIME;Robot Move Time;integer;Time the robot will move to the new position;;;none;;';
pt(295).paramname = 'Value';
pt(295).class     = 'scalar';
pt(295).nrows     = 1;
pt(295).ncols     = 1;
pt(295).subsource = 'SS_DOUBLE';
pt(295).ndims     = '2';
pt(295).size      = '[]';

pt(296).blockname = 'Parameter Table Defn/task_wide/K_ROBOT_RAMP_TIME;Robot Ramp Time;integer;Time the robot will ramp up and down;;;none;;';
pt(296).paramname = 'Value';
pt(296).class     = 'scalar';
pt(296).nrows     = 1;
pt(296).ncols     = 1;
pt(296).subsource = 'SS_DOUBLE';
pt(296).ndims     = '2';
pt(296).size      = '[]';

pt(297).blockname = 'Parameter Table Defn/task_wide/K_SCORETEXT_ROW;Score Text TgtTbl Row;integer;Row of the target table to use for score text display;;;none;;';
pt(297).paramname = 'Value';
pt(297).class     = 'scalar';
pt(297).nrows     = 1;
pt(297).ncols     = 1;
pt(297).subsource = 'SS_DOUBLE';
pt(297).ndims     = '2';
pt(297).size      = '[]';

pt(298).blockname = 'Parameter Table Defn/task_wide/K_SCORE_TIME;Display Score Hold Time ;integer;Time to display the cumulative score (e.g., at the end of the session);;;none;;';
pt(298).paramname = 'Value';
pt(298).class     = 'scalar';
pt(298).nrows     = 1;
pt(298).ncols     = 1;
pt(298).subsource = 'SS_DOUBLE';
pt(298).ndims     = '2';
pt(298).size      = '[]';

pt(299).blockname = 'Parameter Table Defn/task_wide/K_TONE_HIT_DURATION;Hit tone duration;integer;Duration of the feedback tone when the target is hit;;;none;;';
pt(299).paramname = 'Value';
pt(299).class     = 'scalar';
pt(299).nrows     = 1;
pt(299).ncols     = 1;
pt(299).subsource = 'SS_DOUBLE';
pt(299).ndims     = '2';
pt(299).size      = '[]';

pt(300).blockname = 'Parameter Table Defn/task_wide/K_TONE_HIT_FREQUENCY;Hit tone frequency;integer;Frequency of the feedback tone when the target is hit;;;none;;';
pt(300).paramname = 'Value';
pt(300).class     = 'scalar';
pt(300).nrows     = 1;
pt(300).ncols     = 1;
pt(300).subsource = 'SS_DOUBLE';
pt(300).ndims     = '2';
pt(300).size      = '[]';

pt(301).blockname = 'Parameter Table Defn/task_wide/K_TONE_NEUTRAL_DURATION;Neutral tone duration;integer;Duration of the neutral feedback tone indicating end of trial;;;none;;';
pt(301).paramname = 'Value';
pt(301).class     = 'scalar';
pt(301).nrows     = 1;
pt(301).ncols     = 1;
pt(301).subsource = 'SS_DOUBLE';
pt(301).ndims     = '2';
pt(301).size      = '[]';

pt(302).blockname = 'Parameter Table Defn/task_wide/K_TONE_NEUTRAL_FREQUENCY;Neutral tone frequency;integer;Frequency of the neutral feedback tone indicating end of trial;;;none;;';
pt(302).paramname = 'Value';
pt(302).class     = 'scalar';
pt(302).nrows     = 1;
pt(302).ncols     = 1;
pt(302).subsource = 'SS_DOUBLE';
pt(302).ndims     = '2';
pt(302).size      = '[]';

pt(303).blockname = 'Parameter Table Defn/task_wide/K_UNUSED;Unused;integer;Not currently used;;;none;;';
pt(303).paramname = 'Value';
pt(303).class     = 'scalar';
pt(303).nrows     = 1;
pt(303).ncols     = 1;
pt(303).subsource = 'SS_DOUBLE';
pt(303).ndims     = '2';
pt(303).size      = '[]';

pt(304).blockname = 'Parameter Table Defn/task_wide/K_VIS_RAD;Visible Radius;float;Radius from the start target that the hand will always be visible (m);;;none;;';
pt(304).paramname = 'Value';
pt(304).class     = 'scalar';
pt(304).nrows     = 1;
pt(304).ncols     = 1;
pt(304).subsource = 'SS_DOUBLE';
pt(304).ndims     = '2';
pt(304).size      = '[]';

pt(305).blockname = 'Play Sound/Subsystem2/Constant1';
pt(305).paramname = 'Value';
pt(305).class     = 'vector';
pt(305).nrows     = 1;
pt(305).ncols     = 3781;
pt(305).subsource = 'SS_DOUBLE';
pt(305).ndims     = '2';
pt(305).size      = '[]';

pt(306).blockname = 'Play Sound/Subsystem4/Constant1';
pt(306).paramname = 'Value';
pt(306).class     = 'vector';
pt(306).nrows     = 1;
pt(306).ncols     = 400;
pt(306).subsource = 'SS_DOUBLE';
pt(306).ndims     = '2';
pt(306).size      = '[]';

pt(307).blockname = 'Process_Video_CMD/Add_requested_Delay/500 hz';
pt(307).paramname = 'Value';
pt(307).class     = 'scalar';
pt(307).nrows     = 1;
pt(307).ncols     = 1;
pt(307).subsource = 'SS_DOUBLE';
pt(307).ndims     = '2';
pt(307).size      = '[]';

pt(308).blockname = 'Process_Video_CMD/PVC_core/Rate Transition1';
pt(308).paramname = 'X0';
pt(308).class     = 'scalar';
pt(308).nrows     = 1;
pt(308).ncols     = 1;
pt(308).subsource = 'SS_DOUBLE';
pt(308).ndims     = '2';
pt(308).size      = '[]';

pt(309).blockname = 'Subsystem/KINARM_Exo_Position_Controller/Rate Transition1';
pt(309).paramname = 'X0';
pt(309).class     = 'scalar';
pt(309).nrows     = 1;
pt(309).ncols     = 1;
pt(309).subsource = 'SS_DOUBLE';
pt(309).ndims     = '2';
pt(309).size      = '[]';

pt(310).blockname = 'Subsystem/KINARM_Exo_Position_Controller/Rate Transition2';
pt(310).paramname = 'X0';
pt(310).class     = 'scalar';
pt(310).nrows     = 1;
pt(310).ncols     = 1;
pt(310).subsource = 'SS_DOUBLE';
pt(310).ndims     = '2';
pt(310).size      = '[]';

pt(311).blockname = 'Subsystem/KINARM_Exo_Position_Controller/Rate Transition4';
pt(311).paramname = 'X0';
pt(311).class     = 'scalar';
pt(311).nrows     = 1;
pt(311).ncols     = 1;
pt(311).subsource = 'SS_DOUBLE';
pt(311).ndims     = '2';
pt(311).size      = '[]';

pt(312).blockname = 'Subsystem/Show_Target/padder';
pt(312).paramname = 'Value';
pt(312).class     = 'col-mat';
pt(312).nrows     = 5;
pt(312).ncols     = 7;
pt(312).subsource = 'SS_DOUBLE';
pt(312).ndims     = '2';
pt(312).size      = '[]';

pt(313).blockname = 'Subsystem/Show_Target/state2_indices';
pt(313).paramname = 'Value';
pt(313).class     = 'vector';
pt(313).nrows     = 1;
pt(313).ncols     = 4;
pt(313).subsource = 'SS_DOUBLE';
pt(313).ndims     = '2';
pt(313).size      = '[]';

pt(314).blockname = 'Subsystem/Show_Target/state3_indices';
pt(314).paramname = 'Value';
pt(314).class     = 'vector';
pt(314).nrows     = 1;
pt(314).ncols     = 4;
pt(314).subsource = 'SS_DOUBLE';
pt(314).ndims     = '2';
pt(314).size      = '[]';

pt(315).blockname = 'Subsystem/Show_Target/state4_indices';
pt(315).paramname = 'Value';
pt(315).class     = 'vector';
pt(315).nrows     = 1;
pt(315).ncols     = 4;
pt(315).subsource = 'SS_DOUBLE';
pt(315).ndims     = '2';
pt(315).size      = '[]';

pt(316).blockname = 'Subsystem/Show_Target/state5_indices';
pt(316).paramname = 'Value';
pt(316).class     = 'vector';
pt(316).nrows     = 1;
pt(316).ncols     = 4;
pt(316).subsource = 'SS_DOUBLE';
pt(316).ndims     = '2';
pt(316).size      = '[]';

pt(317).blockname = 'Subsystem/Show_Target/xpos_index';
pt(317).paramname = 'Value';
pt(317).class     = 'scalar';
pt(317).nrows     = 1;
pt(317).ncols     = 1;
pt(317).subsource = 'SS_DOUBLE';
pt(317).ndims     = '2';
pt(317).size      = '[]';

pt(318).blockname = 'Subsystem/Show_Target/ypos_index';
pt(318).paramname = 'Value';
pt(318).class     = 'scalar';
pt(318).nrows     = 1;
pt(318).ncols     = 1;
pt(318).subsource = 'SS_DOUBLE';
pt(318).ndims     = '2';
pt(318).size      = '[]';

pt(319).blockname = 'Visual_Rotation/Show_Target/padder';
pt(319).paramname = 'Value';
pt(319).class     = 'col-mat';
pt(319).nrows     = 5;
pt(319).ncols     = 7;
pt(319).subsource = 'SS_DOUBLE';
pt(319).ndims     = '2';
pt(319).size      = '[]';

pt(320).blockname = 'Visual_Rotation/Show_Target/state2_indices';
pt(320).paramname = 'Value';
pt(320).class     = 'vector';
pt(320).nrows     = 1;
pt(320).ncols     = 4;
pt(320).subsource = 'SS_DOUBLE';
pt(320).ndims     = '2';
pt(320).size      = '[]';

pt(321).blockname = 'Visual_Rotation/Show_Target/state3_indices';
pt(321).paramname = 'Value';
pt(321).class     = 'vector';
pt(321).nrows     = 1;
pt(321).ncols     = 4;
pt(321).subsource = 'SS_DOUBLE';
pt(321).ndims     = '2';
pt(321).size      = '[]';

pt(322).blockname = 'Visual_Rotation/Show_Target/state4_indices';
pt(322).paramname = 'Value';
pt(322).class     = 'vector';
pt(322).nrows     = 1;
pt(322).ncols     = 4;
pt(322).subsource = 'SS_DOUBLE';
pt(322).ndims     = '2';
pt(322).size      = '[]';

pt(323).blockname = 'Visual_Rotation/Show_Target/state5_indices';
pt(323).paramname = 'Value';
pt(323).class     = 'vector';
pt(323).nrows     = 1;
pt(323).ncols     = 4;
pt(323).subsource = 'SS_DOUBLE';
pt(323).ndims     = '2';
pt(323).size      = '[]';

pt(324).blockname = 'Visual_Rotation/Show_Target/xpos_index';
pt(324).paramname = 'Value';
pt(324).class     = 'scalar';
pt(324).nrows     = 1;
pt(324).ncols     = 1;
pt(324).subsource = 'SS_DOUBLE';
pt(324).ndims     = '2';
pt(324).size      = '[]';

pt(325).blockname = 'Visual_Rotation/Show_Target/ypos_index';
pt(325).paramname = 'Value';
pt(325).class     = 'scalar';
pt(325).nrows     = 1;
pt(325).ncols     = 1;
pt(325).subsource = 'SS_DOUBLE';
pt(325).ndims     = '2';
pt(325).size      = '[]';

pt(326).blockname = 'Visual_Rotation/Show_Target1/padder';
pt(326).paramname = 'Value';
pt(326).class     = 'col-mat';
pt(326).nrows     = 5;
pt(326).ncols     = 7;
pt(326).subsource = 'SS_DOUBLE';
pt(326).ndims     = '2';
pt(326).size      = '[]';

pt(327).blockname = 'Visual_Rotation/Show_Target1/state2_indices';
pt(327).paramname = 'Value';
pt(327).class     = 'vector';
pt(327).nrows     = 1;
pt(327).ncols     = 4;
pt(327).subsource = 'SS_DOUBLE';
pt(327).ndims     = '2';
pt(327).size      = '[]';

pt(328).blockname = 'Visual_Rotation/Show_Target1/state3_indices';
pt(328).paramname = 'Value';
pt(328).class     = 'vector';
pt(328).nrows     = 1;
pt(328).ncols     = 4;
pt(328).subsource = 'SS_DOUBLE';
pt(328).ndims     = '2';
pt(328).size      = '[]';

pt(329).blockname = 'Visual_Rotation/Show_Target1/state4_indices';
pt(329).paramname = 'Value';
pt(329).class     = 'vector';
pt(329).nrows     = 1;
pt(329).ncols     = 4;
pt(329).subsource = 'SS_DOUBLE';
pt(329).ndims     = '2';
pt(329).size      = '[]';

pt(330).blockname = 'Visual_Rotation/Show_Target1/state5_indices';
pt(330).paramname = 'Value';
pt(330).class     = 'vector';
pt(330).nrows     = 1;
pt(330).ncols     = 4;
pt(330).subsource = 'SS_DOUBLE';
pt(330).ndims     = '2';
pt(330).size      = '[]';

pt(331).blockname = 'Visual_Rotation/Show_Target1/xpos_index';
pt(331).paramname = 'Value';
pt(331).class     = 'scalar';
pt(331).nrows     = 1;
pt(331).ncols     = 1;
pt(331).subsource = 'SS_DOUBLE';
pt(331).ndims     = '2';
pt(331).size      = '[]';

pt(332).blockname = 'Visual_Rotation/Show_Target1/ypos_index';
pt(332).paramname = 'Value';
pt(332).class     = 'scalar';
pt(332).nrows     = 1;
pt(332).ncols     = 1;
pt(332).subsource = 'SS_DOUBLE';
pt(332).ndims     = '2';
pt(332).size      = '[]';

pt(333).blockname = 'Visual_Rotation/Show_Target2/padder';
pt(333).paramname = 'Value';
pt(333).class     = 'col-mat';
pt(333).nrows     = 5;
pt(333).ncols     = 7;
pt(333).subsource = 'SS_DOUBLE';
pt(333).ndims     = '2';
pt(333).size      = '[]';

pt(334).blockname = 'Visual_Rotation/Show_Target2/state2_indices';
pt(334).paramname = 'Value';
pt(334).class     = 'vector';
pt(334).nrows     = 1;
pt(334).ncols     = 4;
pt(334).subsource = 'SS_DOUBLE';
pt(334).ndims     = '2';
pt(334).size      = '[]';

pt(335).blockname = 'Visual_Rotation/Show_Target2/state3_indices';
pt(335).paramname = 'Value';
pt(335).class     = 'vector';
pt(335).nrows     = 1;
pt(335).ncols     = 4;
pt(335).subsource = 'SS_DOUBLE';
pt(335).ndims     = '2';
pt(335).size      = '[]';

pt(336).blockname = 'Visual_Rotation/Show_Target2/state4_indices';
pt(336).paramname = 'Value';
pt(336).class     = 'vector';
pt(336).nrows     = 1;
pt(336).ncols     = 4;
pt(336).subsource = 'SS_DOUBLE';
pt(336).ndims     = '2';
pt(336).size      = '[]';

pt(337).blockname = 'Visual_Rotation/Show_Target2/state5_indices';
pt(337).paramname = 'Value';
pt(337).class     = 'vector';
pt(337).nrows     = 1;
pt(337).ncols     = 4;
pt(337).subsource = 'SS_DOUBLE';
pt(337).ndims     = '2';
pt(337).size      = '[]';

pt(338).blockname = 'Visual_Rotation/Show_Target2/xpos_index';
pt(338).paramname = 'Value';
pt(338).class     = 'scalar';
pt(338).nrows     = 1;
pt(338).ncols     = 1;
pt(338).subsource = 'SS_DOUBLE';
pt(338).ndims     = '2';
pt(338).size      = '[]';

pt(339).blockname = 'Visual_Rotation/Show_Target2/ypos_index';
pt(339).paramname = 'Value';
pt(339).class     = 'scalar';
pt(339).nrows     = 1;
pt(339).ncols     = 1;
pt(339).subsource = 'SS_DOUBLE';
pt(339).ndims     = '2';
pt(339).size      = '[]';

pt(340).blockname = 'DataLogging/Create Task State Subsystem/Counter Free-Running/Wrap To Zero';
pt(340).paramname = 'Threshold';
pt(340).class     = 'scalar';
pt(340).nrows     = 1;
pt(340).ncols     = 1;
pt(340).subsource = 'SS_UINT32';
pt(340).ndims     = '2';
pt(340).size      = '[]';

pt(341).blockname = 'DataLogging/Create Task State Subsystem/Counter Free-Running/Output';
pt(341).paramname = 'InitialCondition';
pt(341).class     = 'scalar';
pt(341).nrows     = 1;
pt(341).ncols     = 1;
pt(341).subsource = 'SS_UINT32';
pt(341).ndims     = '2';
pt(341).size      = '[]';

pt(342).blockname = 'DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Constant';
pt(342).paramname = 'Value';
pt(342).class     = 'vector';
pt(342).nrows     = 1;
pt(342).ncols     = 400;
pt(342).subsource = 'SS_SINGLE';
pt(342).ndims     = '2';
pt(342).size      = '[]';

pt(343).blockname = 'DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Constant1';
pt(343).paramname = 'Value';
pt(343).class     = 'scalar';
pt(343).nrows     = 1;
pt(343).ncols     = 1;
pt(343).subsource = 'SS_DOUBLE';
pt(343).ndims     = '2';
pt(343).size      = '[]';

pt(344).blockname = 'DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Max Frames Per Packet';
pt(344).paramname = 'Value';
pt(344).class     = 'scalar';
pt(344).nrows     = 1;
pt(344).ncols     = 1;
pt(344).subsource = 'SS_DOUBLE';
pt(344).ndims     = '2';
pt(344).size      = '[]';

pt(345).blockname = 'DataLogging/Network Transfer Subsystem/Data Packing Subsystem/t-1';
pt(345).paramname = 'X0';
pt(345).class     = 'scalar';
pt(345).nrows     = 1;
pt(345).ncols     = 1;
pt(345).subsource = 'SS_SINGLE';
pt(345).ndims     = '2';
pt(345).size      = '[]';

pt(346).blockname = 'DataLogging/Network Transfer Subsystem/Data Packing Subsystem/t-2';
pt(346).paramname = 'X0';
pt(346).class     = 'scalar';
pt(346).nrows     = 1;
pt(346).ncols     = 1;
pt(346).subsource = 'SS_SINGLE';
pt(346).ndims     = '2';
pt(346).size      = '[]';

pt(347).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/Memory2';
pt(347).paramname = 'X0';
pt(347).class     = 'scalar';
pt(347).nrows     = 1;
pt(347).ncols     = 1;
pt(347).subsource = 'SS_DOUBLE';
pt(347).ndims     = '2';
pt(347).size      = '[]';

pt(348).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/Rate Transition2';
pt(348).paramname = 'X0';
pt(348).class     = 'scalar';
pt(348).nrows     = 1;
pt(348).ncols     = 1;
pt(348).subsource = 'SS_DOUBLE';
pt(348).ndims     = '2';
pt(348).size      = '[]';

pt(349).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive';
pt(349).paramname = 'P1';
pt(349).class     = 'vector';
pt(349).nrows     = 1;
pt(349).ncols     = 15;
pt(349).subsource = 'SS_DOUBLE';
pt(349).ndims     = '2';
pt(349).size      = '[]';

pt(350).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive';
pt(350).paramname = 'P2';
pt(350).class     = 'scalar';
pt(350).nrows     = 1;
pt(350).ncols     = 1;
pt(350).subsource = 'SS_DOUBLE';
pt(350).ndims     = '2';
pt(350).size      = '[]';

pt(351).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive';
pt(351).paramname = 'P3';
pt(351).class     = 'scalar';
pt(351).nrows     = 1;
pt(351).ncols     = 1;
pt(351).subsource = 'SS_DOUBLE';
pt(351).ndims     = '2';
pt(351).size      = '[]';

pt(352).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive';
pt(352).paramname = 'P4';
pt(352).class     = 'scalar';
pt(352).nrows     = 1;
pt(352).ncols     = 1;
pt(352).subsource = 'SS_DOUBLE';
pt(352).ndims     = '2';
pt(352).size      = '[]';

pt(353).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive';
pt(353).paramname = 'P5';
pt(353).class     = 'scalar';
pt(353).nrows     = 1;
pt(353).ncols     = 1;
pt(353).subsource = 'SS_DOUBLE';
pt(353).ndims     = '2';
pt(353).size      = '[]';

pt(354).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset';
pt(354).paramname = 'P1';
pt(354).class     = 'vector';
pt(354).nrows     = 1;
pt(354).ncols     = 11;
pt(354).subsource = 'SS_DOUBLE';
pt(354).ndims     = '2';
pt(354).size      = '[]';

pt(355).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset';
pt(355).paramname = 'P2';
pt(355).class     = 'scalar';
pt(355).nrows     = 1;
pt(355).ncols     = 1;
pt(355).subsource = 'SS_DOUBLE';
pt(355).ndims     = '2';
pt(355).size      = '[]';

pt(356).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset';
pt(356).paramname = 'P3';
pt(356).class     = 'scalar';
pt(356).nrows     = 1;
pt(356).ncols     = 1;
pt(356).subsource = 'SS_DOUBLE';
pt(356).ndims     = '2';
pt(356).size      = '[]';

pt(357).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset';
pt(357).paramname = 'P4';
pt(357).class     = 'scalar';
pt(357).nrows     = 1;
pt(357).ncols     = 1;
pt(357).subsource = 'SS_DOUBLE';
pt(357).ndims     = '2';
pt(357).size      = '[]';

pt(358).blockname = 'DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset';
pt(358).paramname = 'P5';
pt(358).class     = 'scalar';
pt(358).nrows     = 1;
pt(358).ncols     = 1;
pt(358).subsource = 'SS_DOUBLE';
pt(358).ndims     = '2';
pt(358).size      = '[]';

pt(359).blockname = 'DataLogging/Network Transfer Subsystem/UDP Send Subsystem/total_packets_sent';
pt(359).paramname = 'InitialOutput';
pt(359).class     = 'scalar';
pt(359).nrows     = 1;
pt(359).ncols     = 1;
pt(359).subsource = 'SS_UINT32';
pt(359).ndims     = '2';
pt(359).size      = '[]';

pt(360).blockname = 'DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Send';
pt(360).paramname = 'P1';
pt(360).class     = 'vector';
pt(360).nrows     = 1;
pt(360).ncols     = 11;
pt(360).subsource = 'SS_DOUBLE';
pt(360).ndims     = '2';
pt(360).size      = '[]';

pt(361).blockname = 'DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Send';
pt(361).paramname = 'P2';
pt(361).class     = 'scalar';
pt(361).nrows     = 1;
pt(361).ncols     = 1;
pt(361).subsource = 'SS_DOUBLE';
pt(361).ndims     = '2';
pt(361).size      = '[]';

pt(362).blockname = 'DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Send';
pt(362).paramname = 'P3';
pt(362).class     = 'scalar';
pt(362).nrows     = 1;
pt(362).ncols     = 1;
pt(362).subsource = 'SS_DOUBLE';
pt(362).ndims     = '2';
pt(362).size      = '[]';

pt(363).blockname = 'DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Send';
pt(363).paramname = 'P4';
pt(363).class     = 'scalar';
pt(363).nrows     = 1;
pt(363).ncols     = 1;
pt(363).subsource = 'SS_DOUBLE';
pt(363).ndims     = '2';
pt(363).size      = '[]';

pt(364).blockname = 'DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Send';
pt(364).paramname = 'P5';
pt(364).class     = 'scalar';
pt(364).nrows     = 1;
pt(364).ncols     = 1;
pt(364).subsource = 'SS_DOUBLE';
pt(364).ndims     = '2';
pt(364).size      = '[]';

pt(365).blockname = 'DataLogging/Poll Force Plates/plate1/Receive';
pt(365).paramname = 'P1';
pt(365).class     = 'vector';
pt(365).nrows     = 1;
pt(365).ncols     = 13;
pt(365).subsource = 'SS_DOUBLE';
pt(365).ndims     = '2';
pt(365).size      = '[]';

pt(366).blockname = 'DataLogging/Poll Force Plates/plate1/Receive';
pt(366).paramname = 'P2';
pt(366).class     = 'scalar';
pt(366).nrows     = 1;
pt(366).ncols     = 1;
pt(366).subsource = 'SS_DOUBLE';
pt(366).ndims     = '2';
pt(366).size      = '[]';

pt(367).blockname = 'DataLogging/Poll Force Plates/plate1/Receive';
pt(367).paramname = 'P3';
pt(367).class     = 'scalar';
pt(367).nrows     = 1;
pt(367).ncols     = 1;
pt(367).subsource = 'SS_DOUBLE';
pt(367).ndims     = '2';
pt(367).size      = '[]';

pt(368).blockname = 'DataLogging/Poll Force Plates/plate1/Receive';
pt(368).paramname = 'P4';
pt(368).class     = 'scalar';
pt(368).nrows     = 1;
pt(368).ncols     = 1;
pt(368).subsource = 'SS_DOUBLE';
pt(368).ndims     = '2';
pt(368).size      = '[]';

pt(369).blockname = 'DataLogging/Poll Force Plates/plate1/Receive';
pt(369).paramname = 'P5';
pt(369).class     = 'scalar';
pt(369).nrows     = 1;
pt(369).ncols     = 1;
pt(369).subsource = 'SS_DOUBLE';
pt(369).ndims     = '2';
pt(369).size      = '[]';

pt(370).blockname = 'DataLogging/Poll Force Plates/plate2/Receive1';
pt(370).paramname = 'P1';
pt(370).class     = 'vector';
pt(370).nrows     = 1;
pt(370).ncols     = 13;
pt(370).subsource = 'SS_DOUBLE';
pt(370).ndims     = '2';
pt(370).size      = '[]';

pt(371).blockname = 'DataLogging/Poll Force Plates/plate2/Receive1';
pt(371).paramname = 'P2';
pt(371).class     = 'scalar';
pt(371).nrows     = 1;
pt(371).ncols     = 1;
pt(371).subsource = 'SS_DOUBLE';
pt(371).ndims     = '2';
pt(371).size      = '[]';

pt(372).blockname = 'DataLogging/Poll Force Plates/plate2/Receive1';
pt(372).paramname = 'P3';
pt(372).class     = 'scalar';
pt(372).nrows     = 1;
pt(372).ncols     = 1;
pt(372).subsource = 'SS_DOUBLE';
pt(372).ndims     = '2';
pt(372).size      = '[]';

pt(373).blockname = 'DataLogging/Poll Force Plates/plate2/Receive1';
pt(373).paramname = 'P4';
pt(373).class     = 'scalar';
pt(373).nrows     = 1;
pt(373).ncols     = 1;
pt(373).subsource = 'SS_DOUBLE';
pt(373).ndims     = '2';
pt(373).size      = '[]';

pt(374).blockname = 'DataLogging/Poll Force Plates/plate2/Receive1';
pt(374).paramname = 'P5';
pt(374).class     = 'scalar';
pt(374).nrows     = 1;
pt(374).ncols     = 1;
pt(374).subsource = 'SS_DOUBLE';
pt(374).ndims     = '2';
pt(374).size      = '[]';

pt(375).blockname = 'DataLogging/Poll Force Plates/send poll 1/Send';
pt(375).paramname = 'P1';
pt(375).class     = 'vector';
pt(375).nrows     = 1;
pt(375).ncols     = 13;
pt(375).subsource = 'SS_DOUBLE';
pt(375).ndims     = '2';
pt(375).size      = '[]';

pt(376).blockname = 'DataLogging/Poll Force Plates/send poll 1/Send';
pt(376).paramname = 'P2';
pt(376).class     = 'scalar';
pt(376).nrows     = 1;
pt(376).ncols     = 1;
pt(376).subsource = 'SS_DOUBLE';
pt(376).ndims     = '2';
pt(376).size      = '[]';

pt(377).blockname = 'DataLogging/Poll Force Plates/send poll 1/Send';
pt(377).paramname = 'P3';
pt(377).class     = 'scalar';
pt(377).nrows     = 1;
pt(377).ncols     = 1;
pt(377).subsource = 'SS_DOUBLE';
pt(377).ndims     = '2';
pt(377).size      = '[]';

pt(378).blockname = 'DataLogging/Poll Force Plates/send poll 1/Send';
pt(378).paramname = 'P4';
pt(378).class     = 'scalar';
pt(378).nrows     = 1;
pt(378).ncols     = 1;
pt(378).subsource = 'SS_DOUBLE';
pt(378).ndims     = '2';
pt(378).size      = '[]';

pt(379).blockname = 'DataLogging/Poll Force Plates/send poll 1/Send';
pt(379).paramname = 'P5';
pt(379).class     = 'scalar';
pt(379).nrows     = 1;
pt(379).ncols     = 1;
pt(379).subsource = 'SS_DOUBLE';
pt(379).ndims     = '2';
pt(379).size      = '[]';

pt(380).blockname = 'DataLogging/Poll Force Plates/send poll 2/Send1';
pt(380).paramname = 'P1';
pt(380).class     = 'vector';
pt(380).nrows     = 1;
pt(380).ncols     = 13;
pt(380).subsource = 'SS_DOUBLE';
pt(380).ndims     = '2';
pt(380).size      = '[]';

pt(381).blockname = 'DataLogging/Poll Force Plates/send poll 2/Send1';
pt(381).paramname = 'P2';
pt(381).class     = 'scalar';
pt(381).nrows     = 1;
pt(381).ncols     = 1;
pt(381).subsource = 'SS_DOUBLE';
pt(381).ndims     = '2';
pt(381).size      = '[]';

pt(382).blockname = 'DataLogging/Poll Force Plates/send poll 2/Send1';
pt(382).paramname = 'P3';
pt(382).class     = 'scalar';
pt(382).nrows     = 1;
pt(382).ncols     = 1;
pt(382).subsource = 'SS_DOUBLE';
pt(382).ndims     = '2';
pt(382).size      = '[]';

pt(383).blockname = 'DataLogging/Poll Force Plates/send poll 2/Send1';
pt(383).paramname = 'P4';
pt(383).class     = 'scalar';
pt(383).nrows     = 1;
pt(383).ncols     = 1;
pt(383).subsource = 'SS_DOUBLE';
pt(383).ndims     = '2';
pt(383).size      = '[]';

pt(384).blockname = 'DataLogging/Poll Force Plates/send poll 2/Send1';
pt(384).paramname = 'P5';
pt(384).class     = 'scalar';
pt(384).nrows     = 1;
pt(384).ncols     = 1;
pt(384).subsource = 'SS_DOUBLE';
pt(384).ndims     = '2';
pt(384).size      = '[]';

pt(385).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Compare';
pt(385).paramname = 'const';
pt(385).class     = 'scalar';
pt(385).nrows     = 1;
pt(385).ncols     = 1;
pt(385).subsource = 'SS_UINT32';
pt(385).ndims     = '2';
pt(385).size      = '[]';

pt(386).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/PCI Bus Slot';
pt(386).paramname = 'Value';
pt(386).class     = 'vector';
pt(386).nrows     = 1;
pt(386).ncols     = 2;
pt(386).subsource = 'SS_INT32';
pt(386).ndims     = '2';
pt(386).size      = '[]';

pt(387).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/activation';
pt(387).paramname = 'Value';
pt(387).class     = 'vector';
pt(387).nrows     = 1;
pt(387).ncols     = 2;
pt(387).subsource = 'SS_INT32';
pt(387).ndims     = '2';
pt(387).size      = '[]';

pt(388).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/ep part nums';
pt(388).paramname = 'Value';
pt(388).class     = 'vector';
pt(388).nrows     = 1;
pt(388).ncols     = 6;
pt(388).subsource = 'SS_DOUBLE';
pt(388).ndims     = '2';
pt(388).size      = '[]';

pt(389).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/exo part nums';
pt(389).paramname = 'Value';
pt(389).class     = 'vector';
pt(389).nrows     = 1;
pt(389).ncols     = 6;
pt(389).subsource = 'SS_DOUBLE';
pt(389).ndims     = '2';
pt(389).size      = '[]';

pt(390).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/force primary only';
pt(390).paramname = 'Value';
pt(390).class     = 'scalar';
pt(390).nrows     = 1;
pt(390).ncols     = 1;
pt(390).subsource = 'SS_DOUBLE';
pt(390).ndims     = '2';
pt(390).size      = '[]';

pt(391).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/max errors to fault';
pt(391).paramname = 'Value';
pt(391).class     = 'scalar';
pt(391).nrows     = 1;
pt(391).ncols     = 1;
pt(391).subsource = 'SS_DOUBLE';
pt(391).ndims     = '2';
pt(391).size      = '[]';

pt(392).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/nhp part nums';
pt(392).paramname = 'Value';
pt(392).class     = 'vector';
pt(392).nrows     = 1;
pt(392).ncols     = 6;
pt(392).subsource = 'SS_DOUBLE';
pt(392).ndims     = '2';
pt(392).size      = '[]';

pt(393).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Switch';
pt(393).paramname = 'Threshold';
pt(393).class     = 'scalar';
pt(393).nrows     = 1;
pt(393).ncols     = 1;
pt(393).subsource = 'SS_INT32';
pt(393).ndims     = '2';
pt(393).size      = '[]';

pt(394).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/ispmac1';
pt(394).paramname = 'const';
pt(394).class     = 'scalar';
pt(394).nrows     = 1;
pt(394).ncols     = 1;
pt(394).subsource = 'SS_DOUBLE';
pt(394).ndims     = '2';
pt(394).size      = '[]';

pt(395).blockname = 'DataLogging/Poll KINARM/constants/update constants';
pt(395).paramname = 'Value';
pt(395).class     = 'scalar';
pt(395).nrows     = 1;
pt(395).ncols     = 1;
pt(395).subsource = 'SS_DOUBLE';
pt(395).ndims     = '2';
pt(395).size      = '[]';

pt(396).blockname = 'DataLogging/Poll KINARM/createKINData/Dominant Arm';
pt(396).paramname = 'Value';
pt(396).class     = 'scalar';
pt(396).nrows     = 1;
pt(396).ncols     = 1;
pt(396).subsource = 'SS_DOUBLE';
pt(396).ndims     = '2';
pt(396).size      = '[]';

pt(397).blockname = 'DataLogging/Poll KINARM/createKINData/step time';
pt(397).paramname = 'Value';
pt(397).class     = 'scalar';
pt(397).nrows     = 1;
pt(397).ncols     = 1;
pt(397).subsource = 'SS_DOUBLE';
pt(397).ndims     = '2';
pt(397).size      = '[]';

pt(398).blockname = 'Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Detect Increase';
pt(398).paramname = 'vinit';
pt(398).class     = 'scalar';
pt(398).nrows     = 1;
pt(398).ncols     = 1;
pt(398).subsource = 'SS_BOOLEAN';
pt(398).ndims     = '2';
pt(398).size      = '[]';

pt(399).blockname = 'Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative';
pt(399).paramname = 'ICPrevScaledInput';
pt(399).class     = 'scalar';
pt(399).nrows     = 1;
pt(399).ncols     = 1;
pt(399).subsource = 'SS_DOUBLE';
pt(399).ndims     = '2';
pt(399).size      = '[]';

pt(400).blockname = 'Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative1';
pt(400).paramname = 'ICPrevScaledInput';
pt(400).class     = 'scalar';
pt(400).nrows     = 1;
pt(400).ncols     = 1;
pt(400).subsource = 'SS_DOUBLE';
pt(400).ndims     = '2';
pt(400).size      = '[]';

pt(401).blockname = 'Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Constant';
pt(401).paramname = 'Value';
pt(401).class     = 'vector';
pt(401).nrows     = 1;
pt(401).ncols     = 2;
pt(401).subsource = 'SS_DOUBLE';
pt(401).ndims     = '2';
pt(401).size      = '[]';

pt(402).blockname = 'Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Switch';
pt(402).paramname = 'Threshold';
pt(402).class     = 'scalar';
pt(402).nrows     = 1;
pt(402).ncols     = 1;
pt(402).subsource = 'SS_DOUBLE';
pt(402).ndims     = '2';
pt(402).size      = '[]';

pt(403).blockname = 'Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Switch1';
pt(403).paramname = 'Threshold';
pt(403).class     = 'scalar';
pt(403).nrows     = 1;
pt(403).ncols     = 1;
pt(403).subsource = 'SS_UINT8';
pt(403).ndims     = '2';
pt(403).size      = '[]';

pt(404).blockname = 'Subsystem/KINARM_Exo_Position_Controller/KINARM filter/Constant';
pt(404).paramname = 'Value';
pt(404).class     = 'scalar';
pt(404).nrows     = 1;
pt(404).ncols     = 1;
pt(404).subsource = 'SS_DOUBLE';
pt(404).ndims     = '2';
pt(404).size      = '[]';

pt(405).blockname = 'DataLogging/Create Task State Subsystem/Counter Free-Running/Increment Real World/FixPt Constant';
pt(405).paramname = 'Value';
pt(405).class     = 'scalar';
pt(405).nrows     = 1;
pt(405).ncols     = 1;
pt(405).subsource = 'SS_UINT32';
pt(405).ndims     = '2';
pt(405).size      = '[]';

pt(406).blockname = 'DataLogging/Create Task State Subsystem/Counter Free-Running/Wrap To Zero/Constant';
pt(406).paramname = 'Value';
pt(406).class     = 'scalar';
pt(406).nrows     = 1;
pt(406).ncols     = 1;
pt(406).subsource = 'SS_UINT32';
pt(406).ndims     = '2';
pt(406).size      = '[]';

pt(407).blockname = 'DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Counter/Constant';
pt(407).paramname = 'Value';
pt(407).class     = 'scalar';
pt(407).nrows     = 1;
pt(407).ncols     = 1;
pt(407).subsource = 'SS_DOUBLE';
pt(407).ndims     = '2';
pt(407).size      = '[]';

pt(408).blockname = 'DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Counter/Unit Delay';
pt(408).paramname = 'InitialCondition';
pt(408).class     = 'scalar';
pt(408).nrows     = 1;
pt(408).ncols     = 1;
pt(408).subsource = 'SS_DOUBLE';
pt(408).ndims     = '2';
pt(408).size      = '[]';

pt(409).blockname = 'DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Wrap To Zero';
pt(409).paramname = 'Threshold';
pt(409).class     = 'scalar';
pt(409).nrows     = 1;
pt(409).ncols     = 1;
pt(409).subsource = 'SS_UINT32';
pt(409).ndims     = '2';
pt(409).size      = '[]';

pt(410).blockname = 'DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Output';
pt(410).paramname = 'InitialCondition';
pt(410).class     = 'scalar';
pt(410).nrows     = 1;
pt(410).ncols     = 1;
pt(410).subsource = 'SS_UINT32';
pt(410).ndims     = '2';
pt(410).size      = '[]';

pt(411).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Torque Mode';
pt(411).paramname = 'Value';
pt(411).class     = 'scalar';
pt(411).nrows     = 1;
pt(411).ncols     = 1;
pt(411).subsource = 'SS_INT8';
pt(411).ndims     = '2';
pt(411).size      = '[]';

pt(412).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/enableCalibration';
pt(412).paramname = 'Value';
pt(412).class     = 'scalar';
pt(412).nrows     = 1;
pt(412).ncols     = 1;
pt(412).subsource = 'SS_DOUBLE';
pt(412).ndims     = '2';
pt(412).size      = '[]';

pt(413).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/enableMotors';
pt(413).paramname = 'Value';
pt(413).class     = 'scalar';
pt(413).nrows     = 1;
pt(413).ncols     = 1;
pt(413).subsource = 'SS_DOUBLE';
pt(413).ndims     = '2';
pt(413).size      = '[]';

pt(414).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/readTrigger';
pt(414).paramname = 'Value';
pt(414).class     = 'scalar';
pt(414).nrows     = 1;
pt(414).ncols     = 1;
pt(414).subsource = 'SS_INT32';
pt(414).ndims     = '2';
pt(414).size      = '[]';

pt(415).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Memory2';
pt(415).paramname = 'X0';
pt(415).class     = 'scalar';
pt(415).nrows     = 1;
pt(415).ncols     = 1;
pt(415).subsource = 'SS_DOUBLE';
pt(415).ndims     = '2';
pt(415).size      = '[]';

pt(416).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Memory3';
pt(416).paramname = 'X0';
pt(416).class     = 'scalar';
pt(416).nrows     = 1;
pt(416).ncols     = 1;
pt(416).subsource = 'SS_DOUBLE';
pt(416).ndims     = '2';
pt(416).size      = '[]';

pt(417).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ';
pt(417).paramname = 'P1';
pt(417).class     = 'vector';
pt(417).nrows     = 1;
pt(417).ncols     = 48;
pt(417).subsource = 'SS_DOUBLE';
pt(417).ndims     = '2';
pt(417).size      = '[]';

pt(418).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ';
pt(418).paramname = 'P2';
pt(418).class     = 'scalar';
pt(418).nrows     = 1;
pt(418).ncols     = 1;
pt(418).subsource = 'SS_DOUBLE';
pt(418).ndims     = '2';
pt(418).size      = '[]';

pt(419).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ';
pt(419).paramname = 'P3';
pt(419).class     = 'scalar';
pt(419).nrows     = 1;
pt(419).ncols     = 1;
pt(419).subsource = 'SS_DOUBLE';
pt(419).ndims     = '2';
pt(419).size      = '[]';

pt(420).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ';
pt(420).paramname = 'P4';
pt(420).class     = 'scalar';
pt(420).nrows     = 1;
pt(420).ncols     = 1;
pt(420).subsource = 'SS_DOUBLE';
pt(420).ndims     = '2';
pt(420).size      = '[]';

pt(421).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ';
pt(421).paramname = 'P5';
pt(421).class     = 'scalar';
pt(421).nrows     = 1;
pt(421).ncols     = 1;
pt(421).subsource = 'SS_DOUBLE';
pt(421).ndims     = '2';
pt(421).size      = '[]';

pt(422).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ';
pt(422).paramname = 'P6';
pt(422).class     = 'scalar';
pt(422).nrows     = 1;
pt(422).ncols     = 1;
pt(422).subsource = 'SS_DOUBLE';
pt(422).ndims     = '2';
pt(422).size      = '[]';

pt(423).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ';
pt(423).paramname = 'P7';
pt(423).class     = 'scalar';
pt(423).nrows     = 1;
pt(423).ncols     = 1;
pt(423).subsource = 'SS_DOUBLE';
pt(423).ndims     = '2';
pt(423).size      = '[]';

pt(424).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1';
pt(424).paramname = 'P1';
pt(424).class     = 'vector';
pt(424).nrows     = 1;
pt(424).ncols     = 48;
pt(424).subsource = 'SS_DOUBLE';
pt(424).ndims     = '2';
pt(424).size      = '[]';

pt(425).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1';
pt(425).paramname = 'P2';
pt(425).class     = 'scalar';
pt(425).nrows     = 1;
pt(425).ncols     = 1;
pt(425).subsource = 'SS_DOUBLE';
pt(425).ndims     = '2';
pt(425).size      = '[]';

pt(426).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1';
pt(426).paramname = 'P3';
pt(426).class     = 'scalar';
pt(426).nrows     = 1;
pt(426).ncols     = 1;
pt(426).subsource = 'SS_DOUBLE';
pt(426).ndims     = '2';
pt(426).size      = '[]';

pt(427).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1';
pt(427).paramname = 'P4';
pt(427).class     = 'scalar';
pt(427).nrows     = 1;
pt(427).ncols     = 1;
pt(427).subsource = 'SS_DOUBLE';
pt(427).ndims     = '2';
pt(427).size      = '[]';

pt(428).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1';
pt(428).paramname = 'P5';
pt(428).class     = 'scalar';
pt(428).nrows     = 1;
pt(428).ncols     = 1;
pt(428).subsource = 'SS_DOUBLE';
pt(428).ndims     = '2';
pt(428).size      = '[]';

pt(429).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1';
pt(429).paramname = 'P6';
pt(429).class     = 'scalar';
pt(429).nrows     = 1;
pt(429).ncols     = 1;
pt(429).subsource = 'SS_DOUBLE';
pt(429).ndims     = '2';
pt(429).size      = '[]';

pt(430).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1';
pt(430).paramname = 'P7';
pt(430).class     = 'scalar';
pt(430).nrows     = 1;
pt(430).ncols     = 1;
pt(430).subsource = 'SS_DOUBLE';
pt(430).ndims     = '2';
pt(430).size      = '[]';

pt(431).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Torque Mode';
pt(431).paramname = 'Value';
pt(431).class     = 'scalar';
pt(431).nrows     = 1;
pt(431).ncols     = 1;
pt(431).subsource = 'SS_INT8';
pt(431).ndims     = '2';
pt(431).size      = '[]';

pt(432).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/enableCalibration';
pt(432).paramname = 'Value';
pt(432).class     = 'scalar';
pt(432).nrows     = 1;
pt(432).ncols     = 1;
pt(432).subsource = 'SS_DOUBLE';
pt(432).ndims     = '2';
pt(432).size      = '[]';

pt(433).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/enableMotors';
pt(433).paramname = 'Value';
pt(433).class     = 'scalar';
pt(433).nrows     = 1;
pt(433).ncols     = 1;
pt(433).subsource = 'SS_DOUBLE';
pt(433).ndims     = '2';
pt(433).size      = '[]';

pt(434).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/readTrigger';
pt(434).paramname = 'Value';
pt(434).class     = 'scalar';
pt(434).nrows     = 1;
pt(434).ncols     = 1;
pt(434).subsource = 'SS_INT32';
pt(434).ndims     = '2';
pt(434).size      = '[]';

pt(435).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Memory2';
pt(435).paramname = 'X0';
pt(435).class     = 'scalar';
pt(435).nrows     = 1;
pt(435).ncols     = 1;
pt(435).subsource = 'SS_DOUBLE';
pt(435).ndims     = '2';
pt(435).size      = '[]';

pt(436).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Memory3';
pt(436).paramname = 'X0';
pt(436).class     = 'scalar';
pt(436).nrows     = 1;
pt(436).ncols     = 1;
pt(436).subsource = 'SS_DOUBLE';
pt(436).ndims     = '2';
pt(436).size      = '[]';

pt(437).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ';
pt(437).paramname = 'P1';
pt(437).class     = 'vector';
pt(437).nrows     = 1;
pt(437).ncols     = 48;
pt(437).subsource = 'SS_DOUBLE';
pt(437).ndims     = '2';
pt(437).size      = '[]';

pt(438).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ';
pt(438).paramname = 'P2';
pt(438).class     = 'scalar';
pt(438).nrows     = 1;
pt(438).ncols     = 1;
pt(438).subsource = 'SS_DOUBLE';
pt(438).ndims     = '2';
pt(438).size      = '[]';

pt(439).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ';
pt(439).paramname = 'P3';
pt(439).class     = 'scalar';
pt(439).nrows     = 1;
pt(439).ncols     = 1;
pt(439).subsource = 'SS_DOUBLE';
pt(439).ndims     = '2';
pt(439).size      = '[]';

pt(440).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ';
pt(440).paramname = 'P4';
pt(440).class     = 'scalar';
pt(440).nrows     = 1;
pt(440).ncols     = 1;
pt(440).subsource = 'SS_DOUBLE';
pt(440).ndims     = '2';
pt(440).size      = '[]';

pt(441).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ';
pt(441).paramname = 'P5';
pt(441).class     = 'scalar';
pt(441).nrows     = 1;
pt(441).ncols     = 1;
pt(441).subsource = 'SS_DOUBLE';
pt(441).ndims     = '2';
pt(441).size      = '[]';

pt(442).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ';
pt(442).paramname = 'P6';
pt(442).class     = 'scalar';
pt(442).nrows     = 1;
pt(442).ncols     = 1;
pt(442).subsource = 'SS_DOUBLE';
pt(442).ndims     = '2';
pt(442).size      = '[]';

pt(443).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ';
pt(443).paramname = 'P7';
pt(443).class     = 'scalar';
pt(443).nrows     = 1;
pt(443).ncols     = 1;
pt(443).subsource = 'SS_DOUBLE';
pt(443).ndims     = '2';
pt(443).size      = '[]';

pt(444).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1';
pt(444).paramname = 'P1';
pt(444).class     = 'vector';
pt(444).nrows     = 1;
pt(444).ncols     = 48;
pt(444).subsource = 'SS_DOUBLE';
pt(444).ndims     = '2';
pt(444).size      = '[]';

pt(445).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1';
pt(445).paramname = 'P2';
pt(445).class     = 'scalar';
pt(445).nrows     = 1;
pt(445).ncols     = 1;
pt(445).subsource = 'SS_DOUBLE';
pt(445).ndims     = '2';
pt(445).size      = '[]';

pt(446).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1';
pt(446).paramname = 'P3';
pt(446).class     = 'scalar';
pt(446).nrows     = 1;
pt(446).ncols     = 1;
pt(446).subsource = 'SS_DOUBLE';
pt(446).ndims     = '2';
pt(446).size      = '[]';

pt(447).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1';
pt(447).paramname = 'P4';
pt(447).class     = 'scalar';
pt(447).nrows     = 1;
pt(447).ncols     = 1;
pt(447).subsource = 'SS_DOUBLE';
pt(447).ndims     = '2';
pt(447).size      = '[]';

pt(448).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1';
pt(448).paramname = 'P5';
pt(448).class     = 'scalar';
pt(448).nrows     = 1;
pt(448).ncols     = 1;
pt(448).subsource = 'SS_DOUBLE';
pt(448).ndims     = '2';
pt(448).size      = '[]';

pt(449).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1';
pt(449).paramname = 'P6';
pt(449).class     = 'scalar';
pt(449).nrows     = 1;
pt(449).ncols     = 1;
pt(449).subsource = 'SS_DOUBLE';
pt(449).ndims     = '2';
pt(449).size      = '[]';

pt(450).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1';
pt(450).paramname = 'P7';
pt(450).class     = 'scalar';
pt(450).nrows     = 1;
pt(450).ncols     = 1;
pt(450).subsource = 'SS_DOUBLE';
pt(450).ndims     = '2';
pt(450).size      = '[]';

pt(451).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Wrap To Zero';
pt(451).paramname = 'Threshold';
pt(451).class     = 'scalar';
pt(451).nrows     = 1;
pt(451).ncols     = 1;
pt(451).subsource = 'SS_UINT32';
pt(451).ndims     = '2';
pt(451).size      = '[]';

pt(452).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Output';
pt(452).paramname = 'InitialCondition';
pt(452).class     = 'scalar';
pt(452).nrows     = 1;
pt(452).ncols     = 1;
pt(452).subsource = 'SS_UINT32';
pt(452).ndims     = '2';
pt(452).size      = '[]';

pt(453).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ';
pt(453).paramname = 'P1';
pt(453).class     = 'vector';
pt(453).nrows     = 1;
pt(453).ncols     = 46;
pt(453).subsource = 'SS_DOUBLE';
pt(453).ndims     = '2';
pt(453).size      = '[]';

pt(454).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ';
pt(454).paramname = 'P2';
pt(454).class     = 'scalar';
pt(454).nrows     = 1;
pt(454).ncols     = 1;
pt(454).subsource = 'SS_DOUBLE';
pt(454).ndims     = '2';
pt(454).size      = '[]';

pt(455).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ';
pt(455).paramname = 'P3';
pt(455).class     = 'scalar';
pt(455).nrows     = 1;
pt(455).ncols     = 1;
pt(455).subsource = 'SS_DOUBLE';
pt(455).ndims     = '2';
pt(455).size      = '[]';

pt(456).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ';
pt(456).paramname = 'P4';
pt(456).class     = 'scalar';
pt(456).nrows     = 1;
pt(456).ncols     = 1;
pt(456).subsource = 'SS_DOUBLE';
pt(456).ndims     = '2';
pt(456).size      = '[]';

pt(457).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ';
pt(457).paramname = 'P5';
pt(457).class     = 'scalar';
pt(457).nrows     = 1;
pt(457).ncols     = 1;
pt(457).subsource = 'SS_DOUBLE';
pt(457).ndims     = '2';
pt(457).size      = '[]';

pt(458).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ';
pt(458).paramname = 'P6';
pt(458).class     = 'scalar';
pt(458).nrows     = 1;
pt(458).ncols     = 1;
pt(458).subsource = 'SS_DOUBLE';
pt(458).ndims     = '2';
pt(458).size      = '[]';

pt(459).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ';
pt(459).paramname = 'P7';
pt(459).class     = 'scalar';
pt(459).nrows     = 1;
pt(459).ncols     = 1;
pt(459).subsource = 'SS_DOUBLE';
pt(459).ndims     = '2';
pt(459).size      = '[]';

pt(460).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1';
pt(460).paramname = 'P1';
pt(460).class     = 'vector';
pt(460).nrows     = 1;
pt(460).ncols     = 46;
pt(460).subsource = 'SS_DOUBLE';
pt(460).ndims     = '2';
pt(460).size      = '[]';

pt(461).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1';
pt(461).paramname = 'P2';
pt(461).class     = 'scalar';
pt(461).nrows     = 1;
pt(461).ncols     = 1;
pt(461).subsource = 'SS_DOUBLE';
pt(461).ndims     = '2';
pt(461).size      = '[]';

pt(462).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1';
pt(462).paramname = 'P3';
pt(462).class     = 'scalar';
pt(462).nrows     = 1;
pt(462).ncols     = 1;
pt(462).subsource = 'SS_DOUBLE';
pt(462).ndims     = '2';
pt(462).size      = '[]';

pt(463).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1';
pt(463).paramname = 'P4';
pt(463).class     = 'scalar';
pt(463).nrows     = 1;
pt(463).ncols     = 1;
pt(463).subsource = 'SS_DOUBLE';
pt(463).ndims     = '2';
pt(463).size      = '[]';

pt(464).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1';
pt(464).paramname = 'P5';
pt(464).class     = 'scalar';
pt(464).nrows     = 1;
pt(464).ncols     = 1;
pt(464).subsource = 'SS_DOUBLE';
pt(464).ndims     = '2';
pt(464).size      = '[]';

pt(465).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1';
pt(465).paramname = 'P6';
pt(465).class     = 'scalar';
pt(465).nrows     = 1;
pt(465).ncols     = 1;
pt(465).subsource = 'SS_DOUBLE';
pt(465).ndims     = '2';
pt(465).size      = '[]';

pt(466).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1';
pt(466).paramname = 'P7';
pt(466).class     = 'scalar';
pt(466).nrows     = 1;
pt(466).ncols     = 1;
pt(466).subsource = 'SS_DOUBLE';
pt(466).ndims     = '2';
pt(466).size      = '[]';

pt(467).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2';
pt(467).paramname = 'P1';
pt(467).class     = 'vector';
pt(467).nrows     = 1;
pt(467).ncols     = 46;
pt(467).subsource = 'SS_DOUBLE';
pt(467).ndims     = '2';
pt(467).size      = '[]';

pt(468).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2';
pt(468).paramname = 'P2';
pt(468).class     = 'scalar';
pt(468).nrows     = 1;
pt(468).ncols     = 1;
pt(468).subsource = 'SS_DOUBLE';
pt(468).ndims     = '2';
pt(468).size      = '[]';

pt(469).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2';
pt(469).paramname = 'P3';
pt(469).class     = 'scalar';
pt(469).nrows     = 1;
pt(469).ncols     = 1;
pt(469).subsource = 'SS_DOUBLE';
pt(469).ndims     = '2';
pt(469).size      = '[]';

pt(470).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2';
pt(470).paramname = 'P4';
pt(470).class     = 'scalar';
pt(470).nrows     = 1;
pt(470).ncols     = 1;
pt(470).subsource = 'SS_DOUBLE';
pt(470).ndims     = '2';
pt(470).size      = '[]';

pt(471).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2';
pt(471).paramname = 'P5';
pt(471).class     = 'scalar';
pt(471).nrows     = 1;
pt(471).ncols     = 1;
pt(471).subsource = 'SS_DOUBLE';
pt(471).ndims     = '2';
pt(471).size      = '[]';

pt(472).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2';
pt(472).paramname = 'P6';
pt(472).class     = 'scalar';
pt(472).nrows     = 1;
pt(472).ncols     = 1;
pt(472).subsource = 'SS_DOUBLE';
pt(472).ndims     = '2';
pt(472).size      = '[]';

pt(473).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2';
pt(473).paramname = 'P7';
pt(473).class     = 'scalar';
pt(473).nrows     = 1;
pt(473).ncols     = 1;
pt(473).subsource = 'SS_DOUBLE';
pt(473).ndims     = '2';
pt(473).size      = '[]';

pt(474).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3';
pt(474).paramname = 'P1';
pt(474).class     = 'vector';
pt(474).nrows     = 1;
pt(474).ncols     = 46;
pt(474).subsource = 'SS_DOUBLE';
pt(474).ndims     = '2';
pt(474).size      = '[]';

pt(475).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3';
pt(475).paramname = 'P2';
pt(475).class     = 'scalar';
pt(475).nrows     = 1;
pt(475).ncols     = 1;
pt(475).subsource = 'SS_DOUBLE';
pt(475).ndims     = '2';
pt(475).size      = '[]';

pt(476).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3';
pt(476).paramname = 'P3';
pt(476).class     = 'scalar';
pt(476).nrows     = 1;
pt(476).ncols     = 1;
pt(476).subsource = 'SS_DOUBLE';
pt(476).ndims     = '2';
pt(476).size      = '[]';

pt(477).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3';
pt(477).paramname = 'P4';
pt(477).class     = 'scalar';
pt(477).nrows     = 1;
pt(477).ncols     = 1;
pt(477).subsource = 'SS_DOUBLE';
pt(477).ndims     = '2';
pt(477).size      = '[]';

pt(478).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3';
pt(478).paramname = 'P5';
pt(478).class     = 'scalar';
pt(478).nrows     = 1;
pt(478).ncols     = 1;
pt(478).subsource = 'SS_DOUBLE';
pt(478).ndims     = '2';
pt(478).size      = '[]';

pt(479).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3';
pt(479).paramname = 'P6';
pt(479).class     = 'scalar';
pt(479).nrows     = 1;
pt(479).ncols     = 1;
pt(479).subsource = 'SS_DOUBLE';
pt(479).ndims     = '2';
pt(479).size      = '[]';

pt(480).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3';
pt(480).paramname = 'P7';
pt(480).class     = 'scalar';
pt(480).nrows     = 1;
pt(480).ncols     = 1;
pt(480).subsource = 'SS_DOUBLE';
pt(480).ndims     = '2';
pt(480).size      = '[]';

pt(481).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/update/Constant';
pt(481).paramname = 'Value';
pt(481).class     = 'scalar';
pt(481).nrows     = 1;
pt(481).ncols     = 1;
pt(481).subsource = 'SS_DOUBLE';
pt(481).ndims     = '2';
pt(481).size      = '[]';

pt(482).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/update/Constant1';
pt(482).paramname = 'Value';
pt(482).class     = 'scalar';
pt(482).nrows     = 1;
pt(482).ncols     = 1;
pt(482).subsource = 'SS_UINT32';
pt(482).ndims     = '2';
pt(482).size      = '[]';

pt(483).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Detect Change';
pt(483).paramname = 'vinit';
pt(483).class     = 'scalar';
pt(483).nrows     = 1;
pt(483).ncols     = 1;
pt(483).subsource = 'SS_DOUBLE';
pt(483).ndims     = '2';
pt(483).size      = '[]';

pt(484).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Constant';
pt(484).paramname = 'Value';
pt(484).class     = 'vector';
pt(484).nrows     = 1;
pt(484).ncols     = 7;
pt(484).subsource = 'SS_DOUBLE';
pt(484).ndims     = '2';
pt(484).size      = '[]';

pt(485).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor';
pt(485).paramname = 'P1';
pt(485).class     = 'vector';
pt(485).nrows     = 1;
pt(485).ncols     = 12;
pt(485).subsource = 'SS_DOUBLE';
pt(485).ndims     = '2';
pt(485).size      = '[]';

pt(486).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor';
pt(486).paramname = 'P2';
pt(486).class     = 'scalar';
pt(486).nrows     = 1;
pt(486).ncols     = 1;
pt(486).subsource = 'SS_DOUBLE';
pt(486).ndims     = '2';
pt(486).size      = '[]';

pt(487).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor';
pt(487).paramname = 'P3';
pt(487).class     = 'scalar';
pt(487).nrows     = 1;
pt(487).ncols     = 1;
pt(487).subsource = 'SS_DOUBLE';
pt(487).ndims     = '2';
pt(487).size      = '[]';

pt(488).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor';
pt(488).paramname = 'P4';
pt(488).class     = 'scalar';
pt(488).nrows     = 1;
pt(488).ncols     = 1;
pt(488).subsource = 'SS_DOUBLE';
pt(488).ndims     = '2';
pt(488).size      = '[]';

pt(489).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor';
pt(489).paramname = 'P5';
pt(489).class     = 'scalar';
pt(489).nrows     = 1;
pt(489).ncols     = 1;
pt(489).subsource = 'SS_DOUBLE';
pt(489).ndims     = '2';
pt(489).size      = '[]';

pt(490).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Switch';
pt(490).paramname = 'Threshold';
pt(490).class     = 'scalar';
pt(490).nrows     = 1;
pt(490).ncols     = 1;
pt(490).subsource = 'SS_DOUBLE';
pt(490).ndims     = '2';
pt(490).size      = '[]';

pt(491).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Detect Change';
pt(491).paramname = 'vinit';
pt(491).class     = 'scalar';
pt(491).nrows     = 1;
pt(491).ncols     = 1;
pt(491).subsource = 'SS_DOUBLE';
pt(491).ndims     = '2';
pt(491).size      = '[]';

pt(492).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Constant1';
pt(492).paramname = 'Value';
pt(492).class     = 'vector';
pt(492).nrows     = 1;
pt(492).ncols     = 7;
pt(492).subsource = 'SS_DOUBLE';
pt(492).ndims     = '2';
pt(492).size      = '[]';

pt(493).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor';
pt(493).paramname = 'P1';
pt(493).class     = 'vector';
pt(493).nrows     = 1;
pt(493).ncols     = 12;
pt(493).subsource = 'SS_DOUBLE';
pt(493).ndims     = '2';
pt(493).size      = '[]';

pt(494).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor';
pt(494).paramname = 'P2';
pt(494).class     = 'scalar';
pt(494).nrows     = 1;
pt(494).ncols     = 1;
pt(494).subsource = 'SS_DOUBLE';
pt(494).ndims     = '2';
pt(494).size      = '[]';

pt(495).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor';
pt(495).paramname = 'P3';
pt(495).class     = 'scalar';
pt(495).nrows     = 1;
pt(495).ncols     = 1;
pt(495).subsource = 'SS_DOUBLE';
pt(495).ndims     = '2';
pt(495).size      = '[]';

pt(496).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor';
pt(496).paramname = 'P4';
pt(496).class     = 'scalar';
pt(496).nrows     = 1;
pt(496).ncols     = 1;
pt(496).subsource = 'SS_DOUBLE';
pt(496).ndims     = '2';
pt(496).size      = '[]';

pt(497).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor';
pt(497).paramname = 'P5';
pt(497).class     = 'scalar';
pt(497).nrows     = 1;
pt(497).ncols     = 1;
pt(497).subsource = 'SS_DOUBLE';
pt(497).ndims     = '2';
pt(497).size      = '[]';

pt(498).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Switch1';
pt(498).paramname = 'Threshold';
pt(498).class     = 'scalar';
pt(498).nrows     = 1;
pt(498).ncols     = 1;
pt(498).subsource = 'SS_DOUBLE';
pt(498).ndims     = '2';
pt(498).size      = '[]';

pt(499).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/robot_count';
pt(499).paramname = 'Value';
pt(499).class     = 'scalar';
pt(499).nrows     = 1;
pt(499).ncols     = 1;
pt(499).subsource = 'SS_DOUBLE';
pt(499).ndims     = '2';
pt(499).size      = '[]';

pt(500).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/step duration';
pt(500).paramname = 'Value';
pt(500).class     = 'scalar';
pt(500).nrows     = 1;
pt(500).ncols     = 1;
pt(500).subsource = 'SS_DOUBLE';
pt(500).ndims     = '2';
pt(500).size      = '[]';

pt(501).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/servo counter';
pt(501).paramname = 'InitialOutput';
pt(501).class     = 'scalar';
pt(501).nrows     = 1;
pt(501).ncols     = 1;
pt(501).subsource = 'SS_UINT32';
pt(501).ndims     = '2';
pt(501).size      = '[]';

pt(502).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/EP calibration btn';
pt(502).paramname = 'InitialOutput';
pt(502).class     = 'scalar';
pt(502).nrows     = 1;
pt(502).ncols     = 1;
pt(502).subsource = 'SS_UINT32';
pt(502).ndims     = '2';
pt(502).size      = '[]';

pt(503).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Status bits';
pt(503).paramname = 'InitialOutput';
pt(503).class     = 'vector';
pt(503).nrows     = 7;
pt(503).ncols     = 1;
pt(503).subsource = 'SS_UINT32';
pt(503).ndims     = '2';
pt(503).size      = '[]';

pt(504).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/MATLAB Function';
pt(504).paramname = 'BKIN_STEP_TIME';
pt(504).class     = 'scalar';
pt(504).nrows     = 1;
pt(504).ncols     = 1;
pt(504).subsource = 'SS_DOUBLE';
pt(504).ndims     = '2';
pt(504).size      = '[]';

pt(505).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Constant';
pt(505).paramname = 'Value';
pt(505).class     = 'scalar';
pt(505).nrows     = 1;
pt(505).ncols     = 1;
pt(505).subsource = 'SS_UINT32';
pt(505).ndims     = '2';
pt(505).size      = '[]';

pt(506).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Constant1';
pt(506).paramname = 'Value';
pt(506).class     = 'vector';
pt(506).nrows     = 7;
pt(506).ncols     = 1;
pt(506).subsource = 'SS_UINT32';
pt(506).ndims     = '2';
pt(506).size      = '[]';

pt(507).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive';
pt(507).paramname = 'P1';
pt(507).class     = 'vector';
pt(507).nrows     = 1;
pt(507).ncols     = 11;
pt(507).subsource = 'SS_DOUBLE';
pt(507).ndims     = '2';
pt(507).size      = '[]';

pt(508).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive';
pt(508).paramname = 'P2';
pt(508).class     = 'scalar';
pt(508).nrows     = 1;
pt(508).ncols     = 1;
pt(508).subsource = 'SS_DOUBLE';
pt(508).ndims     = '2';
pt(508).size      = '[]';

pt(509).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive';
pt(509).paramname = 'P3';
pt(509).class     = 'scalar';
pt(509).nrows     = 1;
pt(509).ncols     = 1;
pt(509).subsource = 'SS_DOUBLE';
pt(509).ndims     = '2';
pt(509).size      = '[]';

pt(510).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive';
pt(510).paramname = 'P4';
pt(510).class     = 'scalar';
pt(510).nrows     = 1;
pt(510).ncols     = 1;
pt(510).subsource = 'SS_DOUBLE';
pt(510).ndims     = '2';
pt(510).size      = '[]';

pt(511).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive';
pt(511).paramname = 'P5';
pt(511).class     = 'scalar';
pt(511).nrows     = 1;
pt(511).ncols     = 1;
pt(511).subsource = 'SS_DOUBLE';
pt(511).ndims     = '2';
pt(511).size      = '[]';

pt(512).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data write/Constant';
pt(512).paramname = 'Value';
pt(512).class     = 'vector';
pt(512).nrows     = 4;
pt(512).ncols     = 1;
pt(512).subsource = 'SS_DOUBLE';
pt(512).ndims     = '2';
pt(512).size      = '[]';

pt(513).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Elbow Angle Offset';
pt(513).paramname = 'Value';
pt(513).class     = 'scalar';
pt(513).nrows     = 1;
pt(513).ncols     = 1;
pt(513).subsource = 'SS_DOUBLE';
pt(513).ndims     = '2';
pt(513).size      = '[]';

pt(514).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Encoder Orientation 1';
pt(514).paramname = 'Value';
pt(514).class     = 'scalar';
pt(514).nrows     = 1;
pt(514).ncols     = 1;
pt(514).subsource = 'SS_DOUBLE';
pt(514).ndims     = '2';
pt(514).size      = '[]';

pt(515).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Encoder Orientation 2';
pt(515).paramname = 'Value';
pt(515).class     = 'scalar';
pt(515).nrows     = 1;
pt(515).ncols     = 1;
pt(515).subsource = 'SS_DOUBLE';
pt(515).ndims     = '2';
pt(515).size      = '[]';

pt(516).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Force Sensor Angle Offset';
pt(516).paramname = 'Value';
pt(516).class     = 'scalar';
pt(516).nrows     = 1;
pt(516).ncols     = 1;
pt(516).subsource = 'SS_DOUBLE';
pt(516).ndims     = '2';
pt(516).size      = '[]';

pt(517).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm L1';
pt(517).paramname = 'Value';
pt(517).class     = 'scalar';
pt(517).nrows     = 1;
pt(517).ncols     = 1;
pt(517).subsource = 'SS_DOUBLE';
pt(517).ndims     = '2';
pt(517).size      = '[]';

pt(518).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm L2';
pt(518).paramname = 'Value';
pt(518).class     = 'scalar';
pt(518).nrows     = 1;
pt(518).ncols     = 1;
pt(518).subsource = 'SS_DOUBLE';
pt(518).ndims     = '2';
pt(518).size      = '[]';

pt(519).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm L2 L5 Angle';
pt(519).paramname = 'Value';
pt(519).class     = 'scalar';
pt(519).nrows     = 1;
pt(519).ncols     = 1;
pt(519).subsource = 'SS_DOUBLE';
pt(519).ndims     = '2';
pt(519).size      = '[]';

pt(520).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm L3 Error';
pt(520).paramname = 'Value';
pt(520).class     = 'scalar';
pt(520).nrows     = 1;
pt(520).ncols     = 1;
pt(520).subsource = 'SS_DOUBLE';
pt(520).ndims     = '2';
pt(520).size      = '[]';

pt(521).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm L5';
pt(521).paramname = 'Value';
pt(521).class     = 'scalar';
pt(521).nrows     = 1;
pt(521).ncols     = 1;
pt(521).subsource = 'SS_DOUBLE';
pt(521).ndims     = '2';
pt(521).size      = '[]';

pt(522).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Motor1 Gear Ratio';
pt(522).paramname = 'Value';
pt(522).class     = 'scalar';
pt(522).nrows     = 1;
pt(522).ncols     = 1;
pt(522).subsource = 'SS_DOUBLE';
pt(522).ndims     = '2';
pt(522).size      = '[]';

pt(523).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Motor1 Orientation';
pt(523).paramname = 'Value';
pt(523).class     = 'scalar';
pt(523).nrows     = 1;
pt(523).ncols     = 1;
pt(523).subsource = 'SS_DOUBLE';
pt(523).ndims     = '2';
pt(523).size      = '[]';

pt(524).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Motor2 Gear Ratio';
pt(524).paramname = 'Value';
pt(524).class     = 'scalar';
pt(524).nrows     = 1;
pt(524).ncols     = 1;
pt(524).subsource = 'SS_DOUBLE';
pt(524).ndims     = '2';
pt(524).size      = '[]';

pt(525).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Motor2 Orientation';
pt(525).paramname = 'Value';
pt(525).class     = 'scalar';
pt(525).nrows     = 1;
pt(525).ncols     = 1;
pt(525).subsource = 'SS_DOUBLE';
pt(525).ndims     = '2';
pt(525).size      = '[]';

pt(526).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Orientation';
pt(526).paramname = 'Value';
pt(526).class     = 'scalar';
pt(526).nrows     = 1;
pt(526).ncols     = 1;
pt(526).subsource = 'SS_DOUBLE';
pt(526).ndims     = '2';
pt(526).size      = '[]';

pt(527).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Pointer Offset';
pt(527).paramname = 'Value';
pt(527).class     = 'scalar';
pt(527).nrows     = 1;
pt(527).ncols     = 1;
pt(527).subsource = 'SS_DOUBLE';
pt(527).ndims     = '2';
pt(527).size      = '[]';

pt(528).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Secondary Encoders';
pt(528).paramname = 'Value';
pt(528).class     = 'scalar';
pt(528).nrows     = 1;
pt(528).ncols     = 1;
pt(528).subsource = 'SS_DOUBLE';
pt(528).ndims     = '2';
pt(528).size      = '[]';

pt(529).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Shoulder Angle Offset';
pt(529).paramname = 'Value';
pt(529).class     = 'scalar';
pt(529).nrows     = 1;
pt(529).ncols     = 1;
pt(529).subsource = 'SS_DOUBLE';
pt(529).ndims     = '2';
pt(529).size      = '[]';

pt(530).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Shoulder X';
pt(530).paramname = 'Value';
pt(530).class     = 'scalar';
pt(530).nrows     = 1;
pt(530).ncols     = 1;
pt(530).subsource = 'SS_DOUBLE';
pt(530).ndims     = '2';
pt(530).size      = '[]';

pt(531).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Shoulder Y';
pt(531).paramname = 'Value';
pt(531).class     = 'scalar';
pt(531).nrows     = 1;
pt(531).ncols     = 1;
pt(531).subsource = 'SS_DOUBLE';
pt(531).ndims     = '2';
pt(531).size      = '[]';

pt(532).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm Torque Constant';
pt(532).paramname = 'Value';
pt(532).class     = 'scalar';
pt(532).nrows     = 1;
pt(532).ncols     = 1;
pt(532).subsource = 'SS_DOUBLE';
pt(532).ndims     = '2';
pt(532).size      = '[]';

pt(533).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm primary encoder counts';
pt(533).paramname = 'Value';
pt(533).class     = 'scalar';
pt(533).nrows     = 1;
pt(533).ncols     = 1;
pt(533).subsource = 'SS_DOUBLE';
pt(533).ndims     = '2';
pt(533).size      = '[]';

pt(534).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm robot type';
pt(534).paramname = 'Value';
pt(534).class     = 'scalar';
pt(534).nrows     = 1;
pt(534).ncols     = 1;
pt(534).subsource = 'SS_DOUBLE';
pt(534).ndims     = '2';
pt(534).size      = '[]';

pt(535).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm robot version';
pt(535).paramname = 'Value';
pt(535).class     = 'scalar';
pt(535).nrows     = 1;
pt(535).ncols     = 1;
pt(535).subsource = 'SS_DOUBLE';
pt(535).ndims     = '2';
pt(535).size      = '[]';

pt(536).blockname = 'DataLogging/Poll KINARM/constants/arm1/Arm secondary encoder counts';
pt(536).paramname = 'Value';
pt(536).class     = 'scalar';
pt(536).nrows     = 1;
pt(536).ncols     = 1;
pt(536).subsource = 'SS_DOUBLE';
pt(536).ndims     = '2';
pt(536).size      = '[]';

pt(537).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Elbow Angle Offset';
pt(537).paramname = 'Value';
pt(537).class     = 'scalar';
pt(537).nrows     = 1;
pt(537).ncols     = 1;
pt(537).subsource = 'SS_DOUBLE';
pt(537).ndims     = '2';
pt(537).size      = '[]';

pt(538).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Encoder Orientation 1';
pt(538).paramname = 'Value';
pt(538).class     = 'scalar';
pt(538).nrows     = 1;
pt(538).ncols     = 1;
pt(538).subsource = 'SS_DOUBLE';
pt(538).ndims     = '2';
pt(538).size      = '[]';

pt(539).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Encoder Orientation 2';
pt(539).paramname = 'Value';
pt(539).class     = 'scalar';
pt(539).nrows     = 1;
pt(539).ncols     = 1;
pt(539).subsource = 'SS_DOUBLE';
pt(539).ndims     = '2';
pt(539).size      = '[]';

pt(540).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Force Sensor Angle Offset';
pt(540).paramname = 'Value';
pt(540).class     = 'scalar';
pt(540).nrows     = 1;
pt(540).ncols     = 1;
pt(540).subsource = 'SS_DOUBLE';
pt(540).ndims     = '2';
pt(540).size      = '[]';

pt(541).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm L1';
pt(541).paramname = 'Value';
pt(541).class     = 'scalar';
pt(541).nrows     = 1;
pt(541).ncols     = 1;
pt(541).subsource = 'SS_DOUBLE';
pt(541).ndims     = '2';
pt(541).size      = '[]';

pt(542).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm L2';
pt(542).paramname = 'Value';
pt(542).class     = 'scalar';
pt(542).nrows     = 1;
pt(542).ncols     = 1;
pt(542).subsource = 'SS_DOUBLE';
pt(542).ndims     = '2';
pt(542).size      = '[]';

pt(543).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm L2 L5 Angle';
pt(543).paramname = 'Value';
pt(543).class     = 'scalar';
pt(543).nrows     = 1;
pt(543).ncols     = 1;
pt(543).subsource = 'SS_DOUBLE';
pt(543).ndims     = '2';
pt(543).size      = '[]';

pt(544).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm L3 Error';
pt(544).paramname = 'Value';
pt(544).class     = 'scalar';
pt(544).nrows     = 1;
pt(544).ncols     = 1;
pt(544).subsource = 'SS_DOUBLE';
pt(544).ndims     = '2';
pt(544).size      = '[]';

pt(545).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm L5';
pt(545).paramname = 'Value';
pt(545).class     = 'scalar';
pt(545).nrows     = 1;
pt(545).ncols     = 1;
pt(545).subsource = 'SS_DOUBLE';
pt(545).ndims     = '2';
pt(545).size      = '[]';

pt(546).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Motor1 Gear Ratio';
pt(546).paramname = 'Value';
pt(546).class     = 'scalar';
pt(546).nrows     = 1;
pt(546).ncols     = 1;
pt(546).subsource = 'SS_DOUBLE';
pt(546).ndims     = '2';
pt(546).size      = '[]';

pt(547).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Motor1 Orientation';
pt(547).paramname = 'Value';
pt(547).class     = 'scalar';
pt(547).nrows     = 1;
pt(547).ncols     = 1;
pt(547).subsource = 'SS_DOUBLE';
pt(547).ndims     = '2';
pt(547).size      = '[]';

pt(548).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Motor2 Gear Ratio';
pt(548).paramname = 'Value';
pt(548).class     = 'scalar';
pt(548).nrows     = 1;
pt(548).ncols     = 1;
pt(548).subsource = 'SS_DOUBLE';
pt(548).ndims     = '2';
pt(548).size      = '[]';

pt(549).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Motor2 Orientation';
pt(549).paramname = 'Value';
pt(549).class     = 'scalar';
pt(549).nrows     = 1;
pt(549).ncols     = 1;
pt(549).subsource = 'SS_DOUBLE';
pt(549).ndims     = '2';
pt(549).size      = '[]';

pt(550).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Orientation';
pt(550).paramname = 'Value';
pt(550).class     = 'scalar';
pt(550).nrows     = 1;
pt(550).ncols     = 1;
pt(550).subsource = 'SS_DOUBLE';
pt(550).ndims     = '2';
pt(550).size      = '[]';

pt(551).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Pointer Offset';
pt(551).paramname = 'Value';
pt(551).class     = 'scalar';
pt(551).nrows     = 1;
pt(551).ncols     = 1;
pt(551).subsource = 'SS_DOUBLE';
pt(551).ndims     = '2';
pt(551).size      = '[]';

pt(552).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Secondary Encoders';
pt(552).paramname = 'Value';
pt(552).class     = 'scalar';
pt(552).nrows     = 1;
pt(552).ncols     = 1;
pt(552).subsource = 'SS_DOUBLE';
pt(552).ndims     = '2';
pt(552).size      = '[]';

pt(553).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Shoulder Angle Offset';
pt(553).paramname = 'Value';
pt(553).class     = 'scalar';
pt(553).nrows     = 1;
pt(553).ncols     = 1;
pt(553).subsource = 'SS_DOUBLE';
pt(553).ndims     = '2';
pt(553).size      = '[]';

pt(554).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Shoulder X';
pt(554).paramname = 'Value';
pt(554).class     = 'scalar';
pt(554).nrows     = 1;
pt(554).ncols     = 1;
pt(554).subsource = 'SS_DOUBLE';
pt(554).ndims     = '2';
pt(554).size      = '[]';

pt(555).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Shoulder Y';
pt(555).paramname = 'Value';
pt(555).class     = 'scalar';
pt(555).nrows     = 1;
pt(555).ncols     = 1;
pt(555).subsource = 'SS_DOUBLE';
pt(555).ndims     = '2';
pt(555).size      = '[]';

pt(556).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm Torque Constant';
pt(556).paramname = 'Value';
pt(556).class     = 'scalar';
pt(556).nrows     = 1;
pt(556).ncols     = 1;
pt(556).subsource = 'SS_DOUBLE';
pt(556).ndims     = '2';
pt(556).size      = '[]';

pt(557).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm primary encoder counts';
pt(557).paramname = 'Value';
pt(557).class     = 'scalar';
pt(557).nrows     = 1;
pt(557).ncols     = 1;
pt(557).subsource = 'SS_DOUBLE';
pt(557).ndims     = '2';
pt(557).size      = '[]';

pt(558).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm robot type';
pt(558).paramname = 'Value';
pt(558).class     = 'scalar';
pt(558).nrows     = 1;
pt(558).ncols     = 1;
pt(558).subsource = 'SS_DOUBLE';
pt(558).ndims     = '2';
pt(558).size      = '[]';

pt(559).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm robot version';
pt(559).paramname = 'Value';
pt(559).class     = 'scalar';
pt(559).nrows     = 1;
pt(559).ncols     = 1;
pt(559).subsource = 'SS_DOUBLE';
pt(559).ndims     = '2';
pt(559).size      = '[]';

pt(560).blockname = 'DataLogging/Poll KINARM/constants/arm2/Arm secondary encoder counts';
pt(560).paramname = 'Value';
pt(560).class     = 'scalar';
pt(560).nrows     = 1;
pt(560).ncols     = 1;
pt(560).subsource = 'SS_DOUBLE';
pt(560).ndims     = '2';
pt(560).size      = '[]';

pt(561).blockname = 'DataLogging/Poll KINARM/constants/update constants subsystem/Arm Force Sensors';
pt(561).paramname = 'Value';
pt(561).class     = 'vector';
pt(561).nrows     = 1;
pt(561).ncols     = 2;
pt(561).subsource = 'SS_DOUBLE';
pt(561).ndims     = '2';
pt(561).size      = '[]';

pt(562).blockname = 'DataLogging/Poll KINARM/createKINData/Counter Free-Running/Wrap To Zero';
pt(562).paramname = 'Threshold';
pt(562).class     = 'scalar';
pt(562).nrows     = 1;
pt(562).ncols     = 1;
pt(562).subsource = 'SS_UINT32';
pt(562).ndims     = '2';
pt(562).size      = '[]';

pt(563).blockname = 'DataLogging/Poll KINARM/createKINData/Counter Free-Running/Output';
pt(563).paramname = 'InitialCondition';
pt(563).class     = 'scalar';
pt(563).nrows     = 1;
pt(563).ncols     = 1;
pt(563).subsource = 'SS_UINT32';
pt(563).ndims     = '2';
pt(563).size      = '[]';

pt(564).blockname = 'DataLogging/Poll KINARM/createKINData/hand feedback/Gaze Feedback Status';
pt(564).paramname = 'Value';
pt(564).class     = 'scalar';
pt(564).nrows     = 1;
pt(564).ncols     = 1;
pt(564).subsource = 'SS_DOUBLE';
pt(564).ndims     = '2';
pt(564).size      = '[]';

pt(565).blockname = 'DataLogging/Poll KINARM/createKINData/hand feedback/Hand Feedback Colour';
pt(565).paramname = 'Value';
pt(565).class     = 'scalar';
pt(565).nrows     = 1;
pt(565).ncols     = 1;
pt(565).subsource = 'SS_DOUBLE';
pt(565).ndims     = '2';
pt(565).size      = '[]';

pt(566).blockname = 'DataLogging/Poll KINARM/createKINData/hand feedback/Hand Feedback Feed Forward';
pt(566).paramname = 'Value';
pt(566).class     = 'scalar';
pt(566).nrows     = 1;
pt(566).ncols     = 1;
pt(566).subsource = 'SS_DOUBLE';
pt(566).ndims     = '2';
pt(566).size      = '[]';

pt(567).blockname = 'DataLogging/Poll KINARM/createKINData/hand feedback/Hand Feedback Radius';
pt(567).paramname = 'Value';
pt(567).class     = 'scalar';
pt(567).nrows     = 1;
pt(567).ncols     = 1;
pt(567).subsource = 'SS_DOUBLE';
pt(567).ndims     = '2';
pt(567).size      = '[]';

pt(568).blockname = 'DataLogging/Poll KINARM/createKINData/hand feedback/Hand Feedback Source';
pt(568).paramname = 'Value';
pt(568).class     = 'scalar';
pt(568).nrows     = 1;
pt(568).ncols     = 1;
pt(568).subsource = 'SS_DOUBLE';
pt(568).ndims     = '2';
pt(568).size      = '[]';

pt(569).blockname = 'DataLogging/Poll KINARM/createKINData/hand feedback/Hand Feedback Status';
pt(569).paramname = 'Value';
pt(569).class     = 'scalar';
pt(569).nrows     = 1;
pt(569).ncols     = 1;
pt(569).subsource = 'SS_DOUBLE';
pt(569).ndims     = '2';
pt(569).size      = '[]';

pt(570).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(570).paramname = 'P1';
pt(570).class     = 'vector';
pt(570).nrows     = 1;
pt(570).ncols     = 42;
pt(570).subsource = 'SS_DOUBLE';
pt(570).ndims     = '2';
pt(570).size      = '[]';

pt(571).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(571).paramname = 'P2';
pt(571).class     = 'scalar';
pt(571).nrows     = 1;
pt(571).ncols     = 1;
pt(571).subsource = 'SS_DOUBLE';
pt(571).ndims     = '2';
pt(571).size      = '[]';

pt(572).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(572).paramname = 'P3';
pt(572).class     = 'scalar';
pt(572).nrows     = 1;
pt(572).ncols     = 1;
pt(572).subsource = 'SS_DOUBLE';
pt(572).ndims     = '2';
pt(572).size      = '[]';

pt(573).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(573).paramname = 'P4';
pt(573).class     = 'scalar';
pt(573).nrows     = 1;
pt(573).ncols     = 1;
pt(573).subsource = 'SS_DOUBLE';
pt(573).ndims     = '2';
pt(573).size      = '[]';

pt(574).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(574).paramname = 'P5';
pt(574).class     = 'scalar';
pt(574).nrows     = 1;
pt(574).ncols     = 1;
pt(574).subsource = 'SS_DOUBLE';
pt(574).ndims     = '2';
pt(574).size      = '[]';

pt(575).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(575).paramname = 'P6';
pt(575).class     = 'scalar';
pt(575).nrows     = 1;
pt(575).ncols     = 1;
pt(575).subsource = 'SS_DOUBLE';
pt(575).ndims     = '2';
pt(575).size      = '[]';

pt(576).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(576).paramname = 'P7';
pt(576).class     = 'scalar';
pt(576).nrows     = 1;
pt(576).ncols     = 1;
pt(576).subsource = 'SS_DOUBLE';
pt(576).ndims     = '2';
pt(576).size      = '[]';

pt(577).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(577).paramname = 'P1';
pt(577).class     = 'vector';
pt(577).nrows     = 1;
pt(577).ncols     = 42;
pt(577).subsource = 'SS_DOUBLE';
pt(577).ndims     = '2';
pt(577).size      = '[]';

pt(578).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(578).paramname = 'P2';
pt(578).class     = 'scalar';
pt(578).nrows     = 1;
pt(578).ncols     = 1;
pt(578).subsource = 'SS_DOUBLE';
pt(578).ndims     = '2';
pt(578).size      = '[]';

pt(579).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(579).paramname = 'P3';
pt(579).class     = 'scalar';
pt(579).nrows     = 1;
pt(579).ncols     = 1;
pt(579).subsource = 'SS_DOUBLE';
pt(579).ndims     = '2';
pt(579).size      = '[]';

pt(580).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(580).paramname = 'P4';
pt(580).class     = 'scalar';
pt(580).nrows     = 1;
pt(580).ncols     = 1;
pt(580).subsource = 'SS_DOUBLE';
pt(580).ndims     = '2';
pt(580).size      = '[]';

pt(581).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(581).paramname = 'P5';
pt(581).class     = 'scalar';
pt(581).nrows     = 1;
pt(581).ncols     = 1;
pt(581).subsource = 'SS_DOUBLE';
pt(581).ndims     = '2';
pt(581).size      = '[]';

pt(582).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(582).paramname = 'P6';
pt(582).class     = 'scalar';
pt(582).nrows     = 1;
pt(582).ncols     = 1;
pt(582).subsource = 'SS_DOUBLE';
pt(582).ndims     = '2';
pt(582).size      = '[]';

pt(583).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(583).paramname = 'P7';
pt(583).class     = 'scalar';
pt(583).nrows     = 1;
pt(583).ncols     = 1;
pt(583).subsource = 'SS_DOUBLE';
pt(583).ndims     = '2';
pt(583).size      = '[]';

pt(584).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(584).paramname = 'P1';
pt(584).class     = 'vector';
pt(584).nrows     = 1;
pt(584).ncols     = 42;
pt(584).subsource = 'SS_DOUBLE';
pt(584).ndims     = '2';
pt(584).size      = '[]';

pt(585).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(585).paramname = 'P2';
pt(585).class     = 'scalar';
pt(585).nrows     = 1;
pt(585).ncols     = 1;
pt(585).subsource = 'SS_DOUBLE';
pt(585).ndims     = '2';
pt(585).size      = '[]';

pt(586).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(586).paramname = 'P3';
pt(586).class     = 'scalar';
pt(586).nrows     = 1;
pt(586).ncols     = 1;
pt(586).subsource = 'SS_DOUBLE';
pt(586).ndims     = '2';
pt(586).size      = '[]';

pt(587).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(587).paramname = 'P4';
pt(587).class     = 'scalar';
pt(587).nrows     = 1;
pt(587).ncols     = 1;
pt(587).subsource = 'SS_DOUBLE';
pt(587).ndims     = '2';
pt(587).size      = '[]';

pt(588).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(588).paramname = 'P5';
pt(588).class     = 'scalar';
pt(588).nrows     = 1;
pt(588).ncols     = 1;
pt(588).subsource = 'SS_DOUBLE';
pt(588).ndims     = '2';
pt(588).size      = '[]';

pt(589).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(589).paramname = 'P6';
pt(589).class     = 'scalar';
pt(589).nrows     = 1;
pt(589).ncols     = 1;
pt(589).subsource = 'SS_DOUBLE';
pt(589).ndims     = '2';
pt(589).size      = '[]';

pt(590).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1';
pt(590).paramname = 'P7';
pt(590).class     = 'scalar';
pt(590).nrows     = 1;
pt(590).ncols     = 1;
pt(590).subsource = 'SS_DOUBLE';
pt(590).ndims     = '2';
pt(590).size      = '[]';

pt(591).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(591).paramname = 'P1';
pt(591).class     = 'vector';
pt(591).nrows     = 1;
pt(591).ncols     = 42;
pt(591).subsource = 'SS_DOUBLE';
pt(591).ndims     = '2';
pt(591).size      = '[]';

pt(592).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(592).paramname = 'P2';
pt(592).class     = 'scalar';
pt(592).nrows     = 1;
pt(592).ncols     = 1;
pt(592).subsource = 'SS_DOUBLE';
pt(592).ndims     = '2';
pt(592).size      = '[]';

pt(593).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(593).paramname = 'P3';
pt(593).class     = 'scalar';
pt(593).nrows     = 1;
pt(593).ncols     = 1;
pt(593).subsource = 'SS_DOUBLE';
pt(593).ndims     = '2';
pt(593).size      = '[]';

pt(594).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(594).paramname = 'P4';
pt(594).class     = 'scalar';
pt(594).nrows     = 1;
pt(594).ncols     = 1;
pt(594).subsource = 'SS_DOUBLE';
pt(594).ndims     = '2';
pt(594).size      = '[]';

pt(595).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(595).paramname = 'P5';
pt(595).class     = 'scalar';
pt(595).nrows     = 1;
pt(595).ncols     = 1;
pt(595).subsource = 'SS_DOUBLE';
pt(595).ndims     = '2';
pt(595).size      = '[]';

pt(596).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(596).paramname = 'P6';
pt(596).class     = 'scalar';
pt(596).nrows     = 1;
pt(596).ncols     = 1;
pt(596).subsource = 'SS_DOUBLE';
pt(596).ndims     = '2';
pt(596).size      = '[]';

pt(597).blockname = 'DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2';
pt(597).paramname = 'P7';
pt(597).class     = 'scalar';
pt(597).nrows     = 1;
pt(597).ncols     = 1;
pt(597).subsource = 'SS_DOUBLE';
pt(597).ndims     = '2';
pt(597).size      = '[]';

pt(598).blockname = 'Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative/TSamp';
pt(598).paramname = 'WtEt';
pt(598).class     = 'scalar';
pt(598).nrows     = 1;
pt(598).ncols     = 1;
pt(598).subsource = 'SS_DOUBLE';
pt(598).ndims     = '2';
pt(598).size      = '[]';

pt(599).blockname = 'Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative1/TSamp';
pt(599).paramname = 'WtEt';
pt(599).class     = 'scalar';
pt(599).nrows     = 1;
pt(599).ncols     = 1;
pt(599).subsource = 'SS_DOUBLE';
pt(599).ndims     = '2';
pt(599).size      = '[]';

pt(600).blockname = 'DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Increment Real World/FixPt Constant';
pt(600).paramname = 'Value';
pt(600).class     = 'scalar';
pt(600).nrows     = 1;
pt(600).ncols     = 1;
pt(600).subsource = 'SS_UINT32';
pt(600).ndims     = '2';
pt(600).size      = '[]';

pt(601).blockname = 'DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Wrap To Zero/Constant';
pt(601).paramname = 'Value';
pt(601).class     = 'scalar';
pt(601).nrows     = 1;
pt(601).ncols     = 1;
pt(601).subsource = 'SS_UINT32';
pt(601).ndims     = '2';
pt(601).size      = '[]';

pt(602).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Compare To Constant';
pt(602).paramname = 'const';
pt(602).class     = 'scalar';
pt(602).nrows     = 1;
pt(602).ncols     = 1;
pt(602).subsource = 'SS_INT32';
pt(602).ndims     = '2';
pt(602).size      = '[]';

pt(603).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/MotorIdx';
pt(603).paramname = 'Value';
pt(603).class     = 'scalar';
pt(603).nrows     = 1;
pt(603).ncols     = 1;
pt(603).subsource = 'SS_DOUBLE';
pt(603).ndims     = '2';
pt(603).size      = '[]';

pt(604).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Memory';
pt(604).paramname = 'X0';
pt(604).class     = 'scalar';
pt(604).nrows     = 1;
pt(604).ncols     = 1;
pt(604).subsource = 'SS_DOUBLE';
pt(604).ndims     = '2';
pt(604).size      = '[]';

pt(605).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ';
pt(605).paramname = 'P1';
pt(605).class     = 'vector';
pt(605).nrows     = 1;
pt(605).ncols     = 41;
pt(605).subsource = 'SS_DOUBLE';
pt(605).ndims     = '2';
pt(605).size      = '[]';

pt(606).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ';
pt(606).paramname = 'P2';
pt(606).class     = 'scalar';
pt(606).nrows     = 1;
pt(606).ncols     = 1;
pt(606).subsource = 'SS_DOUBLE';
pt(606).ndims     = '2';
pt(606).size      = '[]';

pt(607).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ';
pt(607).paramname = 'P3';
pt(607).class     = 'scalar';
pt(607).nrows     = 1;
pt(607).ncols     = 1;
pt(607).subsource = 'SS_DOUBLE';
pt(607).ndims     = '2';
pt(607).size      = '[]';

pt(608).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ';
pt(608).paramname = 'P4';
pt(608).class     = 'scalar';
pt(608).nrows     = 1;
pt(608).ncols     = 1;
pt(608).subsource = 'SS_DOUBLE';
pt(608).ndims     = '2';
pt(608).size      = '[]';

pt(609).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ';
pt(609).paramname = 'P5';
pt(609).class     = 'scalar';
pt(609).nrows     = 1;
pt(609).ncols     = 1;
pt(609).subsource = 'SS_DOUBLE';
pt(609).ndims     = '2';
pt(609).size      = '[]';

pt(610).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ';
pt(610).paramname = 'P6';
pt(610).class     = 'scalar';
pt(610).nrows     = 1;
pt(610).ncols     = 1;
pt(610).subsource = 'SS_DOUBLE';
pt(610).ndims     = '2';
pt(610).size      = '[]';

pt(611).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ';
pt(611).paramname = 'P7';
pt(611).class     = 'scalar';
pt(611).nrows     = 1;
pt(611).ncols     = 1;
pt(611).subsource = 'SS_DOUBLE';
pt(611).ndims     = '2';
pt(611).size      = '[]';

pt(612).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Compare';
pt(612).paramname = 'const';
pt(612).class     = 'scalar';
pt(612).nrows     = 1;
pt(612).ncols     = 1;
pt(612).subsource = 'SS_INT32';
pt(612).ndims     = '2';
pt(612).size      = '[]';

pt(613).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/MotorIdx';
pt(613).paramname = 'Value';
pt(613).class     = 'scalar';
pt(613).nrows     = 1;
pt(613).ncols     = 1;
pt(613).subsource = 'SS_DOUBLE';
pt(613).ndims     = '2';
pt(613).size      = '[]';

pt(614).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Memory';
pt(614).paramname = 'X0';
pt(614).class     = 'scalar';
pt(614).nrows     = 1;
pt(614).ncols     = 1;
pt(614).subsource = 'SS_DOUBLE';
pt(614).ndims     = '2';
pt(614).size      = '[]';

pt(615).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ';
pt(615).paramname = 'P1';
pt(615).class     = 'vector';
pt(615).nrows     = 1;
pt(615).ncols     = 41;
pt(615).subsource = 'SS_DOUBLE';
pt(615).ndims     = '2';
pt(615).size      = '[]';

pt(616).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ';
pt(616).paramname = 'P2';
pt(616).class     = 'scalar';
pt(616).nrows     = 1;
pt(616).ncols     = 1;
pt(616).subsource = 'SS_DOUBLE';
pt(616).ndims     = '2';
pt(616).size      = '[]';

pt(617).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ';
pt(617).paramname = 'P3';
pt(617).class     = 'scalar';
pt(617).nrows     = 1;
pt(617).ncols     = 1;
pt(617).subsource = 'SS_DOUBLE';
pt(617).ndims     = '2';
pt(617).size      = '[]';

pt(618).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ';
pt(618).paramname = 'P4';
pt(618).class     = 'scalar';
pt(618).nrows     = 1;
pt(618).ncols     = 1;
pt(618).subsource = 'SS_DOUBLE';
pt(618).ndims     = '2';
pt(618).size      = '[]';

pt(619).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ';
pt(619).paramname = 'P5';
pt(619).class     = 'scalar';
pt(619).nrows     = 1;
pt(619).ncols     = 1;
pt(619).subsource = 'SS_DOUBLE';
pt(619).ndims     = '2';
pt(619).size      = '[]';

pt(620).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ';
pt(620).paramname = 'P6';
pt(620).class     = 'scalar';
pt(620).nrows     = 1;
pt(620).ncols     = 1;
pt(620).subsource = 'SS_DOUBLE';
pt(620).ndims     = '2';
pt(620).size      = '[]';

pt(621).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ';
pt(621).paramname = 'P7';
pt(621).class     = 'scalar';
pt(621).nrows     = 1;
pt(621).ncols     = 1;
pt(621).subsource = 'SS_DOUBLE';
pt(621).ndims     = '2';
pt(621).size      = '[]';

pt(622).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/Memory';
pt(622).paramname = 'X0';
pt(622).class     = 'scalar';
pt(622).nrows     = 1;
pt(622).ncols     = 1;
pt(622).subsource = 'SS_INT32';
pt(622).ndims     = '2';
pt(622).size      = '[]';

pt(623).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/Memory1';
pt(623).paramname = 'X0';
pt(623).class     = 'scalar';
pt(623).nrows     = 1;
pt(623).ncols     = 1;
pt(623).subsource = 'SS_INT32';
pt(623).ndims     = '2';
pt(623).size      = '[]';

pt(624).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/Memory';
pt(624).paramname = 'X0';
pt(624).class     = 'scalar';
pt(624).nrows     = 1;
pt(624).ncols     = 1;
pt(624).subsource = 'SS_INT32';
pt(624).ndims     = '2';
pt(624).size      = '[]';

pt(625).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/Memory1';
pt(625).paramname = 'X0';
pt(625).class     = 'scalar';
pt(625).nrows     = 1;
pt(625).ncols     = 1;
pt(625).subsource = 'SS_INT32';
pt(625).ndims     = '2';
pt(625).size      = '[]';

pt(626).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/readAddr';
pt(626).paramname = 'Value';
pt(626).class     = 'vector';
pt(626).nrows     = 1;
pt(626).ncols     = 3;
pt(626).subsource = 'SS_DOUBLE';
pt(626).ndims     = '2';
pt(626).size      = '[]';

pt(627).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Memory';
pt(627).paramname = 'X0';
pt(627).class     = 'scalar';
pt(627).nrows     = 1;
pt(627).ncols     = 1;
pt(627).subsource = 'SS_DOUBLE';
pt(627).ndims     = '2';
pt(627).size      = '[]';

pt(628).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/writeData';
pt(628).paramname = 'Value';
pt(628).class     = 'vector';
pt(628).nrows     = 1;
pt(628).ncols     = 5;
pt(628).subsource = 'SS_DOUBLE';
pt(628).ndims     = '2';
pt(628).size      = '[]';

pt(629).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/Memory';
pt(629).paramname = 'X0';
pt(629).class     = 'scalar';
pt(629).nrows     = 1;
pt(629).ncols     = 1;
pt(629).subsource = 'SS_INT32';
pt(629).ndims     = '2';
pt(629).size      = '[]';

pt(630).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory';
pt(630).paramname = 'X0';
pt(630).class     = 'scalar';
pt(630).nrows     = 1;
pt(630).ncols     = 1;
pt(630).subsource = 'SS_INT32';
pt(630).ndims     = '2';
pt(630).size      = '[]';

pt(631).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory1';
pt(631).paramname = 'X0';
pt(631).class     = 'scalar';
pt(631).nrows     = 1;
pt(631).ncols     = 1;
pt(631).subsource = 'SS_DOUBLE';
pt(631).ndims     = '2';
pt(631).size      = '[]';

pt(632).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory2';
pt(632).paramname = 'X0';
pt(632).class     = 'scalar';
pt(632).nrows     = 1;
pt(632).ncols     = 1;
pt(632).subsource = 'SS_DOUBLE';
pt(632).ndims     = '2';
pt(632).size      = '[]';

pt(633).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Compare';
pt(633).paramname = 'const';
pt(633).class     = 'scalar';
pt(633).nrows     = 1;
pt(633).ncols     = 1;
pt(633).subsource = 'SS_INT32';
pt(633).ndims     = '2';
pt(633).size      = '[]';

pt(634).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/MotorIdx';
pt(634).paramname = 'Value';
pt(634).class     = 'scalar';
pt(634).nrows     = 1;
pt(634).ncols     = 1;
pt(634).subsource = 'SS_DOUBLE';
pt(634).ndims     = '2';
pt(634).size      = '[]';

pt(635).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Memory';
pt(635).paramname = 'X0';
pt(635).class     = 'scalar';
pt(635).nrows     = 1;
pt(635).ncols     = 1;
pt(635).subsource = 'SS_DOUBLE';
pt(635).ndims     = '2';
pt(635).size      = '[]';

pt(636).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ';
pt(636).paramname = 'P1';
pt(636).class     = 'vector';
pt(636).nrows     = 1;
pt(636).ncols     = 41;
pt(636).subsource = 'SS_DOUBLE';
pt(636).ndims     = '2';
pt(636).size      = '[]';

pt(637).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ';
pt(637).paramname = 'P2';
pt(637).class     = 'scalar';
pt(637).nrows     = 1;
pt(637).ncols     = 1;
pt(637).subsource = 'SS_DOUBLE';
pt(637).ndims     = '2';
pt(637).size      = '[]';

pt(638).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ';
pt(638).paramname = 'P3';
pt(638).class     = 'scalar';
pt(638).nrows     = 1;
pt(638).ncols     = 1;
pt(638).subsource = 'SS_DOUBLE';
pt(638).ndims     = '2';
pt(638).size      = '[]';

pt(639).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ';
pt(639).paramname = 'P4';
pt(639).class     = 'scalar';
pt(639).nrows     = 1;
pt(639).ncols     = 1;
pt(639).subsource = 'SS_DOUBLE';
pt(639).ndims     = '2';
pt(639).size      = '[]';

pt(640).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ';
pt(640).paramname = 'P5';
pt(640).class     = 'scalar';
pt(640).nrows     = 1;
pt(640).ncols     = 1;
pt(640).subsource = 'SS_DOUBLE';
pt(640).ndims     = '2';
pt(640).size      = '[]';

pt(641).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ';
pt(641).paramname = 'P6';
pt(641).class     = 'scalar';
pt(641).nrows     = 1;
pt(641).ncols     = 1;
pt(641).subsource = 'SS_DOUBLE';
pt(641).ndims     = '2';
pt(641).size      = '[]';

pt(642).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ';
pt(642).paramname = 'P7';
pt(642).class     = 'scalar';
pt(642).nrows     = 1;
pt(642).ncols     = 1;
pt(642).subsource = 'SS_DOUBLE';
pt(642).ndims     = '2';
pt(642).size      = '[]';

pt(643).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Compare';
pt(643).paramname = 'const';
pt(643).class     = 'scalar';
pt(643).nrows     = 1;
pt(643).ncols     = 1;
pt(643).subsource = 'SS_INT32';
pt(643).ndims     = '2';
pt(643).size      = '[]';

pt(644).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/MotorIdx';
pt(644).paramname = 'Value';
pt(644).class     = 'scalar';
pt(644).nrows     = 1;
pt(644).ncols     = 1;
pt(644).subsource = 'SS_DOUBLE';
pt(644).ndims     = '2';
pt(644).size      = '[]';

pt(645).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Memory';
pt(645).paramname = 'X0';
pt(645).class     = 'scalar';
pt(645).nrows     = 1;
pt(645).ncols     = 1;
pt(645).subsource = 'SS_DOUBLE';
pt(645).ndims     = '2';
pt(645).size      = '[]';

pt(646).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ';
pt(646).paramname = 'P1';
pt(646).class     = 'vector';
pt(646).nrows     = 1;
pt(646).ncols     = 41;
pt(646).subsource = 'SS_DOUBLE';
pt(646).ndims     = '2';
pt(646).size      = '[]';

pt(647).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ';
pt(647).paramname = 'P2';
pt(647).class     = 'scalar';
pt(647).nrows     = 1;
pt(647).ncols     = 1;
pt(647).subsource = 'SS_DOUBLE';
pt(647).ndims     = '2';
pt(647).size      = '[]';

pt(648).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ';
pt(648).paramname = 'P3';
pt(648).class     = 'scalar';
pt(648).nrows     = 1;
pt(648).ncols     = 1;
pt(648).subsource = 'SS_DOUBLE';
pt(648).ndims     = '2';
pt(648).size      = '[]';

pt(649).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ';
pt(649).paramname = 'P4';
pt(649).class     = 'scalar';
pt(649).nrows     = 1;
pt(649).ncols     = 1;
pt(649).subsource = 'SS_DOUBLE';
pt(649).ndims     = '2';
pt(649).size      = '[]';

pt(650).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ';
pt(650).paramname = 'P5';
pt(650).class     = 'scalar';
pt(650).nrows     = 1;
pt(650).ncols     = 1;
pt(650).subsource = 'SS_DOUBLE';
pt(650).ndims     = '2';
pt(650).size      = '[]';

pt(651).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ';
pt(651).paramname = 'P6';
pt(651).class     = 'scalar';
pt(651).nrows     = 1;
pt(651).ncols     = 1;
pt(651).subsource = 'SS_DOUBLE';
pt(651).ndims     = '2';
pt(651).size      = '[]';

pt(652).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ';
pt(652).paramname = 'P7';
pt(652).class     = 'scalar';
pt(652).nrows     = 1;
pt(652).ncols     = 1;
pt(652).subsource = 'SS_DOUBLE';
pt(652).ndims     = '2';
pt(652).size      = '[]';

pt(653).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/Memory';
pt(653).paramname = 'X0';
pt(653).class     = 'scalar';
pt(653).nrows     = 1;
pt(653).ncols     = 1;
pt(653).subsource = 'SS_INT32';
pt(653).ndims     = '2';
pt(653).size      = '[]';

pt(654).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/Memory1';
pt(654).paramname = 'X0';
pt(654).class     = 'scalar';
pt(654).nrows     = 1;
pt(654).ncols     = 1;
pt(654).subsource = 'SS_INT32';
pt(654).ndims     = '2';
pt(654).size      = '[]';

pt(655).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/Memory';
pt(655).paramname = 'X0';
pt(655).class     = 'scalar';
pt(655).nrows     = 1;
pt(655).ncols     = 1;
pt(655).subsource = 'SS_INT32';
pt(655).ndims     = '2';
pt(655).size      = '[]';

pt(656).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/Memory1';
pt(656).paramname = 'X0';
pt(656).class     = 'scalar';
pt(656).nrows     = 1;
pt(656).ncols     = 1;
pt(656).subsource = 'SS_INT32';
pt(656).ndims     = '2';
pt(656).size      = '[]';

pt(657).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/readAddr';
pt(657).paramname = 'Value';
pt(657).class     = 'vector';
pt(657).nrows     = 1;
pt(657).ncols     = 3;
pt(657).subsource = 'SS_DOUBLE';
pt(657).ndims     = '2';
pt(657).size      = '[]';

pt(658).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Memory';
pt(658).paramname = 'X0';
pt(658).class     = 'scalar';
pt(658).nrows     = 1;
pt(658).ncols     = 1;
pt(658).subsource = 'SS_DOUBLE';
pt(658).ndims     = '2';
pt(658).size      = '[]';

pt(659).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/writeData';
pt(659).paramname = 'Value';
pt(659).class     = 'vector';
pt(659).nrows     = 1;
pt(659).ncols     = 5;
pt(659).subsource = 'SS_DOUBLE';
pt(659).ndims     = '2';
pt(659).size      = '[]';

pt(660).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/Memory';
pt(660).paramname = 'X0';
pt(660).class     = 'scalar';
pt(660).nrows     = 1;
pt(660).ncols     = 1;
pt(660).subsource = 'SS_INT32';
pt(660).ndims     = '2';
pt(660).size      = '[]';

pt(661).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory';
pt(661).paramname = 'X0';
pt(661).class     = 'scalar';
pt(661).nrows     = 1;
pt(661).ncols     = 1;
pt(661).subsource = 'SS_INT32';
pt(661).ndims     = '2';
pt(661).size      = '[]';

pt(662).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory1';
pt(662).paramname = 'X0';
pt(662).class     = 'scalar';
pt(662).nrows     = 1;
pt(662).ncols     = 1;
pt(662).subsource = 'SS_DOUBLE';
pt(662).ndims     = '2';
pt(662).size      = '[]';

pt(663).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory2';
pt(663).paramname = 'X0';
pt(663).class     = 'scalar';
pt(663).nrows     = 1;
pt(663).ncols     = 1;
pt(663).subsource = 'SS_DOUBLE';
pt(663).ndims     = '2';
pt(663).size      = '[]';

pt(664).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Increment Real World/FixPt Constant';
pt(664).paramname = 'Value';
pt(664).class     = 'scalar';
pt(664).nrows     = 1;
pt(664).ncols     = 1;
pt(664).subsource = 'SS_UINT32';
pt(664).ndims     = '2';
pt(664).size      = '[]';

pt(665).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Wrap To Zero/Constant';
pt(665).paramname = 'Value';
pt(665).class     = 'scalar';
pt(665).nrows     = 1;
pt(665).ncols     = 1;
pt(665).subsource = 'SS_UINT32';
pt(665).ndims     = '2';
pt(665).size      = '[]';

pt(666).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/update/create filtered velocities/2nd order butterworth, 4Khz, 10hz cutoff';
pt(666).paramname = 'Value';
pt(666).class     = 'vector';
pt(666).nrows     = 1;
pt(666).ncols     = 3;
pt(666).subsource = 'SS_DOUBLE';
pt(666).ndims     = '2';
pt(666).size      = '[]';

pt(667).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Constant';
pt(667).paramname = 'Value';
pt(667).class     = 'scalar';
pt(667).nrows     = 1;
pt(667).ncols     = 1;
pt(667).subsource = 'SS_UINT16';
pt(667).ndims     = '2';
pt(667).size      = '[]';

pt(668).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Constant1';
pt(668).paramname = 'Value';
pt(668).class     = 'scalar';
pt(668).nrows     = 1;
pt(668).ncols     = 1;
pt(668).subsource = 'SS_UINT32';
pt(668).ndims     = '2';
pt(668).size      = '[]';

pt(669).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Constant2';
pt(669).paramname = 'Value';
pt(669).class     = 'scalar';
pt(669).nrows     = 1;
pt(669).ncols     = 1;
pt(669).subsource = 'SS_UINT16';
pt(669).ndims     = '2';
pt(669).size      = '[]';

pt(670).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Constant3';
pt(670).paramname = 'Value';
pt(670).class     = 'scalar';
pt(670).nrows     = 1;
pt(670).ncols     = 1;
pt(670).subsource = 'SS_UINT16';
pt(670).ndims     = '2';
pt(670).size      = '[]';

pt(671).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Send';
pt(671).paramname = 'P1';
pt(671).class     = 'vector';
pt(671).nrows     = 1;
pt(671).ncols     = 12;
pt(671).subsource = 'SS_DOUBLE';
pt(671).ndims     = '2';
pt(671).size      = '[]';

pt(672).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Send';
pt(672).paramname = 'P2';
pt(672).class     = 'scalar';
pt(672).nrows     = 1;
pt(672).ncols     = 1;
pt(672).subsource = 'SS_DOUBLE';
pt(672).ndims     = '2';
pt(672).size      = '[]';

pt(673).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Send';
pt(673).paramname = 'P3';
pt(673).class     = 'scalar';
pt(673).nrows     = 1;
pt(673).ncols     = 1;
pt(673).subsource = 'SS_DOUBLE';
pt(673).ndims     = '2';
pt(673).size      = '[]';

pt(674).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Send';
pt(674).paramname = 'P4';
pt(674).class     = 'scalar';
pt(674).nrows     = 1;
pt(674).ncols     = 1;
pt(674).subsource = 'SS_DOUBLE';
pt(674).ndims     = '2';
pt(674).size      = '[]';

pt(675).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Send';
pt(675).paramname = 'P5';
pt(675).class     = 'scalar';
pt(675).nrows     = 1;
pt(675).ncols     = 1;
pt(675).subsource = 'SS_DOUBLE';
pt(675).ndims     = '2';
pt(675).size      = '[]';

pt(676).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Switch';
pt(676).paramname = 'Threshold';
pt(676).class     = 'scalar';
pt(676).nrows     = 1;
pt(676).ncols     = 1;
pt(676).subsource = 'SS_DOUBLE';
pt(676).ndims     = '2';
pt(676).size      = '[]';

pt(677).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Constant';
pt(677).paramname = 'Value';
pt(677).class     = 'scalar';
pt(677).nrows     = 1;
pt(677).ncols     = 1;
pt(677).subsource = 'SS_UINT16';
pt(677).ndims     = '2';
pt(677).size      = '[]';

pt(678).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Constant1';
pt(678).paramname = 'Value';
pt(678).class     = 'scalar';
pt(678).nrows     = 1;
pt(678).ncols     = 1;
pt(678).subsource = 'SS_UINT32';
pt(678).ndims     = '2';
pt(678).size      = '[]';

pt(679).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Constant2';
pt(679).paramname = 'Value';
pt(679).class     = 'scalar';
pt(679).nrows     = 1;
pt(679).ncols     = 1;
pt(679).subsource = 'SS_UINT16';
pt(679).ndims     = '2';
pt(679).size      = '[]';

pt(680).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Constant3';
pt(680).paramname = 'Value';
pt(680).class     = 'scalar';
pt(680).nrows     = 1;
pt(680).ncols     = 1;
pt(680).subsource = 'SS_UINT16';
pt(680).ndims     = '2';
pt(680).size      = '[]';

pt(681).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Send';
pt(681).paramname = 'P1';
pt(681).class     = 'vector';
pt(681).nrows     = 1;
pt(681).ncols     = 12;
pt(681).subsource = 'SS_DOUBLE';
pt(681).ndims     = '2';
pt(681).size      = '[]';

pt(682).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Send';
pt(682).paramname = 'P2';
pt(682).class     = 'scalar';
pt(682).nrows     = 1;
pt(682).ncols     = 1;
pt(682).subsource = 'SS_DOUBLE';
pt(682).ndims     = '2';
pt(682).size      = '[]';

pt(683).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Send';
pt(683).paramname = 'P3';
pt(683).class     = 'scalar';
pt(683).nrows     = 1;
pt(683).ncols     = 1;
pt(683).subsource = 'SS_DOUBLE';
pt(683).ndims     = '2';
pt(683).size      = '[]';

pt(684).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Send';
pt(684).paramname = 'P4';
pt(684).class     = 'scalar';
pt(684).nrows     = 1;
pt(684).ncols     = 1;
pt(684).subsource = 'SS_DOUBLE';
pt(684).ndims     = '2';
pt(684).size      = '[]';

pt(685).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Send';
pt(685).paramname = 'P5';
pt(685).class     = 'scalar';
pt(685).nrows     = 1;
pt(685).ncols     = 1;
pt(685).subsource = 'SS_DOUBLE';
pt(685).ndims     = '2';
pt(685).size      = '[]';

pt(686).blockname = 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Switch';
pt(686).paramname = 'Threshold';
pt(686).class     = 'scalar';
pt(686).nrows     = 1;
pt(686).ncols     = 1;
pt(686).subsource = 'SS_DOUBLE';
pt(686).ndims     = '2';
pt(686).size      = '[]';

pt(687).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM Read Offset';
pt(687).paramname = 'Value';
pt(687).class     = 'scalar';
pt(687).nrows     = 1;
pt(687).ncols     = 1;
pt(687).subsource = 'SS_DOUBLE';
pt(687).ndims     = '2';
pt(687).size      = '[]';

pt(688).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM WatchDog offset';
pt(688).paramname = 'Value';
pt(688).class     = 'scalar';
pt(688).nrows     = 1;
pt(688).ncols     = 1;
pt(688).subsource = 'SS_DOUBLE';
pt(688).ndims     = '2';
pt(688).size      = '[]';

pt(689).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM Write Offset';
pt(689).paramname = 'Value';
pt(689).class     = 'scalar';
pt(689).nrows     = 1;
pt(689).ncols     = 1;
pt(689).subsource = 'SS_DOUBLE';
pt(689).ndims     = '2';
pt(689).size      = '[]';

pt(690).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM Write Value';
pt(690).paramname = 'Value';
pt(690).class     = 'scalar';
pt(690).nrows     = 1;
pt(690).ncols     = 1;
pt(690).subsource = 'SS_DOUBLE';
pt(690).ndims     = '2';
pt(690).size      = '[]';

pt(691).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read Switch';
pt(691).paramname = 'Value';
pt(691).class     = 'scalar';
pt(691).nrows     = 1;
pt(691).ncols     = 1;
pt(691).subsource = 'SS_DOUBLE';
pt(691).ndims     = '2';
pt(691).size      = '[]';

pt(692).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read as UInt32';
pt(692).paramname = 'Value';
pt(692).class     = 'scalar';
pt(692).nrows     = 1;
pt(692).ncols     = 1;
pt(692).subsource = 'SS_DOUBLE';
pt(692).ndims     = '2';
pt(692).size      = '[]';

pt(693).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Write Switch';
pt(693).paramname = 'Value';
pt(693).class     = 'scalar';
pt(693).nrows     = 1;
pt(693).ncols     = 1;
pt(693).subsource = 'SS_DOUBLE';
pt(693).ndims     = '2';
pt(693).size      = '[]';

pt(694).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM Read Value';
pt(694).paramname = 'Gain';
pt(694).class     = 'scalar';
pt(694).nrows     = 1;
pt(694).ncols     = 1;
pt(694).subsource = 'SS_DOUBLE';
pt(694).ndims     = '2';
pt(694).size      = '[]';

pt(695).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Unit Delay';
pt(695).paramname = 'InitialCondition';
pt(695).class     = 'scalar';
pt(695).nrows     = 1;
pt(695).ncols     = 1;
pt(695).subsource = 'SS_DOUBLE';
pt(695).ndims     = '2';
pt(695).size      = '[]';

pt(696).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Unit Delay1';
pt(696).paramname = 'InitialCondition';
pt(696).class     = 'scalar';
pt(696).nrows     = 1;
pt(696).ncols     = 1;
pt(696).subsource = 'SS_DOUBLE';
pt(696).ndims     = '2';
pt(696).size      = '[]';

pt(697).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Wrap To Zero';
pt(697).paramname = 'Threshold';
pt(697).class     = 'scalar';
pt(697).nrows     = 1;
pt(697).ncols     = 1;
pt(697).subsource = 'SS_UINT32';
pt(697).ndims     = '2';
pt(697).size      = '[]';

pt(698).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Output';
pt(698).paramname = 'InitialCondition';
pt(698).class     = 'scalar';
pt(698).nrows     = 1;
pt(698).ncols     = 1;
pt(698).subsource = 'SS_UINT32';
pt(698).ndims     = '2';
pt(698).size      = '[]';

pt(699).blockname = 'DataLogging/Poll KINARM/createKINData/Counter Free-Running/Increment Real World/FixPt Constant';
pt(699).paramname = 'Value';
pt(699).class     = 'scalar';
pt(699).nrows     = 1;
pt(699).ncols     = 1;
pt(699).subsource = 'SS_UINT32';
pt(699).ndims     = '2';
pt(699).size      = '[]';

pt(700).blockname = 'DataLogging/Poll KINARM/createKINData/Counter Free-Running/Wrap To Zero/Constant';
pt(700).paramname = 'Value';
pt(700).class     = 'scalar';
pt(700).nrows     = 1;
pt(700).ncols     = 1;
pt(700).subsource = 'SS_UINT32';
pt(700).ndims     = '2';
pt(700).size      = '[]';

pt(701).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(701).paramname = 'P1';
pt(701).class     = 'vector';
pt(701).nrows     = 1;
pt(701).ncols     = 39;
pt(701).subsource = 'SS_DOUBLE';
pt(701).ndims     = '2';
pt(701).size      = '[]';

pt(702).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(702).paramname = 'P2';
pt(702).class     = 'scalar';
pt(702).nrows     = 1;
pt(702).ncols     = 1;
pt(702).subsource = 'SS_DOUBLE';
pt(702).ndims     = '2';
pt(702).size      = '[]';

pt(703).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(703).paramname = 'P3';
pt(703).class     = 'scalar';
pt(703).nrows     = 1;
pt(703).ncols     = 1;
pt(703).subsource = 'SS_DOUBLE';
pt(703).ndims     = '2';
pt(703).size      = '[]';

pt(704).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(704).paramname = 'P4';
pt(704).class     = 'scalar';
pt(704).nrows     = 1;
pt(704).ncols     = 1;
pt(704).subsource = 'SS_DOUBLE';
pt(704).ndims     = '2';
pt(704).size      = '[]';

pt(705).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(705).paramname = 'P5';
pt(705).class     = 'scalar';
pt(705).nrows     = 1;
pt(705).ncols     = 1;
pt(705).subsource = 'SS_DOUBLE';
pt(705).ndims     = '2';
pt(705).size      = '[]';

pt(706).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(706).paramname = 'P6';
pt(706).class     = 'scalar';
pt(706).nrows     = 1;
pt(706).ncols     = 1;
pt(706).subsource = 'SS_DOUBLE';
pt(706).ndims     = '2';
pt(706).size      = '[]';

pt(707).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(707).paramname = 'P7';
pt(707).class     = 'scalar';
pt(707).nrows     = 1;
pt(707).ncols     = 1;
pt(707).subsource = 'SS_DOUBLE';
pt(707).ndims     = '2';
pt(707).size      = '[]';

pt(708).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/driveID';
pt(708).paramname = 'Value';
pt(708).class     = 'scalar';
pt(708).nrows     = 1;
pt(708).ncols     = 1;
pt(708).subsource = 'SS_DOUBLE';
pt(708).ndims     = '2';
pt(708).size      = '[]';

pt(709).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(709).paramname = 'P1';
pt(709).class     = 'vector';
pt(709).nrows     = 1;
pt(709).ncols     = 39;
pt(709).subsource = 'SS_DOUBLE';
pt(709).ndims     = '2';
pt(709).size      = '[]';

pt(710).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(710).paramname = 'P2';
pt(710).class     = 'scalar';
pt(710).nrows     = 1;
pt(710).ncols     = 1;
pt(710).subsource = 'SS_DOUBLE';
pt(710).ndims     = '2';
pt(710).size      = '[]';

pt(711).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(711).paramname = 'P3';
pt(711).class     = 'scalar';
pt(711).nrows     = 1;
pt(711).ncols     = 1;
pt(711).subsource = 'SS_DOUBLE';
pt(711).ndims     = '2';
pt(711).size      = '[]';

pt(712).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(712).paramname = 'P4';
pt(712).class     = 'scalar';
pt(712).nrows     = 1;
pt(712).ncols     = 1;
pt(712).subsource = 'SS_DOUBLE';
pt(712).ndims     = '2';
pt(712).size      = '[]';

pt(713).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(713).paramname = 'P5';
pt(713).class     = 'scalar';
pt(713).nrows     = 1;
pt(713).ncols     = 1;
pt(713).subsource = 'SS_DOUBLE';
pt(713).ndims     = '2';
pt(713).size      = '[]';

pt(714).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(714).paramname = 'P6';
pt(714).class     = 'scalar';
pt(714).nrows     = 1;
pt(714).ncols     = 1;
pt(714).subsource = 'SS_DOUBLE';
pt(714).ndims     = '2';
pt(714).size      = '[]';

pt(715).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(715).paramname = 'P7';
pt(715).class     = 'scalar';
pt(715).nrows     = 1;
pt(715).ncols     = 1;
pt(715).subsource = 'SS_DOUBLE';
pt(715).ndims     = '2';
pt(715).size      = '[]';

pt(716).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/driveID';
pt(716).paramname = 'Value';
pt(716).class     = 'scalar';
pt(716).nrows     = 1;
pt(716).ncols     = 1;
pt(716).subsource = 'SS_DOUBLE';
pt(716).ndims     = '2';
pt(716).size      = '[]';

pt(717).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(717).paramname = 'P1';
pt(717).class     = 'vector';
pt(717).nrows     = 1;
pt(717).ncols     = 39;
pt(717).subsource = 'SS_DOUBLE';
pt(717).ndims     = '2';
pt(717).size      = '[]';

pt(718).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(718).paramname = 'P2';
pt(718).class     = 'scalar';
pt(718).nrows     = 1;
pt(718).ncols     = 1;
pt(718).subsource = 'SS_DOUBLE';
pt(718).ndims     = '2';
pt(718).size      = '[]';

pt(719).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(719).paramname = 'P3';
pt(719).class     = 'scalar';
pt(719).nrows     = 1;
pt(719).ncols     = 1;
pt(719).subsource = 'SS_DOUBLE';
pt(719).ndims     = '2';
pt(719).size      = '[]';

pt(720).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(720).paramname = 'P4';
pt(720).class     = 'scalar';
pt(720).nrows     = 1;
pt(720).ncols     = 1;
pt(720).subsource = 'SS_DOUBLE';
pt(720).ndims     = '2';
pt(720).size      = '[]';

pt(721).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(721).paramname = 'P5';
pt(721).class     = 'scalar';
pt(721).nrows     = 1;
pt(721).ncols     = 1;
pt(721).subsource = 'SS_DOUBLE';
pt(721).ndims     = '2';
pt(721).size      = '[]';

pt(722).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(722).paramname = 'P6';
pt(722).class     = 'scalar';
pt(722).nrows     = 1;
pt(722).ncols     = 1;
pt(722).subsource = 'SS_DOUBLE';
pt(722).ndims     = '2';
pt(722).size      = '[]';

pt(723).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive';
pt(723).paramname = 'P7';
pt(723).class     = 'scalar';
pt(723).nrows     = 1;
pt(723).ncols     = 1;
pt(723).subsource = 'SS_DOUBLE';
pt(723).ndims     = '2';
pt(723).size      = '[]';

pt(724).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/driveID';
pt(724).paramname = 'Value';
pt(724).class     = 'scalar';
pt(724).nrows     = 1;
pt(724).ncols     = 1;
pt(724).subsource = 'SS_DOUBLE';
pt(724).ndims     = '2';
pt(724).size      = '[]';

pt(725).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(725).paramname = 'P1';
pt(725).class     = 'vector';
pt(725).nrows     = 1;
pt(725).ncols     = 39;
pt(725).subsource = 'SS_DOUBLE';
pt(725).ndims     = '2';
pt(725).size      = '[]';

pt(726).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(726).paramname = 'P2';
pt(726).class     = 'scalar';
pt(726).nrows     = 1;
pt(726).ncols     = 1;
pt(726).subsource = 'SS_DOUBLE';
pt(726).ndims     = '2';
pt(726).size      = '[]';

pt(727).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(727).paramname = 'P3';
pt(727).class     = 'scalar';
pt(727).nrows     = 1;
pt(727).ncols     = 1;
pt(727).subsource = 'SS_DOUBLE';
pt(727).ndims     = '2';
pt(727).size      = '[]';

pt(728).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(728).paramname = 'P4';
pt(728).class     = 'scalar';
pt(728).nrows     = 1;
pt(728).ncols     = 1;
pt(728).subsource = 'SS_DOUBLE';
pt(728).ndims     = '2';
pt(728).size      = '[]';

pt(729).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(729).paramname = 'P5';
pt(729).class     = 'scalar';
pt(729).nrows     = 1;
pt(729).ncols     = 1;
pt(729).subsource = 'SS_DOUBLE';
pt(729).ndims     = '2';
pt(729).size      = '[]';

pt(730).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(730).paramname = 'P6';
pt(730).class     = 'scalar';
pt(730).nrows     = 1;
pt(730).ncols     = 1;
pt(730).subsource = 'SS_DOUBLE';
pt(730).ndims     = '2';
pt(730).size      = '[]';

pt(731).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive';
pt(731).paramname = 'P7';
pt(731).class     = 'scalar';
pt(731).nrows     = 1;
pt(731).ncols     = 1;
pt(731).subsource = 'SS_DOUBLE';
pt(731).ndims     = '2';
pt(731).size      = '[]';

pt(732).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/driveID';
pt(732).paramname = 'Value';
pt(732).class     = 'scalar';
pt(732).nrows     = 1;
pt(732).ncols     = 1;
pt(732).subsource = 'SS_DOUBLE';
pt(732).ndims     = '2';
pt(732).size      = '[]';

pt(733).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Wrap To Zero';
pt(733).paramname = 'Threshold';
pt(733).class     = 'scalar';
pt(733).nrows     = 1;
pt(733).ncols     = 1;
pt(733).subsource = 'SS_UINT16';
pt(733).ndims     = '2';
pt(733).size      = '[]';

pt(734).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Output';
pt(734).paramname = 'InitialCondition';
pt(734).class     = 'scalar';
pt(734).nrows     = 1;
pt(734).ncols     = 1;
pt(734).subsource = 'SS_UINT16';
pt(734).ndims     = '2';
pt(734).size      = '[]';

pt(735).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Increment Real World/FixPt Constant';
pt(735).paramname = 'Value';
pt(735).class     = 'scalar';
pt(735).nrows     = 1;
pt(735).ncols     = 1;
pt(735).subsource = 'SS_UINT32';
pt(735).ndims     = '2';
pt(735).size      = '[]';

pt(736).blockname = 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Wrap To Zero/Constant';
pt(736).paramname = 'Value';
pt(736).class     = 'scalar';
pt(736).nrows     = 1;
pt(736).ncols     = 1;
pt(736).subsource = 'SS_UINT32';
pt(736).ndims     = '2';
pt(736).size      = '[]';

pt(737).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Constant';
pt(737).paramname = 'Value';
pt(737).class     = 'scalar';
pt(737).nrows     = 1;
pt(737).ncols     = 1;
pt(737).subsource = 'SS_INT32';
pt(737).ndims     = '2';
pt(737).size      = '[]';

pt(738).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Constant1';
pt(738).paramname = 'Value';
pt(738).class     = 'scalar';
pt(738).nrows     = 1;
pt(738).ncols     = 1;
pt(738).subsource = 'SS_INT32';
pt(738).ndims     = '2';
pt(738).size      = '[]';

pt(739).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Memory';
pt(739).paramname = 'X0';
pt(739).class     = 'scalar';
pt(739).nrows     = 1;
pt(739).ncols     = 1;
pt(739).subsource = 'SS_UINT32';
pt(739).ndims     = '2';
pt(739).size      = '[]';

pt(740).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/Constant';
pt(740).paramname = 'Value';
pt(740).class     = 'scalar';
pt(740).nrows     = 1;
pt(740).ncols     = 1;
pt(740).subsource = 'SS_INT32';
pt(740).ndims     = '2';
pt(740).size      = '[]';

pt(741).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/Memory';
pt(741).paramname = 'X0';
pt(741).class     = 'scalar';
pt(741).nrows     = 1;
pt(741).ncols     = 1;
pt(741).subsource = 'SS_INT32';
pt(741).ndims     = '2';
pt(741).size      = '[]';

pt(742).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Constant';
pt(742).paramname = 'Value';
pt(742).class     = 'scalar';
pt(742).nrows     = 1;
pt(742).ncols     = 1;
pt(742).subsource = 'SS_UINT32';
pt(742).ndims     = '2';
pt(742).size      = '[]';

pt(743).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Constant1';
pt(743).paramname = 'Value';
pt(743).class     = 'scalar';
pt(743).nrows     = 1;
pt(743).ncols     = 1;
pt(743).subsource = 'SS_INT32';
pt(743).ndims     = '2';
pt(743).size      = '[]';

pt(744).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Memory';
pt(744).paramname = 'X0';
pt(744).class     = 'scalar';
pt(744).nrows     = 1;
pt(744).ncols     = 1;
pt(744).subsource = 'SS_DOUBLE';
pt(744).ndims     = '2';
pt(744).size      = '[]';

pt(745).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Constant';
pt(745).paramname = 'Value';
pt(745).class     = 'scalar';
pt(745).nrows     = 1;
pt(745).ncols     = 1;
pt(745).subsource = 'SS_INT32';
pt(745).ndims     = '2';
pt(745).size      = '[]';

pt(746).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Constant1';
pt(746).paramname = 'Value';
pt(746).class     = 'scalar';
pt(746).nrows     = 1;
pt(746).ncols     = 1;
pt(746).subsource = 'SS_INT32';
pt(746).ndims     = '2';
pt(746).size      = '[]';

pt(747).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Memory';
pt(747).paramname = 'X0';
pt(747).class     = 'scalar';
pt(747).nrows     = 1;
pt(747).ncols     = 1;
pt(747).subsource = 'SS_UINT32';
pt(747).ndims     = '2';
pt(747).size      = '[]';

pt(748).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/Constant';
pt(748).paramname = 'Value';
pt(748).class     = 'scalar';
pt(748).nrows     = 1;
pt(748).ncols     = 1;
pt(748).subsource = 'SS_INT32';
pt(748).ndims     = '2';
pt(748).size      = '[]';

pt(749).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/Memory';
pt(749).paramname = 'X0';
pt(749).class     = 'scalar';
pt(749).nrows     = 1;
pt(749).ncols     = 1;
pt(749).subsource = 'SS_INT32';
pt(749).ndims     = '2';
pt(749).size      = '[]';

pt(750).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Constant';
pt(750).paramname = 'Value';
pt(750).class     = 'scalar';
pt(750).nrows     = 1;
pt(750).ncols     = 1;
pt(750).subsource = 'SS_UINT32';
pt(750).ndims     = '2';
pt(750).size      = '[]';

pt(751).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Constant1';
pt(751).paramname = 'Value';
pt(751).class     = 'scalar';
pt(751).nrows     = 1;
pt(751).ncols     = 1;
pt(751).subsource = 'SS_INT32';
pt(751).ndims     = '2';
pt(751).size      = '[]';

pt(752).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Memory';
pt(752).paramname = 'X0';
pt(752).class     = 'scalar';
pt(752).nrows     = 1;
pt(752).ncols     = 1;
pt(752).subsource = 'SS_DOUBLE';
pt(752).ndims     = '2';
pt(752).size      = '[]';

pt(753).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Constant';
pt(753).paramname = 'Value';
pt(753).class     = 'scalar';
pt(753).nrows     = 1;
pt(753).ncols     = 1;
pt(753).subsource = 'SS_INT32';
pt(753).ndims     = '2';
pt(753).size      = '[]';

pt(754).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Constant1';
pt(754).paramname = 'Value';
pt(754).class     = 'scalar';
pt(754).nrows     = 1;
pt(754).ncols     = 1;
pt(754).subsource = 'SS_INT32';
pt(754).ndims     = '2';
pt(754).size      = '[]';

pt(755).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Memory';
pt(755).paramname = 'X0';
pt(755).class     = 'scalar';
pt(755).nrows     = 1;
pt(755).ncols     = 1;
pt(755).subsource = 'SS_UINT32';
pt(755).ndims     = '2';
pt(755).size      = '[]';

pt(756).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/Constant';
pt(756).paramname = 'Value';
pt(756).class     = 'scalar';
pt(756).nrows     = 1;
pt(756).ncols     = 1;
pt(756).subsource = 'SS_INT32';
pt(756).ndims     = '2';
pt(756).size      = '[]';

pt(757).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/Memory';
pt(757).paramname = 'X0';
pt(757).class     = 'scalar';
pt(757).nrows     = 1;
pt(757).ncols     = 1;
pt(757).subsource = 'SS_INT32';
pt(757).ndims     = '2';
pt(757).size      = '[]';

pt(758).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Constant';
pt(758).paramname = 'Value';
pt(758).class     = 'scalar';
pt(758).nrows     = 1;
pt(758).ncols     = 1;
pt(758).subsource = 'SS_UINT32';
pt(758).ndims     = '2';
pt(758).size      = '[]';

pt(759).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Constant1';
pt(759).paramname = 'Value';
pt(759).class     = 'scalar';
pt(759).nrows     = 1;
pt(759).ncols     = 1;
pt(759).subsource = 'SS_INT32';
pt(759).ndims     = '2';
pt(759).size      = '[]';

pt(760).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Memory';
pt(760).paramname = 'X0';
pt(760).class     = 'scalar';
pt(760).nrows     = 1;
pt(760).ncols     = 1;
pt(760).subsource = 'SS_DOUBLE';
pt(760).ndims     = '2';
pt(760).size      = '[]';

pt(761).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Constant';
pt(761).paramname = 'Value';
pt(761).class     = 'scalar';
pt(761).nrows     = 1;
pt(761).ncols     = 1;
pt(761).subsource = 'SS_INT32';
pt(761).ndims     = '2';
pt(761).size      = '[]';

pt(762).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Constant1';
pt(762).paramname = 'Value';
pt(762).class     = 'scalar';
pt(762).nrows     = 1;
pt(762).ncols     = 1;
pt(762).subsource = 'SS_INT32';
pt(762).ndims     = '2';
pt(762).size      = '[]';

pt(763).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Memory';
pt(763).paramname = 'X0';
pt(763).class     = 'scalar';
pt(763).nrows     = 1;
pt(763).ncols     = 1;
pt(763).subsource = 'SS_UINT32';
pt(763).ndims     = '2';
pt(763).size      = '[]';

pt(764).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/Constant';
pt(764).paramname = 'Value';
pt(764).class     = 'scalar';
pt(764).nrows     = 1;
pt(764).ncols     = 1;
pt(764).subsource = 'SS_INT32';
pt(764).ndims     = '2';
pt(764).size      = '[]';

pt(765).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/Memory';
pt(765).paramname = 'X0';
pt(765).class     = 'scalar';
pt(765).nrows     = 1;
pt(765).ncols     = 1;
pt(765).subsource = 'SS_INT32';
pt(765).ndims     = '2';
pt(765).size      = '[]';

pt(766).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Constant';
pt(766).paramname = 'Value';
pt(766).class     = 'scalar';
pt(766).nrows     = 1;
pt(766).ncols     = 1;
pt(766).subsource = 'SS_UINT32';
pt(766).ndims     = '2';
pt(766).size      = '[]';

pt(767).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Constant1';
pt(767).paramname = 'Value';
pt(767).class     = 'scalar';
pt(767).nrows     = 1;
pt(767).ncols     = 1;
pt(767).subsource = 'SS_INT32';
pt(767).ndims     = '2';
pt(767).size      = '[]';

pt(768).blockname = 'DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Memory';
pt(768).paramname = 'X0';
pt(768).class     = 'scalar';
pt(768).nrows     = 1;
pt(768).ncols     = 1;
pt(768).subsource = 'SS_DOUBLE';
pt(768).ndims     = '2';
pt(768).size      = '[]';

pt(769).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Increment Real World/FixPt Constant';
pt(769).paramname = 'Value';
pt(769).class     = 'scalar';
pt(769).nrows     = 1;
pt(769).ncols     = 1;
pt(769).subsource = 'SS_UINT16';
pt(769).ndims     = '2';
pt(769).size      = '[]';

pt(770).blockname = 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Wrap To Zero/Constant';
pt(770).paramname = 'Value';
pt(770).class     = 'scalar';
pt(770).nrows     = 1;
pt(770).ncols     = 1;
pt(770).subsource = 'SS_UINT16';
pt(770).ndims     = '2';
pt(770).size      = '[]';

function len = getlenPT
len = 770;

