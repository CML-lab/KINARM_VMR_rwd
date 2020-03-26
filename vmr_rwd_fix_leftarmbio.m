function bio=vmr_rwd_fix_leftarmbio
bio = [];
bio(1).blkName='Trial_Control/p1';
bio(1).sigName='logging_enable';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&vmr_rwd_fix_leftarm_B.logging_enable';
bio(1).ndims=2;
bio(1).size=[];

bio(getlenBIO) = bio(1);

bio(2).blkName='Trial_Control/p2';
bio(2).sigName='event_code';
bio(2).portIdx=1;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&vmr_rwd_fix_leftarm_B.event_code';
bio(2).ndims=2;
bio(2).size=[];


bio(3).blkName='Trial_Control/p3';
bio(3).sigName='targetA_row';
bio(3).portIdx=2;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&vmr_rwd_fix_leftarm_B.targetA_row';
bio(3).ndims=2;
bio(3).size=[];


bio(4).blkName='Trial_Control/p4';
bio(4).sigName='targetA_state';
bio(4).portIdx=3;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&vmr_rwd_fix_leftarm_B.targetA_state';
bio(4).ndims=2;
bio(4).size=[];


bio(5).blkName='Trial_Control/p5';
bio(5).sigName='targetB_row';
bio(5).portIdx=4;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&vmr_rwd_fix_leftarm_B.targetB_row';
bio(5).ndims=2;
bio(5).size=[];


bio(6).blkName='Trial_Control/p6';
bio(6).sigName='targetB_state';
bio(6).portIdx=5;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&vmr_rwd_fix_leftarm_B.targetB_state';
bio(6).ndims=2;
bio(6).size=[];


bio(7).blkName='Trial_Control/p7';
bio(7).sigName='reward_state';
bio(7).portIdx=6;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&vmr_rwd_fix_leftarm_B.reward_state';
bio(7).ndims=2;
bio(7).size=[];


bio(8).blkName='Trial_Control/p8';
bio(8).sigName='score';
bio(8).portIdx=7;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&vmr_rwd_fix_leftarm_B.score';
bio(8).ndims=2;
bio(8).size=[];


bio(9).blkName='Trial_Control/p9';
bio(9).sigName='reward';
bio(9).portIdx=8;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&vmr_rwd_fix_leftarm_B.reward';
bio(9).ndims=2;
bio(9).size=[];


bio(10).blkName='Trial_Control/p10';
bio(10).sigName='fdbk_text';
bio(10).portIdx=9;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&vmr_rwd_fix_leftarm_B.fdbk_text';
bio(10).ndims=2;
bio(10).size=[];


bio(11).blkName='Trial_Control/p11';
bio(11).sigName='instruct_num';
bio(11).portIdx=10;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&vmr_rwd_fix_leftarm_B.instruct_num';
bio(11).ndims=2;
bio(11).size=[];


bio(12).blkName='Trial_Control/p12';
bio(12).sigName='tone';
bio(12).portIdx=11;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&vmr_rwd_fix_leftarm_B.tone';
bio(12).ndims=2;
bio(12).size=[];


bio(13).blkName='Trial_Control/p13';
bio(13).sigName='rotation_on';
bio(13).portIdx=12;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&vmr_rwd_fix_leftarm_B.rotation_on';
bio(13).ndims=2;
bio(13).size=[];


bio(14).blkName='Trial_Control/p14';
bio(14).sigName='handvis_state';
bio(14).portIdx=13;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&vmr_rwd_fix_leftarm_B.handvis_state';
bio(14).ndims=2;
bio(14).size=[];


bio(15).blkName='Trial_Control/p15';
bio(15).sigName='do_clamp';
bio(15).portIdx=14;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&vmr_rwd_fix_leftarm_B.do_clamp';
bio(15).ndims=2;
bio(15).size=[];


bio(16).blkName='Trial_Control/p16';
bio(16).sigName='robot_enable_controller';
bio(16).portIdx=15;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&vmr_rwd_fix_leftarm_B.robot_enable_controller';
bio(16).ndims=2;
bio(16).size=[];


bio(17).blkName='Trial_Control/p17';
bio(17).sigName='e_ApplyNewRotation';
bio(17).portIdx=16;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&vmr_rwd_fix_leftarm_B.e_ApplyNewRotation';
bio(17).ndims=2;
bio(17).size=[];


bio(18).blkName='Trial_Control/p18';
bio(18).sigName='e_Trial_End';
bio(18).portIdx=17;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&vmr_rwd_fix_leftarm_B.e_Trial_End';
bio(18).ndims=2;
bio(18).size=[];


bio(19).blkName='Matrix Concatenation';
bio(19).sigName='';
bio(19).portIdx=0;
bio(19).dim=[7,70];
bio(19).sigWidth=490;
bio(19).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation_b[0]';
bio(19).ndims=2;
bio(19).size=[];


bio(20).blkName='Vector Concatenate';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[1,5];
bio(20).sigWidth=5;
bio(20).sigAddress='&vmr_rwd_fix_leftarm_B.VectorConcatenate[0]';
bio(20).ndims=2;
bio(20).size=[];


bio(21).blkName='Vector Concatenate1';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[2,1];
bio(21).sigWidth=2;
bio(21).sigAddress='&vmr_rwd_fix_leftarm_B.VectorConcatenate1[0]';
bio(21).ndims=2;
bio(21).size=[];


bio(22).blkName='Constant';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&vmr_rwd_fix_leftarm_B.Constant';
bio(22).ndims=2;
bio(22).size=[];


bio(23).blkName='Data Type Conversion';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[1,5];
bio(23).sigWidth=5;
bio(23).sigAddress='&vmr_rwd_fix_leftarm_B.VectorConcatenate[0]';
bio(23).ndims=2;
bio(23).size=[];


bio(24).blkName='Memory';
bio(24).sigName='';
bio(24).portIdx=0;
bio(24).dim=[2,2];
bio(24).sigWidth=4;
bio(24).sigAddress='&vmr_rwd_fix_leftarm_B.Memory[0]';
bio(24).ndims=2;
bio(24).size=[];


bio(25).blkName='Memory1';
bio(25).sigName='';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&vmr_rwd_fix_leftarm_B.Memory1';
bio(25).ndims=2;
bio(25).size=[];


bio(26).blkName='Reshape';
bio(26).sigName='';
bio(26).portIdx=0;
bio(26).dim=[4,1];
bio(26).sigWidth=4;
bio(26).sigAddress='&vmr_rwd_fix_leftarm_B.Reshape_k[0]';
bio(26).ndims=2;
bio(26).size=[];


bio(27).blkName='Selector2';
bio(27).sigName='';
bio(27).portIdx=0;
bio(27).dim=[1,70];
bio(27).sigWidth=70;
bio(27).sigAddress='&vmr_rwd_fix_leftarm_B.Selector2[0]';
bio(27).ndims=2;
bio(27).size=[];


bio(28).blkName='Compare To Constant/Compare';
bio(28).sigName='';
bio(28).portIdx=0;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_j';
bio(28).ndims=2;
bio(28).size=[];


bio(29).blkName='DataLogging/read Digital diag';
bio(29).sigName='';
bio(29).portIdx=0;
bio(29).dim=[4,1];
bio(29).sigWidth=4;
bio(29).sigAddress='&vmr_rwd_fix_leftarm_B.readDigitaldiag[0]';
bio(29).ndims=2;
bio(29).size=[];


bio(30).blkName='DataLogging/read status';
bio(30).sigName='';
bio(30).portIdx=0;
bio(30).dim=[8,1];
bio(30).sigWidth=8;
bio(30).sigAddress='&vmr_rwd_fix_leftarm_B.readstatus[0]';
bio(30).ndims=2;
bio(30).size=[];


bio(31).blkName='DataLogging/Memory';
bio(31).sigName='';
bio(31).portIdx=0;
bio(31).dim=[4,1];
bio(31).sigWidth=4;
bio(31).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_n[0]';
bio(31).ndims=2;
bio(31).size=[];


bio(32).blkName='DataLogging/Memory1';
bio(32).sigName='';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&vmr_rwd_fix_leftarm_B.Memory1_p';
bio(32).ndims=2;
bio(32).size=[];


bio(33).blkName='DataLogging/Rate Transition';
bio(33).sigName='';
bio(33).portIdx=0;
bio(33).dim=[1,18];
bio(33).sigWidth=18;
bio(33).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_d[0]';
bio(33).ndims=2;
bio(33).size=[];


bio(34).blkName='DataLogging/Rate Transition1';
bio(34).sigName='';
bio(34).portIdx=0;
bio(34).dim=[16,1];
bio(34).sigWidth=16;
bio(34).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition1_i[0]';
bio(34).ndims=2;
bio(34).size=[];


bio(35).blkName='DataLogging/Rate Transition2';
bio(35).sigName='';
bio(35).portIdx=0;
bio(35).dim=[2,1];
bio(35).sigWidth=2;
bio(35).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition2_ea[0]';
bio(35).ndims=2;
bio(35).size=[];


bio(36).blkName='DataLogging/AddTorques';
bio(36).sigName='';
bio(36).portIdx=0;
bio(36).dim=[4,1];
bio(36).sigWidth=4;
bio(36).sigAddress='&vmr_rwd_fix_leftarm_B.AddTorques[0]';
bio(36).ndims=2;
bio(36).size=[];


bio(37).blkName='DisplayInstruct/Abs';
bio(37).sigName='';
bio(37).portIdx=0;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&vmr_rwd_fix_leftarm_B.Abs';
bio(37).ndims=2;
bio(37).size=[];


bio(38).blkName='DisplayInstruct/Sign';
bio(38).sigName='';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&vmr_rwd_fix_leftarm_B.Sign';
bio(38).ndims=2;
bio(38).size=[];


bio(39).blkName='DisplayInstruct/Add';
bio(39).sigName='';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&vmr_rwd_fix_leftarm_B.Add';
bio(39).ndims=2;
bio(39).size=[];


bio(40).blkName='DisplayText/MATLAB Function';
bio(40).sigName='VCODE_mod';
bio(40).portIdx=0;
bio(40).dim=[1,70];
bio(40).sigWidth=70;
bio(40).sigAddress='&vmr_rwd_fix_leftarm_B.VCODE_mod[0]';
bio(40).ndims=2;
bio(40).size=[];


bio(41).blkName='DisplayText/Abs';
bio(41).sigName='';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&vmr_rwd_fix_leftarm_B.Abs_c';
bio(41).ndims=2;
bio(41).size=[];


bio(42).blkName='DisplayText/Data Type Conversion';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_j';
bio(42).ndims=2;
bio(42).size=[];


bio(43).blkName='DisplayText/Logical Operator';
bio(43).sigName='';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&vmr_rwd_fix_leftarm_B.LogicalOperator';
bio(43).ndims=2;
bio(43).size=[];


bio(44).blkName='DisplayText/Switch';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&vmr_rwd_fix_leftarm_B.Switch_h';
bio(44).ndims=2;
bio(44).size=[];


bio(45).blkName='GUI Control/Block Definitions';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[50,500];
bio(45).sigWidth=25000;
bio(45).sigAddress='&vmr_rwd_fix_leftarm_B.BlockDefinitions[0]';
bio(45).ndims=2;
bio(45).size=[];


bio(46).blkName='GUI Control/Block Sequence';
bio(46).sigName='';
bio(46).portIdx=0;
bio(46).dim=[1000,2];
bio(46).sigWidth=2000;
bio(46).sigAddress='&vmr_rwd_fix_leftarm_B.BlockSequence[0]';
bio(46).ndims=2;
bio(46).size=[];


bio(47).blkName='GUI Control/Library Patch Version';
bio(47).sigName='';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&vmr_rwd_fix_leftarm_B.LibraryPatchVersion';
bio(47).ndims=2;
bio(47).size=[];


bio(48).blkName='GUI Control/Library Version';
bio(48).sigName='';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&vmr_rwd_fix_leftarm_B.LibraryVersion';
bio(48).ndims=2;
bio(48).size=[];


bio(49).blkName='GUI Control/Load Table';
bio(49).sigName='';
bio(49).portIdx=0;
bio(49).dim=[20,20];
bio(49).sigWidth=400;
bio(49).sigAddress='&vmr_rwd_fix_leftarm_B.LoadTable[0]';
bio(49).ndims=2;
bio(49).size=[];


bio(50).blkName='GUI Control/Next Block';
bio(50).sigName='';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&vmr_rwd_fix_leftarm_B.NextBlock';
bio(50).ndims=2;
bio(50).size=[];


bio(51).blkName='GUI Control/Pause Type';
bio(51).sigName='';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&vmr_rwd_fix_leftarm_B.PauseType';
bio(51).ndims=2;
bio(51).size=[];


bio(52).blkName='GUI Control/Task Version';
bio(52).sigName='';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&vmr_rwd_fix_leftarm_B.TaskVersion';
bio(52).ndims=2;
bio(52).size=[];


bio(53).blkName='GUI Control/Task wide param';
bio(53).sigName='';
bio(53).portIdx=0;
bio(53).dim=[50,1];
bio(53).sigWidth=50;
bio(53).sigAddress='&vmr_rwd_fix_leftarm_B.Taskwideparam[0]';
bio(53).ndims=2;
bio(53).size=[];


bio(54).blkName='GUI Control/Use Task Protocol Block Sequence Flag';
bio(54).sigName='';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&vmr_rwd_fix_leftarm_B.UseTaskProtocolBlockSequenceFlag';
bio(54).ndims=2;
bio(54).size=[];


bio(55).blkName='GUI Control/dlm build time';
bio(55).sigName='';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&vmr_rwd_fix_leftarm_B.dlmbuildtime';
bio(55).ndims=2;
bio(55).size=[];


bio(56).blkName='GUI Control/frame_of_reference_center';
bio(56).sigName='';
bio(56).portIdx=0;
bio(56).dim=[2,1];
bio(56).sigWidth=2;
bio(56).sigAddress='&vmr_rwd_fix_leftarm_B.frame_of_reference_center[0]';
bio(56).ndims=2;
bio(56).size=[];


bio(57).blkName='GUI Control/xPC Version';
bio(57).sigName='';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&vmr_rwd_fix_leftarm_B.xPCVersion';
bio(57).ndims=2;
bio(57).size=[];


bio(58).blkName='GUI Control/Convert1';
bio(58).sigName='';
bio(58).portIdx=0;
bio(58).dim=[100,50];
bio(58).sigWidth=5000;
bio(58).sigAddress='&vmr_rwd_fix_leftarm_B.Convert1[0]';
bio(58).ndims=2;
bio(58).size=[];


bio(59).blkName='GUI Control/Convert10';
bio(59).sigName='';
bio(59).portIdx=0;
bio(59).dim=[1,2];
bio(59).sigWidth=2;
bio(59).sigAddress='&vmr_rwd_fix_leftarm_B.Convert10[0]';
bio(59).ndims=2;
bio(59).size=[];


bio(60).blkName='GUI Control/Convert11';
bio(60).sigName='';
bio(60).portIdx=0;
bio(60).dim=[5,2];
bio(60).sigWidth=10;
bio(60).sigAddress='&vmr_rwd_fix_leftarm_B.Convert11[0]';
bio(60).ndims=2;
bio(60).size=[];


bio(61).blkName='GUI Control/Convert12';
bio(61).sigName='';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&vmr_rwd_fix_leftarm_B.Convert12';
bio(61).ndims=2;
bio(61).size=[];


bio(62).blkName='GUI Control/Convert13';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[1,3];
bio(62).sigWidth=3;
bio(62).sigAddress='&vmr_rwd_fix_leftarm_B.Convert13[0]';
bio(62).ndims=2;
bio(62).size=[];


bio(63).blkName='GUI Control/Convert14';
bio(63).sigName='';
bio(63).portIdx=0;
bio(63).dim=[1,2];
bio(63).sigWidth=2;
bio(63).sigAddress='&vmr_rwd_fix_leftarm_B.Convert14[0]';
bio(63).ndims=2;
bio(63).size=[];


bio(64).blkName='GUI Control/Convert15';
bio(64).sigName='';
bio(64).portIdx=0;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&vmr_rwd_fix_leftarm_B.Convert15';
bio(64).ndims=2;
bio(64).size=[];


bio(65).blkName='GUI Control/Convert16';
bio(65).sigName='';
bio(65).portIdx=0;
bio(65).dim=[1,1];
bio(65).sigWidth=1;
bio(65).sigAddress='&vmr_rwd_fix_leftarm_B.Convert16';
bio(65).ndims=2;
bio(65).size=[];


bio(66).blkName='GUI Control/Convert17';
bio(66).sigName='';
bio(66).portIdx=0;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&vmr_rwd_fix_leftarm_B.Convert17';
bio(66).ndims=2;
bio(66).size=[];


bio(67).blkName='GUI Control/Convert18';
bio(67).sigName='';
bio(67).portIdx=0;
bio(67).dim=[1,1];
bio(67).sigWidth=1;
bio(67).sigAddress='&vmr_rwd_fix_leftarm_B.Convert18';
bio(67).ndims=2;
bio(67).size=[];


bio(68).blkName='GUI Control/Convert19';
bio(68).sigName='';
bio(68).portIdx=0;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&vmr_rwd_fix_leftarm_B.Convert19_b';
bio(68).ndims=2;
bio(68).size=[];


bio(69).blkName='GUI Control/Convert20';
bio(69).sigName='';
bio(69).portIdx=0;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&vmr_rwd_fix_leftarm_B.Convert20';
bio(69).ndims=2;
bio(69).size=[];


bio(70).blkName='GUI Control/Convert21';
bio(70).sigName='';
bio(70).portIdx=0;
bio(70).dim=[1,1];
bio(70).sigWidth=1;
bio(70).sigAddress='&vmr_rwd_fix_leftarm_B.Convert21';
bio(70).ndims=2;
bio(70).size=[];


bio(71).blkName='GUI Control/Convert22';
bio(71).sigName='';
bio(71).portIdx=0;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&vmr_rwd_fix_leftarm_B.Convert22';
bio(71).ndims=2;
bio(71).size=[];


bio(72).blkName='GUI Control/Convert23';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[1,1];
bio(72).sigWidth=1;
bio(72).sigAddress='&vmr_rwd_fix_leftarm_B.Convert23';
bio(72).ndims=2;
bio(72).size=[];


bio(73).blkName='GUI Control/Convert24';
bio(73).sigName='';
bio(73).portIdx=0;
bio(73).dim=[1,1];
bio(73).sigWidth=1;
bio(73).sigAddress='&vmr_rwd_fix_leftarm_B.Convert24';
bio(73).ndims=2;
bio(73).size=[];


bio(74).blkName='GUI Control/Convert25';
bio(74).sigName='';
bio(74).portIdx=0;
bio(74).dim=[1,1];
bio(74).sigWidth=1;
bio(74).sigAddress='&vmr_rwd_fix_leftarm_B.Convert25';
bio(74).ndims=2;
bio(74).size=[];


bio(75).blkName='GUI Control/Convert7';
bio(75).sigName='';
bio(75).portIdx=0;
bio(75).dim=[1,1];
bio(75).sigWidth=1;
bio(75).sigAddress='&vmr_rwd_fix_leftarm_B.Convert7';
bio(75).ndims=2;
bio(75).size=[];


bio(76).blkName='GUI Control/Convert8';
bio(76).sigName='';
bio(76).portIdx=0;
bio(76).dim=[1,1];
bio(76).sigWidth=1;
bio(76).sigAddress='&vmr_rwd_fix_leftarm_B.Convert8';
bio(76).ndims=2;
bio(76).size=[];


bio(77).blkName='GUI Control/Convert9';
bio(77).sigName='';
bio(77).portIdx=0;
bio(77).dim=[1,2];
bio(77).sigWidth=2;
bio(77).sigAddress='&vmr_rwd_fix_leftarm_B.Convert9[0]';
bio(77).ndims=2;
bio(77).size=[];


bio(78).blkName='GUI Control/MinMax';
bio(78).sigName='';
bio(78).portIdx=0;
bio(78).dim=[1,1];
bio(78).sigWidth=1;
bio(78).sigAddress='&vmr_rwd_fix_leftarm_B.MinMax';
bio(78).ndims=2;
bio(78).size=[];


bio(79).blkName='GUI Control/TP Selector';
bio(79).sigName='';
bio(79).portIdx=0;
bio(79).dim=[1,50];
bio(79).sigWidth=50;
bio(79).sigAddress='&vmr_rwd_fix_leftarm_B.TPSelector[0]';
bio(79).ndims=2;
bio(79).size=[];


bio(80).blkName='Hand_Feedback/FeedFwdArm';
bio(80).sigName='VCODES_out';
bio(80).portIdx=0;
bio(80).dim=[2,70];
bio(80).sigWidth=140;
bio(80).sigAddress='&vmr_rwd_fix_leftarm_B.VCODES_out[0]';
bio(80).ndims=2;
bio(80).size=[];


bio(81).blkName='Hand_Feedback/Matrix Concatenation';
bio(81).sigName='';
bio(81).portIdx=0;
bio(81).dim=[2,70];
bio(81).sigWidth=140;
bio(81).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation[0]';
bio(81).ndims=2;
bio(81).size=[];


bio(82).blkName='Hand_Feedback/Reshape';
bio(82).sigName='';
bio(82).portIdx=0;
bio(82).dim=[1,70];
bio(82).sigWidth=70;
bio(82).sigAddress='&vmr_rwd_fix_leftarm_B.Reshape[0]';
bio(82).ndims=2;
bio(82).size=[];


bio(83).blkName='Hand_Feedback/Reshape1';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[1,70];
bio(83).sigWidth=70;
bio(83).sigAddress='&vmr_rwd_fix_leftarm_B.Reshape1[0]';
bio(83).ndims=2;
bio(83).size=[];


bio(84).blkName='KINARM_DistanceBetweenTargets/Embedded MATLAB InsideTarget';
bio(84).sigName='distance';
bio(84).portIdx=0;
bio(84).dim=[32,32];
bio(84).sigWidth=1024;
bio(84).sigAddress='&vmr_rwd_fix_leftarm_B.distance_e[0]';
bio(84).ndims=2;
bio(84).size=[];


bio(85).blkName='KINARM_DistanceFromTarget/Embedded MATLAB InsideTarget';
bio(85).sigName='distance';
bio(85).portIdx=0;
bio(85).dim=[32,1];
bio(85).sigWidth=32;
bio(85).sigAddress='&vmr_rwd_fix_leftarm_B.distance[0]';
bio(85).ndims=2;
bio(85).size=[];


bio(86).blkName='KINARM_DistanceFromTarget/Embedded MATLAB WhichHand';
bio(86).sigName='hand';
bio(86).portIdx=0;
bio(86).dim=[1,1];
bio(86).sigWidth=1;
bio(86).sigAddress='&vmr_rwd_fix_leftarm_B.hand_k';
bio(86).ndims=2;
bio(86).size=[];


bio(87).blkName='KINARM_DistanceFromTarget/Multiport Switch';
bio(87).sigName='';
bio(87).portIdx=0;
bio(87).dim=[1,2];
bio(87).sigWidth=2;
bio(87).sigAddress='&vmr_rwd_fix_leftarm_B.MultiportSwitch[0]';
bio(87).ndims=2;
bio(87).size=[];


bio(88).blkName='KINARM_DistanceFromTarget/Arm1';
bio(88).sigName='';
bio(88).portIdx=0;
bio(88).dim=[1,2];
bio(88).sigWidth=2;
bio(88).sigAddress='&vmr_rwd_fix_leftarm_B.Arm1_j[0]';
bio(88).ndims=2;
bio(88).size=[];


bio(89).blkName='KINARM_DistanceFromTarget/Arm2';
bio(89).sigName='';
bio(89).portIdx=0;
bio(89).dim=[1,2];
bio(89).sigWidth=2;
bio(89).sigAddress='&vmr_rwd_fix_leftarm_B.Arm2_c[0]';
bio(89).ndims=2;
bio(89).size=[];


bio(90).blkName='KINARM_DistanceFromTarget/Dominant_Arm';
bio(90).sigName='';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&vmr_rwd_fix_leftarm_B.Dominant_Arm_j';
bio(90).ndims=2;
bio(90).size=[];


bio(91).blkName='KINARM_DistanceFromTarget/Hand_Pos';
bio(91).sigName='';
bio(91).portIdx=0;
bio(91).dim=[3,2];
bio(91).sigWidth=6;
bio(91).sigAddress='&vmr_rwd_fix_leftarm_B.Hand_Pos[0]';
bio(91).ndims=2;
bio(91).size=[];


bio(92).blkName='KINARM_Exo_Apply_Loads/Ramp_Up_Down';
bio(92).sigName='scaling';
bio(92).portIdx=0;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down.scaling';
bio(92).ndims=2;
bio(92).size=[];


bio(93).blkName='KINARM_Exo_Apply_Loads/Ramp_Up_Down1';
bio(93).sigName='scaling';
bio(93).portIdx=0;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down1.scaling';
bio(93).ndims=2;
bio(93).size=[];


bio(94).blkName='KINARM_Exo_Apply_Loads/Remove_NaNs_and_Inf';
bio(94).sigName='out';
bio(94).portIdx=0;
bio(94).dim=[4,1];
bio(94).sigWidth=4;
bio(94).sigAddress='&vmr_rwd_fix_leftarm_B.out_e[0]';
bio(94).ndims=2;
bio(94).size=[];


bio(95).blkName='KINARM_Exo_Apply_Loads/Remove_NaNs_and_Inf1';
bio(95).sigName='out';
bio(95).portIdx=0;
bio(95).dim=[1,4];
bio(95).sigWidth=4;
bio(95).sigAddress='&vmr_rwd_fix_leftarm_B.out[0]';
bio(95).ndims=2;
bio(95).size=[];


bio(96).blkName='KINARM_Exo_Apply_Loads/Torque_Cap';
bio(96).sigName='y';
bio(96).portIdx=0;
bio(96).dim=[1,4];
bio(96).sigWidth=4;
bio(96).sigAddress='&vmr_rwd_fix_leftarm_B.y[0]';
bio(96).ndims=2;
bio(96).size=[];


bio(97).blkName='KINARM_Exo_Apply_Loads/down_duration(ms)';
bio(97).sigName='';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&vmr_rwd_fix_leftarm_B.down_durationms';
bio(97).ndims=2;
bio(97).size=[];


bio(98).blkName='KINARM_Exo_Apply_Loads/up_duration(ms)';
bio(98).sigName='';
bio(98).portIdx=0;
bio(98).dim=[1,1];
bio(98).sigWidth=1;
bio(98).sigAddress='&vmr_rwd_fix_leftarm_B.up_durationms';
bio(98).ndims=2;
bio(98).size=[];


bio(99).blkName='KINARM_Exo_Apply_Loads/Data Type Conversion';
bio(99).sigName='';
bio(99).portIdx=0;
bio(99).dim=[1,1];
bio(99).sigWidth=1;
bio(99).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_a';
bio(99).ndims=2;
bio(99).size=[];


bio(100).blkName='KINARM_Exo_Apply_Loads/Data Type Conversion1';
bio(100).sigName='';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1';
bio(100).ndims=2;
bio(100).size=[];


bio(101).blkName='KINARM_Exo_Apply_Loads/Product';
bio(101).sigName='';
bio(101).portIdx=0;
bio(101).dim=[1,2];
bio(101).sigWidth=2;
bio(101).sigAddress='&vmr_rwd_fix_leftarm_B.Product[0]';
bio(101).ndims=2;
bio(101).size=[];


bio(102).blkName='KINARM_Exo_Apply_Loads/Product1';
bio(102).sigName='';
bio(102).portIdx=0;
bio(102).dim=[1,2];
bio(102).sigWidth=2;
bio(102).sigAddress='&vmr_rwd_fix_leftarm_B.Product1[0]';
bio(102).ndims=2;
bio(102).size=[];


bio(103).blkName='KINARM_Exo_Apply_Loads/Switch';
bio(103).sigName='';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&vmr_rwd_fix_leftarm_B.Switch_i';
bio(103).ndims=2;
bio(103).size=[];


bio(104).blkName='KINARM_HandFeedbackInTarget/Embedded MATLAB InsideTarget';
bio(104).sigName='intarget';
bio(104).portIdx=0;
bio(104).dim=[32,4];
bio(104).sigWidth=128;
bio(104).sigAddress='&vmr_rwd_fix_leftarm_B.intarget[0]';
bio(104).ndims=2;
bio(104).size=[];


bio(105).blkName='KINARM_HandFeedbackInTarget/Embedded MATLAB WhichHand/p1';
bio(105).sigName='hand';
bio(105).portIdx=0;
bio(105).dim=[1,1];
bio(105).sigWidth=1;
bio(105).sigAddress='&vmr_rwd_fix_leftarm_B.hand';
bio(105).ndims=2;
bio(105).size=[];


bio(106).blkName='KINARM_HandFeedbackInTarget/Embedded MATLAB WhichHand/p2';
bio(106).sigName='cursor';
bio(106).portIdx=1;
bio(106).dim=[1,1];
bio(106).sigWidth=1;
bio(106).sigAddress='&vmr_rwd_fix_leftarm_B.cursor';
bio(106).ndims=2;
bio(106).size=[];


bio(107).blkName='KINARM_HandFeedbackInTarget/Multiport Switch';
bio(107).sigName='';
bio(107).portIdx=0;
bio(107).dim=[1,2];
bio(107).sigWidth=2;
bio(107).sigAddress='&vmr_rwd_fix_leftarm_B.MultiportSwitch_p[0]';
bio(107).ndims=2;
bio(107).size=[];


bio(108).blkName='KINARM_HandFeedbackInTarget/Arm1';
bio(108).sigName='';
bio(108).portIdx=0;
bio(108).dim=[1,2];
bio(108).sigWidth=2;
bio(108).sigAddress='&vmr_rwd_fix_leftarm_B.Arm1[0]';
bio(108).ndims=2;
bio(108).size=[];


bio(109).blkName='KINARM_HandFeedbackInTarget/Arm2';
bio(109).sigName='';
bio(109).portIdx=0;
bio(109).dim=[1,2];
bio(109).sigWidth=2;
bio(109).sigAddress='&vmr_rwd_fix_leftarm_B.Arm2[0]';
bio(109).ndims=2;
bio(109).size=[];


bio(110).blkName='KINARM_HandFeedbackInTarget/Array Selector';
bio(110).sigName='';
bio(110).portIdx=0;
bio(110).dim=[32,1];
bio(110).sigWidth=32;
bio(110).sigAddress='&vmr_rwd_fix_leftarm_B.ArraySelector[0]';
bio(110).ndims=2;
bio(110).size=[];


bio(111).blkName='KINARM_HandFeedbackInTarget/Array_Selector1';
bio(111).sigName='';
bio(111).portIdx=0;
bio(111).dim=[1,2];
bio(111).sigWidth=2;
bio(111).sigAddress='&vmr_rwd_fix_leftarm_B.Array_Selector1[0]';
bio(111).ndims=2;
bio(111).size=[];


bio(112).blkName='KINARM_HandFeedbackInTarget/Dominant_Arm';
bio(112).sigName='';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&vmr_rwd_fix_leftarm_B.Dominant_Arm';
bio(112).ndims=2;
bio(112).size=[];


bio(113).blkName='KINARM_HandFeedbackInTarget/Hand_Pos';
bio(113).sigName='';
bio(113).portIdx=0;
bio(113).dim=[3,2];
bio(113).sigWidth=6;
bio(113).sigAddress='&vmr_rwd_fix_leftarm_B.Hand_Pos_j[0]';
bio(113).ndims=2;
bio(113).size=[];


bio(114).blkName='Play Sound/Play sound over and over/p1';
bio(114).sigName='output';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&vmr_rwd_fix_leftarm_B.output';
bio(114).ndims=2;
bio(114).size=[];


bio(115).blkName='Play Sound/Play sound over and over/p2';
bio(115).sigName='soundON';
bio(115).portIdx=1;
bio(115).dim=[1,1];
bio(115).sigWidth=1;
bio(115).sigAddress='&vmr_rwd_fix_leftarm_B.soundON';
bio(115).ndims=2;
bio(115).size=[];


bio(116).blkName='Process_Video_CMD/MATLAB Function/p1';
bio(116).sigName='last_frame_ack';
bio(116).portIdx=0;
bio(116).dim=[1,1];
bio(116).sigWidth=1;
bio(116).sigAddress='&vmr_rwd_fix_leftarm_B.last_frame_ack';
bio(116).ndims=2;
bio(116).size=[];


bio(117).blkName='Process_Video_CMD/MATLAB Function/p2';
bio(117).sigName='last_perm_ack';
bio(117).portIdx=1;
bio(117).dim=[1,1];
bio(117).sigWidth=1;
bio(117).sigAddress='&vmr_rwd_fix_leftarm_B.last_perm_ack';
bio(117).ndims=2;
bio(117).size=[];


bio(118).blkName='Process_Video_CMD/Matrix Concatenate';
bio(118).sigName='';
bio(118).portIdx=0;
bio(118).dim=[70,16];
bio(118).sigWidth=1120;
bio(118).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenate[0]';
bio(118).ndims=2;
bio(118).size=[];


bio(119).blkName='Process_Video_CMD/GUI_VCODE';
bio(119).sigName='';
bio(119).portIdx=0;
bio(119).dim=[70,16];
bio(119).sigWidth=1120;
bio(119).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenate[0]';
bio(119).ndims=2;
bio(119).size=[];


bio(120).blkName='Process_Video_CMD/Convert';
bio(120).sigName='';
bio(120).portIdx=0;
bio(120).dim=[1,1];
bio(120).sigWidth=1;
bio(120).sigAddress='&vmr_rwd_fix_leftarm_B.Convert';
bio(120).ndims=2;
bio(120).size=[];


bio(121).blkName='Process_Video_CMD/Convert1';
bio(121).sigName='';
bio(121).portIdx=0;
bio(121).dim=[1,1];
bio(121).sigWidth=1;
bio(121).sigAddress='&vmr_rwd_fix_leftarm_B.Convert1_m';
bio(121).ndims=2;
bio(121).size=[];


bio(122).blkName='Process_Video_CMD/Gain';
bio(122).sigName='';
bio(122).portIdx=0;
bio(122).dim=[1,1];
bio(122).sigWidth=1;
bio(122).sigAddress='&vmr_rwd_fix_leftarm_B.Gain';
bio(122).ndims=2;
bio(122).size=[];


bio(123).blkName='Process_Video_CMD/Memory';
bio(123).sigName='';
bio(123).portIdx=0;
bio(123).dim=[1,1];
bio(123).sigWidth=1;
bio(123).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_e';
bio(123).ndims=2;
bio(123).size=[];


bio(124).blkName='Process_Video_CMD/invert dim';
bio(124).sigName='';
bio(124).portIdx=0;
bio(124).dim=[70,16];
bio(124).sigWidth=1120;
bio(124).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenate[0]';
bio(124).ndims=2;
bio(124).size=[];


bio(125).blkName='Process_Video_CMD/Rate Transition2';
bio(125).sigName='';
bio(125).portIdx=0;
bio(125).dim=[7,70];
bio(125).sigWidth=490;
bio(125).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition2[0]';
bio(125).ndims=2;
bio(125).size=[];


bio(126).blkName='Process_Video_CMD/Receive/p1';
bio(126).sigName='';
bio(126).portIdx=0;
bio(126).dim=[4,1];
bio(126).sigWidth=4;
bio(126).sigAddress='&vmr_rwd_fix_leftarm_B.Receive_o1[0]';
bio(126).ndims=2;
bio(126).size=[];


bio(127).blkName='Process_Video_CMD/Receive/p2';
bio(127).sigName='';
bio(127).portIdx=1;
bio(127).dim=[1,1];
bio(127).sigWidth=1;
bio(127).sigAddress='&vmr_rwd_fix_leftarm_B.Receive_o2';
bio(127).ndims=2;
bio(127).size=[];


bio(128).blkName='Process_Video_CMD/Unpack';
bio(128).sigName='';
bio(128).portIdx=0;
bio(128).dim=[1,1];
bio(128).sigWidth=1;
bio(128).sigAddress='&vmr_rwd_fix_leftarm_B.Unpack_c';
bio(128).ndims=2;
bio(128).size=[];


bio(129).blkName='Show_Target/Embedded MATLAB Function';
bio(129).sigName='VCODE';
bio(129).portIdx=0;
bio(129).dim=[1,70];
bio(129).sigWidth=70;
bio(129).sigAddress='&vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_l.VCODE[0]';
bio(129).ndims=2;
bio(129).size=[];


bio(130).blkName='Show_Target/Matrix Concatenation';
bio(130).sigName='';
bio(130).portIdx=0;
bio(130).dim=[5,11];
bio(130).sigWidth=55;
bio(130).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1[0]';
bio(130).ndims=2;
bio(130).size=[];


bio(131).blkName='Show_Target/Matrix Concatenation1';
bio(131).sigName='';
bio(131).portIdx=0;
bio(131).dim=[5,11];
bio(131).sigWidth=55;
bio(131).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1[0]';
bio(131).ndims=2;
bio(131).size=[];


bio(132).blkName='Show_Target/padder';
bio(132).sigName='';
bio(132).portIdx=0;
bio(132).dim=[5,11];
bio(132).sigWidth=55;
bio(132).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1[0]';
bio(132).ndims=2;
bio(132).size=[];


bio(133).blkName='Show_Target/Selector';
bio(133).sigName='';
bio(133).portIdx=0;
bio(133).dim=[1,25];
bio(133).sigWidth=25;
bio(133).sigAddress='&vmr_rwd_fix_leftarm_B.Selector[0]';
bio(133).ndims=2;
bio(133).size=[];


bio(134).blkName='Show_Target1/Embedded MATLAB Function';
bio(134).sigName='VCODE';
bio(134).portIdx=0;
bio(134).dim=[1,70];
bio(134).sigWidth=70;
bio(134).sigAddress='&vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_p.VCODE[0]';
bio(134).ndims=2;
bio(134).size=[];


bio(135).blkName='Show_Target1/Matrix Concatenation';
bio(135).sigName='';
bio(135).portIdx=0;
bio(135).dim=[5,11];
bio(135).sigWidth=55;
bio(135).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_i[0]';
bio(135).ndims=2;
bio(135).size=[];


bio(136).blkName='Show_Target1/Matrix Concatenation1';
bio(136).sigName='';
bio(136).portIdx=0;
bio(136).dim=[5,11];
bio(136).sigWidth=55;
bio(136).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_i[0]';
bio(136).ndims=2;
bio(136).size=[];


bio(137).blkName='Show_Target1/padder';
bio(137).sigName='';
bio(137).portIdx=0;
bio(137).dim=[5,11];
bio(137).sigWidth=55;
bio(137).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_i[0]';
bio(137).ndims=2;
bio(137).size=[];


bio(138).blkName='Show_Target1/Selector';
bio(138).sigName='';
bio(138).portIdx=0;
bio(138).dim=[1,25];
bio(138).sigWidth=25;
bio(138).sigAddress='&vmr_rwd_fix_leftarm_B.Selector_b[0]';
bio(138).ndims=2;
bio(138).size=[];


bio(139).blkName='Subsystem/Chart/p1';
bio(139).sigName='force_scale';
bio(139).portIdx=0;
bio(139).dim=[1,1];
bio(139).sigWidth=1;
bio(139).sigAddress='&vmr_rwd_fix_leftarm_B.force_scale';
bio(139).ndims=2;
bio(139).size=[];


bio(140).blkName='Subsystem/Chart/p2';
bio(140).sigName='virtual_pos';
bio(140).portIdx=1;
bio(140).dim=[2,1];
bio(140).sigWidth=2;
bio(140).sigAddress='&vmr_rwd_fix_leftarm_B.virtual_pos[0]';
bio(140).ndims=2;
bio(140).size=[];


bio(141).blkName='Subsystem/Chart/p3';
bio(141).sigName='state';
bio(141).portIdx=2;
bio(141).dim=[1,1];
bio(141).sigWidth=1;
bio(141).sigAddress='&vmr_rwd_fix_leftarm_B.state';
bio(141).ndims=2;
bio(141).size=[];


bio(142).blkName='Subsystem/Chart/p4';
bio(142).sigName='reset_controller';
bio(142).portIdx=3;
bio(142).dim=[1,1];
bio(142).sigWidth=1;
bio(142).sigAddress='&vmr_rwd_fix_leftarm_B.reset_controller';
bio(142).ndims=2;
bio(142).size=[];


bio(143).blkName='Subsystem/MATLAB Function1';
bio(143).sigName='VCODE_MOD';
bio(143).portIdx=0;
bio(143).dim=[1,70];
bio(143).sigWidth=70;
bio(143).sigAddress='&vmr_rwd_fix_leftarm_B.VCODE_MOD[0]';
bio(143).ndims=2;
bio(143).size=[];


bio(144).blkName='Subsystem/Data Type Conversion';
bio(144).sigName='';
bio(144).portIdx=0;
bio(144).dim=[1,1];
bio(144).sigWidth=1;
bio(144).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_c';
bio(144).ndims=2;
bio(144).size=[];


bio(145).blkName='Subsystem/Data Type Conversion2';
bio(145).sigName='';
bio(145).portIdx=0;
bio(145).dim=[1,1];
bio(145).sigWidth=1;
bio(145).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_d';
bio(145).ndims=2;
bio(145).size=[];


bio(146).blkName='Subsystem/Logical Operator';
bio(146).sigName='';
bio(146).portIdx=0;
bio(146).dim=[1,1];
bio(146).sigWidth=1;
bio(146).sigAddress='&vmr_rwd_fix_leftarm_B.LogicalOperator_p';
bio(146).ndims=2;
bio(146).size=[];


bio(147).blkName='Subsystem/Product2';
bio(147).sigName='';
bio(147).portIdx=0;
bio(147).dim=[1,4];
bio(147).sigWidth=4;
bio(147).sigAddress='&vmr_rwd_fix_leftarm_B.Product2[0]';
bio(147).ndims=2;
bio(147).size=[];


bio(148).blkName='Subsystem/Switch';
bio(148).sigName='';
bio(148).portIdx=0;
bio(148).dim=[1,2];
bio(148).sigWidth=2;
bio(148).sigAddress='&vmr_rwd_fix_leftarm_B.Switch_o[0]';
bio(148).ndims=2;
bio(148).size=[];


bio(149).blkName='Visual_Rotation/Embedded MATLAB Function/p1';
bio(149).sigName='CursorPos';
bio(149).portIdx=0;
bio(149).dim=[2,2];
bio(149).sigWidth=4;
bio(149).sigAddress='&vmr_rwd_fix_leftarm_B.CursorPos_p[0]';
bio(149).ndims=2;
bio(149).size=[];


bio(150).blkName='Visual_Rotation/Embedded MATLAB Function/p2';
bio(150).sigName='VCODES';
bio(150).portIdx=1;
bio(150).dim=[2,70];
bio(150).sigWidth=140;
bio(150).sigAddress='&vmr_rwd_fix_leftarm_B.VCODES_k[0]';
bio(150).ndims=2;
bio(150).size=[];


bio(151).blkName='Visual_Rotation/Embedded MATLAB Function1/p1';
bio(151).sigName='VCODES';
bio(151).portIdx=0;
bio(151).dim=[2,70];
bio(151).sigWidth=140;
bio(151).sigAddress='&vmr_rwd_fix_leftarm_B.VCODES[0]';
bio(151).ndims=2;
bio(151).size=[];


bio(152).blkName='Visual_Rotation/Embedded MATLAB Function1/p2';
bio(152).sigName='CursorPos';
bio(152).portIdx=1;
bio(152).dim=[2,2];
bio(152).sigWidth=4;
bio(152).sigAddress='&vmr_rwd_fix_leftarm_B.CursorPos[0]';
bio(152).ndims=2;
bio(152).size=[];


bio(153).blkName='Visual_Rotation/MATLAB Function';
bio(153).sigName='VCODE';
bio(153).portIdx=0;
bio(153).dim=[2,70];
bio(153).sigWidth=140;
bio(153).sigAddress='&vmr_rwd_fix_leftarm_B.VCODE_n[0]';
bio(153).ndims=2;
bio(153).size=[];


bio(154).blkName='Visual_Rotation/MATLAB Function1/p1';
bio(154).sigName='cursstate';
bio(154).portIdx=0;
bio(154).dim=[1,1];
bio(154).sigWidth=1;
bio(154).sigAddress='&vmr_rwd_fix_leftarm_B.cursstate';
bio(154).ndims=2;
bio(154).size=[];


bio(155).blkName='Visual_Rotation/MATLAB Function1/p2';
bio(155).sigName='fbswitch';
bio(155).portIdx=1;
bio(155).dim=[1,1];
bio(155).sigWidth=1;
bio(155).sigAddress='&vmr_rwd_fix_leftarm_B.fbswitch';
bio(155).ndims=2;
bio(155).size=[];


bio(156).blkName='Visual_Rotation/MATLAB Function1/p3';
bio(156).sigName='ringstate';
bio(156).portIdx=2;
bio(156).dim=[1,1];
bio(156).sigWidth=1;
bio(156).sigAddress='&vmr_rwd_fix_leftarm_B.ringstate';
bio(156).ndims=2;
bio(156).size=[];


bio(157).blkName='Visual_Rotation/Memory';
bio(157).sigName='';
bio(157).portIdx=0;
bio(157).dim=[1,50];
bio(157).sigWidth=50;
bio(157).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_d[0]';
bio(157).ndims=2;
bio(157).size=[];


bio(158).blkName='Visual_Rotation/Memory1';
bio(158).sigName='';
bio(158).portIdx=0;
bio(158).dim=[1,1];
bio(158).sigWidth=1;
bio(158).sigAddress='&vmr_rwd_fix_leftarm_B.Memory1_m';
bio(158).ndims=2;
bio(158).size=[];


bio(159).blkName='Visual_Rotation/Memory2';
bio(159).sigName='';
bio(159).portIdx=0;
bio(159).dim=[1,1];
bio(159).sigWidth=1;
bio(159).sigAddress='&vmr_rwd_fix_leftarm_B.Memory2_a';
bio(159).ndims=2;
bio(159).size=[];


bio(160).blkName='Visual_Rotation/Subtract';
bio(160).sigName='';
bio(160).portIdx=0;
bio(160).dim=[1,1];
bio(160).sigWidth=1;
bio(160).sigAddress='&vmr_rwd_fix_leftarm_B.Subtract';
bio(160).ndims=2;
bio(160).size=[];


bio(161).blkName='Visual_Rotation/Switch';
bio(161).sigName='';
bio(161).portIdx=0;
bio(161).dim=[2,70];
bio(161).sigWidth=140;
bio(161).sigAddress='&vmr_rwd_fix_leftarm_B.Switch[0]';
bio(161).ndims=2;
bio(161).size=[];


bio(162).blkName='Visual_Rotation/Switch1';
bio(162).sigName='';
bio(162).portIdx=0;
bio(162).dim=[2,70];
bio(162).sigWidth=140;
bio(162).sigAddress='&vmr_rwd_fix_leftarm_B.Switch1_ot[0]';
bio(162).ndims=2;
bio(162).size=[];


bio(163).blkName='Visual_Rotation/Switch2';
bio(163).sigName='';
bio(163).portIdx=0;
bio(163).dim=[2,2];
bio(163).sigWidth=4;
bio(163).sigAddress='&vmr_rwd_fix_leftarm_B.Switch2[0]';
bio(163).ndims=2;
bio(163).size=[];


bio(164).blkName='DataLogging/Create Analog Inputs Subsystem/Analog Data';
bio(164).sigName='';
bio(164).portIdx=0;
bio(164).dim=[2,1];
bio(164).sigWidth=2;
bio(164).sigAddress='&vmr_rwd_fix_leftarm_B.AnalogData[0]';
bio(164).ndims=2;
bio(164).size=[];


bio(165).blkName='DataLogging/Create Analog Inputs Subsystem/Analog Data Width';
bio(165).sigName='';
bio(165).portIdx=0;
bio(165).dim=[1,1];
bio(165).sigWidth=1;
bio(165).sigAddress='&vmr_rwd_fix_leftarm_B.AnalogDataWidth';
bio(165).ndims=2;
bio(165).size=[];


bio(166).blkName='DataLogging/Create Analog Inputs Subsystem/Rate Transition';
bio(166).sigName='';
bio(166).portIdx=0;
bio(166).dim=[1,1];
bio(166).sigWidth=1;
bio(166).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_c';
bio(166).ndims=2;
bio(166).size=[];


bio(167).blkName='DataLogging/Create Analog Inputs Subsystem/Rate Transition1';
bio(167).sigName='';
bio(167).portIdx=0;
bio(167).dim=[2,1];
bio(167).sigWidth=2;
bio(167).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition1_c[0]';
bio(167).ndims=2;
bio(167).size=[];


bio(168).blkName='DataLogging/Create Analog Inputs Subsystem/Subtract';
bio(168).sigName='';
bio(168).portIdx=0;
bio(168).dim=[1,1];
bio(168).sigWidth=1;
bio(168).sigAddress='&vmr_rwd_fix_leftarm_B.Subtract_h';
bio(168).ndims=2;
bio(168).size=[];


bio(169).blkName='DataLogging/Create Analog Inputs Subsystem/Width';
bio(169).sigName='';
bio(169).portIdx=0;
bio(169).dim=[1,1];
bio(169).sigWidth=1;
bio(169).sigAddress='&vmr_rwd_fix_leftarm_ConstB.Width_a';
bio(169).ndims=2;
bio(169).size=[];


bio(170).blkName='DataLogging/Create Custom Data Subsystem/Custom Data1';
bio(170).sigName='';
bio(170).portIdx=0;
bio(170).dim=[1,10];
bio(170).sigWidth=10;
bio(170).sigAddress='&vmr_rwd_fix_leftarm_B.CustomData1[0]';
bio(170).ndims=2;
bio(170).size=[];


bio(171).blkName='DataLogging/Create Custom Data Subsystem/Rate Transition';
bio(171).sigName='';
bio(171).portIdx=0;
bio(171).dim=[1,4];
bio(171).sigWidth=4;
bio(171).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_b[0]';
bio(171).ndims=2;
bio(171).size=[];


bio(172).blkName='DataLogging/Create Custom Data Subsystem/Rate Transition1';
bio(172).sigName='';
bio(172).portIdx=0;
bio(172).dim=[1,1];
bio(172).sigWidth=1;
bio(172).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition1_b';
bio(172).ndims=2;
bio(172).size=[];


bio(173).blkName='DataLogging/Create Custom Data Subsystem/Rate Transition2';
bio(173).sigName='';
bio(173).portIdx=0;
bio(173).dim=[1,1];
bio(173).sigWidth=1;
bio(173).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition2_eo';
bio(173).ndims=2;
bio(173).size=[];


bio(174).blkName='DataLogging/Create Custom Data Subsystem/Width';
bio(174).sigName='';
bio(174).portIdx=0;
bio(174).dim=[1,1];
bio(174).sigWidth=1;
bio(174).sigAddress='&vmr_rwd_fix_leftarm_ConstB.Width_g';
bio(174).ndims=2;
bio(174).size=[];


bio(175).blkName='DataLogging/Create Event Codes Subsystem/Event Codes';
bio(175).sigName='';
bio(175).portIdx=0;
bio(175).dim=[1,1];
bio(175).sigWidth=1;
bio(175).sigAddress='&vmr_rwd_fix_leftarm_B.EventCodes';
bio(175).ndims=2;
bio(175).size=[];


bio(176).blkName='DataLogging/Create Event Codes Subsystem/Number of Event Codes';
bio(176).sigName='';
bio(176).portIdx=0;
bio(176).dim=[1,1];
bio(176).sigWidth=1;
bio(176).sigAddress='&vmr_rwd_fix_leftarm_B.NumberofEventCodes';
bio(176).ndims=2;
bio(176).size=[];


bio(177).blkName='DataLogging/Create Event Codes Subsystem/Subtract';
bio(177).sigName='';
bio(177).portIdx=0;
bio(177).dim=[1,1];
bio(177).sigWidth=1;
bio(177).sigAddress='&vmr_rwd_fix_leftarm_B.Subtract_g';
bio(177).ndims=2;
bio(177).size=[];


bio(178).blkName='DataLogging/Create Event Codes Subsystem/Width';
bio(178).sigName='';
bio(178).portIdx=0;
bio(178).dim=[1,1];
bio(178).sigWidth=1;
bio(178).sigAddress='&vmr_rwd_fix_leftarm_ConstB.Width_c';
bio(178).ndims=2;
bio(178).size=[];


bio(179).blkName='DataLogging/Create KINARM Data Subsystem/bitfield';
bio(179).sigName='bitfield';
bio(179).portIdx=0;
bio(179).dim=[1,1];
bio(179).sigWidth=1;
bio(179).sigAddress='&vmr_rwd_fix_leftarm_B.bitfield';
bio(179).ndims=2;
bio(179).size=[];


bio(180).blkName='DataLogging/Create KINARM Data Subsystem/Arm Kinematics';
bio(180).sigName='';
bio(180).portIdx=0;
bio(180).dim=[1,68];
bio(180).sigWidth=68;
bio(180).sigAddress='&vmr_rwd_fix_leftarm_B.ArmKinematics[0]';
bio(180).ndims=2;
bio(180).size=[];


bio(181).blkName='DataLogging/Create KINARM Data Subsystem/Kinarm Data Width';
bio(181).sigName='';
bio(181).portIdx=0;
bio(181).dim=[1,1];
bio(181).sigWidth=1;
bio(181).sigAddress='&vmr_rwd_fix_leftarm_B.KinarmDataWidth';
bio(181).ndims=2;
bio(181).size=[];


bio(182).blkName='DataLogging/Create KINARM Data Subsystem/touint';
bio(182).sigName='';
bio(182).portIdx=0;
bio(182).dim=[6,1];
bio(182).sigWidth=6;
bio(182).sigAddress='&vmr_rwd_fix_leftarm_B.touint[0]';
bio(182).ndims=2;
bio(182).size=[];


bio(183).blkName='DataLogging/Create KINARM Data Subsystem/touint1';
bio(183).sigName='';
bio(183).portIdx=0;
bio(183).dim=[1,1];
bio(183).sigWidth=1;
bio(183).sigAddress='&vmr_rwd_fix_leftarm_B.touint1';
bio(183).ndims=2;
bio(183).size=[];


bio(184).blkName='DataLogging/Create KINARM Data Subsystem/Rate Transition';
bio(184).sigName='';
bio(184).portIdx=0;
bio(184).dim=[1,40];
bio(184).sigWidth=40;
bio(184).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_k[0]';
bio(184).ndims=2;
bio(184).size=[];


bio(185).blkName='DataLogging/Create KINARM Data Subsystem/Rate Transition1';
bio(185).sigName='';
bio(185).portIdx=0;
bio(185).dim=[1,1];
bio(185).sigWidth=1;
bio(185).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition1_n';
bio(185).ndims=2;
bio(185).size=[];


bio(186).blkName='DataLogging/Create KINARM Data Subsystem/Rate Transition2';
bio(186).sigName='';
bio(186).portIdx=0;
bio(186).dim=[13,1];
bio(186).sigWidth=13;
bio(186).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition2_er[0]';
bio(186).ndims=2;
bio(186).size=[];


bio(187).blkName='DataLogging/Create KINARM Data Subsystem/Rate Transition3';
bio(187).sigName='';
bio(187).portIdx=0;
bio(187).dim=[14,1];
bio(187).sigWidth=14;
bio(187).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition3_n[0]';
bio(187).ndims=2;
bio(187).size=[];


bio(188).blkName='DataLogging/Create KINARM Data Subsystem/Width';
bio(188).sigName='';
bio(188).portIdx=0;
bio(188).dim=[1,1];
bio(188).sigWidth=1;
bio(188).sigAddress='&vmr_rwd_fix_leftarm_ConstB.Width_d';
bio(188).ndims=2;
bio(188).size=[];


bio(189).blkName='DataLogging/Create Task State Subsystem/Button Status';
bio(189).sigName='';
bio(189).portIdx=0;
bio(189).dim=[1,1];
bio(189).sigWidth=1;
bio(189).sigAddress='&vmr_rwd_fix_leftarm_B.ButtonStatus';
bio(189).ndims=2;
bio(189).size=[];


bio(190).blkName='DataLogging/Create Task State Subsystem/Current Block Index';
bio(190).sigName='';
bio(190).portIdx=0;
bio(190).dim=[1,1];
bio(190).sigWidth=1;
bio(190).sigAddress='&vmr_rwd_fix_leftarm_B.CurrentBlockIndex';
bio(190).ndims=2;
bio(190).size=[];


bio(191).blkName='DataLogging/Create Task State Subsystem/Current Block Number in Set';
bio(191).sigName='';
bio(191).portIdx=0;
bio(191).dim=[1,1];
bio(191).sigWidth=1;
bio(191).sigAddress='&vmr_rwd_fix_leftarm_B.CurrentBlockNumberinSet';
bio(191).ndims=2;
bio(191).size=[];


bio(192).blkName='DataLogging/Create Task State Subsystem/Current TP Index';
bio(192).sigName='';
bio(192).portIdx=0;
bio(192).dim=[1,1];
bio(192).sigWidth=1;
bio(192).sigAddress='&vmr_rwd_fix_leftarm_B.CurrentTPIndex';
bio(192).ndims=2;
bio(192).size=[];


bio(193).blkName='DataLogging/Create Task State Subsystem/Current Trial Number in Block';
bio(193).sigName='';
bio(193).portIdx=0;
bio(193).dim=[1,1];
bio(193).sigWidth=1;
bio(193).sigAddress='&vmr_rwd_fix_leftarm_B.CurrentTrialNumberinBlock';
bio(193).ndims=2;
bio(193).size=[];


bio(194).blkName='DataLogging/Create Task State Subsystem/Current Trial Number in Set';
bio(194).sigName='';
bio(194).portIdx=0;
bio(194).dim=[1,1];
bio(194).sigWidth=1;
bio(194).sigAddress='&vmr_rwd_fix_leftarm_B.CurrentTrialNumberinSet';
bio(194).ndims=2;
bio(194).size=[];


bio(195).blkName='DataLogging/Create Task State Subsystem/Last Frame Acknowledged';
bio(195).sigName='';
bio(195).portIdx=0;
bio(195).dim=[1,1];
bio(195).sigWidth=1;
bio(195).sigAddress='&vmr_rwd_fix_leftarm_B.LastFrameAcknowledged';
bio(195).ndims=2;
bio(195).size=[];


bio(196).blkName='DataLogging/Create Task State Subsystem/Last Frame Sent';
bio(196).sigName='';
bio(196).portIdx=0;
bio(196).dim=[1,1];
bio(196).sigWidth=1;
bio(196).sigAddress='&vmr_rwd_fix_leftarm_B.LastFrameSent';
bio(196).ndims=2;
bio(196).size=[];


bio(197).blkName='DataLogging/Create Task State Subsystem/Last Frame Sent1';
bio(197).sigName='';
bio(197).portIdx=0;
bio(197).dim=[1,1];
bio(197).sigWidth=1;
bio(197).sigAddress='&vmr_rwd_fix_leftarm_B.LastFrameSent1';
bio(197).ndims=2;
bio(197).size=[];


bio(198).blkName='DataLogging/Create Task State Subsystem/Logging Enable';
bio(198).sigName='';
bio(198).portIdx=0;
bio(198).dim=[1,1];
bio(198).sigWidth=1;
bio(198).sigAddress='&vmr_rwd_fix_leftarm_B.LoggingEnable';
bio(198).ndims=2;
bio(198).size=[];


bio(199).blkName='DataLogging/Create Task State Subsystem/Run Status';
bio(199).sigName='';
bio(199).portIdx=0;
bio(199).dim=[1,1];
bio(199).sigWidth=1;
bio(199).sigAddress='&vmr_rwd_fix_leftarm_B.RunStatus';
bio(199).ndims=2;
bio(199).size=[];


bio(200).blkName='DataLogging/Create Task State Subsystem/Servo update count';
bio(200).sigName='';
bio(200).portIdx=0;
bio(200).dim=[1,1];
bio(200).sigWidth=1;
bio(200).sigAddress='&vmr_rwd_fix_leftarm_B.Servoupdatecount';
bio(200).ndims=2;
bio(200).size=[];


bio(201).blkName='DataLogging/Create Task State Subsystem/Task Control Button';
bio(201).sigName='';
bio(201).portIdx=0;
bio(201).dim=[1,1];
bio(201).sigWidth=1;
bio(201).sigAddress='&vmr_rwd_fix_leftarm_B.TaskControlButton';
bio(201).ndims=2;
bio(201).size=[];


bio(202).blkName='DataLogging/Create Task State Subsystem/Timestamp';
bio(202).sigName='';
bio(202).portIdx=0;
bio(202).dim=[1,1];
bio(202).sigWidth=1;
bio(202).sigAddress='&vmr_rwd_fix_leftarm_B.Timestamp';
bio(202).ndims=2;
bio(202).size=[];


bio(203).blkName='DataLogging/Create Task State Subsystem/conv';
bio(203).sigName='';
bio(203).portIdx=0;
bio(203).dim=[1,1];
bio(203).sigWidth=1;
bio(203).sigAddress='&vmr_rwd_fix_leftarm_B.conv';
bio(203).ndims=2;
bio(203).size=[];


bio(204).blkName='DataLogging/Create Task State Subsystem/Product';
bio(204).sigName='';
bio(204).portIdx=0;
bio(204).dim=[1,1];
bio(204).sigWidth=1;
bio(204).sigAddress='&vmr_rwd_fix_leftarm_B.Product_g';
bio(204).ndims=2;
bio(204).size=[];


bio(205).blkName='DataLogging/Create Task State Subsystem/Rate Transition';
bio(205).sigName='';
bio(205).portIdx=0;
bio(205).dim=[1,1];
bio(205).sigWidth=1;
bio(205).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition';
bio(205).ndims=2;
bio(205).size=[];


bio(206).blkName='DataLogging/Create Task State Subsystem/Rate Transition1';
bio(206).sigName='';
bio(206).portIdx=0;
bio(206).dim=[1,1];
bio(206).sigWidth=1;
bio(206).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition1';
bio(206).ndims=2;
bio(206).size=[];


bio(207).blkName='DataLogging/Create Task State Subsystem/Rate Transition10';
bio(207).sigName='';
bio(207).portIdx=0;
bio(207).dim=[1,1];
bio(207).sigWidth=1;
bio(207).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition10';
bio(207).ndims=2;
bio(207).size=[];


bio(208).blkName='DataLogging/Create Task State Subsystem/Rate Transition11';
bio(208).sigName='';
bio(208).portIdx=0;
bio(208).dim=[1,1];
bio(208).sigWidth=1;
bio(208).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition11';
bio(208).ndims=2;
bio(208).size=[];


bio(209).blkName='DataLogging/Create Task State Subsystem/Rate Transition12';
bio(209).sigName='';
bio(209).portIdx=0;
bio(209).dim=[1,1];
bio(209).sigWidth=1;
bio(209).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition12';
bio(209).ndims=2;
bio(209).size=[];


bio(210).blkName='DataLogging/Create Task State Subsystem/Rate Transition2';
bio(210).sigName='';
bio(210).portIdx=0;
bio(210).dim=[1,1];
bio(210).sigWidth=1;
bio(210).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition2_e';
bio(210).ndims=2;
bio(210).size=[];


bio(211).blkName='DataLogging/Create Task State Subsystem/Rate Transition3';
bio(211).sigName='';
bio(211).portIdx=0;
bio(211).dim=[1,1];
bio(211).sigWidth=1;
bio(211).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition3';
bio(211).ndims=2;
bio(211).size=[];


bio(212).blkName='DataLogging/Create Task State Subsystem/Rate Transition4';
bio(212).sigName='';
bio(212).portIdx=0;
bio(212).dim=[1,1];
bio(212).sigWidth=1;
bio(212).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition4';
bio(212).ndims=2;
bio(212).size=[];


bio(213).blkName='DataLogging/Create Task State Subsystem/Rate Transition5';
bio(213).sigName='';
bio(213).portIdx=0;
bio(213).dim=[1,1];
bio(213).sigWidth=1;
bio(213).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition5';
bio(213).ndims=2;
bio(213).size=[];


bio(214).blkName='DataLogging/Create Task State Subsystem/Rate Transition6';
bio(214).sigName='';
bio(214).portIdx=0;
bio(214).dim=[1,1];
bio(214).sigWidth=1;
bio(214).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition6';
bio(214).ndims=2;
bio(214).size=[];


bio(215).blkName='DataLogging/Create Task State Subsystem/Rate Transition7';
bio(215).sigName='';
bio(215).portIdx=0;
bio(215).dim=[1,1];
bio(215).sigWidth=1;
bio(215).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition7';
bio(215).ndims=2;
bio(215).size=[];


bio(216).blkName='DataLogging/Create Task State Subsystem/Rate Transition8';
bio(216).sigName='';
bio(216).portIdx=0;
bio(216).dim=[1,1];
bio(216).sigWidth=1;
bio(216).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition8';
bio(216).ndims=2;
bio(216).size=[];


bio(217).blkName='DataLogging/Create Task State Subsystem/Rate Transition9';
bio(217).sigName='';
bio(217).portIdx=0;
bio(217).dim=[1,1];
bio(217).sigWidth=1;
bio(217).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition9';
bio(217).ndims=2;
bio(217).size=[];


bio(218).blkName='DataLogging/Create Task State Subsystem/Width';
bio(218).sigName='';
bio(218).portIdx=0;
bio(218).dim=[1,1];
bio(218).sigWidth=1;
bio(218).sigAddress='&vmr_rwd_fix_leftarm_ConstB.Width';
bio(218).ndims=2;
bio(218).size=[];


bio(219).blkName='DataLogging/Keep alive/Pack';
bio(219).sigName='';
bio(219).portIdx=0;
bio(219).dim=[40,1];
bio(219).sigWidth=40;
bio(219).sigAddress='&vmr_rwd_fix_leftarm_B.Pack_g[0]';
bio(219).ndims=2;
bio(219).size=[];


bio(220).blkName='DataLogging/Network Transfer Subsystem/Send Control Machine/p1';
bio(220).sigName='resetUDP';
bio(220).portIdx=0;
bio(220).dim=[1,1];
bio(220).sigWidth=1;
bio(220).sigAddress='&vmr_rwd_fix_leftarm_B.resetUDP';
bio(220).ndims=2;
bio(220).size=[];


bio(221).blkName='DataLogging/Network Transfer Subsystem/Send Control Machine/p2';
bio(221).sigName='data_out';
bio(221).portIdx=1;
bio(221).dim=[410,1];
bio(221).sigWidth=410;
bio(221).sigAddress='&vmr_rwd_fix_leftarm_B.data_out[0]';
bio(221).ndims=2;
bio(221).size=[];


bio(222).blkName='DataLogging/Network Transfer Subsystem/Send Control Machine/p3';
bio(222).sigName='queue_size';
bio(222).portIdx=2;
bio(222).dim=[1,1];
bio(222).sigWidth=1;
bio(222).sigAddress='&vmr_rwd_fix_leftarm_B.queue_size_e';
bio(222).ndims=2;
bio(222).size=[];


bio(223).blkName='DataLogging/Network Transfer Subsystem/Send Control Machine/p4';
bio(223).sigName='total_timeouts';
bio(223).portIdx=3;
bio(223).dim=[1,1];
bio(223).sigWidth=1;
bio(223).sigAddress='&vmr_rwd_fix_leftarm_B.total_timeouts';
bio(223).ndims=2;
bio(223).size=[];


bio(224).blkName='DataLogging/Network Transfer Subsystem/force strobe';
bio(224).sigName='strobe_out';
bio(224).portIdx=0;
bio(224).dim=[1,1];
bio(224).sigWidth=1;
bio(224).sigAddress='&vmr_rwd_fix_leftarm_B.strobe_out';
bio(224).ndims=2;
bio(224).size=[];


bio(225).blkName='DataLogging/Network Transfer Subsystem/max_packet_id';
bio(225).sigName='';
bio(225).portIdx=0;
bio(225).dim=[1,1];
bio(225).sigWidth=1;
bio(225).sigAddress='&vmr_rwd_fix_leftarm_B.max_packet_id';
bio(225).ndims=2;
bio(225).size=[];


bio(226).blkName='DataLogging/Network Transfer Subsystem/Data Type Conversion2';
bio(226).sigName='';
bio(226).portIdx=0;
bio(226).dim=[1,1];
bio(226).sigWidth=1;
bio(226).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_k';
bio(226).ndims=2;
bio(226).size=[];


bio(227).blkName='DataLogging/Network Transfer Subsystem/Queue Size';
bio(227).sigName='queue_size';
bio(227).portIdx=0;
bio(227).dim=[1,1];
bio(227).sigWidth=1;
bio(227).sigAddress='&vmr_rwd_fix_leftarm_B.queue_size';
bio(227).ndims=2;
bio(227).size=[];


bio(228).blkName='DataLogging/Network Transfer Subsystem/Total Timeouts';
bio(228).sigName='timeouts';
bio(228).portIdx=0;
bio(228).dim=[1,1];
bio(228).sigWidth=1;
bio(228).sigAddress='&vmr_rwd_fix_leftarm_B.timeouts';
bio(228).ndims=2;
bio(228).size=[];


bio(229).blkName='DataLogging/Network Transfer Subsystem/Task Clock';
bio(229).sigName='';
bio(229).portIdx=0;
bio(229).dim=[1,1];
bio(229).sigWidth=1;
bio(229).sigAddress='&vmr_rwd_fix_leftarm_B.TaskClock_a';
bio(229).ndims=2;
bio(229).size=[];


bio(230).blkName='DataLogging/Poll Force Plates/Convert1';
bio(230).sigName='';
bio(230).portIdx=0;
bio(230).dim=[34,1];
bio(230).sigWidth=34;
bio(230).sigAddress='&vmr_rwd_fix_leftarm_B.Convert1_c[0]';
bio(230).ndims=2;
bio(230).size=[];


bio(231).blkName='DataLogging/Poll Force Plates/Convert19';
bio(231).sigName='';
bio(231).portIdx=0;
bio(231).dim=[14,1];
bio(231).sigWidth=14;
bio(231).sigAddress='&vmr_rwd_fix_leftarm_B.Convert19_e[0]';
bio(231).ndims=2;
bio(231).size=[];


bio(232).blkName='DataLogging/Poll Force Plates/Rate Transition';
bio(232).sigName='';
bio(232).portIdx=0;
bio(232).dim=[1,1];
bio(232).sigWidth=1;
bio(232).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_g';
bio(232).ndims=2;
bio(232).size=[];


bio(233).blkName='DataLogging/Poll Force Plates/Rate Transition1';
bio(233).sigName='';
bio(233).portIdx=0;
bio(233).dim=[1,1];
bio(233).sigWidth=1;
bio(233).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition1_h';
bio(233).ndims=2;
bio(233).size=[];


bio(234).blkName='DataLogging/Poll KINARM/system type';
bio(234).sigName='';
bio(234).portIdx=0;
bio(234).dim=[1,1];
bio(234).sigWidth=1;
bio(234).sigAddress='&vmr_rwd_fix_leftarm_B.systemtype';
bio(234).ndims=2;
bio(234).size=[];


bio(235).blkName='DataLogging/Poll KINARM/Read HasFT';
bio(235).sigName='';
bio(235).portIdx=0;
bio(235).dim=[2,1];
bio(235).sigWidth=2;
bio(235).sigAddress='&vmr_rwd_fix_leftarm_B.ReadHasFT[0]';
bio(235).ndims=2;
bio(235).size=[];


bio(236).blkName='DataLogging/Receive_Gaze/Create timestamp/p1';
bio(236).sigName='timestamp_out';
bio(236).portIdx=0;
bio(236).dim=[1,1];
bio(236).sigWidth=1;
bio(236).sigAddress='&vmr_rwd_fix_leftarm_B.timestamp_out';
bio(236).ndims=2;
bio(236).size=[];


bio(237).blkName='DataLogging/Receive_Gaze/Create timestamp/p2';
bio(237).sigName='start_time_out';
bio(237).portIdx=1;
bio(237).dim=[1,1];
bio(237).sigWidth=1;
bio(237).sigAddress='&vmr_rwd_fix_leftarm_B.start_time_out';
bio(237).ndims=2;
bio(237).size=[];


bio(238).blkName='DataLogging/Receive_Gaze/Embedded MATLAB Function1/p1';
bio(238).sigName='gazeXYCalculated';
bio(238).portIdx=0;
bio(238).dim=[2,1];
bio(238).sigWidth=2;
bio(238).sigAddress='&vmr_rwd_fix_leftarm_B.gazeXYCalculated[0]';
bio(238).ndims=2;
bio(238).size=[];


bio(239).blkName='DataLogging/Receive_Gaze/Embedded MATLAB Function1/p2';
bio(239).sigName='pupil_area_GLOBAL';
bio(239).portIdx=1;
bio(239).dim=[1,1];
bio(239).sigWidth=1;
bio(239).sigAddress='&vmr_rwd_fix_leftarm_B.pupil_area_GLOBAL';
bio(239).ndims=2;
bio(239).size=[];


bio(240).blkName='DataLogging/Receive_Gaze/Embedded MATLAB Function1/p3';
bio(240).sigName='gaze_unit_vector_GLOBAL';
bio(240).portIdx=2;
bio(240).dim=[3,1];
bio(240).sigWidth=3;
bio(240).sigAddress='&vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0]';
bio(240).ndims=2;
bio(240).size=[];


bio(241).blkName='DataLogging/Receive_Gaze/Embedded MATLAB Function1/p4';
bio(241).sigName='pupil_GLOBAL';
bio(241).portIdx=3;
bio(241).dim=[3,1];
bio(241).sigWidth=3;
bio(241).sigAddress='&vmr_rwd_fix_leftarm_B.pupil_GLOBAL[0]';
bio(241).ndims=2;
bio(241).size=[];


bio(242).blkName='DataLogging/Receive_Gaze/clean_packet/p1';
bio(242).sigName='pack_out';
bio(242).portIdx=0;
bio(242).dim=[512,1];
bio(242).sigWidth=512;
bio(242).sigAddress='&vmr_rwd_fix_leftarm_B.pack_out[0]';
bio(242).ndims=2;
bio(242).size=[];


bio(243).blkName='DataLogging/Receive_Gaze/clean_packet/p2';
bio(243).sigName='len_out';
bio(243).portIdx=1;
bio(243).dim=[1,1];
bio(243).sigWidth=1;
bio(243).sigAddress='&vmr_rwd_fix_leftarm_B.len_out';
bio(243).ndims=2;
bio(243).size=[];


bio(244).blkName='DataLogging/Receive_Gaze/convert to seconds2';
bio(244).sigName='event_data_out';
bio(244).portIdx=0;
bio(244).dim=[3,1];
bio(244).sigWidth=3;
bio(244).sigAddress='&vmr_rwd_fix_leftarm_B.event_data_out[0]';
bio(244).ndims=2;
bio(244).size=[];


bio(245).blkName='DataLogging/Receive_Gaze/Convert1';
bio(245).sigName='';
bio(245).portIdx=0;
bio(245).dim=[1,1];
bio(245).sigWidth=1;
bio(245).sigAddress='&vmr_rwd_fix_leftarm_B.Convert1_p';
bio(245).ndims=2;
bio(245).size=[];


bio(246).blkName='DataLogging/Receive_Gaze/Convert19';
bio(246).sigName='';
bio(246).portIdx=0;
bio(246).dim=[3,1];
bio(246).sigWidth=3;
bio(246).sigAddress='&vmr_rwd_fix_leftarm_B.Convert19[0]';
bio(246).ndims=2;
bio(246).size=[];


bio(247).blkName='DataLogging/Receive_Gaze/Convert2';
bio(247).sigName='';
bio(247).portIdx=0;
bio(247).dim=[3,1];
bio(247).sigWidth=3;
bio(247).sigAddress='&vmr_rwd_fix_leftarm_B.Convert2[0]';
bio(247).ndims=2;
bio(247).size=[];


bio(248).blkName='DataLogging/Receive_Gaze/Convert3';
bio(248).sigName='';
bio(248).portIdx=0;
bio(248).dim=[1,1];
bio(248).sigWidth=1;
bio(248).sigAddress='&vmr_rwd_fix_leftarm_B.Convert3';
bio(248).ndims=2;
bio(248).size=[];


bio(249).blkName='DataLogging/Receive_Gaze/Convert4';
bio(249).sigName='';
bio(249).portIdx=0;
bio(249).dim=[3,1];
bio(249).sigWidth=3;
bio(249).sigAddress='&vmr_rwd_fix_leftarm_B.Convert4[0]';
bio(249).ndims=2;
bio(249).size=[];


bio(250).blkName='DataLogging/Receive_Gaze/Data Type Conversion';
bio(250).sigName='';
bio(250).portIdx=0;
bio(250).dim=[1,1];
bio(250).sigWidth=1;
bio(250).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_i';
bio(250).ndims=2;
bio(250).size=[];


bio(251).blkName='DataLogging/Receive_Gaze/Data Type Conversion1';
bio(251).sigName='';
bio(251).portIdx=0;
bio(251).dim=[3,1];
bio(251).sigWidth=3;
bio(251).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_l[0]';
bio(251).ndims=2;
bio(251).size=[];


bio(252).blkName='DataLogging/Receive_Gaze/Data Type Conversion3';
bio(252).sigName='';
bio(252).portIdx=0;
bio(252).dim=[1,4];
bio(252).sigWidth=4;
bio(252).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion3[0]';
bio(252).ndims=2;
bio(252).size=[];


bio(253).blkName='DataLogging/Receive_Gaze/Data Type Conversion4';
bio(253).sigName='';
bio(253).portIdx=0;
bio(253).dim=[1,1];
bio(253).sigWidth=1;
bio(253).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion4';
bio(253).ndims=2;
bio(253).size=[];


bio(254).blkName='DataLogging/Receive_Gaze/Data Type Conversion5';
bio(254).sigName='';
bio(254).portIdx=0;
bio(254).dim=[1,1];
bio(254).sigWidth=1;
bio(254).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion5';
bio(254).ndims=2;
bio(254).size=[];


bio(255).blkName='DataLogging/Receive_Gaze/convert';
bio(255).sigName='';
bio(255).portIdx=0;
bio(255).dim=[1,1];
bio(255).sigWidth=1;
bio(255).sigAddress='&vmr_rwd_fix_leftarm_B.convert_bp';
bio(255).ndims=2;
bio(255).size=[];


bio(256).blkName='DataLogging/Receive_Gaze/Gain';
bio(256).sigName='';
bio(256).portIdx=0;
bio(256).dim=[3,1];
bio(256).sigWidth=3;
bio(256).sigAddress='&vmr_rwd_fix_leftarm_B.Gain_b[0]';
bio(256).ndims=2;
bio(256).size=[];


bio(257).blkName='DataLogging/Receive_Gaze/Rate Transition';
bio(257).sigName='';
bio(257).portIdx=0;
bio(257).dim=[3,1];
bio(257).sigWidth=3;
bio(257).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_kg[0]';
bio(257).ndims=2;
bio(257).size=[];


bio(258).blkName='DataLogging/Receive_Gaze/Reshape';
bio(258).sigName='';
bio(258).portIdx=0;
bio(258).dim=[2,4];
bio(258).sigWidth=8;
bio(258).sigAddress='&vmr_rwd_fix_leftarm_B.Reshape_i[0]';
bio(258).ndims=2;
bio(258).size=[];


bio(259).blkName='DataLogging/Receive_Gaze/Selector - Left Eye';
bio(259).sigName='';
bio(259).portIdx=0;
bio(259).dim=[1,4];
bio(259).sigWidth=4;
bio(259).sigAddress='&vmr_rwd_fix_leftarm_B.SelectorLeftEye[0]';
bio(259).ndims=2;
bio(259).size=[];


bio(260).blkName='DataLogging/Receive_Gaze/Receive/p1';
bio(260).sigName='';
bio(260).portIdx=0;
bio(260).dim=[512,1];
bio(260).sigWidth=512;
bio(260).sigAddress='&vmr_rwd_fix_leftarm_B.Receive_o1_i[0]';
bio(260).ndims=2;
bio(260).size=[];


bio(261).blkName='DataLogging/Receive_Gaze/Receive/p2';
bio(261).sigName='';
bio(261).portIdx=1;
bio(261).dim=[1,1];
bio(261).sigWidth=1;
bio(261).sigAddress='&vmr_rwd_fix_leftarm_B.Receive_o2_j';
bio(261).ndims=2;
bio(261).size=[];


bio(262).blkName='DataLogging/Receive_Gaze/S-Function/p1';
bio(262).sigName='';
bio(262).portIdx=0;
bio(262).dim=[1,1];
bio(262).sigWidth=1;
bio(262).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o1_n';
bio(262).ndims=2;
bio(262).size=[];


bio(263).blkName='DataLogging/Receive_Gaze/S-Function/p2';
bio(263).sigName='SAMPE_TYPE';
bio(263).portIdx=1;
bio(263).dim=[1,1];
bio(263).sigWidth=1;
bio(263).sigAddress='&vmr_rwd_fix_leftarm_B.SAMPE_TYPE';
bio(263).ndims=2;
bio(263).size=[];


bio(264).blkName='DataLogging/Receive_Gaze/S-Function/p3';
bio(264).sigName='Content Flags';
bio(264).portIdx=2;
bio(264).dim=[1,1];
bio(264).sigWidth=1;
bio(264).sigAddress='&vmr_rwd_fix_leftarm_B.ContentFlags';
bio(264).ndims=2;
bio(264).size=[];


bio(265).blkName='DataLogging/Receive_Gaze/S-Function/p4';
bio(265).sigName='pupil X';
bio(265).portIdx=3;
bio(265).dim=[2,1];
bio(265).sigWidth=2;
bio(265).sigAddress='&vmr_rwd_fix_leftarm_B.pupilX[0]';
bio(265).ndims=2;
bio(265).size=[];


bio(266).blkName='DataLogging/Receive_Gaze/S-Function/p5';
bio(266).sigName='pupil Y';
bio(266).portIdx=4;
bio(266).dim=[2,1];
bio(266).sigWidth=2;
bio(266).sigAddress='&vmr_rwd_fix_leftarm_B.pupilY[0]';
bio(266).ndims=2;
bio(266).size=[];


bio(267).blkName='DataLogging/Receive_Gaze/S-Function/p6';
bio(267).sigName='HREF X';
bio(267).portIdx=5;
bio(267).dim=[2,1];
bio(267).sigWidth=2;
bio(267).sigAddress='&vmr_rwd_fix_leftarm_B.HREFX[0]';
bio(267).ndims=2;
bio(267).size=[];


bio(268).blkName='DataLogging/Receive_Gaze/S-Function/p7';
bio(268).sigName='HREF Y';
bio(268).portIdx=6;
bio(268).dim=[2,1];
bio(268).sigWidth=2;
bio(268).sigAddress='&vmr_rwd_fix_leftarm_B.HREFY[0]';
bio(268).ndims=2;
bio(268).size=[];


bio(269).blkName='DataLogging/Receive_Gaze/S-Function/p8';
bio(269).sigName='pupil area';
bio(269).portIdx=7;
bio(269).dim=[2,1];
bio(269).sigWidth=2;
bio(269).sigAddress='&vmr_rwd_fix_leftarm_B.pupilarea[0]';
bio(269).ndims=2;
bio(269).size=[];


bio(270).blkName='DataLogging/Receive_Gaze/S-Function/p9';
bio(270).sigName='screen gaze X';
bio(270).portIdx=8;
bio(270).dim=[2,1];
bio(270).sigWidth=2;
bio(270).sigAddress='&vmr_rwd_fix_leftarm_B.screengazeX[0]';
bio(270).ndims=2;
bio(270).size=[];


bio(271).blkName='DataLogging/Receive_Gaze/S-Function/p10';
bio(271).sigName='screen gaze Y';
bio(271).portIdx=9;
bio(271).dim=[2,1];
bio(271).sigWidth=2;
bio(271).sigAddress='&vmr_rwd_fix_leftarm_B.screengazeY[0]';
bio(271).ndims=2;
bio(271).size=[];


bio(272).blkName='DataLogging/Receive_Gaze/S-Function/p11';
bio(272).sigName='resolution X';
bio(272).portIdx=10;
bio(272).dim=[1,1];
bio(272).sigWidth=1;
bio(272).sigAddress='&vmr_rwd_fix_leftarm_B.resolutionX';
bio(272).ndims=2;
bio(272).size=[];


bio(273).blkName='DataLogging/Receive_Gaze/S-Function/p12';
bio(273).sigName='resolution Y';
bio(273).portIdx=11;
bio(273).dim=[1,1];
bio(273).sigWidth=1;
bio(273).sigAddress='&vmr_rwd_fix_leftarm_B.resolutionY';
bio(273).ndims=2;
bio(273).size=[];


bio(274).blkName='DataLogging/Receive_Gaze/S-Function/p13';
bio(274).sigName='status flags';
bio(274).portIdx=12;
bio(274).dim=[1,1];
bio(274).sigWidth=1;
bio(274).sigAddress='&vmr_rwd_fix_leftarm_B.statusflags';
bio(274).ndims=2;
bio(274).size=[];


bio(275).blkName='DataLogging/Receive_Gaze/S-Function/p14';
bio(275).sigName='extra input';
bio(275).portIdx=13;
bio(275).dim=[1,1];
bio(275).sigWidth=1;
bio(275).sigAddress='&vmr_rwd_fix_leftarm_B.extrainput';
bio(275).ndims=2;
bio(275).size=[];


bio(276).blkName='DataLogging/Receive_Gaze/S-Function/p15';
bio(276).sigName='buttons';
bio(276).portIdx=14;
bio(276).dim=[1,1];
bio(276).sigWidth=1;
bio(276).sigAddress='&vmr_rwd_fix_leftarm_B.buttons';
bio(276).ndims=2;
bio(276).size=[];


bio(277).blkName='DataLogging/Receive_Gaze/S-Function/p16';
bio(277).sigName='htype';
bio(277).portIdx=15;
bio(277).dim=[1,1];
bio(277).sigWidth=1;
bio(277).sigAddress='&vmr_rwd_fix_leftarm_B.htype';
bio(277).ndims=2;
bio(277).size=[];


bio(278).blkName='DataLogging/Receive_Gaze/S-Function/p17';
bio(278).sigName='hdata';
bio(278).portIdx=16;
bio(278).dim=[8,1];
bio(278).sigWidth=8;
bio(278).sigAddress='&vmr_rwd_fix_leftarm_B.hdata[0]';
bio(278).ndims=2;
bio(278).size=[];


bio(279).blkName='DataLogging/Receive_Gaze/S-Function/p18';
bio(279).sigName='';
bio(279).portIdx=17;
bio(279).dim=[3,1];
bio(279).sigWidth=3;
bio(279).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o18[0]';
bio(279).ndims=2;
bio(279).size=[];


bio(280).blkName='DataLogging/compare encoders/delta';
bio(280).sigName='deltas';
bio(280).portIdx=0;
bio(280).dim=[1,4];
bio(280).sigWidth=4;
bio(280).sigAddress='&vmr_rwd_fix_leftarm_B.deltas[0]';
bio(280).ndims=2;
bio(280).size=[];


bio(281).blkName='DataLogging/create_lab_info/arm_count';
bio(281).sigName='robot_count';
bio(281).portIdx=0;
bio(281).dim=[1,1];
bio(281).sigWidth=1;
bio(281).sigAddress='&vmr_rwd_fix_leftarm_B.robot_count';
bio(281).ndims=2;
bio(281).size=[];


bio(282).blkName='DataLogging/create_lab_info/fp1_present';
bio(282).sigName='has_force_plate_1';
bio(282).portIdx=0;
bio(282).dim=[1,1];
bio(282).sigWidth=1;
bio(282).sigAddress='&vmr_rwd_fix_leftarm_B.has_force_plate_1';
bio(282).ndims=2;
bio(282).size=[];


bio(283).blkName='DataLogging/create_lab_info/fp2_present';
bio(283).sigName='has_force_plate_2';
bio(283).portIdx=0;
bio(283).dim=[1,1];
bio(283).sigWidth=1;
bio(283).sigAddress='&vmr_rwd_fix_leftarm_B.has_force_plate_2';
bio(283).ndims=2;
bio(283).size=[];


bio(284).blkName='DataLogging/create_lab_info/gaze_tracker_present';
bio(284).sigName='has_gaze_tracker';
bio(284).portIdx=0;
bio(284).dim=[1,1];
bio(284).sigWidth=1;
bio(284).sigAddress='&vmr_rwd_fix_leftarm_B.has_gaze_tracker';
bio(284).ndims=2;
bio(284).size=[];


bio(285).blkName='DataLogging/create_lab_info/robot_lift_present';
bio(285).sigName='has_robot_lift';
bio(285).portIdx=0;
bio(285).dim=[1,1];
bio(285).sigWidth=1;
bio(285).sigAddress='&vmr_rwd_fix_leftarm_B.has_robot_lift';
bio(285).ndims=2;
bio(285).size=[];


bio(286).blkName='DisplayInstruct/Show_Target1/Embedded MATLAB Function';
bio(286).sigName='VCODE';
bio(286).portIdx=0;
bio(286).dim=[1,70];
bio(286).sigWidth=70;
bio(286).sigAddress='&vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_h.VCODE[0]';
bio(286).ndims=2;
bio(286).size=[];


bio(287).blkName='DisplayInstruct/Show_Target1/Matrix Concatenation';
bio(287).sigName='';
bio(287).portIdx=0;
bio(287).dim=[5,11];
bio(287).sigWidth=55;
bio(287).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_e[0]';
bio(287).ndims=2;
bio(287).size=[];


bio(288).blkName='DisplayInstruct/Show_Target1/Matrix Concatenation1';
bio(288).sigName='';
bio(288).portIdx=0;
bio(288).dim=[5,11];
bio(288).sigWidth=55;
bio(288).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_e[0]';
bio(288).ndims=2;
bio(288).size=[];


bio(289).blkName='DisplayInstruct/Show_Target1/padder';
bio(289).sigName='';
bio(289).portIdx=0;
bio(289).dim=[5,11];
bio(289).sigWidth=55;
bio(289).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_e[0]';
bio(289).ndims=2;
bio(289).size=[];


bio(290).blkName='DisplayInstruct/Show_Target1/Selector';
bio(290).sigName='';
bio(290).portIdx=0;
bio(290).dim=[1,25];
bio(290).sigWidth=25;
bio(290).sigAddress='&vmr_rwd_fix_leftarm_B.Selector_e[0]';
bio(290).ndims=2;
bio(290).size=[];


bio(291).blkName='DisplayText/Show_Target_With_Label/Embedded MATLAB Function';
bio(291).sigName='VCODE';
bio(291).portIdx=0;
bio(291).dim=[1,70];
bio(291).sigWidth=70;
bio(291).sigAddress='&vmr_rwd_fix_leftarm_B.VCODE_l[0]';
bio(291).ndims=2;
bio(291).size=[];


bio(292).blkName='DisplayText/Show_Target_With_Label/Matrix Concatenation';
bio(292).sigName='';
bio(292).portIdx=0;
bio(292).dim=[5,11];
bio(292).sigWidth=55;
bio(292).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[0]';
bio(292).ndims=2;
bio(292).size=[];


bio(293).blkName='DisplayText/Show_Target_With_Label/Matrix Concatenation1';
bio(293).sigName='';
bio(293).portIdx=0;
bio(293).dim=[5,11];
bio(293).sigWidth=55;
bio(293).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[0]';
bio(293).ndims=2;
bio(293).size=[];


bio(294).blkName='DisplayText/Show_Target_With_Label/padder';
bio(294).sigName='';
bio(294).portIdx=0;
bio(294).dim=[5,11];
bio(294).sigWidth=55;
bio(294).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[0]';
bio(294).ndims=2;
bio(294).size=[];


bio(295).blkName='DisplayText/Show_Target_With_Label/Selector';
bio(295).sigName='';
bio(295).portIdx=0;
bio(295).dim=[1,25];
bio(295).sigWidth=25;
bio(295).sigAddress='&vmr_rwd_fix_leftarm_B.Selector_a[0]';
bio(295).ndims=2;
bio(295).size=[];


bio(296).blkName='GUI Control/Preview Targets Subsystem/Create Target Vector/p1';
bio(296).sigName='target_vector';
bio(296).portIdx=0;
bio(296).dim=[1,352];
bio(296).sigWidth=352;
bio(296).sigAddress='&vmr_rwd_fix_leftarm_B.target_vector[0]';
bio(296).ndims=2;
bio(296).size=[];


bio(297).blkName='GUI Control/Preview Targets Subsystem/Create Target Vector/p2';
bio(297).sigName='target_vector_length';
bio(297).portIdx=1;
bio(297).dim=[1,1];
bio(297).sigWidth=1;
bio(297).sigAddress='&vmr_rwd_fix_leftarm_B.target_vector_length';
bio(297).ndims=2;
bio(297).size=[];


bio(298).blkName='GUI Control/Preview Targets Subsystem/Concatenation';
bio(298).sigName='';
bio(298).portIdx=0;
bio(298).dim=[2,5];
bio(298).sigWidth=10;
bio(298).sigAddress='&vmr_rwd_fix_leftarm_B.Concatenation1[0]';
bio(298).ndims=2;
bio(298).size=[];


bio(299).blkName='GUI Control/Preview Targets Subsystem/Concatenation1';
bio(299).sigName='';
bio(299).portIdx=0;
bio(299).dim=[2,5];
bio(299).sigWidth=10;
bio(299).sigAddress='&vmr_rwd_fix_leftarm_B.Concatenation1[0]';
bio(299).ndims=2;
bio(299).size=[];


bio(300).blkName='GUI Control/Preview Targets Subsystem/indices_padding';
bio(300).sigName='';
bio(300).portIdx=0;
bio(300).dim=[2,5];
bio(300).sigWidth=10;
bio(300).sigAddress='&vmr_rwd_fix_leftarm_B.Concatenation1[0]';
bio(300).ndims=2;
bio(300).size=[];


bio(301).blkName='GUI Control/Preview Targets Subsystem/Reshape';
bio(301).sigName='';
bio(301).portIdx=0;
bio(301).dim=[2,5];
bio(301).sigWidth=10;
bio(301).sigAddress='&vmr_rwd_fix_leftarm_B.Concatenation1[0]';
bio(301).ndims=2;
bio(301).size=[];


bio(302).blkName='GUI Control/Preview Targets Subsystem/Reshape1';
bio(302).sigName='';
bio(302).portIdx=0;
bio(302).dim=[2,5];
bio(302).sigWidth=10;
bio(302).sigAddress='&vmr_rwd_fix_leftarm_B.Concatenation1[0]';
bio(302).ndims=2;
bio(302).size=[];


bio(303).blkName='GUI Control/Run Command Subsystem/Embedded MATLAB Function/p1';
bio(303).sigName='y';
bio(303).portIdx=0;
bio(303).dim=[1,1];
bio(303).sigWidth=1;
bio(303).sigAddress='&vmr_rwd_fix_leftarm_B.y_b';
bio(303).ndims=2;
bio(303).size=[];


bio(304).blkName='GUI Control/Run Command Subsystem/Embedded MATLAB Function/p2';
bio(304).sigName='z';
bio(304).portIdx=1;
bio(304).dim=[1,1];
bio(304).sigWidth=1;
bio(304).sigAddress='&vmr_rwd_fix_leftarm_B.z';
bio(304).ndims=2;
bio(304).size=[];


bio(305).blkName='GUI Control/Run Command Subsystem/Hold_to_1Khz';
bio(305).sigName='value';
bio(305).portIdx=0;
bio(305).dim=[1,1];
bio(305).sigWidth=1;
bio(305).sigAddress='&vmr_rwd_fix_leftarm_B.value';
bio(305).ndims=2;
bio(305).size=[];


bio(306).blkName='GUI Control/Run Command Subsystem/Data Type Conversion';
bio(306).sigName='';
bio(306).portIdx=0;
bio(306).dim=[1,1];
bio(306).sigWidth=1;
bio(306).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion';
bio(306).ndims=2;
bio(306).size=[];


bio(307).blkName='GUI Control/Run Command Subsystem/Data Type Conversion1';
bio(307).sigName='';
bio(307).portIdx=0;
bio(307).dim=[1,1];
bio(307).sigWidth=1;
bio(307).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw';
bio(307).ndims=2;
bio(307).size=[];


bio(308).blkName='GUI Control/Run Command Subsystem/Data Type Conversion2';
bio(308).sigName='';
bio(308).portIdx=0;
bio(308).dim=[1,1];
bio(308).sigWidth=1;
bio(308).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2';
bio(308).ndims=2;
bio(308).size=[];


bio(309).blkName='GUI Control/Run Command Subsystem/Run Command Receive/p1';
bio(309).sigName='';
bio(309).portIdx=0;
bio(309).dim=[1,1];
bio(309).sigWidth=1;
bio(309).sigAddress='&vmr_rwd_fix_leftarm_B.RunCommandReceive_o1';
bio(309).ndims=2;
bio(309).size=[];


bio(310).blkName='GUI Control/Run Command Subsystem/Run Command Receive/p2';
bio(310).sigName='';
bio(310).portIdx=1;
bio(310).dim=[1,1];
bio(310).sigWidth=1;
bio(310).sigAddress='&vmr_rwd_fix_leftarm_B.RunCommandReceive_o2';
bio(310).ndims=2;
bio(310).size=[];


bio(311).blkName='GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p1';
bio(311).sigName='task_status';
bio(311).portIdx=0;
bio(311).dim=[1,1];
bio(311).sigWidth=1;
bio(311).sigAddress='&vmr_rwd_fix_leftarm_B.task_status';
bio(311).ndims=2;
bio(311).size=[];


bio(312).blkName='GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p2';
bio(312).sigName='tp';
bio(312).portIdx=1;
bio(312).dim=[1,1];
bio(312).sigWidth=1;
bio(312).sigAddress='&vmr_rwd_fix_leftarm_B.tp';
bio(312).ndims=2;
bio(312).size=[];


bio(313).blkName='GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p3';
bio(313).sigName='block';
bio(313).portIdx=2;
bio(313).dim=[1,1];
bio(313).sigWidth=1;
bio(313).sigAddress='&vmr_rwd_fix_leftarm_B.block';
bio(313).ndims=2;
bio(313).size=[];


bio(314).blkName='GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p4';
bio(314).sigName='trial_in_block';
bio(314).portIdx=3;
bio(314).dim=[1,1];
bio(314).sigWidth=1;
bio(314).sigAddress='&vmr_rwd_fix_leftarm_B.trial_in_block';
bio(314).ndims=2;
bio(314).size=[];


bio(315).blkName='GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p5';
bio(315).sigName='block_in_set';
bio(315).portIdx=4;
bio(315).dim=[1,1];
bio(315).sigWidth=1;
bio(315).sigAddress='&vmr_rwd_fix_leftarm_B.block_in_set';
bio(315).ndims=2;
bio(315).size=[];


bio(316).blkName='GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p6';
bio(316).sigName='trial_in_set';
bio(316).portIdx=5;
bio(316).dim=[1,1];
bio(316).sigWidth=1;
bio(316).sigAddress='&vmr_rwd_fix_leftarm_B.trial_in_set';
bio(316).ndims=2;
bio(316).size=[];


bio(317).blkName='GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p7';
bio(317).sigName='repeat_last_trial';
bio(317).portIdx=6;
bio(317).dim=[1,1];
bio(317).sigWidth=1;
bio(317).sigAddress='&vmr_rwd_fix_leftarm_B.repeat_last_trial';
bio(317).ndims=2;
bio(317).size=[];


bio(318).blkName='GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p8';
bio(318).sigName='extra_trials';
bio(318).portIdx=7;
bio(318).dim=[2,1];
bio(318).sigWidth=2;
bio(318).sigAddress='&vmr_rwd_fix_leftarm_B.extra_trials[0]';
bio(318).ndims=2;
bio(318).size=[];


bio(319).blkName='GUI Control/Task Execution Control Subsystem/Task Execution Control Machine/p9';
bio(319).sigName='e_exit_trial';
bio(319).portIdx=8;
bio(319).dim=[1,1];
bio(319).sigWidth=1;
bio(319).sigAddress='&vmr_rwd_fix_leftarm_B.e_exit_trial';
bio(319).ndims=2;
bio(319).size=[];


bio(320).blkName='GUI Control/Task Execution Control Subsystem/Data Type Conversion';
bio(320).sigName='';
bio(320).portIdx=0;
bio(320).dim=[1,1];
bio(320).sigWidth=1;
bio(320).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_g';
bio(320).ndims=2;
bio(320).size=[];


bio(321).blkName='GUI Control/Task Execution Control Subsystem/Data Type Conversion1';
bio(321).sigName='';
bio(321).portIdx=0;
bio(321).dim=[1,1];
bio(321).sigWidth=1;
bio(321).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_m';
bio(321).ndims=2;
bio(321).size=[];


bio(322).blkName='GUI Control/Task Execution Control Subsystem/Data Type Conversion2';
bio(322).sigName='';
bio(322).portIdx=0;
bio(322).dim=[1,1];
bio(322).sigWidth=1;
bio(322).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_n';
bio(322).ndims=2;
bio(322).size=[];


bio(323).blkName='GUI Control/Task Execution Control Subsystem/Task Clock';
bio(323).sigName='';
bio(323).portIdx=0;
bio(323).dim=[1,1];
bio(323).sigWidth=1;
bio(323).sigAddress='&vmr_rwd_fix_leftarm_B.TaskClock';
bio(323).ndims=2;
bio(323).size=[];


bio(324).blkName='GUI Control/Task Execution Control Subsystem/Delay';
bio(324).sigName='';
bio(324).portIdx=0;
bio(324).dim=[1,1];
bio(324).sigWidth=1;
bio(324).sigAddress='&vmr_rwd_fix_leftarm_B.Delay';
bio(324).ndims=2;
bio(324).size=[];


bio(325).blkName='GUI Control/Task Execution Control Subsystem/Delay1';
bio(325).sigName='';
bio(325).portIdx=0;
bio(325).dim=[1,1];
bio(325).sigWidth=1;
bio(325).sigAddress='&vmr_rwd_fix_leftarm_B.Delay1';
bio(325).ndims=2;
bio(325).size=[];


bio(326).blkName='GUI Control/Task Execution Control Subsystem/Product';
bio(326).sigName='';
bio(326).portIdx=0;
bio(326).dim=[1,1];
bio(326).sigWidth=1;
bio(326).sigAddress='&vmr_rwd_fix_leftarm_B.Product_i';
bio(326).ndims=2;
bio(326).size=[];


bio(327).blkName='GUI Control/Task Execution Control Subsystem/Product2';
bio(327).sigName='';
bio(327).portIdx=0;
bio(327).dim=[1,1];
bio(327).sigWidth=1;
bio(327).sigAddress='&vmr_rwd_fix_leftarm_B.Product2_n';
bio(327).ndims=2;
bio(327).size=[];


bio(328).blkName='GUI Control/Task Execution Control Subsystem/Product3';
bio(328).sigName='';
bio(328).portIdx=0;
bio(328).dim=[1,1];
bio(328).sigWidth=1;
bio(328).sigAddress='&vmr_rwd_fix_leftarm_B.Product3';
bio(328).ndims=2;
bio(328).size=[];


bio(329).blkName='GUI Control/Task Execution Control Subsystem/Selector';
bio(329).sigName='';
bio(329).portIdx=0;
bio(329).dim=[50,1];
bio(329).sigWidth=50;
bio(329).sigAddress='&vmr_rwd_fix_leftarm_B.Selector_n[0]';
bio(329).ndims=2;
bio(329).size=[];


bio(330).blkName='GUI Control/Task Execution Control Subsystem/Selector1';
bio(330).sigName='';
bio(330).portIdx=0;
bio(330).dim=[1,500];
bio(330).sigWidth=500;
bio(330).sigAddress='&vmr_rwd_fix_leftarm_B.Selector1[0]';
bio(330).ndims=2;
bio(330).size=[];


bio(331).blkName='GUI Control/Task Execution Control Subsystem/Selector2';
bio(331).sigName='';
bio(331).portIdx=0;
bio(331).dim=[1000,1];
bio(331).sigWidth=1000;
bio(331).sigAddress='&vmr_rwd_fix_leftarm_B.Selector2_l[0]';
bio(331).ndims=2;
bio(331).size=[];


bio(332).blkName='GUI Control/Task Execution Control Subsystem/Subtract';
bio(332).sigName='';
bio(332).portIdx=0;
bio(332).dim=[1,1];
bio(332).sigWidth=1;
bio(332).sigAddress='&vmr_rwd_fix_leftarm_B.Subtract_p';
bio(332).ndims=2;
bio(332).size=[];


bio(333).blkName='GUI Control/Task Execution Control Subsystem/Width';
bio(333).sigName='';
bio(333).portIdx=0;
bio(333).dim=[1,1];
bio(333).sigWidth=1;
bio(333).sigAddress='&vmr_rwd_fix_leftarm_B.Width_j';
bio(333).ndims=2;
bio(333).size=[];


bio(334).blkName='GUI Control/Task Execution Control Subsystem/Width1';
bio(334).sigName='';
bio(334).portIdx=0;
bio(334).dim=[1,1];
bio(334).sigWidth=1;
bio(334).sigAddress='&vmr_rwd_fix_leftarm_ConstB.Width1';
bio(334).ndims=2;
bio(334).size=[];


bio(335).blkName='GUI Control/Task Execution Control Subsystem/Width2';
bio(335).sigName='';
bio(335).portIdx=0;
bio(335).dim=[1,1];
bio(335).sigWidth=1;
bio(335).sigAddress='&vmr_rwd_fix_leftarm_B.Width2';
bio(335).ndims=2;
bio(335).size=[];


bio(336).blkName='GUI Control/Task_progress/Count trials/p1';
bio(336).sigName='total_trials';
bio(336).portIdx=0;
bio(336).dim=[1,1];
bio(336).sigWidth=1;
bio(336).sigAddress='&vmr_rwd_fix_leftarm_B.total_trials';
bio(336).ndims=2;
bio(336).size=[];


bio(337).blkName='GUI Control/Task_progress/Count trials/p2';
bio(337).sigName='trials_in_block';
bio(337).portIdx=1;
bio(337).dim=[1,1];
bio(337).sigWidth=1;
bio(337).sigAddress='&vmr_rwd_fix_leftarm_B.trials_in_block';
bio(337).ndims=2;
bio(337).size=[];


bio(338).blkName='GUI Control/Task_progress/Count trials/p3';
bio(338).sigName='total_blocks';
bio(338).portIdx=2;
bio(338).dim=[1,1];
bio(338).sigWidth=1;
bio(338).sigAddress='&vmr_rwd_fix_leftarm_B.total_blocks';
bio(338).ndims=2;
bio(338).size=[];


bio(339).blkName='GUI Control/Task_progress/Data Type Conversion';
bio(339).sigName='total_trials_in_exam';
bio(339).portIdx=0;
bio(339).dim=[1,1];
bio(339).sigWidth=1;
bio(339).sigAddress='&vmr_rwd_fix_leftarm_B.total_trials_in_exam';
bio(339).ndims=2;
bio(339).size=[];


bio(340).blkName='GUI Control/Task_progress/Data Type Conversion1';
bio(340).sigName='total_trials_in_block';
bio(340).portIdx=0;
bio(340).dim=[1,1];
bio(340).sigWidth=1;
bio(340).sigAddress='&vmr_rwd_fix_leftarm_B.total_trials_in_block';
bio(340).ndims=2;
bio(340).size=[];


bio(341).blkName='GUI Control/Task_progress/Data Type Conversion2';
bio(341).sigName='total_blocks_in_exam';
bio(341).portIdx=0;
bio(341).dim=[1,1];
bio(341).sigWidth=1;
bio(341).sigAddress='&vmr_rwd_fix_leftarm_B.total_blocks_in_exam';
bio(341).ndims=2;
bio(341).size=[];


bio(342).blkName='KINARM_Exo_Apply_Loads/clip motor torques/clip_motor_torque';
bio(342).sigName='clipped_torques';
bio(342).portIdx=0;
bio(342).dim=[4,1];
bio(342).sigWidth=4;
bio(342).sigAddress='&vmr_rwd_fix_leftarm_B.clipped_torques[0]';
bio(342).ndims=2;
bio(342).size=[];


bio(343).blkName='KINARM_Exo_Apply_Loads/clip motor torques/Switch1';
bio(343).sigName='';
bio(343).portIdx=0;
bio(343).dim=[1,1];
bio(343).sigWidth=1;
bio(343).sigAddress='&vmr_rwd_fix_leftarm_B.Switch1';
bio(343).ndims=2;
bio(343).size=[];


bio(344).blkName='Parameter Table Defn/TP_table/CLAMP_COL;Clamp State;integer;Flag to clamp visual feedback;;;none;;';
bio(344).sigName='';
bio(344).portIdx=0;
bio(344).dim=[1,1];
bio(344).sigWidth=1;
bio(344).sigAddress='&vmr_rwd_fix_leftarm_B.CLAMP_COLClampStateintegerFlagtoclampvisualfeedbacknone';
bio(344).ndims=2;
bio(344).size=[];


bio(345).blkName='Parameter Table Defn/TP_table/DELAY_POSTTRIAL_COL;Post-Trial_Delay;integer;time between trials (ms);;;none;;';
bio(345).sigName='';
bio(345).portIdx=0;
bio(345).dim=[1,1];
bio(345).sigWidth=1;
bio(345).sigAddress='&vmr_rwd_fix_leftarm_B.DELAY_POSTTRIAL_COLPostTrial_Delayintegertimebetweentrialsmsnon';
bio(345).ndims=2;
bio(345).size=[];


bio(346).blkName='Parameter Table Defn/TP_table/DISPLAY_TRIAL_COL;Flag for a display-only trial;integer;Flag to transition to a display-only trial (show instructions or cumulative score);;;none;;';
bio(346).sigName='';
bio(346).portIdx=0;
bio(346).dim=[1,1];
bio(346).sigWidth=1;
bio(346).sigAddress='&vmr_rwd_fix_leftarm_B.DISPLAY_TRIAL_COLFlagforadisplayonlytrialintegerFlagtotransitio';
bio(346).ndims=2;
bio(346).size=[];


bio(347).blkName='Parameter Table Defn/TP_table/DO_REWARD_COL;Do Reward;integer;Flag to indicate whether to provide reward, neutral tone, or nothing on this trial;;;none;;';
bio(347).sigName='';
bio(347).portIdx=0;
bio(347).dim=[1,1];
bio(347).sigWidth=1;
bio(347).sigAddress='&vmr_rwd_fix_leftarm_B.DO_REWARD_COLDoRewardintegerFlagtoindicatewhethertoproviderewar';
bio(347).ndims=2;
bio(347).size=[];


bio(348).blkName='Parameter Table Defn/TP_table/END_TARGET_COL;End_Target;target;Second target to appear during a trial (i.e. reach to this target from 1st target);;;none;;';
bio(348).sigName='';
bio(348).portIdx=0;
bio(348).dim=[1,1];
bio(348).sigWidth=1;
bio(348).sigAddress='&vmr_rwd_fix_leftarm_B.END_TARGET_COLEnd_TargettargetSecondtargettoappearduringatriali';
bio(348).ndims=2;
bio(348).size=[];


bio(349).blkName='Parameter Table Defn/TP_table/HAND_VIS_COL;Hand Visible;integer;Flag to shut off the hand for aftereffect trials;;;none;;';
bio(349).sigName='';
bio(349).portIdx=0;
bio(349).dim=[1,1];
bio(349).sigWidth=1;
bio(349).sigAddress='&vmr_rwd_fix_leftarm_B.HAND_VIS_COLHandVisibleintegerFlagtoshutoffthehandforaftereffec';
bio(349).ndims=2;
bio(349).size=[];


bio(350).blkName='Parameter Table Defn/TP_table/MAXREACHTIME_COL;MaxReachTime;integer;maximum time allowed for sucessful reach (ms);;;none;;';
bio(350).sigName='';
bio(350).portIdx=0;
bio(350).dim=[1,1];
bio(350).sigWidth=1;
bio(350).sigAddress='&vmr_rwd_fix_leftarm_B.MAXREACHTIME_COLMaxReachTimeintegermaximumtimeallowedforsucessf';
bio(350).ndims=2;
bio(350).size=[];


bio(351).blkName='Parameter Table Defn/TP_table/ROTATION;Rotation;integer;Rotation (degrees CCW) (absolute or incremental, depending on Rotate_Type));;;none;;';
bio(351).sigName='';
bio(351).portIdx=0;
bio(351).dim=[1,1];
bio(351).sigWidth=1;
bio(351).sigAddress='&vmr_rwd_fix_leftarm_B.ROTATIONRotationintegerRotationdegreesCCWabsoluteorincrementald';
bio(351).ndims=2;
bio(351).size=[];


bio(352).blkName='Parameter Table Defn/TP_table/ROTATION_CENTER;Rotate_Center;target;Target to use for rotation center (i.e. visual rotation occurs about the position defined by this target);;;none;;';
bio(352).sigName='';
bio(352).portIdx=0;
bio(352).dim=[1,1];
bio(352).sigWidth=1;
bio(352).sigAddress='&vmr_rwd_fix_leftarm_B.ROTATION_CENTERRotate_CentertargetTargettouseforrotationcenteri';
bio(352).ndims=2;
bio(352).size=[];


bio(353).blkName='Parameter Table Defn/TP_table/ROTATION_TYPE;Rotate_Type;integer;0 -> no rotation, 1 -> rotate specified amount, 2 -> change rotation by specified amount;;;none;;';
bio(353).sigName='';
bio(353).portIdx=0;
bio(353).dim=[1,1];
bio(353).sigWidth=1;
bio(353).sigAddress='&vmr_rwd_fix_leftarm_B.ROTATION_TYPERotate_Typeinteger0norotation1rotatespecifiedamoun';
bio(353).ndims=2;
bio(353).size=[];


bio(354).blkName='Parameter Table Defn/TP_table/START_TARGET_COL;Start_Target;target;First target to appear during a trial;;;none;;';
bio(354).sigName='';
bio(354).portIdx=0;
bio(354).dim=[1,1];
bio(354).sigWidth=1;
bio(354).sigAddress='&vmr_rwd_fix_leftarm_B.START_TARGET_COLStart_TargettargetFirsttargettoappearduringatri';
bio(354).ndims=2;
bio(354).size=[];


bio(355).blkName='Parameter Table Defn/TP_table/WAIT_AT_START_COL;1st_Target_Wait;integer;Required hold time at start target (ms);;;none;;';
bio(355).sigName='';
bio(355).portIdx=0;
bio(355).dim=[1,1];
bio(355).sigWidth=1;
bio(355).sigAddress='&vmr_rwd_fix_leftarm_B.WAIT_AT_START_COL1st_Target_WaitintegerRequiredholdtimeatstartt';
bio(355).ndims=2;
bio(355).size=[];


bio(356).blkName='Parameter Table Defn/buttons/INSTRUCT_PAUSE_BTN;Instruct-Resume;;Resume task execution after instruction display;18;22;none;;';
bio(356).sigName='';
bio(356).portIdx=0;
bio(356).dim=[1,1];
bio(356).sigWidth=1;
bio(356).sigAddress='&vmr_rwd_fix_leftarm_B.INSTRUCT_PAUSE_BTNInstructResumeResumetaskexecutionafterinstruc';
bio(356).ndims=2;
bio(356).size=[];


bio(357).blkName='Parameter Table Defn/events/E_HIT_TARGET;Target_Hit;;Subject has intercepted the target;;;none;;';
bio(357).sigName='';
bio(357).portIdx=0;
bio(357).dim=[1,1];
bio(357).sigWidth=1;
bio(357).sigAddress='&vmr_rwd_fix_leftarm_B.E_HIT_TARGETTarget_HitSubjecthasinterceptedthetargetnone';
bio(357).ndims=2;
bio(357).size=[];


bio(358).blkName='Parameter Table Defn/events/E_MISS_TARGET;Target_Miss;;Subject shot past the target without hitting it;;;none;;';
bio(358).sigName='';
bio(358).portIdx=0;
bio(358).dim=[1,1];
bio(358).sigWidth=1;
bio(358).sigAddress='&vmr_rwd_fix_leftarm_B.E_MISS_TARGETTarget_MissSubjectshotpastthetargetwithouthittingi';
bio(358).ndims=2;
bio(358).size=[];


bio(359).blkName='Parameter Table Defn/events/E_NEUTRAL_FDBK;NFB_Trial_End;;Subject has hit or exceeded the target on a no-feedback trial;;;none;;';
bio(359).sigName='';
bio(359).portIdx=0;
bio(359).dim=[1,1];
bio(359).sigWidth=1;
bio(359).sigAddress='&vmr_rwd_fix_leftarm_B.E_NEUTRAL_FDBKNFB_Trial_EndSubjecthashitorexceededthetargetonan';
bio(359).ndims=2;
bio(359).size=[];


bio(360).blkName='Parameter Table Defn/events/E_NO_EVENT;n|a;;This event_code does not save an event in the data file, it just clears the event;;;none;;';
bio(360).sigName='';
bio(360).portIdx=0;
bio(360).dim=[1,1];
bio(360).sigWidth=1;
bio(360).sigAddress='&vmr_rwd_fix_leftarm_B.E_NO_EVENTnaThisevent_codedoesnotsaveaneventinthedatafileitjust';
bio(360).ndims=2;
bio(360).size=[];


bio(361).blkName='Parameter Table Defn/events/E_REWARD;Reward_On;;Reward is given;;;none;;';
bio(361).sigName='';
bio(361).portIdx=0;
bio(361).dim=[1,1];
bio(361).sigWidth=1;
bio(361).sigAddress='&vmr_rwd_fix_leftarm_B.E_REWARDReward_OnRewardisgivennone';
bio(361).ndims=2;
bio(361).size=[];


bio(362).blkName='Parameter Table Defn/events/E_SHOW_INSTRUCT;Show Instructions;;Trial shows instructions ;;;none;;';
bio(362).sigName='';
bio(362).portIdx=0;
bio(362).dim=[1,1];
bio(362).sigWidth=1;
bio(362).sigAddress='&vmr_rwd_fix_leftarm_B.E_SHOW_INSTRUCTShowInstructionsTrialshowsinstructionsnone';
bio(362).ndims=2;
bio(362).size=[];


bio(363).blkName='Parameter Table Defn/events/E_SHOW_SCORE;Show_Cum_Score;;Display cumulative score;;;none;;';
bio(363).sigName='';
bio(363).portIdx=0;
bio(363).dim=[1,1];
bio(363).sigWidth=1;
bio(363).sigAddress='&vmr_rwd_fix_leftarm_B.E_SHOW_SCOREShow_Cum_ScoreDisplaycumulativescorenone';
bio(363).ndims=2;
bio(363).size=[];


bio(364).blkName='Parameter Table Defn/events/E_STAY_CENTER;Stay_Center;;Subject has reached the center target and must hold;;;none;;';
bio(364).sigName='';
bio(364).portIdx=0;
bio(364).dim=[1,1];
bio(364).sigWidth=1;
bio(364).sigAddress='&vmr_rwd_fix_leftarm_B.E_STAY_CENTERStay_CenterSubjecthasreachedthecentertargetandmust';
bio(364).ndims=2;
bio(364).size=[];


bio(365).blkName='Parameter Table Defn/events/E_TARGET_ON;Target_On;;Target ON, start waiting for subject to leave centre target;;;none;;';
bio(365).sigName='';
bio(365).portIdx=0;
bio(365).dim=[1,1];
bio(365).sigWidth=1;
bio(365).sigAddress='&vmr_rwd_fix_leftarm_B.E_TARGET_ONTarget_OnTargetONstartwaitingforsubjecttoleavecentre';
bio(365).ndims=2;
bio(365).size=[];


bio(366).blkName='Parameter Table Defn/target_table/COLOR;Color;colour;Color;;;none;;';
bio(366).sigName='';
bio(366).portIdx=0;
bio(366).dim=[1,1];
bio(366).sigWidth=1;
bio(366).sigAddress='&vmr_rwd_fix_leftarm_B.COLORColorcolourColornone';
bio(366).ndims=2;
bio(366).size=[];


bio(367).blkName='Parameter Table Defn/target_table/HITCOLOR;Hit Color;colour;Color when the target is hit;;;none;;';
bio(367).sigName='';
bio(367).portIdx=0;
bio(367).dim=[1,1];
bio(367).sigWidth=1;
bio(367).sigAddress='&vmr_rwd_fix_leftarm_B.HITCOLORHitColorcolourColorwhenthetargetishitnone';
bio(367).ndims=2;
bio(367).size=[];


bio(368).blkName='Parameter Table Defn/target_table/LABEL;Label text;label;Default label text;;;none;;';
bio(368).sigName='';
bio(368).portIdx=0;
bio(368).dim=[1,1];
bio(368).sigWidth=1;
bio(368).sigAddress='&vmr_rwd_fix_leftarm_B.LABELLabeltextlabelDefaultlabeltextnone';
bio(368).ndims=2;
bio(368).size=[];


bio(369).blkName='Parameter Table Defn/target_table/LABEL_HEIGHT;Label Height;float;Height of the label;;;none;;';
bio(369).sigName='';
bio(369).portIdx=0;
bio(369).dim=[1,1];
bio(369).sigWidth=1;
bio(369).sigAddress='&vmr_rwd_fix_leftarm_B.LABEL_HEIGHTLabelHeightfloatHeightofthelabelnone';
bio(369).ndims=2;
bio(369).size=[];


bio(370).blkName='Parameter Table Defn/target_table/LOGICAL_RADIUS;Logical radius;float;Logical Radius;;;none;;';
bio(370).sigName='';
bio(370).portIdx=0;
bio(370).dim=[1,1];
bio(370).sigWidth=1;
bio(370).sigAddress='&vmr_rwd_fix_leftarm_B.LOGICAL_RADIUSLogicalradiusfloatLogicalRadiusnone';
bio(370).ndims=2;
bio(370).size=[];


bio(371).blkName='Parameter Table Defn/target_table/ROTATED_COLOR;Rotated Color;colour;Target color for rotated trials ;;;none;;';
bio(371).sigName='';
bio(371).portIdx=0;
bio(371).dim=[1,1];
bio(371).sigWidth=1;
bio(371).sigAddress='&vmr_rwd_fix_leftarm_B.ROTATED_COLORRotatedColorcolourTargetcolorforrotatedtrialsnone';
bio(371).ndims=2;
bio(371).size=[];


bio(372).blkName='Parameter Table Defn/target_table/STROKE_COLOR;Stroke Color;colour;Stroke color, for return ring;;;none;;';
bio(372).sigName='';
bio(372).portIdx=0;
bio(372).dim=[1,1];
bio(372).sigWidth=1;
bio(372).sigAddress='&vmr_rwd_fix_leftarm_B.STROKE_COLORStrokeColorcolourStrokecolorforreturnringnone';
bio(372).ndims=2;
bio(372).size=[];


bio(373).blkName='Parameter Table Defn/target_table/STROKE_WIDTH;Stroke Width;float;Stroke width, for return ring;;;none;;';
bio(373).sigName='';
bio(373).portIdx=0;
bio(373).dim=[1,1];
bio(373).sigWidth=1;
bio(373).sigAddress='&vmr_rwd_fix_leftarm_B.STROKE_WIDTHStrokeWidthfloatStrokewidthforreturnringnone';
bio(373).ndims=2;
bio(373).size=[];


bio(374).blkName='Parameter Table Defn/target_table/VISUAL_RADIUS;Visual radius;float;Display Radius;;;none;;';
bio(374).sigName='';
bio(374).portIdx=0;
bio(374).dim=[1,1];
bio(374).sigWidth=1;
bio(374).sigAddress='&vmr_rwd_fix_leftarm_B.VISUAL_RADIUSVisualradiusfloatDisplayRadiusnone';
bio(374).ndims=2;
bio(374).size=[];


bio(375).blkName='Parameter Table Defn/target_table/col_x;X;float;X Position (cm) of the target relative to  local (0,0);;;none;;';
bio(375).sigName='';
bio(375).portIdx=0;
bio(375).dim=[1,1];
bio(375).sigWidth=1;
bio(375).sigAddress='&vmr_rwd_fix_leftarm_B.col_xXfloatXPositioncmofthetargetrelativetolocal00none';
bio(375).ndims=2;
bio(375).size=[];


bio(376).blkName='Parameter Table Defn/target_table/col_y;Y;float;Y Position (cm) of the target relative to  local (0,0);;;none;;';
bio(376).sigName='';
bio(376).portIdx=0;
bio(376).dim=[1,1];
bio(376).sigWidth=1;
bio(376).sigAddress='&vmr_rwd_fix_leftarm_B.col_yYfloatYPositioncmofthetargetrelativetolocal00none';
bio(376).ndims=2;
bio(376).size=[];


bio(377).blkName='Parameter Table Defn/task_definition/INSTRUCTIONS=';
bio(377).sigName='';
bio(377).portIdx=0;
bio(377).dim=[1,1];
bio(377).sigWidth=1;
bio(377).sigAddress='&vmr_rwd_fix_leftarm_B.INSTRUCTIONS';
bio(377).ndims=2;
bio(377).size=[];


bio(378).blkName='Parameter Table Defn/task_definition/LOAD_FOR=EITHER';
bio(378).sigName='';
bio(378).portIdx=0;
bio(378).dim=[1,1];
bio(378).sigWidth=1;
bio(378).sigAddress='&vmr_rwd_fix_leftarm_B.LOAD_FOREITHER';
bio(378).ndims=2;
bio(378).size=[];


bio(379).blkName='Parameter Table Defn/task_wide/K_FIX_LEFTHAND;Fix Left Hand Flag;integer;Flag to hold the enable the robot to hold the left (nondominant) hand in place;;;none;;';
bio(379).sigName='';
bio(379).portIdx=0;
bio(379).dim=[1,1];
bio(379).sigWidth=1;
bio(379).sigAddress='&vmr_rwd_fix_leftarm_B.K_FIX_LEFTHANDFixLeftHandFlagintegerFlagtoholdtheenabletherobot';
bio(379).ndims=2;
bio(379).size=[];


bio(380).blkName='Parameter Table Defn/task_wide/K_INSTRUCT_TIME;Display Instructions Hold Time;integer;Time to display instructions to the screen;;;none;;';
bio(380).sigName='';
bio(380).portIdx=0;
bio(380).dim=[1,1];
bio(380).sigWidth=1;
bio(380).sigAddress='&vmr_rwd_fix_leftarm_B.K_INSTRUCT_TIMEDisplayInstructionsHoldTimeintegerTimetodisplayi';
bio(380).ndims=2;
bio(380).size=[];


bio(381).blkName='Parameter Table Defn/task_wide/K_LEFTHAND_TGT;Left hand target;integer;Target defining the location where the left hand is to be fixed;;;none;;';
bio(381).sigName='';
bio(381).portIdx=0;
bio(381).dim=[1,1];
bio(381).sigWidth=1;
bio(381).sigAddress='&vmr_rwd_fix_leftarm_B.K_LEFTHAND_TGTLefthandtargetintegerTargetdefiningthelocationwhe';
bio(381).ndims=2;
bio(381).size=[];


bio(382).blkName='Parameter Table Defn/task_wide/K_RETURN_RING_ROW;ReturnRing TgtTbl Row;integer;Row of the target table to use for feedback on return to start;;;none;;';
bio(382).sigName='';
bio(382).portIdx=0;
bio(382).dim=[1,1];
bio(382).sigWidth=1;
bio(382).sigAddress='&vmr_rwd_fix_leftarm_B.K_RETURN_RING_ROWReturnRingTgtTblRowintegerRowofthetargettablet';
bio(382).ndims=2;
bio(382).size=[];


bio(383).blkName='Parameter Table Defn/task_wide/K_REWARD_VAL;Reward Value (cents);integer;Amount of reward offered on each trial, in cents;;;none;;';
bio(383).sigName='';
bio(383).portIdx=0;
bio(383).dim=[1,1];
bio(383).sigWidth=1;
bio(383).sigAddress='&vmr_rwd_fix_leftarm_B.K_REWARD_VALRewardValuecentsintegerAmountofrewardofferedoneacht';
bio(383).ndims=2;
bio(383).size=[];


bio(384).blkName='Parameter Table Defn/task_wide/K_ROBOT_MOVE_TIME;Robot Move Time;integer;Time the robot will move to the new position;;;none;;';
bio(384).sigName='';
bio(384).portIdx=0;
bio(384).dim=[1,1];
bio(384).sigWidth=1;
bio(384).sigAddress='&vmr_rwd_fix_leftarm_B.K_ROBOT_MOVE_TIMERobotMoveTimeintegerTimetherobotwillmovetothen';
bio(384).ndims=2;
bio(384).size=[];


bio(385).blkName='Parameter Table Defn/task_wide/K_ROBOT_RAMP_TIME;Robot Ramp Time;integer;Time the robot will ramp up and down;;;none;;';
bio(385).sigName='';
bio(385).portIdx=0;
bio(385).dim=[1,1];
bio(385).sigWidth=1;
bio(385).sigAddress='&vmr_rwd_fix_leftarm_B.K_ROBOT_RAMP_TIMERobotRampTimeintegerTimetherobotwillrampupandd';
bio(385).ndims=2;
bio(385).size=[];


bio(386).blkName='Parameter Table Defn/task_wide/K_SCORETEXT_ROW;Score Text TgtTbl Row;integer;Row of the target table to use for score text display;;;none;;';
bio(386).sigName='';
bio(386).portIdx=0;
bio(386).dim=[1,1];
bio(386).sigWidth=1;
bio(386).sigAddress='&vmr_rwd_fix_leftarm_B.K_SCORETEXT_ROWScoreTextTgtTblRowintegerRowofthetargettabletous';
bio(386).ndims=2;
bio(386).size=[];


bio(387).blkName='Parameter Table Defn/task_wide/K_SCORE_TIME;Display Score Hold Time ;integer;Time to display the cumulative score (e.g., at the end of the session);;;none;;';
bio(387).sigName='';
bio(387).portIdx=0;
bio(387).dim=[1,1];
bio(387).sigWidth=1;
bio(387).sigAddress='&vmr_rwd_fix_leftarm_B.K_SCORE_TIMEDisplayScoreHoldTimeintegerTimetodisplaythecumulati';
bio(387).ndims=2;
bio(387).size=[];


bio(388).blkName='Parameter Table Defn/task_wide/K_TONE_HIT_DURATION;Hit tone duration;integer;Duration of the feedback tone when the target is hit;;;none;;';
bio(388).sigName='';
bio(388).portIdx=0;
bio(388).dim=[1,1];
bio(388).sigWidth=1;
bio(388).sigAddress='&vmr_rwd_fix_leftarm_B.K_TONE_HIT_DURATIONHittonedurationintegerDurationofthefeedbackt';
bio(388).ndims=2;
bio(388).size=[];


bio(389).blkName='Parameter Table Defn/task_wide/K_TONE_HIT_FREQUENCY;Hit tone frequency;integer;Frequency of the feedback tone when the target is hit;;;none;;';
bio(389).sigName='';
bio(389).portIdx=0;
bio(389).dim=[1,1];
bio(389).sigWidth=1;
bio(389).sigAddress='&vmr_rwd_fix_leftarm_B.K_TONE_HIT_FREQUENCYHittonefrequencyintegerFrequencyofthefeedba';
bio(389).ndims=2;
bio(389).size=[];


bio(390).blkName='Parameter Table Defn/task_wide/K_TONE_NEUTRAL_DURATION;Neutral tone duration;integer;Duration of the neutral feedback tone indicating end of trial;;;none;;';
bio(390).sigName='';
bio(390).portIdx=0;
bio(390).dim=[1,1];
bio(390).sigWidth=1;
bio(390).sigAddress='&vmr_rwd_fix_leftarm_B.K_TONE_NEUTRAL_DURATIONNeutraltonedurationintegerDurationofthen';
bio(390).ndims=2;
bio(390).size=[];


bio(391).blkName='Parameter Table Defn/task_wide/K_TONE_NEUTRAL_FREQUENCY;Neutral tone frequency;integer;Frequency of the neutral feedback tone indicating end of trial;;;none;;';
bio(391).sigName='';
bio(391).portIdx=0;
bio(391).dim=[1,1];
bio(391).sigWidth=1;
bio(391).sigAddress='&vmr_rwd_fix_leftarm_B.K_TONE_NEUTRAL_FREQUENCYNeutraltonefrequencyintegerFrequencyoft';
bio(391).ndims=2;
bio(391).size=[];


bio(392).blkName='Parameter Table Defn/task_wide/K_UNUSED;Unused;integer;Not currently used;;;none;;';
bio(392).sigName='';
bio(392).portIdx=0;
bio(392).dim=[1,1];
bio(392).sigWidth=1;
bio(392).sigAddress='&vmr_rwd_fix_leftarm_B.K_UNUSEDUnusedintegerNotcurrentlyusednone';
bio(392).ndims=2;
bio(392).size=[];


bio(393).blkName='Parameter Table Defn/task_wide/K_VIS_RAD;Visible Radius;float;Radius from the start target that the hand will always be visible (m);;;none;;';
bio(393).sigName='';
bio(393).portIdx=0;
bio(393).dim=[1,1];
bio(393).sigWidth=1;
bio(393).sigAddress='&vmr_rwd_fix_leftarm_B.K_VIS_RADVisibleRadiusfloatRadiusfromthestarttargetthatthehandw';
bio(393).ndims=2;
bio(393).size=[];


bio(394).blkName='Process_Video_CMD/Add_requested_Delay/MATLAB Function';
bio(394).sigName='delay';
bio(394).portIdx=0;
bio(394).dim=[1,1];
bio(394).sigWidth=1;
bio(394).sigAddress='&vmr_rwd_fix_leftarm_B.delay';
bio(394).ndims=2;
bio(394).size=[];


bio(395).blkName='Process_Video_CMD/Add_requested_Delay/Rate Transition1';
bio(395).sigName='';
bio(395).portIdx=0;
bio(395).dim=[1,1];
bio(395).sigWidth=1;
bio(395).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition1_d';
bio(395).ndims=2;
bio(395).size=[];


bio(396).blkName='Process_Video_CMD/Add_requested_Delay/Rate Transition2';
bio(396).sigName='';
bio(396).portIdx=0;
bio(396).dim=[1,1];
bio(396).sigWidth=1;
bio(396).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition2_j';
bio(396).ndims=2;
bio(396).size=[];


bio(397).blkName='Process_Video_CMD/Add_requested_Delay/S-Function Builder/p1';
bio(397).sigName='';
bio(397).portIdx=0;
bio(397).dim=[27240,1];
bio(397).sigWidth=27240;
bio(397).sigAddress='&vmr_rwd_fix_leftarm_B.SFunctionBuilder_o1[0]';
bio(397).ndims=2;
bio(397).size=[];


bio(398).blkName='Process_Video_CMD/Add_requested_Delay/S-Function Builder/p2';
bio(398).sigName='';
bio(398).portIdx=1;
bio(398).dim=[1,1];
bio(398).sigWidth=1;
bio(398).sigAddress='&vmr_rwd_fix_leftarm_B.SFunctionBuilder_o2';
bio(398).ndims=2;
bio(398).size=[];


bio(399).blkName='Process_Video_CMD/Add_requested_Delay/S-Function Builder/p3';
bio(399).sigName='';
bio(399).portIdx=2;
bio(399).dim=[5,1];
bio(399).sigWidth=5;
bio(399).sigAddress='&vmr_rwd_fix_leftarm_B.SFunctionBuilder_o3[0]';
bio(399).ndims=2;
bio(399).size=[];


bio(400).blkName='Process_Video_CMD/PVC_core/Pack VCodeFrame2/p1';
bio(400).sigName='vis_cmd';
bio(400).portIdx=0;
bio(400).dim=[6810,1];
bio(400).sigWidth=6810;
bio(400).sigAddress='&vmr_rwd_fix_leftarm_B.vis_cmd[0]';
bio(400).ndims=2;
bio(400).size=[];


bio(401).blkName='Process_Video_CMD/PVC_core/Pack VCodeFrame2/p2';
bio(401).sigName='vis_cmd_len';
bio(401).portIdx=1;
bio(401).dim=[1,1];
bio(401).sigWidth=1;
bio(401).sigAddress='&vmr_rwd_fix_leftarm_B.vis_cmd_len';
bio(401).ndims=2;
bio(401).size=[];


bio(402).blkName='Process_Video_CMD/PVC_core/Pack VCodeFrame2/p3';
bio(402).sigName='vis_cmd_cropped';
bio(402).portIdx=2;
bio(402).dim=[1,1];
bio(402).sigWidth=1;
bio(402).sigAddress='&vmr_rwd_fix_leftarm_B.vis_cmd_cropped';
bio(402).ndims=2;
bio(402).size=[];


bio(403).blkName='Process_Video_CMD/PVC_core/Pack VCodeFrame2/p4';
bio(403).sigName='frame_number';
bio(403).portIdx=3;
bio(403).dim=[1,1];
bio(403).sigWidth=1;
bio(403).sigAddress='&vmr_rwd_fix_leftarm_B.frame_number';
bio(403).ndims=2;
bio(403).size=[];


bio(404).blkName='Process_Video_CMD/PVC_core/Pack VCodeFrame2/p5';
bio(404).sigName='vcode_err_id';
bio(404).portIdx=4;
bio(404).dim=[1,1];
bio(404).sigWidth=1;
bio(404).sigAddress='&vmr_rwd_fix_leftarm_B.vcode_err_id';
bio(404).ndims=2;
bio(404).size=[];


bio(405).blkName='Process_Video_CMD/PVC_core/Convert';
bio(405).sigName='';
bio(405).portIdx=0;
bio(405).dim=[1,1];
bio(405).sigWidth=1;
bio(405).sigAddress='&vmr_rwd_fix_leftarm_B.Convert_j';
bio(405).ndims=2;
bio(405).size=[];


bio(406).blkName='Process_Video_CMD/PVC_core/Rate Transition1';
bio(406).sigName='';
bio(406).portIdx=0;
bio(406).dim=[1,1];
bio(406).sigWidth=1;
bio(406).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition1_p';
bio(406).ndims=2;
bio(406).size=[];


bio(407).blkName='Subsystem/KINARM_Exo_Position_Controller/FF_FB_Position_Controller/p1';
bio(407).sigName='TorqueFB';
bio(407).portIdx=0;
bio(407).dim=[1,4];
bio(407).sigWidth=4;
bio(407).sigAddress='&vmr_rwd_fix_leftarm_B.TorqueFB[0]';
bio(407).ndims=2;
bio(407).size=[];


bio(408).blkName='Subsystem/KINARM_Exo_Position_Controller/FF_FB_Position_Controller/p2';
bio(408).sigName='TorqueFF';
bio(408).portIdx=1;
bio(408).dim=[1,4];
bio(408).sigWidth=4;
bio(408).sigAddress='&vmr_rwd_fix_leftarm_B.TorqueFF[0]';
bio(408).ndims=2;
bio(408).size=[];


bio(409).blkName='Subsystem/KINARM_Exo_Position_Controller/Data Type Conversion';
bio(409).sigName='';
bio(409).portIdx=0;
bio(409).dim=[2,6];
bio(409).sigWidth=12;
bio(409).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_p[0]';
bio(409).ndims=2;
bio(409).size=[];


bio(410).blkName='Subsystem/KINARM_Exo_Position_Controller/Rate Transition1';
bio(410).sigName='';
bio(410).portIdx=0;
bio(410).dim=[2,1];
bio(410).sigWidth=2;
bio(410).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition1_c2[0]';
bio(410).ndims=2;
bio(410).size=[];


bio(411).blkName='Subsystem/KINARM_Exo_Position_Controller/Rate Transition2';
bio(411).sigName='';
bio(411).portIdx=0;
bio(411).dim=[2,1];
bio(411).sigWidth=2;
bio(411).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition2_m[0]';
bio(411).ndims=2;
bio(411).size=[];


bio(412).blkName='Subsystem/KINARM_Exo_Position_Controller/Rate Transition3';
bio(412).sigName='';
bio(412).portIdx=0;
bio(412).dim=[1,1];
bio(412).sigWidth=1;
bio(412).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition3_h';
bio(412).ndims=2;
bio(412).size=[];


bio(413).blkName='Subsystem/KINARM_Exo_Position_Controller/Rate Transition4';
bio(413).sigName='';
bio(413).portIdx=0;
bio(413).dim=[2,1];
bio(413).sigWidth=2;
bio(413).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition4_n[0]';
bio(413).ndims=2;
bio(413).size=[];


bio(414).blkName='Subsystem/KINARM_Exo_Position_Controller/Rate Transition5';
bio(414).sigName='';
bio(414).portIdx=0;
bio(414).dim=[1,1];
bio(414).sigWidth=1;
bio(414).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition5_o';
bio(414).ndims=2;
bio(414).size=[];


bio(415).blkName='Subsystem/KINARM_Exo_Position_Controller/Rate Transition6';
bio(415).sigName='';
bio(415).portIdx=0;
bio(415).dim=[3,50];
bio(415).sigWidth=150;
bio(415).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition6_a[0]';
bio(415).ndims=2;
bio(415).size=[];


bio(416).blkName='Subsystem/KINARM_Exo_Position_Controller/Sum';
bio(416).sigName='';
bio(416).portIdx=0;
bio(416).dim=[1,4];
bio(416).sigWidth=4;
bio(416).sigAddress='&vmr_rwd_fix_leftarm_B.Sum[0]';
bio(416).ndims=2;
bio(416).size=[];


bio(417).blkName='Subsystem/Show_Target/Embedded MATLAB Function';
bio(417).sigName='VCODE';
bio(417).portIdx=0;
bio(417).dim=[1,70];
bio(417).sigWidth=70;
bio(417).sigAddress='&vmr_rwd_fix_leftarm_B.VCODE_o[0]';
bio(417).ndims=2;
bio(417).size=[];


bio(418).blkName='Subsystem/Show_Target/Matrix Concatenation';
bio(418).sigName='';
bio(418).portIdx=0;
bio(418).dim=[5,11];
bio(418).sigWidth=55;
bio(418).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[0]';
bio(418).ndims=2;
bio(418).size=[];


bio(419).blkName='Subsystem/Show_Target/Matrix Concatenation1';
bio(419).sigName='';
bio(419).portIdx=0;
bio(419).dim=[5,11];
bio(419).sigWidth=55;
bio(419).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[0]';
bio(419).ndims=2;
bio(419).size=[];


bio(420).blkName='Subsystem/Show_Target/padder';
bio(420).sigName='';
bio(420).portIdx=0;
bio(420).dim=[5,11];
bio(420).sigWidth=55;
bio(420).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[0]';
bio(420).ndims=2;
bio(420).size=[];


bio(421).blkName='Subsystem/Show_Target/Selector';
bio(421).sigName='';
bio(421).portIdx=0;
bio(421).dim=[1,25];
bio(421).sigWidth=25;
bio(421).sigAddress='&vmr_rwd_fix_leftarm_B.Selector_j[0]';
bio(421).ndims=2;
bio(421).size=[];


bio(422).blkName='Visual_Rotation/Show_Target/Embedded MATLAB Function';
bio(422).sigName='VCODE';
bio(422).portIdx=0;
bio(422).dim=[1,70];
bio(422).sigWidth=70;
bio(422).sigAddress='&vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_k.VCODE[0]';
bio(422).ndims=2;
bio(422).size=[];


bio(423).blkName='Visual_Rotation/Show_Target/Matrix Concatenation';
bio(423).sigName='';
bio(423).portIdx=0;
bio(423).dim=[5,11];
bio(423).sigWidth=55;
bio(423).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_l[0]';
bio(423).ndims=2;
bio(423).size=[];


bio(424).blkName='Visual_Rotation/Show_Target/Matrix Concatenation1';
bio(424).sigName='';
bio(424).portIdx=0;
bio(424).dim=[5,11];
bio(424).sigWidth=55;
bio(424).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_l[0]';
bio(424).ndims=2;
bio(424).size=[];


bio(425).blkName='Visual_Rotation/Show_Target/padder';
bio(425).sigName='';
bio(425).portIdx=0;
bio(425).dim=[5,11];
bio(425).sigWidth=55;
bio(425).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_l[0]';
bio(425).ndims=2;
bio(425).size=[];


bio(426).blkName='Visual_Rotation/Show_Target/Selector';
bio(426).sigName='';
bio(426).portIdx=0;
bio(426).dim=[1,25];
bio(426).sigWidth=25;
bio(426).sigAddress='&vmr_rwd_fix_leftarm_B.Selector_p[0]';
bio(426).ndims=2;
bio(426).size=[];


bio(427).blkName='Visual_Rotation/Show_Target1/Embedded MATLAB Function';
bio(427).sigName='VCODE';
bio(427).portIdx=0;
bio(427).dim=[1,70];
bio(427).sigWidth=70;
bio(427).sigAddress='&vmr_rwd_fix_leftarm_B.VCODE_e[0]';
bio(427).ndims=2;
bio(427).size=[];


bio(428).blkName='Visual_Rotation/Show_Target1/Matrix Concatenation';
bio(428).sigName='';
bio(428).portIdx=0;
bio(428).dim=[5,11];
bio(428).sigWidth=55;
bio(428).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[0]';
bio(428).ndims=2;
bio(428).size=[];


bio(429).blkName='Visual_Rotation/Show_Target1/Matrix Concatenation1';
bio(429).sigName='';
bio(429).portIdx=0;
bio(429).dim=[5,11];
bio(429).sigWidth=55;
bio(429).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[0]';
bio(429).ndims=2;
bio(429).size=[];


bio(430).blkName='Visual_Rotation/Show_Target1/padder';
bio(430).sigName='';
bio(430).portIdx=0;
bio(430).dim=[5,11];
bio(430).sigWidth=55;
bio(430).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[0]';
bio(430).ndims=2;
bio(430).size=[];


bio(431).blkName='Visual_Rotation/Show_Target1/Selector';
bio(431).sigName='';
bio(431).portIdx=0;
bio(431).dim=[1,25];
bio(431).sigWidth=25;
bio(431).sigAddress='&vmr_rwd_fix_leftarm_B.Selector_ec[0]';
bio(431).ndims=2;
bio(431).size=[];


bio(432).blkName='Visual_Rotation/Show_Target2/Embedded MATLAB Function';
bio(432).sigName='VCODE';
bio(432).portIdx=0;
bio(432).dim=[2,70];
bio(432).sigWidth=140;
bio(432).sigAddress='&vmr_rwd_fix_leftarm_B.VCODE[0]';
bio(432).ndims=2;
bio(432).size=[];


bio(433).blkName='Visual_Rotation/Show_Target2/Matrix Concatenation';
bio(433).sigName='';
bio(433).portIdx=0;
bio(433).dim=[5,11];
bio(433).sigWidth=55;
bio(433).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[0]';
bio(433).ndims=2;
bio(433).size=[];


bio(434).blkName='Visual_Rotation/Show_Target2/Matrix Concatenation1';
bio(434).sigName='';
bio(434).portIdx=0;
bio(434).dim=[5,11];
bio(434).sigWidth=55;
bio(434).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[0]';
bio(434).ndims=2;
bio(434).size=[];


bio(435).blkName='Visual_Rotation/Show_Target2/padder';
bio(435).sigName='';
bio(435).portIdx=0;
bio(435).dim=[5,11];
bio(435).sigWidth=55;
bio(435).sigAddress='&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[0]';
bio(435).ndims=2;
bio(435).size=[];


bio(436).blkName='Visual_Rotation/Show_Target2/Selector';
bio(436).sigName='';
bio(436).portIdx=0;
bio(436).dim=[2,25];
bio(436).sigWidth=50;
bio(436).sigAddress='&vmr_rwd_fix_leftarm_B.Selector_l[0]';
bio(436).ndims=2;
bio(436).size=[];


bio(437).blkName='Visual_Rotation/Triggered Subsystem/Embedded MATLAB Function';
bio(437).sigName='rotation';
bio(437).portIdx=0;
bio(437).dim=[1,1];
bio(437).sigWidth=1;
bio(437).sigAddress='&vmr_rwd_fix_leftarm_B.rotation';
bio(437).ndims=2;
bio(437).size=[];


bio(438).blkName='DataLogging/Create KINARM Data Subsystem/select KINData/MATLAB Function';
bio(438).sigName='dd_out';
bio(438).portIdx=0;
bio(438).dim=[2,1];
bio(438).sigWidth=2;
bio(438).sigAddress='&vmr_rwd_fix_leftarm_B.dd_out[0]';
bio(438).ndims=2;
bio(438).size=[];


bio(439).blkName='DataLogging/Create Task State Subsystem/Counter Free-Running/Output';
bio(439).sigName='';
bio(439).portIdx=0;
bio(439).dim=[1,1];
bio(439).sigWidth=1;
bio(439).sigAddress='&vmr_rwd_fix_leftarm_B.Output';
bio(439).ndims=2;
bio(439).size=[];


bio(440).blkName='DataLogging/Create Task State Subsystem/If Running/Compare';
bio(440).sigName='';
bio(440).portIdx=0;
bio(440).dim=[1,1];
bio(440).sigWidth=1;
bio(440).sigAddress='&vmr_rwd_fix_leftarm_B.Compare';
bio(440).ndims=2;
bio(440).size=[];


bio(441).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Data Type Conversion';
bio(441).sigName='';
bio(441).portIdx=0;
bio(441).dim=[1,108];
bio(441).sigWidth=108;
bio(441).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[0]';
bio(441).ndims=2;
bio(441).size=[];


bio(442).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Ideal Frames Per Packet';
bio(442).sigName='';
bio(442).portIdx=0;
bio(442).dim=[1,1];
bio(442).sigWidth=1;
bio(442).sigAddress='&vmr_rwd_fix_leftarm_B.IdealFramesPerPacket';
bio(442).ndims=2;
bio(442).size=[];


bio(443).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Math Function';
bio(443).sigName='';
bio(443).portIdx=0;
bio(443).dim=[1,1];
bio(443).sigWidth=1;
bio(443).sigAddress='&vmr_rwd_fix_leftarm_B.MathFunction';
bio(443).ndims=2;
bio(443).size=[];


bio(444).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/t-1';
bio(444).sigName='';
bio(444).portIdx=0;
bio(444).dim=[1,108];
bio(444).sigWidth=108;
bio(444).sigAddress='&vmr_rwd_fix_leftarm_B.t1[0]';
bio(444).ndims=2;
bio(444).size=[];


bio(445).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/t-2';
bio(445).sigName='';
bio(445).portIdx=0;
bio(445).dim=[1,108];
bio(445).sigWidth=108;
bio(445).sigAddress='&vmr_rwd_fix_leftarm_B.t2[0]';
bio(445).ndims=2;
bio(445).size=[];


bio(446).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/MinMax';
bio(446).sigName='';
bio(446).portIdx=0;
bio(446).dim=[1,1];
bio(446).sigWidth=1;
bio(446).sigAddress='&vmr_rwd_fix_leftarm_B.MinMax_k';
bio(446).ndims=2;
bio(446).size=[];


bio(447).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Product';
bio(447).sigName='';
bio(447).portIdx=0;
bio(447).dim=[1,1];
bio(447).sigWidth=1;
bio(447).sigAddress='&vmr_rwd_fix_leftarm_B.Product_l';
bio(447).ndims=2;
bio(447).size=[];


bio(448).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Relational Operator';
bio(448).sigName='';
bio(448).portIdx=0;
bio(448).dim=[1,1];
bio(448).sigWidth=1;
bio(448).sigAddress='&vmr_rwd_fix_leftarm_B.RelationalOperator';
bio(448).ndims=2;
bio(448).size=[];


bio(449).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Selector';
bio(449).sigName='';
bio(449).portIdx=0;
bio(449).dim=[1,400];
bio(449).sigWidth=400;
bio(449).sigAddress='&vmr_rwd_fix_leftarm_B.Selector_eu[0]';
bio(449).ndims=2;
bio(449).size=[];


bio(450).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Subtract';
bio(450).sigName='';
bio(450).portIdx=0;
bio(450).dim=[1,1];
bio(450).sigWidth=1;
bio(450).sigAddress='&vmr_rwd_fix_leftarm_B.Subtract_o';
bio(450).ndims=2;
bio(450).size=[];


bio(451).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Width';
bio(451).sigName='';
bio(451).portIdx=0;
bio(451).dim=[1,1];
bio(451).sigWidth=1;
bio(451).sigAddress='&vmr_rwd_fix_leftarm_B.Width';
bio(451).ndims=2;
bio(451).size=[];


bio(452).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/Data Type Conversion';
bio(452).sigName='';
bio(452).portIdx=0;
bio(452).dim=[1,1];
bio(452).sigWidth=1;
bio(452).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_cb';
bio(452).ndims=2;
bio(452).size=[];


bio(453).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/Memory2';
bio(453).sigName='trigger';
bio(453).portIdx=0;
bio(453).dim=[1,1];
bio(453).sigWidth=1;
bio(453).sigAddress='&vmr_rwd_fix_leftarm_B.trigger';
bio(453).ndims=2;
bio(453).size=[];


bio(454).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/Rate Transition1';
bio(454).sigName='Rqst UDP Reset';
bio(454).portIdx=0;
bio(454).dim=[1,1];
bio(454).sigWidth=1;
bio(454).sigAddress='&vmr_rwd_fix_leftarm_B.RqstUDPReset';
bio(454).ndims=2;
bio(454).size=[];


bio(455).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/Rate Transition2';
bio(455).sigName='';
bio(455).portIdx=0;
bio(455).dim=[3,1];
bio(455).sigWidth=3;
bio(455).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition2_js[0]';
bio(455).ndims=2;
bio(455).size=[];


bio(456).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p1';
bio(456).sigName='Data';
bio(456).portIdx=0;
bio(456).dim=[21,1];
bio(456).sigWidth=21;
bio(456).sigAddress='&vmr_rwd_fix_leftarm_B.Data[0]';
bio(456).ndims=2;
bio(456).size=[];


bio(457).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p2';
bio(457).sigName='Pckt_Recd';
bio(457).portIdx=1;
bio(457).dim=[1,1];
bio(457).sigWidth=1;
bio(457).sigAddress='&vmr_rwd_fix_leftarm_B.Pckt_Recd';
bio(457).ndims=2;
bio(457).size=[];


bio(458).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p3';
bio(458).sigName='Data 2';
bio(458).portIdx=2;
bio(458).dim=[21,1];
bio(458).sigWidth=21;
bio(458).sigAddress='&vmr_rwd_fix_leftarm_B.Data2[0]';
bio(458).ndims=2;
bio(458).size=[];


bio(459).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p4';
bio(459).sigName='Pckt_Recd 2';
bio(459).portIdx=3;
bio(459).dim=[1,1];
bio(459).sigWidth=1;
bio(459).sigAddress='&vmr_rwd_fix_leftarm_B.Pckt_Recd2';
bio(459).ndims=2;
bio(459).size=[];


bio(460).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p5';
bio(460).sigName='# double reads';
bio(460).portIdx=4;
bio(460).dim=[1,1];
bio(460).sigWidth=1;
bio(460).sigAddress='&vmr_rwd_fix_leftarm_B.doublereads';
bio(460).ndims=2;
bio(460).size=[];


bio(461).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive/p6';
bio(461).sigName='';
bio(461).portIdx=5;
bio(461).dim=[1,1];
bio(461).sigWidth=1;
bio(461).sigAddress='&vmr_rwd_fix_leftarm_B.UDPReceive_o6';
bio(461).ndims=2;
bio(461).size=[];


bio(462).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset/p1';
bio(462).sigName='# UDP Resets';
bio(462).portIdx=0;
bio(462).dim=[1,1];
bio(462).sigWidth=1;
bio(462).sigAddress='&vmr_rwd_fix_leftarm_B.UDPResets';
bio(462).ndims=2;
bio(462).size=[];


bio(463).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset/p2';
bio(463).sigName='';
bio(463).portIdx=1;
bio(463).dim=[3,1];
bio(463).sigWidth=3;
bio(463).sigAddress='&vmr_rwd_fix_leftarm_B.UDPReceivePortReset_o2[0]';
bio(463).ndims=2;
bio(463).size=[];


bio(464).blkName='DataLogging/Network Transfer Subsystem/UDP Receiver/Unpack';
bio(464).sigName='';
bio(464).portIdx=0;
bio(464).dim=[1,1];
bio(464).sigWidth=1;
bio(464).sigAddress='&vmr_rwd_fix_leftarm_B.Unpack';
bio(464).ndims=2;
bio(464).size=[];


bio(465).blkName='DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Pack';
bio(465).sigName='';
bio(465).portIdx=0;
bio(465).dim=[1640,1];
bio(465).sigWidth=1640;
bio(465).sigAddress='&vmr_rwd_fix_leftarm_B.Pack_i[0]';
bio(465).ndims=2;
bio(465).size=[];


bio(466).blkName='DataLogging/Poll Force Plates/plate1/parse packet 1/p1';
bio(466).sigName='forces';
bio(466).portIdx=0;
bio(466).dim=[3,1];
bio(466).sigWidth=3;
bio(466).sigAddress='&vmr_rwd_fix_leftarm_B.forces_g[0]';
bio(466).ndims=2;
bio(466).size=[];


bio(467).blkName='DataLogging/Poll Force Plates/plate1/parse packet 1/p2';
bio(467).sigName='moments';
bio(467).portIdx=1;
bio(467).dim=[3,1];
bio(467).sigWidth=3;
bio(467).sigAddress='&vmr_rwd_fix_leftarm_B.moments_p[0]';
bio(467).ndims=2;
bio(467).size=[];


bio(468).blkName='DataLogging/Poll Force Plates/plate1/parse packet 1/p3';
bio(468).sigName='timer';
bio(468).portIdx=2;
bio(468).dim=[1,1];
bio(468).sigWidth=1;
bio(468).sigAddress='&vmr_rwd_fix_leftarm_B.timer_c';
bio(468).ndims=2;
bio(468).size=[];


bio(469).blkName='DataLogging/Poll Force Plates/plate1/Receive/p1';
bio(469).sigName='';
bio(469).portIdx=0;
bio(469).dim=[64,1];
bio(469).sigWidth=64;
bio(469).sigAddress='&vmr_rwd_fix_leftarm_B.Receive_o1_k[0]';
bio(469).ndims=2;
bio(469).size=[];


bio(470).blkName='DataLogging/Poll Force Plates/plate1/Receive/p2';
bio(470).sigName='';
bio(470).portIdx=1;
bio(470).dim=[1,1];
bio(470).sigWidth=1;
bio(470).sigAddress='&vmr_rwd_fix_leftarm_B.Receive_o2_m';
bio(470).ndims=2;
bio(470).size=[];


bio(471).blkName='DataLogging/Poll Force Plates/plate2/parse packet 1/p1';
bio(471).sigName='forces';
bio(471).portIdx=0;
bio(471).dim=[3,1];
bio(471).sigWidth=3;
bio(471).sigAddress='&vmr_rwd_fix_leftarm_B.forces[0]';
bio(471).ndims=2;
bio(471).size=[];


bio(472).blkName='DataLogging/Poll Force Plates/plate2/parse packet 1/p2';
bio(472).sigName='moments';
bio(472).portIdx=1;
bio(472).dim=[3,1];
bio(472).sigWidth=3;
bio(472).sigAddress='&vmr_rwd_fix_leftarm_B.moments[0]';
bio(472).ndims=2;
bio(472).size=[];


bio(473).blkName='DataLogging/Poll Force Plates/plate2/parse packet 1/p3';
bio(473).sigName='timer';
bio(473).portIdx=2;
bio(473).dim=[1,1];
bio(473).sigWidth=1;
bio(473).sigAddress='&vmr_rwd_fix_leftarm_B.timer';
bio(473).ndims=2;
bio(473).size=[];


bio(474).blkName='DataLogging/Poll Force Plates/plate2/Receive1/p1';
bio(474).sigName='';
bio(474).portIdx=0;
bio(474).dim=[64,1];
bio(474).sigWidth=64;
bio(474).sigAddress='&vmr_rwd_fix_leftarm_B.Receive1_o1[0]';
bio(474).ndims=2;
bio(474).size=[];


bio(475).blkName='DataLogging/Poll Force Plates/plate2/Receive1/p2';
bio(475).sigName='';
bio(475).portIdx=1;
bio(475).dim=[1,1];
bio(475).sigWidth=1;
bio(475).sigAddress='&vmr_rwd_fix_leftarm_B.Receive1_o2';
bio(475).ndims=2;
bio(475).size=[];


bio(476).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/latch_errors/p1';
bio(476).sigName='errVals';
bio(476).portIdx=0;
bio(476).dim=[12,1];
bio(476).sigWidth=12;
bio(476).sigAddress='&vmr_rwd_fix_leftarm_B.errVals[0]';
bio(476).ndims=2;
bio(476).size=[];


bio(477).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/latch_errors/p2';
bio(477).sigName='DCErrVals';
bio(477).portIdx=1;
bio(477).dim=[12,1];
bio(477).sigWidth=12;
bio(477).sigAddress='&vmr_rwd_fix_leftarm_B.DCErrVals[0]';
bio(477).ndims=2;
bio(477).size=[];


bio(478).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/sdo_addrs/p1';
bio(478).sigName='intAddresses';
bio(478).portIdx=0;
bio(478).dim=[12,2];
bio(478).sigWidth=24;
bio(478).sigAddress='&vmr_rwd_fix_leftarm_B.intAddresses[0]';
bio(478).ndims=2;
bio(478).size=[];


bio(479).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/sdo_addrs/p2';
bio(479).sigName='floatAddresses';
bio(479).portIdx=1;
bio(479).dim=[12,2];
bio(479).sigWidth=24;
bio(479).sigAddress='&vmr_rwd_fix_leftarm_B.floatAddresses[0]';
bio(479).ndims=2;
bio(479).size=[];


bio(480).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/setState';
bio(480).sigName='motorEnableState';
bio(480).portIdx=0;
bio(480).dim=[1,1];
bio(480).sigWidth=1;
bio(480).sigAddress='&vmr_rwd_fix_leftarm_B.motorEnableState';
bio(480).ndims=2;
bio(480).size=[];


bio(481).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Data Type Conversion';
bio(481).sigName='';
bio(481).portIdx=0;
bio(481).dim=[1,1];
bio(481).sigWidth=1;
bio(481).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_h';
bio(481).ndims=2;
bio(481).size=[];


bio(482).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/convert';
bio(482).sigName='';
bio(482).portIdx=0;
bio(482).dim=[8,1];
bio(482).sigWidth=8;
bio(482).sigAddress='&vmr_rwd_fix_leftarm_B.convert[0]';
bio(482).ndims=2;
bio(482).size=[];


bio(483).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit/p1';
bio(483).sigName='';
bio(483).portIdx=0;
bio(483).dim=[6,1];
bio(483).sigWidth=6;
bio(483).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o1[0]';
bio(483).ndims=2;
bio(483).size=[];


bio(484).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit/p2';
bio(484).sigName='';
bio(484).portIdx=1;
bio(484).dim=[1,1];
bio(484).sigWidth=1;
bio(484).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o2';
bio(484).ndims=2;
bio(484).size=[];


bio(485).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit/p3';
bio(485).sigName='';
bio(485).portIdx=2;
bio(485).dim=[1,1];
bio(485).sigWidth=1;
bio(485).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o3';
bio(485).ndims=2;
bio(485).size=[];


bio(486).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit1/p1';
bio(486).sigName='';
bio(486).portIdx=0;
bio(486).dim=[6,1];
bio(486).sigWidth=6;
bio(486).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o1[0]';
bio(486).ndims=2;
bio(486).size=[];


bio(487).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit1/p2';
bio(487).sigName='';
bio(487).portIdx=1;
bio(487).dim=[1,1];
bio(487).sigWidth=1;
bio(487).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o2';
bio(487).ndims=2;
bio(487).size=[];


bio(488).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/BKIN EtherCATinit1/p3';
bio(488).sigName='';
bio(488).portIdx=2;
bio(488).dim=[1,1];
bio(488).sigWidth=1;
bio(488).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o3';
bio(488).ndims=2;
bio(488).size=[];


bio(489).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Switch';
bio(489).sigName='';
bio(489).portIdx=0;
bio(489).dim=[8,1];
bio(489).sigWidth=8;
bio(489).sigAddress='&vmr_rwd_fix_leftarm_B.Switch_m[0]';
bio(489).ndims=2;
bio(489).size=[];


bio(490).blkName='DataLogging/Poll KINARM/createKINData/Create KINARM Data Array/p1';
bio(490).sigName='kinarm_data';
bio(490).portIdx=0;
bio(490).dim=[3,50];
bio(490).sigWidth=150;
bio(490).sigAddress='&vmr_rwd_fix_leftarm_B.kinarm_data[0]';
bio(490).ndims=2;
bio(490).size=[];


bio(491).blkName='DataLogging/Poll KINARM/createKINData/Create KINARM Data Array/p2';
bio(491).sigName='primary_encoder_data_out';
bio(491).portIdx=1;
bio(491).dim=[2,6];
bio(491).sigWidth=12;
bio(491).sigAddress='&vmr_rwd_fix_leftarm_B.primary_encoder_data_out[0]';
bio(491).ndims=2;
bio(491).size=[];


bio(492).blkName='DataLogging/Poll KINARM/createKINData/bitpack';
bio(492).sigName='statusInts';
bio(492).portIdx=0;
bio(492).dim=[1,4];
bio(492).sigWidth=4;
bio(492).sigAddress='&vmr_rwd_fix_leftarm_B.statusInts[0]';
bio(492).ndims=2;
bio(492).size=[];


bio(493).blkName='DataLogging/Poll KINARM/createKINData/record errors/p1';
bio(493).sigName='newMessage';
bio(493).portIdx=0;
bio(493).dim=[1,6];
bio(493).sigWidth=6;
bio(493).sigAddress='&vmr_rwd_fix_leftarm_B.newMessage[0]';
bio(493).ndims=2;
bio(493).size=[];


bio(494).blkName='DataLogging/Poll KINARM/createKINData/record errors/p2';
bio(494).sigName='sentMessageCount';
bio(494).portIdx=1;
bio(494).dim=[1,1];
bio(494).sigWidth=1;
bio(494).sigAddress='&vmr_rwd_fix_leftarm_B.sentMessageCount';
bio(494).ndims=2;
bio(494).size=[];


bio(495).blkName='DataLogging/Poll KINARM/createKINData/Data Store Read';
bio(495).sigName='';
bio(495).portIdx=0;
bio(495).dim=[1,1];
bio(495).sigWidth=1;
bio(495).sigAddress='&vmr_rwd_fix_leftarm_B.DataStoreRead_l';
bio(495).ndims=2;
bio(495).size=[];


bio(496).blkName='DataLogging/Poll KINARM/createKINData/Delay Read';
bio(496).sigName='';
bio(496).portIdx=0;
bio(496).dim=[4,1];
bio(496).sigWidth=4;
bio(496).sigAddress='&vmr_rwd_fix_leftarm_B.DelayRead[0]';
bio(496).ndims=2;
bio(496).size=[];


bio(497).blkName='DataLogging/Poll KINARM/createKINData/ErrMsgs';
bio(497).sigName='';
bio(497).portIdx=0;
bio(497).dim=[4,5];
bio(497).sigWidth=20;
bio(497).sigAddress='&vmr_rwd_fix_leftarm_B.ErrMsgs[0]';
bio(497).ndims=2;
bio(497).size=[];


bio(498).blkName='DataLogging/Poll KINARM/createKINData/Primary read';
bio(498).sigName='';
bio(498).portIdx=0;
bio(498).dim=[12,1];
bio(498).sigWidth=12;
bio(498).sigAddress='&vmr_rwd_fix_leftarm_B.Primaryread[0]';
bio(498).ndims=2;
bio(498).size=[];


bio(499).blkName='DataLogging/Poll KINARM/createKINData/Read';
bio(499).sigName='';
bio(499).portIdx=0;
bio(499).dim=[16,1];
bio(499).sigWidth=16;
bio(499).sigAddress='&vmr_rwd_fix_leftarm_B.Read[0]';
bio(499).ndims=2;
bio(499).size=[];


bio(500).blkName='DataLogging/Poll KINARM/createKINData/Read HW';
bio(500).sigName='';
bio(500).portIdx=0;
bio(500).dim=[24,1];
bio(500).sigWidth=24;
bio(500).sigAddress='&vmr_rwd_fix_leftarm_B.ReadHW[0]';
bio(500).ndims=2;
bio(500).size=[];


bio(501).blkName='DataLogging/Poll KINARM/createKINData/Read Kinematics';
bio(501).sigName='';
bio(501).portIdx=0;
bio(501).dim=[20,1];
bio(501).sigWidth=20;
bio(501).sigAddress='&vmr_rwd_fix_leftarm_B.ReadKinematics[0]';
bio(501).ndims=2;
bio(501).size=[];


bio(502).blkName='DataLogging/Poll KINARM/createKINData/Servo Read';
bio(502).sigName='';
bio(502).portIdx=0;
bio(502).dim=[1,1];
bio(502).sigWidth=1;
bio(502).sigAddress='&vmr_rwd_fix_leftarm_B.ServoRead';
bio(502).ndims=2;
bio(502).size=[];


bio(503).blkName='DataLogging/Poll KINARM/createKINData/Status read';
bio(503).sigName='';
bio(503).portIdx=0;
bio(503).dim=[7,1];
bio(503).sigWidth=7;
bio(503).sigAddress='&vmr_rwd_fix_leftarm_B.Statusread[0]';
bio(503).ndims=2;
bio(503).size=[];


bio(504).blkName='DataLogging/Poll KINARM/createKINData/Status read1';
bio(504).sigName='';
bio(504).portIdx=0;
bio(504).dim=[8,1];
bio(504).sigWidth=8;
bio(504).sigAddress='&vmr_rwd_fix_leftarm_B.Statusread1_e[0]';
bio(504).ndims=2;
bio(504).size=[];


bio(505).blkName='DataLogging/Poll KINARM/createKINData/torque feedback1';
bio(505).sigName='';
bio(505).portIdx=0;
bio(505).dim=[8,1];
bio(505).sigWidth=8;
bio(505).sigAddress='&vmr_rwd_fix_leftarm_B.torquefeedback1[0]';
bio(505).ndims=2;
bio(505).size=[];


bio(506).blkName='DataLogging/Poll KINARM/createKINData/Data Type Conversion';
bio(506).sigName='';
bio(506).portIdx=0;
bio(506).dim=[1,6];
bio(506).sigWidth=6;
bio(506).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_nq[0]';
bio(506).ndims=2;
bio(506).size=[];


bio(507).blkName='DataLogging/Poll KINARM/isecat/Compare';
bio(507).sigName='';
bio(507).portIdx=0;
bio(507).dim=[1,1];
bio(507).sigWidth=1;
bio(507).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_n';
bio(507).ndims=2;
bio(507).size=[];


bio(508).blkName='DataLogging/Poll KINARM/ispmac/Compare';
bio(508).sigName='';
bio(508).portIdx=0;
bio(508).dim=[1,1];
bio(508).sigWidth=1;
bio(508).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_c';
bio(508).ndims=2;
bio(508).size=[];


bio(509).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p1';
bio(509).sigName='link_lengths';
bio(509).portIdx=0;
bio(509).dim=[1,2];
bio(509).sigWidth=2;
bio(509).sigAddress='&vmr_rwd_fix_leftarm_B.link_lengths_o[0]';
bio(509).ndims=2;
bio(509).size=[];


bio(510).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p2';
bio(510).sigName='pointer_offset';
bio(510).portIdx=1;
bio(510).dim=[1,1];
bio(510).sigWidth=1;
bio(510).sigAddress='&vmr_rwd_fix_leftarm_B.pointer_offset_k';
bio(510).ndims=2;
bio(510).size=[];


bio(511).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p3';
bio(511).sigName='shoulder_loc';
bio(511).portIdx=2;
bio(511).dim=[1,2];
bio(511).sigWidth=2;
bio(511).sigAddress='&vmr_rwd_fix_leftarm_B.shoulder_loc_o[0]';
bio(511).ndims=2;
bio(511).size=[];


bio(512).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p4';
bio(512).sigName='arm_orientation';
bio(512).portIdx=3;
bio(512).dim=[1,1];
bio(512).sigWidth=1;
bio(512).sigAddress='&vmr_rwd_fix_leftarm_B.arm_orientation_o';
bio(512).ndims=2;
bio(512).size=[];


bio(513).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p5';
bio(513).sigName='shoulder_ang';
bio(513).portIdx=4;
bio(513).dim=[1,1];
bio(513).sigWidth=1;
bio(513).sigAddress='&vmr_rwd_fix_leftarm_B.shoulder_ang_h';
bio(513).ndims=2;
bio(513).size=[];


bio(514).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p6';
bio(514).sigName='elbow_ang';
bio(514).portIdx=5;
bio(514).dim=[1,1];
bio(514).sigWidth=1;
bio(514).sigAddress='&vmr_rwd_fix_leftarm_B.elbow_ang_k';
bio(514).ndims=2;
bio(514).size=[];


bio(515).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p7';
bio(515).sigName='shoulder_velocity';
bio(515).portIdx=6;
bio(515).dim=[1,1];
bio(515).sigWidth=1;
bio(515).sigAddress='&vmr_rwd_fix_leftarm_B.shoulder_velocity_k';
bio(515).ndims=2;
bio(515).size=[];


bio(516).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p8';
bio(516).sigName='elbow_velocity';
bio(516).portIdx=7;
bio(516).dim=[1,1];
bio(516).sigWidth=1;
bio(516).sigAddress='&vmr_rwd_fix_leftarm_B.elbow_velocity_j';
bio(516).ndims=2;
bio(516).size=[];


bio(517).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p9';
bio(517).sigName='shoulder_acceleration';
bio(517).portIdx=8;
bio(517).dim=[1,1];
bio(517).sigWidth=1;
bio(517).sigAddress='&vmr_rwd_fix_leftarm_B.shoulder_acceleration_c';
bio(517).ndims=2;
bio(517).size=[];


bio(518).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p10';
bio(518).sigName='elbow_acceleration';
bio(518).portIdx=9;
bio(518).dim=[1,1];
bio(518).sigWidth=1;
bio(518).sigAddress='&vmr_rwd_fix_leftarm_B.elbow_acceleration_j';
bio(518).ndims=2;
bio(518).size=[];


bio(519).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p11';
bio(519).sigName='joint_torque_cmd';
bio(519).portIdx=10;
bio(519).dim=[1,2];
bio(519).sigWidth=2;
bio(519).sigAddress='&vmr_rwd_fix_leftarm_B.joint_torque_cmd_k[0]';
bio(519).ndims=2;
bio(519).size=[];


bio(520).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p12';
bio(520).sigName='motor_torque_cmd';
bio(520).portIdx=11;
bio(520).dim=[1,2];
bio(520).sigWidth=2;
bio(520).sigAddress='&vmr_rwd_fix_leftarm_B.motor_torque_cmd_b[0]';
bio(520).ndims=2;
bio(520).size=[];


bio(521).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p13';
bio(521).sigName='link_angle';
bio(521).portIdx=12;
bio(521).dim=[1,2];
bio(521).sigWidth=2;
bio(521).sigAddress='&vmr_rwd_fix_leftarm_B.link_angle_b[0]';
bio(521).ndims=2;
bio(521).size=[];


bio(522).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p14';
bio(522).sigName='link_velocity';
bio(522).portIdx=13;
bio(522).dim=[1,2];
bio(522).sigWidth=2;
bio(522).sigAddress='&vmr_rwd_fix_leftarm_B.link_velocity_k[0]';
bio(522).ndims=2;
bio(522).size=[];


bio(523).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p15';
bio(523).sigName='link_acceleration';
bio(523).portIdx=14;
bio(523).dim=[1,2];
bio(523).sigWidth=2;
bio(523).sigAddress='&vmr_rwd_fix_leftarm_B.link_acceleration_c[0]';
bio(523).ndims=2;
bio(523).size=[];


bio(524).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p16';
bio(524).sigName='hand_position';
bio(524).portIdx=15;
bio(524).dim=[1,2];
bio(524).sigWidth=2;
bio(524).sigAddress='&vmr_rwd_fix_leftarm_B.hand_position_g[0]';
bio(524).ndims=2;
bio(524).size=[];


bio(525).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p17';
bio(525).sigName='hand_velocity';
bio(525).portIdx=16;
bio(525).dim=[1,2];
bio(525).sigWidth=2;
bio(525).sigAddress='&vmr_rwd_fix_leftarm_B.hand_velocity_p[0]';
bio(525).ndims=2;
bio(525).size=[];


bio(526).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p18';
bio(526).sigName='hand_acceleration';
bio(526).portIdx=17;
bio(526).dim=[1,2];
bio(526).sigWidth=2;
bio(526).sigAddress='&vmr_rwd_fix_leftarm_B.hand_acceleration_e[0]';
bio(526).ndims=2;
bio(526).size=[];


bio(527).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p19';
bio(527).sigName='motor_status';
bio(527).portIdx=18;
bio(527).dim=[1,1];
bio(527).sigWidth=1;
bio(527).sigAddress='&vmr_rwd_fix_leftarm_B.motor_status_c';
bio(527).ndims=2;
bio(527).size=[];


bio(528).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p20';
bio(528).sigName='force_sensor_force_uvw';
bio(528).portIdx=19;
bio(528).dim=[1,3];
bio(528).sigWidth=3;
bio(528).sigAddress='&vmr_rwd_fix_leftarm_B.force_sensor_force_uvw_g[0]';
bio(528).ndims=2;
bio(528).size=[];


bio(529).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p21';
bio(529).sigName='force_sensor_torque_uvw';
bio(529).portIdx=20;
bio(529).dim=[1,3];
bio(529).sigWidth=3;
bio(529).sigAddress='&vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw_d[0]';
bio(529).ndims=2;
bio(529).size=[];


bio(530).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p22';
bio(530).sigName='force_sensor_force_xyz';
bio(530).portIdx=21;
bio(530).dim=[1,3];
bio(530).sigWidth=3;
bio(530).sigAddress='&vmr_rwd_fix_leftarm_B.force_sensor_force_xyz_g[0]';
bio(530).ndims=2;
bio(530).size=[];


bio(531).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p23';
bio(531).sigName='force_sensor_torque_xyz';
bio(531).portIdx=22;
bio(531).dim=[1,3];
bio(531).sigWidth=3;
bio(531).sigAddress='&vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz_g[0]';
bio(531).ndims=2;
bio(531).size=[];


bio(532).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm1/p24';
bio(532).sigName='force_sensor_timestamp';
bio(532).portIdx=23;
bio(532).dim=[1,1];
bio(532).sigWidth=1;
bio(532).sigAddress='&vmr_rwd_fix_leftarm_B.force_sensor_timestamp_k';
bio(532).ndims=2;
bio(532).size=[];


bio(533).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p1';
bio(533).sigName='link_lengths';
bio(533).portIdx=0;
bio(533).dim=[1,2];
bio(533).sigWidth=2;
bio(533).sigAddress='&vmr_rwd_fix_leftarm_B.link_lengths[0]';
bio(533).ndims=2;
bio(533).size=[];


bio(534).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p2';
bio(534).sigName='pointer_offset';
bio(534).portIdx=1;
bio(534).dim=[1,1];
bio(534).sigWidth=1;
bio(534).sigAddress='&vmr_rwd_fix_leftarm_B.pointer_offset';
bio(534).ndims=2;
bio(534).size=[];


bio(535).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p3';
bio(535).sigName='shoulder_loc';
bio(535).portIdx=2;
bio(535).dim=[1,2];
bio(535).sigWidth=2;
bio(535).sigAddress='&vmr_rwd_fix_leftarm_B.shoulder_loc[0]';
bio(535).ndims=2;
bio(535).size=[];


bio(536).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p4';
bio(536).sigName='arm_orientation';
bio(536).portIdx=3;
bio(536).dim=[1,1];
bio(536).sigWidth=1;
bio(536).sigAddress='&vmr_rwd_fix_leftarm_B.arm_orientation';
bio(536).ndims=2;
bio(536).size=[];


bio(537).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p5';
bio(537).sigName='shoulder_ang';
bio(537).portIdx=4;
bio(537).dim=[1,1];
bio(537).sigWidth=1;
bio(537).sigAddress='&vmr_rwd_fix_leftarm_B.shoulder_ang';
bio(537).ndims=2;
bio(537).size=[];


bio(538).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p6';
bio(538).sigName='elbow_ang';
bio(538).portIdx=5;
bio(538).dim=[1,1];
bio(538).sigWidth=1;
bio(538).sigAddress='&vmr_rwd_fix_leftarm_B.elbow_ang';
bio(538).ndims=2;
bio(538).size=[];


bio(539).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p7';
bio(539).sigName='shoulder_velocity';
bio(539).portIdx=6;
bio(539).dim=[1,1];
bio(539).sigWidth=1;
bio(539).sigAddress='&vmr_rwd_fix_leftarm_B.shoulder_velocity';
bio(539).ndims=2;
bio(539).size=[];


bio(540).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p8';
bio(540).sigName='elbow_velocity';
bio(540).portIdx=7;
bio(540).dim=[1,1];
bio(540).sigWidth=1;
bio(540).sigAddress='&vmr_rwd_fix_leftarm_B.elbow_velocity';
bio(540).ndims=2;
bio(540).size=[];


bio(541).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p9';
bio(541).sigName='shoulder_acceleration';
bio(541).portIdx=8;
bio(541).dim=[1,1];
bio(541).sigWidth=1;
bio(541).sigAddress='&vmr_rwd_fix_leftarm_B.shoulder_acceleration';
bio(541).ndims=2;
bio(541).size=[];


bio(542).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p10';
bio(542).sigName='elbow_acceleration';
bio(542).portIdx=9;
bio(542).dim=[1,1];
bio(542).sigWidth=1;
bio(542).sigAddress='&vmr_rwd_fix_leftarm_B.elbow_acceleration';
bio(542).ndims=2;
bio(542).size=[];


bio(543).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p11';
bio(543).sigName='joint_torque_cmd';
bio(543).portIdx=10;
bio(543).dim=[1,2];
bio(543).sigWidth=2;
bio(543).sigAddress='&vmr_rwd_fix_leftarm_B.joint_torque_cmd[0]';
bio(543).ndims=2;
bio(543).size=[];


bio(544).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p12';
bio(544).sigName='motor_torque_cmd';
bio(544).portIdx=11;
bio(544).dim=[1,2];
bio(544).sigWidth=2;
bio(544).sigAddress='&vmr_rwd_fix_leftarm_B.motor_torque_cmd[0]';
bio(544).ndims=2;
bio(544).size=[];


bio(545).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p13';
bio(545).sigName='link_angle';
bio(545).portIdx=12;
bio(545).dim=[1,2];
bio(545).sigWidth=2;
bio(545).sigAddress='&vmr_rwd_fix_leftarm_B.link_angle[0]';
bio(545).ndims=2;
bio(545).size=[];


bio(546).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p14';
bio(546).sigName='link_velocity';
bio(546).portIdx=13;
bio(546).dim=[1,2];
bio(546).sigWidth=2;
bio(546).sigAddress='&vmr_rwd_fix_leftarm_B.link_velocity[0]';
bio(546).ndims=2;
bio(546).size=[];


bio(547).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p15';
bio(547).sigName='link_acceleration';
bio(547).portIdx=14;
bio(547).dim=[1,2];
bio(547).sigWidth=2;
bio(547).sigAddress='&vmr_rwd_fix_leftarm_B.link_acceleration[0]';
bio(547).ndims=2;
bio(547).size=[];


bio(548).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p16';
bio(548).sigName='hand_position';
bio(548).portIdx=15;
bio(548).dim=[1,2];
bio(548).sigWidth=2;
bio(548).sigAddress='&vmr_rwd_fix_leftarm_B.hand_position[0]';
bio(548).ndims=2;
bio(548).size=[];


bio(549).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p17';
bio(549).sigName='hand_velocity';
bio(549).portIdx=16;
bio(549).dim=[1,2];
bio(549).sigWidth=2;
bio(549).sigAddress='&vmr_rwd_fix_leftarm_B.hand_velocity[0]';
bio(549).ndims=2;
bio(549).size=[];


bio(550).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p18';
bio(550).sigName='hand_acceleration';
bio(550).portIdx=17;
bio(550).dim=[1,2];
bio(550).sigWidth=2;
bio(550).sigAddress='&vmr_rwd_fix_leftarm_B.hand_acceleration[0]';
bio(550).ndims=2;
bio(550).size=[];


bio(551).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p19';
bio(551).sigName='motor_status';
bio(551).portIdx=18;
bio(551).dim=[1,1];
bio(551).sigWidth=1;
bio(551).sigAddress='&vmr_rwd_fix_leftarm_B.motor_status';
bio(551).ndims=2;
bio(551).size=[];


bio(552).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p20';
bio(552).sigName='force_sensor_force_uvw';
bio(552).portIdx=19;
bio(552).dim=[1,3];
bio(552).sigWidth=3;
bio(552).sigAddress='&vmr_rwd_fix_leftarm_B.force_sensor_force_uvw[0]';
bio(552).ndims=2;
bio(552).size=[];


bio(553).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p21';
bio(553).sigName='force_sensor_torque_uvw';
bio(553).portIdx=20;
bio(553).dim=[1,3];
bio(553).sigWidth=3;
bio(553).sigAddress='&vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw[0]';
bio(553).ndims=2;
bio(553).size=[];


bio(554).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p22';
bio(554).sigName='force_sensor_force_xyz';
bio(554).portIdx=21;
bio(554).dim=[1,3];
bio(554).sigWidth=3;
bio(554).sigAddress='&vmr_rwd_fix_leftarm_B.force_sensor_force_xyz[0]';
bio(554).ndims=2;
bio(554).size=[];


bio(555).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p23';
bio(555).sigName='force_sensor_torque_xyz';
bio(555).portIdx=22;
bio(555).dim=[1,3];
bio(555).sigWidth=3;
bio(555).sigAddress='&vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz[0]';
bio(555).ndims=2;
bio(555).size=[];


bio(556).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINData arm2/p24';
bio(556).sigName='force_sensor_timestamp';
bio(556).portIdx=23;
bio(556).dim=[1,1];
bio(556).sigWidth=1;
bio(556).sigAddress='&vmr_rwd_fix_leftarm_B.force_sensor_timestamp';
bio(556).ndims=2;
bio(556).size=[];


bio(557).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p1';
bio(557).sigName='active_arm';
bio(557).portIdx=0;
bio(557).dim=[1,1];
bio(557).sigWidth=1;
bio(557).sigAddress='&vmr_rwd_fix_leftarm_B.active_arm';
bio(557).ndims=2;
bio(557).size=[];


bio(558).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p2';
bio(558).sigName='delayEstimates';
bio(558).portIdx=1;
bio(558).dim=[1,4];
bio(558).sigWidth=4;
bio(558).sigAddress='&vmr_rwd_fix_leftarm_B.delayEstimates[0]';
bio(558).ndims=2;
bio(558).size=[];


bio(559).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p3';
bio(559).sigName='servoCounter';
bio(559).portIdx=2;
bio(559).dim=[1,1];
bio(559).sigWidth=1;
bio(559).sigAddress='&vmr_rwd_fix_leftarm_B.servoCounter';
bio(559).ndims=2;
bio(559).size=[];


bio(560).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p4';
bio(560).sigName='calibrationButtonBits';
bio(560).portIdx=3;
bio(560).dim=[1,1];
bio(560).sigWidth=1;
bio(560).sigAddress='&vmr_rwd_fix_leftarm_B.calibrationButtonBits';
bio(560).ndims=2;
bio(560).size=[];


bio(561).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p5';
bio(561).sigName='handFF';
bio(561).portIdx=4;
bio(561).dim=[1,1];
bio(561).sigWidth=1;
bio(561).sigAddress='&vmr_rwd_fix_leftarm_B.handFF';
bio(561).ndims=2;
bio(561).size=[];


bio(562).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p6';
bio(562).sigName='handFF_Dex';
bio(562).portIdx=5;
bio(562).dim=[1,1];
bio(562).sigWidth=1;
bio(562).sigAddress='&vmr_rwd_fix_leftarm_B.handFF_Dex';
bio(562).ndims=2;
bio(562).size=[];


bio(563).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p7';
bio(563).sigName='handFBArm';
bio(563).portIdx=6;
bio(563).dim=[1,1];
bio(563).sigWidth=1;
bio(563).sigAddress='&vmr_rwd_fix_leftarm_B.handFBArm';
bio(563).ndims=2;
bio(563).size=[];


bio(564).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p8';
bio(564).sigName='handFBRadius';
bio(564).portIdx=7;
bio(564).dim=[1,1];
bio(564).sigWidth=1;
bio(564).sigAddress='&vmr_rwd_fix_leftarm_B.handFBRadius';
bio(564).ndims=2;
bio(564).size=[];


bio(565).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p9';
bio(565).sigName='handFBControl';
bio(565).portIdx=8;
bio(565).dim=[1,1];
bio(565).sigWidth=1;
bio(565).sigAddress='&vmr_rwd_fix_leftarm_B.handFBControl';
bio(565).ndims=2;
bio(565).size=[];


bio(566).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p10';
bio(566).sigName='handFBColor';
bio(566).portIdx=9;
bio(566).dim=[1,1];
bio(566).sigWidth=1;
bio(566).sigAddress='&vmr_rwd_fix_leftarm_B.handFBColor';
bio(566).ndims=2;
bio(566).size=[];


bio(567).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p11';
bio(567).sigName='hasGaze';
bio(567).portIdx=10;
bio(567).dim=[1,1];
bio(567).sigWidth=1;
bio(567).sigAddress='&vmr_rwd_fix_leftarm_B.hasGaze';
bio(567).ndims=2;
bio(567).size=[];


bio(568).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p12';
bio(568).sigName='gazeFB';
bio(568).portIdx=11;
bio(568).dim=[1,1];
bio(568).sigWidth=1;
bio(568).sigAddress='&vmr_rwd_fix_leftarm_B.gazeFB';
bio(568).ndims=2;
bio(568).size=[];


bio(569).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p13';
bio(569).sigName='gazeLocation';
bio(569).portIdx=12;
bio(569).dim=[1,2];
bio(569).sigWidth=2;
bio(569).sigAddress='&vmr_rwd_fix_leftarm_B.gazeLocation[0]';
bio(569).ndims=2;
bio(569).size=[];


bio(570).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p14';
bio(570).sigName='gazeTimestamp';
bio(570).portIdx=13;
bio(570).dim=[1,1];
bio(570).sigWidth=1;
bio(570).sigAddress='&vmr_rwd_fix_leftarm_B.gazeTimestamp';
bio(570).ndims=2;
bio(570).size=[];


bio(571).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p15';
bio(571).sigName='gazePupilArea';
bio(571).portIdx=14;
bio(571).dim=[1,1];
bio(571).sigWidth=1;
bio(571).sigAddress='&vmr_rwd_fix_leftarm_B.gazePupilArea';
bio(571).ndims=2;
bio(571).size=[];


bio(572).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p16';
bio(572).sigName='gazeEvent';
bio(572).portIdx=15;
bio(572).dim=[1,3];
bio(572).sigWidth=3;
bio(572).sigAddress='&vmr_rwd_fix_leftarm_B.gazeEvent[0]';
bio(572).ndims=2;
bio(572).size=[];


bio(573).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p17';
bio(573).sigName='gazeVector';
bio(573).portIdx=16;
bio(573).dim=[1,3];
bio(573).sigWidth=3;
bio(573).sigAddress='&vmr_rwd_fix_leftarm_B.gazeVector[0]';
bio(573).ndims=2;
bio(573).size=[];


bio(574).blkName='DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral/p18';
bio(574).sigName='gazePupilLoc';
bio(574).portIdx=17;
bio(574).dim=[1,3];
bio(574).sigWidth=3;
bio(574).sigAddress='&vmr_rwd_fix_leftarm_B.gazePupilLoc[0]';
bio(574).ndims=2;
bio(574).size=[];


bio(575).blkName='DataLogging/Poll KINARM/make KINData bus/Selector';
bio(575).sigName='';
bio(575).portIdx=0;
bio(575).dim=[1,50];
bio(575).sigWidth=50;
bio(575).sigAddress='&vmr_rwd_fix_leftarm_B.Selector_c[0]';
bio(575).ndims=2;
bio(575).size=[];


bio(576).blkName='DataLogging/Poll KINARM/make KINData bus/Selector1';
bio(576).sigName='';
bio(576).portIdx=0;
bio(576).dim=[1,50];
bio(576).sigWidth=50;
bio(576).sigAddress='&vmr_rwd_fix_leftarm_B.Selector1_m[0]';
bio(576).ndims=2;
bio(576).size=[];


bio(577).blkName='DataLogging/Poll KINARM/make KINData bus/Selector2';
bio(577).sigName='';
bio(577).portIdx=0;
bio(577).dim=[1,50];
bio(577).sigWidth=50;
bio(577).sigAddress='&vmr_rwd_fix_leftarm_B.Selector2_o[0]';
bio(577).ndims=2;
bio(577).size=[];


bio(578).blkName='DataLogging/Poll KINARM/split_primary/split_primary/p1';
bio(578).sigName='link_angles';
bio(578).portIdx=0;
bio(578).dim=[1,2];
bio(578).sigWidth=2;
bio(578).sigAddress='&vmr_rwd_fix_leftarm_B.sf_split_primary.link_angles[0]';
bio(578).ndims=2;
bio(578).size=[];


bio(579).blkName='DataLogging/Poll KINARM/split_primary/split_primary/p2';
bio(579).sigName='link_velocities';
bio(579).portIdx=1;
bio(579).dim=[1,2];
bio(579).sigWidth=2;
bio(579).sigAddress='&vmr_rwd_fix_leftarm_B.sf_split_primary.link_velocities[0]';
bio(579).ndims=2;
bio(579).size=[];


bio(580).blkName='DataLogging/Poll KINARM/split_primary/split_primary/p3';
bio(580).sigName='link_acceleration';
bio(580).portIdx=2;
bio(580).dim=[1,2];
bio(580).sigWidth=2;
bio(580).sigAddress='&vmr_rwd_fix_leftarm_B.sf_split_primary.link_acceleration[0]';
bio(580).ndims=2;
bio(580).size=[];


bio(581).blkName='DataLogging/Poll KINARM/split_primary/split_primary1/p1';
bio(581).sigName='link_angles';
bio(581).portIdx=0;
bio(581).dim=[1,2];
bio(581).sigWidth=2;
bio(581).sigAddress='&vmr_rwd_fix_leftarm_B.sf_split_primary1.link_angles[0]';
bio(581).ndims=2;
bio(581).size=[];


bio(582).blkName='DataLogging/Poll KINARM/split_primary/split_primary1/p2';
bio(582).sigName='link_velocities';
bio(582).portIdx=1;
bio(582).dim=[1,2];
bio(582).sigWidth=2;
bio(582).sigAddress='&vmr_rwd_fix_leftarm_B.sf_split_primary1.link_velocities[0]';
bio(582).ndims=2;
bio(582).size=[];


bio(583).blkName='DataLogging/Poll KINARM/split_primary/split_primary1/p3';
bio(583).sigName='link_acceleration';
bio(583).portIdx=2;
bio(583).dim=[1,2];
bio(583).sigWidth=2;
bio(583).sigAddress='&vmr_rwd_fix_leftarm_B.sf_split_primary1.link_acceleration[0]';
bio(583).ndims=2;
bio(583).size=[];


bio(584).blkName='DataLogging/Poll KINARM/split_primary/Selector1';
bio(584).sigName='';
bio(584).portIdx=0;
bio(584).dim=[1,6];
bio(584).sigWidth=6;
bio(584).sigAddress='&vmr_rwd_fix_leftarm_B.Selector1_a[0]';
bio(584).ndims=2;
bio(584).size=[];


bio(585).blkName='DataLogging/Poll KINARM/split_primary/Selector2';
bio(585).sigName='';
bio(585).portIdx=0;
bio(585).dim=[1,6];
bio(585).sigWidth=6;
bio(585).sigAddress='&vmr_rwd_fix_leftarm_B.Selector2_i[0]';
bio(585).ndims=2;
bio(585).size=[];


bio(586).blkName='DataLogging/apply loads/EtherCAT Apply Loads/convert torques';
bio(586).sigName='ecatTorques';
bio(586).portIdx=0;
bio(586).dim=[1,4];
bio(586).sigWidth=4;
bio(586).sigAddress='&vmr_rwd_fix_leftarm_B.ecatTorques[0]';
bio(586).ndims=2;
bio(586).size=[];


bio(587).blkName='DataLogging/apply loads/EtherCAT Apply Loads/Data Store Read';
bio(587).sigName='';
bio(587).portIdx=0;
bio(587).dim=[14,1];
bio(587).sigWidth=14;
bio(587).sigAddress='&vmr_rwd_fix_leftarm_B.DataStoreRead[0]';
bio(587).ndims=2;
bio(587).size=[];


bio(588).blkName='DataLogging/apply loads/apply pmac loads/Data Type Conversion';
bio(588).sigName='';
bio(588).portIdx=0;
bio(588).dim=[6,1];
bio(588).sigWidth=6;
bio(588).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_a1[0]';
bio(588).ndims=2;
bio(588).size=[];


bio(589).blkName='DataLogging/apply loads/apply pmac loads/Data Type Conversion1';
bio(589).sigName='';
bio(589).portIdx=0;
bio(589).dim=[6,1];
bio(589).sigWidth=6;
bio(589).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_cq[0]';
bio(589).ndims=2;
bio(589).size=[];


bio(590).blkName='DataLogging/apply loads/apply pmac loads/Data Type Conversion6';
bio(590).sigName='';
bio(590).portIdx=0;
bio(590).dim=[4,1];
bio(590).sigWidth=4;
bio(590).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion6[0]';
bio(590).ndims=2;
bio(590).size=[];


bio(591).blkName='DataLogging/apply loads/apply pmac loads/Product';
bio(591).sigName='';
bio(591).portIdx=0;
bio(591).dim=[4,1];
bio(591).sigWidth=4;
bio(591).sigAddress='&vmr_rwd_fix_leftarm_B.Product_m[0]';
bio(591).ndims=2;
bio(591).size=[];


bio(592).blkName='DataLogging/apply loads/isecat/Compare';
bio(592).sigName='';
bio(592).portIdx=0;
bio(592).dim=[1,1];
bio(592).sigWidth=1;
bio(592).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_b';
bio(592).ndims=2;
bio(592).size=[];


bio(593).blkName='DataLogging/apply loads/isecat1/Compare';
bio(593).sigName='';
bio(593).portIdx=0;
bio(593).dim=[1,1];
bio(593).sigWidth=1;
bio(593).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_l';
bio(593).ndims=2;
bio(593).size=[];


bio(594).blkName='DataLogging/create_lab_info/Subsystem/MATLAB Function/p1';
bio(594).sigName='is_right_arm';
bio(594).portIdx=0;
bio(594).dim=[1,1];
bio(594).sigWidth=1;
bio(594).sigAddress='&vmr_rwd_fix_leftarm_B.sf_MATLABFunction_o.is_right_arm';
bio(594).ndims=2;
bio(594).size=[];


bio(595).blkName='DataLogging/create_lab_info/Subsystem/MATLAB Function/p2';
bio(595).sigName='isExo';
bio(595).portIdx=1;
bio(595).dim=[1,1];
bio(595).sigWidth=1;
bio(595).sigAddress='&vmr_rwd_fix_leftarm_B.sf_MATLABFunction_o.isExo';
bio(595).ndims=2;
bio(595).size=[];


bio(596).blkName='DataLogging/create_lab_info/Subsystem/MATLAB Function/p3';
bio(596).sigName='has_high_res_encoders';
bio(596).portIdx=2;
bio(596).dim=[1,1];
bio(596).sigWidth=1;
bio(596).sigAddress='&vmr_rwd_fix_leftarm_B.sf_MATLABFunction_o.has_high_res_encoders';
bio(596).ndims=2;
bio(596).size=[];


bio(597).blkName='DataLogging/create_lab_info/Subsystem/MATLAB Function1/p1';
bio(597).sigName='is_right_arm';
bio(597).portIdx=0;
bio(597).dim=[1,1];
bio(597).sigWidth=1;
bio(597).sigAddress='&vmr_rwd_fix_leftarm_B.sf_MATLABFunction1_m.is_right_arm';
bio(597).ndims=2;
bio(597).size=[];


bio(598).blkName='DataLogging/create_lab_info/Subsystem/MATLAB Function1/p2';
bio(598).sigName='isExo';
bio(598).portIdx=1;
bio(598).dim=[1,1];
bio(598).sigWidth=1;
bio(598).sigAddress='&vmr_rwd_fix_leftarm_B.sf_MATLABFunction1_m.isExo';
bio(598).ndims=2;
bio(598).size=[];


bio(599).blkName='DataLogging/create_lab_info/Subsystem/MATLAB Function1/p3';
bio(599).sigName='has_high_res_encoders';
bio(599).portIdx=2;
bio(599).dim=[1,1];
bio(599).sigWidth=1;
bio(599).sigAddress='&vmr_rwd_fix_leftarm_B.sf_MATLABFunction1_m.has_high_res_encoders';
bio(599).ndims=2;
bio(599).size=[];


bio(600).blkName='GUI Control/Task Execution Control Subsystem/Compare To Constant/Compare';
bio(600).sigName='';
bio(600).portIdx=0;
bio(600).dim=[1,1];
bio(600).sigWidth=1;
bio(600).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_o';
bio(600).ndims=2;
bio(600).size=[];


bio(601).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/convert_to_segment_angles';
bio(601).sigName='SEGMENT_ANG';
bio(601).portIdx=0;
bio(601).dim=[2,1];
bio(601).sigWidth=2;
bio(601).sigAddress='&vmr_rwd_fix_leftarm_B.SEGMENT_ANG_m[0]';
bio(601).ndims=2;
bio(601).size=[];


bio(602).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/xy_to_segment_angles_EXO';
bio(602).sigName='SEGMENT_ANG';
bio(602).portIdx=0;
bio(602).dim=[2,1];
bio(602).sigWidth=2;
bio(602).sigAddress='&vmr_rwd_fix_leftarm_B.SEGMENT_ANG[0]';
bio(602).ndims=2;
bio(602).size=[];


bio(603).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Switch';
bio(603).sigName='';
bio(603).portIdx=0;
bio(603).dim=[2,1];
bio(603).sigWidth=2;
bio(603).sigAddress='&vmr_rwd_fix_leftarm_B.Switch_ir[0]';
bio(603).ndims=2;
bio(603).size=[];


bio(604).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Switch1';
bio(604).sigName='';
bio(604).portIdx=0;
bio(604).dim=[2,1];
bio(604).sigWidth=2;
bio(604).sigAddress='&vmr_rwd_fix_leftarm_B.Switch1_o[0]';
bio(604).ndims=2;
bio(604).size=[];


bio(605).blkName='Subsystem/KINARM_Exo_Position_Controller/KINARM filter/consts';
bio(605).sigName='constants';
bio(605).portIdx=0;
bio(605).dim=[1,3];
bio(605).sigWidth=3;
bio(605).sigAddress='&vmr_rwd_fix_leftarm_B.constants[0]';
bio(605).ndims=2;
bio(605).size=[];


bio(606).blkName='Subsystem/KINARM_Exo_Position_Controller/KINARM filter/filter';
bio(606).sigName='filteredVals';
bio(606).portIdx=0;
bio(606).dim=[1,4];
bio(606).sigWidth=4;
bio(606).sigAddress='&vmr_rwd_fix_leftarm_B.filteredVals[0]';
bio(606).ndims=2;
bio(606).size=[];


bio(607).blkName='DataLogging/Create Task State Subsystem/Counter Free-Running/Increment Real World/FixPt Sum1';
bio(607).sigName='';
bio(607).portIdx=0;
bio(607).dim=[1,1];
bio(607).sigWidth=1;
bio(607).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSum1';
bio(607).ndims=2;
bio(607).size=[];


bio(608).blkName='DataLogging/Create Task State Subsystem/Counter Free-Running/Wrap To Zero/FixPt Switch';
bio(608).sigName='';
bio(608).portIdx=0;
bio(608).dim=[1,1];
bio(608).sigWidth=1;
bio(608).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSwitch';
bio(608).ndims=2;
bio(608).size=[];


bio(609).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Counter/Sum';
bio(609).sigName='';
bio(609).portIdx=0;
bio(609).dim=[1,1];
bio(609).sigWidth=1;
bio(609).sigAddress='&vmr_rwd_fix_leftarm_B.Sum_j';
bio(609).ndims=2;
bio(609).size=[];


bio(610).blkName='DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Counter/Unit Delay';
bio(610).sigName='';
bio(610).portIdx=0;
bio(610).dim=[1,1];
bio(610).sigWidth=1;
bio(610).sigAddress='&vmr_rwd_fix_leftarm_B.UnitDelay_h';
bio(610).ndims=2;
bio(610).size=[];


bio(611).blkName='DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Output';
bio(611).sigName='';
bio(611).portIdx=0;
bio(611).dim=[1,1];
bio(611).sigWidth=1;
bio(611).sigAddress='&vmr_rwd_fix_leftarm_B.Output_n';
bio(611).ndims=2;
bio(611).size=[];


bio(612).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Find Robot type';
bio(612).sigName='robotType';
bio(612).portIdx=0;
bio(612).dim=[1,1];
bio(612).sigWidth=1;
bio(612).sigAddress='&vmr_rwd_fix_leftarm_B.sf_FindRobottype.robotType';
bio(612).ndims=2;
bio(612).size=[];


bio(613).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO read machine/p1';
bio(613).sigName='SDOCommand';
bio(613).portIdx=0;
bio(613).dim=[3,1];
bio(613).sigWidth=3;
bio(613).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.SDOCommand[0]';
bio(613).ndims=2;
bio(613).size=[];


bio(614).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO read machine/p2';
bio(614).sigName='intSDOValues';
bio(614).portIdx=1;
bio(614).dim=[20,1];
bio(614).sigWidth=20;
bio(614).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues[0]';
bio(614).ndims=2;
bio(614).size=[];


bio(615).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO read machine/p3';
bio(615).sigName='floatSDOValues';
bio(615).portIdx=2;
bio(615).dim=[20,1];
bio(615).sigWidth=20;
bio(615).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[0]';
bio(615).ndims=2;
bio(615).size=[];


bio(616).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO read machine/p4';
bio(616).sigName='complete';
bio(616).portIdx=3;
bio(616).dim=[1,1];
bio(616).sigWidth=1;
bio(616).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.complete';
bio(616).ndims=2;
bio(616).size=[];


bio(617).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/forceEnableDisable';
bio(617).sigName='forceMotorState';
bio(617).portIdx=0;
bio(617).dim=[1,1];
bio(617).sigWidth=1;
bio(617).sigAddress='&vmr_rwd_fix_leftarm_B.sf_forceEnableDisable.forceMotorState';
bio(617).ndims=2;
bio(617).size=[];


bio(618).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/size';
bio(618).sigName='count';
bio(618).portIdx=0;
bio(618).dim=[1,1];
bio(618).sigWidth=1;
bio(618).sigAddress='&vmr_rwd_fix_leftarm_B.sf_size.count';
bio(618).ndims=2;
bio(618).size=[];


bio(619).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/size1';
bio(619).sigName='count';
bio(619).portIdx=0;
bio(619).dim=[1,1];
bio(619).sigWidth=1;
bio(619).sigAddress='&vmr_rwd_fix_leftarm_B.sf_size1.count';
bio(619).ndims=2;
bio(619).size=[];


bio(620).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p1';
bio(620).sigName='encoderCounts';
bio(620).portIdx=0;
bio(620).dim=[1,2];
bio(620).sigWidth=2;
bio(620).sigAddress='&vmr_rwd_fix_leftarm_B.encoderCounts_h[0]';
bio(620).ndims=2;
bio(620).size=[];


bio(621).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p2';
bio(621).sigName='FTSensorOffset';
bio(621).portIdx=1;
bio(621).dim=[1,1];
bio(621).sigWidth=1;
bio(621).sigAddress='&vmr_rwd_fix_leftarm_B.FTSensorOffset_j';
bio(621).ndims=2;
bio(621).size=[];


bio(622).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p3';
bio(622).sigName='calibPinAngles';
bio(622).portIdx=2;
bio(622).dim=[1,2];
bio(622).sigWidth=2;
bio(622).sigAddress='&vmr_rwd_fix_leftarm_B.calibPinAngles_m[0]';
bio(622).ndims=2;
bio(622).size=[];


bio(623).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p4';
bio(623).sigName='absAngOffsets';
bio(623).portIdx=3;
bio(623).dim=[1,2];
bio(623).sigWidth=2;
bio(623).sigAddress='&vmr_rwd_fix_leftarm_B.absAngOffsets_c[0]';
bio(623).ndims=2;
bio(623).size=[];


bio(624).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p5';
bio(624).sigName='linkLengths';
bio(624).portIdx=4;
bio(624).dim=[1,2];
bio(624).sigWidth=2;
bio(624).sigAddress='&vmr_rwd_fix_leftarm_B.linkLengths_j[0]';
bio(624).ndims=2;
bio(624).size=[];


bio(625).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p6';
bio(625).sigName='L2CalibPinOffset';
bio(625).portIdx=5;
bio(625).dim=[1,1];
bio(625).sigWidth=1;
bio(625).sigAddress='&vmr_rwd_fix_leftarm_B.L2CalibPinOffset_c';
bio(625).ndims=2;
bio(625).size=[];


bio(626).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p7';
bio(626).sigName='continuousTorques';
bio(626).portIdx=6;
bio(626).dim=[1,2];
bio(626).sigWidth=2;
bio(626).sigAddress='&vmr_rwd_fix_leftarm_B.continuousTorques_j[0]';
bio(626).ndims=2;
bio(626).size=[];


bio(627).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p8';
bio(627).sigName='gearRatios';
bio(627).portIdx=7;
bio(627).dim=[1,2];
bio(627).sigWidth=2;
bio(627).sigAddress='&vmr_rwd_fix_leftarm_B.gearRatios_p[0]';
bio(627).ndims=2;
bio(627).size=[];


bio(628).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p9';
bio(628).sigName='isCalibrated';
bio(628).portIdx=8;
bio(628).dim=[1,1];
bio(628).sigWidth=1;
bio(628).sigAddress='&vmr_rwd_fix_leftarm_B.isCalibrated_p';
bio(628).ndims=2;
bio(628).size=[];


bio(629).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p10';
bio(629).sigName='offsetRads';
bio(629).portIdx=9;
bio(629).dim=[1,2];
bio(629).sigWidth=2;
bio(629).sigAddress='&vmr_rwd_fix_leftarm_B.offsetRads_f[0]';
bio(629).ndims=2;
bio(629).size=[];


bio(630).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p11';
bio(630).sigName='offsetRadsPrimary';
bio(630).portIdx=10;
bio(630).dim=[1,2];
bio(630).sigWidth=2;
bio(630).sigAddress='&vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[0]';
bio(630).ndims=2;
bio(630).size=[];


bio(631).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p12';
bio(631).sigName='robotRevision';
bio(631).portIdx=11;
bio(631).dim=[1,1];
bio(631).sigWidth=1;
bio(631).sigAddress='&vmr_rwd_fix_leftarm_B.robotRevision_n';
bio(631).ndims=2;
bio(631).size=[];


bio(632).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants/p13';
bio(632).sigName='constantsReady';
bio(632).portIdx=12;
bio(632).dim=[1,1];
bio(632).sigWidth=1;
bio(632).sigAddress='&vmr_rwd_fix_leftarm_B.constantsReady_j';
bio(632).ndims=2;
bio(632).size=[];


bio(633).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants1/p1';
bio(633).sigName='hasSecondary';
bio(633).portIdx=0;
bio(633).dim=[1,1];
bio(633).sigWidth=1;
bio(633).sigAddress='&vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.hasSecondary';
bio(633).ndims=2;
bio(633).size=[];


bio(634).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants1/p2';
bio(634).sigName='hasFT';
bio(634).portIdx=1;
bio(634).dim=[1,1];
bio(634).sigWidth=1;
bio(634).sigAddress='&vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.hasFT';
bio(634).ndims=2;
bio(634).size=[];


bio(635).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants1/p3';
bio(635).sigName='robotOrientation';
bio(635).portIdx=2;
bio(635).dim=[1,1];
bio(635).sigWidth=1;
bio(635).sigAddress='&vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.robotOrientation';
bio(635).ndims=2;
bio(635).size=[];


bio(636).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants1/p4';
bio(636).sigName='motorOrientation';
bio(636).portIdx=3;
bio(636).dim=[1,2];
bio(636).sigWidth=2;
bio(636).sigAddress='&vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.motorOrientation[0]';
bio(636).ndims=2;
bio(636).size=[];


bio(637).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants1/p5';
bio(637).sigName='encOrientation';
bio(637).portIdx=4;
bio(637).dim=[1,2];
bio(637).sigWidth=2;
bio(637).sigAddress='&vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.encOrientation[0]';
bio(637).ndims=2;
bio(637).size=[];


bio(638).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Torque Mode';
bio(638).sigName='';
bio(638).portIdx=0;
bio(638).dim=[1,1];
bio(638).sigWidth=1;
bio(638).sigAddress='&vmr_rwd_fix_leftarm_B.TorqueMode_i';
bio(638).ndims=2;
bio(638).size=[];


bio(639).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/readTrigger';
bio(639).sigName='';
bio(639).portIdx=0;
bio(639).dim=[1,1];
bio(639).sigWidth=1;
bio(639).sigAddress='&vmr_rwd_fix_leftarm_B.readTrigger_k';
bio(639).ndims=2;
bio(639).size=[];


bio(640).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Memory2';
bio(640).sigName='R1_maxContinuousTorque';
bio(640).portIdx=0;
bio(640).dim=[1,2];
bio(640).sigWidth=2;
bio(640).sigAddress='&vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque[0]';
bio(640).ndims=2;
bio(640).size=[];


bio(641).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Memory3';
bio(641).sigName='R1_constantsReady';
bio(641).portIdx=0;
bio(641).dim=[1,1];
bio(641).sigWidth=1;
bio(641).sigAddress='&vmr_rwd_fix_leftarm_B.R1_constantsReady';
bio(641).ndims=2;
bio(641).size=[];


bio(642).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Find Robot type';
bio(642).sigName='robotType';
bio(642).portIdx=0;
bio(642).dim=[1,1];
bio(642).sigWidth=1;
bio(642).sigAddress='&vmr_rwd_fix_leftarm_B.sf_FindRobottype_d.robotType';
bio(642).ndims=2;
bio(642).size=[];


bio(643).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO read machine/p1';
bio(643).sigName='SDOCommand';
bio(643).portIdx=0;
bio(643).dim=[3,1];
bio(643).sigWidth=3;
bio(643).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.SDOCommand[0]';
bio(643).ndims=2;
bio(643).size=[];


bio(644).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO read machine/p2';
bio(644).sigName='intSDOValues';
bio(644).portIdx=1;
bio(644).dim=[20,1];
bio(644).sigWidth=20;
bio(644).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues[0]';
bio(644).ndims=2;
bio(644).size=[];


bio(645).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO read machine/p3';
bio(645).sigName='floatSDOValues';
bio(645).portIdx=2;
bio(645).dim=[20,1];
bio(645).sigWidth=20;
bio(645).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[0]';
bio(645).ndims=2;
bio(645).size=[];


bio(646).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO read machine/p4';
bio(646).sigName='complete';
bio(646).portIdx=3;
bio(646).dim=[1,1];
bio(646).sigWidth=1;
bio(646).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.complete';
bio(646).ndims=2;
bio(646).size=[];


bio(647).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/forceEnableDisable';
bio(647).sigName='forceMotorState';
bio(647).portIdx=0;
bio(647).dim=[1,1];
bio(647).sigWidth=1;
bio(647).sigAddress='&vmr_rwd_fix_leftarm_B.sf_forceEnableDisable_k.forceMotorState';
bio(647).ndims=2;
bio(647).size=[];


bio(648).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/size';
bio(648).sigName='count';
bio(648).portIdx=0;
bio(648).dim=[1,1];
bio(648).sigWidth=1;
bio(648).sigAddress='&vmr_rwd_fix_leftarm_B.sf_size_d.count';
bio(648).ndims=2;
bio(648).size=[];


bio(649).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/size1';
bio(649).sigName='count';
bio(649).portIdx=0;
bio(649).dim=[1,1];
bio(649).sigWidth=1;
bio(649).sigAddress='&vmr_rwd_fix_leftarm_B.sf_size1_e.count';
bio(649).ndims=2;
bio(649).size=[];


bio(650).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p1';
bio(650).sigName='encoderCounts';
bio(650).portIdx=0;
bio(650).dim=[1,2];
bio(650).sigWidth=2;
bio(650).sigAddress='&vmr_rwd_fix_leftarm_B.encoderCounts[0]';
bio(650).ndims=2;
bio(650).size=[];


bio(651).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p2';
bio(651).sigName='FTSensorOffset';
bio(651).portIdx=1;
bio(651).dim=[1,1];
bio(651).sigWidth=1;
bio(651).sigAddress='&vmr_rwd_fix_leftarm_B.FTSensorOffset';
bio(651).ndims=2;
bio(651).size=[];


bio(652).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p3';
bio(652).sigName='calibPinAngles';
bio(652).portIdx=2;
bio(652).dim=[1,2];
bio(652).sigWidth=2;
bio(652).sigAddress='&vmr_rwd_fix_leftarm_B.calibPinAngles[0]';
bio(652).ndims=2;
bio(652).size=[];


bio(653).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p4';
bio(653).sigName='absAngOffsets';
bio(653).portIdx=3;
bio(653).dim=[1,2];
bio(653).sigWidth=2;
bio(653).sigAddress='&vmr_rwd_fix_leftarm_B.absAngOffsets[0]';
bio(653).ndims=2;
bio(653).size=[];


bio(654).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p5';
bio(654).sigName='linkLengths';
bio(654).portIdx=4;
bio(654).dim=[1,2];
bio(654).sigWidth=2;
bio(654).sigAddress='&vmr_rwd_fix_leftarm_B.linkLengths[0]';
bio(654).ndims=2;
bio(654).size=[];


bio(655).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p6';
bio(655).sigName='L2CalibPinOffset';
bio(655).portIdx=5;
bio(655).dim=[1,1];
bio(655).sigWidth=1;
bio(655).sigAddress='&vmr_rwd_fix_leftarm_B.L2CalibPinOffset';
bio(655).ndims=2;
bio(655).size=[];


bio(656).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p7';
bio(656).sigName='continuousTorques';
bio(656).portIdx=6;
bio(656).dim=[1,2];
bio(656).sigWidth=2;
bio(656).sigAddress='&vmr_rwd_fix_leftarm_B.continuousTorques[0]';
bio(656).ndims=2;
bio(656).size=[];


bio(657).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p8';
bio(657).sigName='gearRatios';
bio(657).portIdx=7;
bio(657).dim=[1,2];
bio(657).sigWidth=2;
bio(657).sigAddress='&vmr_rwd_fix_leftarm_B.gearRatios[0]';
bio(657).ndims=2;
bio(657).size=[];


bio(658).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p9';
bio(658).sigName='isCalibrated';
bio(658).portIdx=8;
bio(658).dim=[1,1];
bio(658).sigWidth=1;
bio(658).sigAddress='&vmr_rwd_fix_leftarm_B.isCalibrated';
bio(658).ndims=2;
bio(658).size=[];


bio(659).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p10';
bio(659).sigName='offsetRads';
bio(659).portIdx=9;
bio(659).dim=[1,2];
bio(659).sigWidth=2;
bio(659).sigAddress='&vmr_rwd_fix_leftarm_B.offsetRads[0]';
bio(659).ndims=2;
bio(659).size=[];


bio(660).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p11';
bio(660).sigName='offsetRadsPrimary';
bio(660).portIdx=10;
bio(660).dim=[1,2];
bio(660).sigWidth=2;
bio(660).sigAddress='&vmr_rwd_fix_leftarm_B.offsetRadsPrimary[0]';
bio(660).ndims=2;
bio(660).size=[];


bio(661).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p12';
bio(661).sigName='robotRevision';
bio(661).portIdx=11;
bio(661).dim=[1,1];
bio(661).sigWidth=1;
bio(661).sigAddress='&vmr_rwd_fix_leftarm_B.robotRevision_o';
bio(661).ndims=2;
bio(661).size=[];


bio(662).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants/p13';
bio(662).sigName='constantsReady';
bio(662).portIdx=12;
bio(662).dim=[1,1];
bio(662).sigWidth=1;
bio(662).sigAddress='&vmr_rwd_fix_leftarm_B.constantsReady';
bio(662).ndims=2;
bio(662).size=[];


bio(663).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants1/p1';
bio(663).sigName='hasSecondary';
bio(663).portIdx=0;
bio(663).dim=[1,1];
bio(663).sigWidth=1;
bio(663).sigAddress='&vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.hasSecondary';
bio(663).ndims=2;
bio(663).size=[];


bio(664).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants1/p2';
bio(664).sigName='hasFT';
bio(664).portIdx=1;
bio(664).dim=[1,1];
bio(664).sigWidth=1;
bio(664).sigAddress='&vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.hasFT';
bio(664).ndims=2;
bio(664).size=[];


bio(665).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants1/p3';
bio(665).sigName='robotOrientation';
bio(665).portIdx=2;
bio(665).dim=[1,1];
bio(665).sigWidth=1;
bio(665).sigAddress='&vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.robotOrientation';
bio(665).ndims=2;
bio(665).size=[];


bio(666).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants1/p4';
bio(666).sigName='motorOrientation';
bio(666).portIdx=3;
bio(666).dim=[1,2];
bio(666).sigWidth=2;
bio(666).sigAddress='&vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.motorOrientation[0]';
bio(666).ndims=2;
bio(666).size=[];


bio(667).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants1/p5';
bio(667).sigName='encOrientation';
bio(667).portIdx=4;
bio(667).dim=[1,2];
bio(667).sigWidth=2;
bio(667).sigAddress='&vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.encOrientation[0]';
bio(667).ndims=2;
bio(667).size=[];


bio(668).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Torque Mode';
bio(668).sigName='';
bio(668).portIdx=0;
bio(668).dim=[1,1];
bio(668).sigWidth=1;
bio(668).sigAddress='&vmr_rwd_fix_leftarm_B.TorqueMode';
bio(668).ndims=2;
bio(668).size=[];


bio(669).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/readTrigger';
bio(669).sigName='';
bio(669).portIdx=0;
bio(669).dim=[1,1];
bio(669).sigWidth=1;
bio(669).sigAddress='&vmr_rwd_fix_leftarm_B.readTrigger';
bio(669).ndims=2;
bio(669).size=[];


bio(670).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Memory2';
bio(670).sigName='R2_maxContinuousTorque';
bio(670).portIdx=0;
bio(670).dim=[1,2];
bio(670).sigWidth=2;
bio(670).sigAddress='&vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque[0]';
bio(670).ndims=2;
bio(670).size=[];


bio(671).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Memory3';
bio(671).sigName='R2_constantsReady';
bio(671).portIdx=0;
bio(671).dim=[1,1];
bio(671).sigWidth=1;
bio(671).sigAddress='&vmr_rwd_fix_leftarm_B.R2_constantsReady';
bio(671).ndims=2;
bio(671).size=[];


bio(672).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Compare/Compare';
bio(672).sigName='';
bio(672).portIdx=0;
bio(672).dim=[1,1];
bio(672).sigWidth=1;
bio(672).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_i';
bio(672).ndims=2;
bio(672).size=[];


bio(673).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Output';
bio(673).sigName='';
bio(673).portIdx=0;
bio(673).dim=[1,1];
bio(673).sigWidth=1;
bio(673).sigAddress='&vmr_rwd_fix_leftarm_B.Output_a';
bio(673).ndims=2;
bio(673).size=[];


bio(674).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/update digital outputs/p1';
bio(674).sigName='drive1';
bio(674).portIdx=0;
bio(674).dim=[1,1];
bio(674).sigWidth=1;
bio(674).sigAddress='&vmr_rwd_fix_leftarm_B.drive1';
bio(674).ndims=2;
bio(674).size=[];


bio(675).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/update digital outputs/p2';
bio(675).sigName='drive2';
bio(675).portIdx=1;
bio(675).dim=[1,1];
bio(675).sigWidth=1;
bio(675).sigAddress='&vmr_rwd_fix_leftarm_B.drive2';
bio(675).ndims=2;
bio(675).size=[];


bio(676).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/update digital outputs/p3';
bio(676).sigName='drive3';
bio(676).portIdx=2;
bio(676).dim=[1,1];
bio(676).sigWidth=1;
bio(676).sigAddress='&vmr_rwd_fix_leftarm_B.drive3';
bio(676).ndims=2;
bio(676).size=[];


bio(677).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/update digital outputs/p4';
bio(677).sigName='drive4';
bio(677).portIdx=3;
bio(677).dim=[1,1];
bio(677).sigWidth=1;
bio(677).sigAddress='&vmr_rwd_fix_leftarm_B.drive4';
bio(677).ndims=2;
bio(677).size=[];


bio(678).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p1';
bio(678).sigName='errVal';
bio(678).portIdx=0;
bio(678).dim=[1,1];
bio(678).sigWidth=1;
bio(678).sigAddress='&vmr_rwd_fix_leftarm_B.errVal';
bio(678).ndims=2;
bio(678).size=[];


bio(679).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p2';
bio(679).sigName='masterState';
bio(679).portIdx=1;
bio(679).dim=[1,1];
bio(679).sigWidth=1;
bio(679).sigAddress='&vmr_rwd_fix_leftarm_B.masterState';
bio(679).ndims=2;
bio(679).size=[];


bio(680).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p3';
bio(680).sigName='DCErrVal';
bio(680).portIdx=2;
bio(680).dim=[1,1];
bio(680).sigWidth=1;
bio(680).sigAddress='&vmr_rwd_fix_leftarm_B.DCErrVal';
bio(680).ndims=2;
bio(680).size=[];


bio(681).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p4';
bio(681).sigName='MasterToNetworkClkDiff';
bio(681).portIdx=3;
bio(681).dim=[1,1];
bio(681).sigWidth=1;
bio(681).sigAddress='&vmr_rwd_fix_leftarm_B.MasterToNetworkClkDiff';
bio(681).ndims=2;
bio(681).size=[];


bio(682).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p5';
bio(682).sigName='DCInitState';
bio(682).portIdx=4;
bio(682).dim=[1,1];
bio(682).sigWidth=1;
bio(682).sigAddress='&vmr_rwd_fix_leftarm_B.DCInitState';
bio(682).ndims=2;
bio(682).size=[];


bio(683).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init/p6';
bio(683).sigName='NetworkToSlaveClkDiff';
bio(683).portIdx=5;
bio(683).dim=[1,1];
bio(683).sigWidth=1;
bio(683).sigAddress='&vmr_rwd_fix_leftarm_B.NetworkToSlaveClkDiff';
bio(683).ndims=2;
bio(683).size=[];


bio(684).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/convert to bit field';
bio(684).sigName='bitField';
bio(684).portIdx=0;
bio(684).dim=[1,1];
bio(684).sigWidth=1;
bio(684).sigAddress='&vmr_rwd_fix_leftarm_B.bitField';
bio(684).ndims=2;
bio(684).size=[];


bio(685).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/create kinematics/p1';
bio(685).sigName='kinematicsOut';
bio(685).portIdx=0;
bio(685).dim=[1,20];
bio(685).sigWidth=20;
bio(685).sigAddress='&vmr_rwd_fix_leftarm_B.kinematicsOut[0]';
bio(685).ndims=2;
bio(685).size=[];


bio(686).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/create kinematics/p2';
bio(686).sigName='kinematicsOutPrimary';
bio(686).portIdx=1;
bio(686).dim=[12,1];
bio(686).sigWidth=12;
bio(686).sigAddress='&vmr_rwd_fix_leftarm_B.kinematicsOutPrimary[0]';
bio(686).ndims=2;
bio(686).size=[];


bio(687).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/create kinematics/p3';
bio(687).sigName='delays';
bio(687).portIdx=2;
bio(687).dim=[4,1];
bio(687).sigWidth=4;
bio(687).sigAddress='&vmr_rwd_fix_leftarm_B.delays[0]';
bio(687).ndims=2;
bio(687).size=[];


bio(688).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/create servo counter';
bio(688).sigName='servoCounterOut';
bio(688).portIdx=0;
bio(688).dim=[1,1];
bio(688).sigWidth=1;
bio(688).sigAddress='&vmr_rwd_fix_leftarm_B.servoCounterOut';
bio(688).ndims=2;
bio(688).size=[];


bio(689).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/robottype1';
bio(689).sigName='outMem';
bio(689).portIdx=0;
bio(689).dim=[4,5];
bio(689).sigWidth=20;
bio(689).sigAddress='&vmr_rwd_fix_leftarm_B.outMem[0]';
bio(689).ndims=2;
bio(689).size=[];


bio(690).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/update HW settings';
bio(690).sigName='settingsOut';
bio(690).portIdx=0;
bio(690).dim=[1,24];
bio(690).sigWidth=24;
bio(690).sigAddress='&vmr_rwd_fix_leftarm_B.settingsOut[0]';
bio(690).ndims=2;
bio(690).size=[];


bio(691).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/update calibrations';
bio(691).sigName='calibrationsOut';
bio(691).portIdx=0;
bio(691).dim=[1,16];
bio(691).sigWidth=16;
bio(691).sigAddress='&vmr_rwd_fix_leftarm_B.calibrationsOut[0]';
bio(691).ndims=2;
bio(691).size=[];


bio(692).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Store';
bio(692).sigName='';
bio(692).portIdx=0;
bio(692).dim=[16,1];
bio(692).sigWidth=16;
bio(692).sigAddress='&vmr_rwd_fix_leftarm_B.DataStore[0]';
bio(692).ndims=2;
bio(692).size=[];


bio(693).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Store1';
bio(693).sigName='';
bio(693).portIdx=0;
bio(693).dim=[24,1];
bio(693).sigWidth=24;
bio(693).sigAddress='&vmr_rwd_fix_leftarm_B.DataStore1[0]';
bio(693).ndims=2;
bio(693).size=[];


bio(694).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Type Conversion';
bio(694).sigName='';
bio(694).portIdx=0;
bio(694).dim=[1,8];
bio(694).sigWidth=8;
bio(694).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_jq[0]';
bio(694).ndims=2;
bio(694).size=[];


bio(695).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Type Conversion1';
bio(695).sigName='';
bio(695).portIdx=0;
bio(695).dim=[2,1];
bio(695).sigWidth=2;
bio(695).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_ju[0]';
bio(695).ndims=2;
bio(695).size=[];


bio(696).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Type Conversion2';
bio(696).sigName='';
bio(696).portIdx=0;
bio(696).dim=[1,1];
bio(696).sigWidth=1;
bio(696).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_ir';
bio(696).ndims=2;
bio(696).size=[];


bio(697).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Type Conversion3';
bio(697).sigName='';
bio(697).portIdx=0;
bio(697).dim=[4,1];
bio(697).sigWidth=4;
bio(697).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[0]';
bio(697).ndims=2;
bio(697).size=[];


bio(698).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/Data Type Conversion4';
bio(698).sigName='';
bio(698).portIdx=0;
bio(698).dim=[4,1];
bio(698).sigWidth=4;
bio(698).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion4_j[0]';
bio(698).ndims=2;
bio(698).size=[];


bio(699).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Create timestamp';
bio(699).sigName='timestamp_out';
bio(699).portIdx=0;
bio(699).dim=[1,1];
bio(699).sigWidth=1;
bio(699).sigAddress='&vmr_rwd_fix_leftarm_B.sf_Createtimestamp.timestamp_out';
bio(699).ndims=2;
bio(699).size=[];


bio(700).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Data Type Conversion';
bio(700).sigName='';
bio(700).portIdx=0;
bio(700).dim=[6,1];
bio(700).sigWidth=6;
bio(700).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_e[0]';
bio(700).ndims=2;
bio(700).size=[];


bio(701).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Byte Reversal';
bio(701).sigName='';
bio(701).portIdx=0;
bio(701).dim=[6,1];
bio(701).sigWidth=6;
bio(701).sigAddress='&vmr_rwd_fix_leftarm_B.ByteReversal[0]';
bio(701).ndims=2;
bio(701).size=[];


bio(702).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Byte Reversal1';
bio(702).sigName='';
bio(702).portIdx=0;
bio(702).dim=[3,1];
bio(702).sigWidth=3;
bio(702).sigAddress='&vmr_rwd_fix_leftarm_B.ByteReversal1[0]';
bio(702).ndims=2;
bio(702).size=[];


bio(703).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor/p1';
bio(703).sigName='';
bio(703).portIdx=0;
bio(703).dim=[36,1];
bio(703).sigWidth=36;
bio(703).sigAddress='&vmr_rwd_fix_leftarm_B.ReceivefromRobot1ForceSensor_o1[0]';
bio(703).ndims=2;
bio(703).size=[];


bio(704).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor/p2';
bio(704).sigName='';
bio(704).portIdx=1;
bio(704).dim=[1,1];
bio(704).sigWidth=1;
bio(704).sigAddress='&vmr_rwd_fix_leftarm_B.ReceivefromRobot1ForceSensor_o2';
bio(704).ndims=2;
bio(704).size=[];


bio(705).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Unpack/p1';
bio(705).sigName='';
bio(705).portIdx=0;
bio(705).dim=[3,1];
bio(705).sigWidth=3;
bio(705).sigAddress='&vmr_rwd_fix_leftarm_B.Unpack_o1_m[0]';
bio(705).ndims=2;
bio(705).size=[];


bio(706).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Unpack/p2';
bio(706).sigName='';
bio(706).portIdx=1;
bio(706).dim=[6,1];
bio(706).sigWidth=6;
bio(706).sigAddress='&vmr_rwd_fix_leftarm_B.Unpack_o2_o[0]';
bio(706).ndims=2;
bio(706).size=[];


bio(707).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Switch';
bio(707).sigName='';
bio(707).portIdx=0;
bio(707).dim=[7,1];
bio(707).sigWidth=7;
bio(707).sigAddress='&vmr_rwd_fix_leftarm_B.Switch_p[0]';
bio(707).ndims=2;
bio(707).size=[];


bio(708).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Create timestamp';
bio(708).sigName='timestamp_out';
bio(708).portIdx=0;
bio(708).dim=[1,1];
bio(708).sigWidth=1;
bio(708).sigAddress='&vmr_rwd_fix_leftarm_B.sf_Createtimestamp_b.timestamp_out';
bio(708).ndims=2;
bio(708).size=[];


bio(709).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Type Conversion1';
bio(709).sigName='';
bio(709).portIdx=0;
bio(709).dim=[6,1];
bio(709).sigWidth=6;
bio(709).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_g[0]';
bio(709).ndims=2;
bio(709).size=[];


bio(710).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Byte Reversal';
bio(710).sigName='';
bio(710).portIdx=0;
bio(710).dim=[6,1];
bio(710).sigWidth=6;
bio(710).sigAddress='&vmr_rwd_fix_leftarm_B.ByteReversal_o[0]';
bio(710).ndims=2;
bio(710).size=[];


bio(711).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Byte Reversal1';
bio(711).sigName='';
bio(711).portIdx=0;
bio(711).dim=[3,1];
bio(711).sigWidth=3;
bio(711).sigAddress='&vmr_rwd_fix_leftarm_B.ByteReversal1_f[0]';
bio(711).ndims=2;
bio(711).size=[];


bio(712).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor/p1';
bio(712).sigName='';
bio(712).portIdx=0;
bio(712).dim=[36,1];
bio(712).sigWidth=36;
bio(712).sigAddress='&vmr_rwd_fix_leftarm_B.ReceivefromRobot2ForceSensor_o1[0]';
bio(712).ndims=2;
bio(712).size=[];


bio(713).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor/p2';
bio(713).sigName='';
bio(713).portIdx=1;
bio(713).dim=[1,1];
bio(713).sigWidth=1;
bio(713).sigAddress='&vmr_rwd_fix_leftarm_B.ReceivefromRobot2ForceSensor_o2';
bio(713).ndims=2;
bio(713).size=[];


bio(714).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Unpack1/p1';
bio(714).sigName='';
bio(714).portIdx=0;
bio(714).dim=[3,1];
bio(714).sigWidth=3;
bio(714).sigAddress='&vmr_rwd_fix_leftarm_B.Unpack1_o1[0]';
bio(714).ndims=2;
bio(714).size=[];


bio(715).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Unpack1/p2';
bio(715).sigName='';
bio(715).portIdx=1;
bio(715).dim=[6,1];
bio(715).sigWidth=6;
bio(715).sigAddress='&vmr_rwd_fix_leftarm_B.Unpack1_o2[0]';
bio(715).ndims=2;
bio(715).size=[];


bio(716).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Switch1';
bio(716).sigName='';
bio(716).portIdx=0;
bio(716).dim=[7,1];
bio(716).sigWidth=7;
bio(716).sigAddress='&vmr_rwd_fix_leftarm_B.Switch1_b[0]';
bio(716).ndims=2;
bio(716).size=[];


bio(717).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Monitor_status';
bio(717).sigName='force_scale';
bio(717).portIdx=0;
bio(717).dim=[1,1];
bio(717).sigWidth=1;
bio(717).sigAddress='&vmr_rwd_fix_leftarm_B.force_scale_b';
bio(717).ndims=2;
bio(717).size=[];


bio(718).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Robot_data_builder/p1';
bio(718).sigName='robot1DataOut';
bio(718).portIdx=0;
bio(718).dim=[10,1];
bio(718).sigWidth=10;
bio(718).sigAddress='&vmr_rwd_fix_leftarm_B.robot1DataOut_p[0]';
bio(718).ndims=2;
bio(718).size=[];


bio(719).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Robot_data_builder/p2';
bio(719).sigName='robot2DataOut';
bio(719).portIdx=1;
bio(719).dim=[10,1];
bio(719).sigWidth=10;
bio(719).sigAddress='&vmr_rwd_fix_leftarm_B.robot2DataOut_g[0]';
bio(719).ndims=2;
bio(719).size=[];


bio(720).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Robot_data_builder/p3';
bio(720).sigName='robot1PrimaryEncDataOut';
bio(720).portIdx=2;
bio(720).dim=[6,1];
bio(720).sigWidth=6;
bio(720).sigAddress='&vmr_rwd_fix_leftarm_B.robot1PrimaryEncDataOut[0]';
bio(720).ndims=2;
bio(720).size=[];


bio(721).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Robot_data_builder/p4';
bio(721).sigName='robot2PrimaryEncDataOut';
bio(721).portIdx=3;
bio(721).dim=[6,1];
bio(721).sigWidth=6;
bio(721).sigAddress='&vmr_rwd_fix_leftarm_B.robot2PrimaryEncDataOut[0]';
bio(721).ndims=2;
bio(721).size=[];


bio(722).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/filter_velocities/p1';
bio(722).sigName='robot1DataOut';
bio(722).portIdx=0;
bio(722).dim=[10,1];
bio(722).sigWidth=10;
bio(722).sigAddress='&vmr_rwd_fix_leftarm_B.robot1DataOut[0]';
bio(722).ndims=2;
bio(722).size=[];


bio(723).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/filter_velocities/p2';
bio(723).sigName='robot2DataOut';
bio(723).portIdx=1;
bio(723).dim=[10,1];
bio(723).sigWidth=10;
bio(723).sigAddress='&vmr_rwd_fix_leftarm_B.robot2DataOut[0]';
bio(723).ndims=2;
bio(723).size=[];


bio(724).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Conversion1';
bio(724).sigName='';
bio(724).portIdx=0;
bio(724).dim=[6,1];
bio(724).sigWidth=6;
bio(724).sigAddress='&vmr_rwd_fix_leftarm_B.Conversion1[0]';
bio(724).ndims=2;
bio(724).size=[];


bio(725).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Conversion2';
bio(725).sigName='';
bio(725).portIdx=0;
bio(725).dim=[6,1];
bio(725).sigWidth=6;
bio(725).sigAddress='&vmr_rwd_fix_leftarm_B.Conversion2[0]';
bio(725).ndims=2;
bio(725).size=[];


bio(726).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Conversion7';
bio(726).sigName='';
bio(726).portIdx=0;
bio(726).dim=[4,1];
bio(726).sigWidth=4;
bio(726).sigAddress='&vmr_rwd_fix_leftarm_B.Conversion7[0]';
bio(726).ndims=2;
bio(726).size=[];


bio(727).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Convert2';
bio(727).sigName='';
bio(727).portIdx=0;
bio(727).dim=[3,1];
bio(727).sigWidth=3;
bio(727).sigAddress='&vmr_rwd_fix_leftarm_B.Convert2_n[0]';
bio(727).ndims=2;
bio(727).size=[];


bio(728).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Data Type Conversion';
bio(728).sigName='';
bio(728).portIdx=0;
bio(728).dim=[10,1];
bio(728).sigWidth=10;
bio(728).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[0]';
bio(728).ndims=2;
bio(728).size=[];


bio(729).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Data Type Conversion1';
bio(729).sigName='';
bio(729).portIdx=0;
bio(729).dim=[10,1];
bio(729).sigWidth=10;
bio(729).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[0]';
bio(729).ndims=2;
bio(729).size=[];


bio(730).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Data Type Conversion2';
bio(730).sigName='';
bio(730).portIdx=0;
bio(730).dim=[1,1];
bio(730).sigWidth=1;
bio(730).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_h';
bio(730).ndims=2;
bio(730).size=[];


bio(731).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Data Type Conversion3';
bio(731).sigName='';
bio(731).portIdx=0;
bio(731).dim=[10,1];
bio(731).sigWidth=10;
bio(731).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion3_d[0]';
bio(731).ndims=2;
bio(731).size=[];


bio(732).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Data Type Conversion4';
bio(732).sigName='';
bio(732).portIdx=0;
bio(732).dim=[10,1];
bio(732).sigWidth=10;
bio(732).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion4_g[0]';
bio(732).ndims=2;
bio(732).size=[];


bio(733).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/MinMax';
bio(733).sigName='';
bio(733).portIdx=0;
bio(733).dim=[1,1];
bio(733).sigWidth=1;
bio(733).sigAddress='&vmr_rwd_fix_leftarm_B.MinMax_b';
bio(733).ndims=2;
bio(733).size=[];


bio(734).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/MinMax1';
bio(734).sigName='';
bio(734).portIdx=0;
bio(734).dim=[1,1];
bio(734).sigWidth=1;
bio(734).sigAddress='&vmr_rwd_fix_leftarm_B.MinMax1';
bio(734).ndims=2;
bio(734).size=[];


bio(735).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p1';
bio(735).sigName='';
bio(735).portIdx=0;
bio(735).dim=[10,1];
bio(735).sigWidth=10;
bio(735).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o1[0]';
bio(735).ndims=2;
bio(735).size=[];


bio(736).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p2';
bio(736).sigName='';
bio(736).portIdx=1;
bio(736).dim=[10,1];
bio(736).sigWidth=10;
bio(736).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o2[0]';
bio(736).ndims=2;
bio(736).size=[];


bio(737).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p3';
bio(737).sigName='';
bio(737).portIdx=2;
bio(737).dim=[2,1];
bio(737).sigWidth=2;
bio(737).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o3[0]';
bio(737).ndims=2;
bio(737).size=[];


bio(738).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p4';
bio(738).sigName='';
bio(738).portIdx=3;
bio(738).dim=[4,1];
bio(738).sigWidth=4;
bio(738).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o4[0]';
bio(738).ndims=2;
bio(738).size=[];


bio(739).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p5';
bio(739).sigName='';
bio(739).portIdx=4;
bio(739).dim=[6,1];
bio(739).sigWidth=6;
bio(739).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o5[0]';
bio(739).ndims=2;
bio(739).size=[];


bio(740).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p6';
bio(740).sigName='';
bio(740).portIdx=5;
bio(740).dim=[6,1];
bio(740).sigWidth=6;
bio(740).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o6[0]';
bio(740).ndims=2;
bio(740).size=[];


bio(741).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p7';
bio(741).sigName='';
bio(741).portIdx=6;
bio(741).dim=[1,1];
bio(741).sigWidth=1;
bio(741).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o7';
bio(741).ndims=2;
bio(741).size=[];


bio(742).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p8';
bio(742).sigName='';
bio(742).portIdx=7;
bio(742).dim=[1,1];
bio(742).sigWidth=1;
bio(742).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o8';
bio(742).ndims=2;
bio(742).size=[];


bio(743).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p9';
bio(743).sigName='';
bio(743).portIdx=8;
bio(743).dim=[3,1];
bio(743).sigWidth=3;
bio(743).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o9[0]';
bio(743).ndims=2;
bio(743).size=[];


bio(744).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function/p10';
bio(744).sigName='';
bio(744).portIdx=9;
bio(744).dim=[1,1];
bio(744).sigWidth=1;
bio(744).sigAddress='&vmr_rwd_fix_leftarm_B.SFunction_o10';
bio(744).ndims=2;
bio(744).size=[];


bio(745).blkName='DataLogging/Poll KINARM/PMAC Subsystem/update settings/update status format';
bio(745).sigName='outStatus';
bio(745).portIdx=0;
bio(745).dim=[1,7];
bio(745).sigWidth=7;
bio(745).sigAddress='&vmr_rwd_fix_leftarm_B.outStatus[0]';
bio(745).ndims=2;
bio(745).size=[];


bio(746).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/MATLAB Function/p1';
bio(746).sigName='kinematics';
bio(746).portIdx=0;
bio(746).dim=[20,1];
bio(746).sigWidth=20;
bio(746).sigAddress='&vmr_rwd_fix_leftarm_B.kinematics[0]';
bio(746).ndims=2;
bio(746).size=[];


bio(747).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/MATLAB Function/p2';
bio(747).sigName='primary';
bio(747).portIdx=1;
bio(747).dim=[12,1];
bio(747).sigWidth=12;
bio(747).sigAddress='&vmr_rwd_fix_leftarm_B.primary[0]';
bio(747).ndims=2;
bio(747).size=[];


bio(748).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Constant';
bio(748).sigName='';
bio(748).portIdx=0;
bio(748).dim=[1,1];
bio(748).sigWidth=1;
bio(748).sigAddress='&vmr_rwd_fix_leftarm_B.Constant_k';
bio(748).ndims=2;
bio(748).size=[];


bio(749).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Constant1';
bio(749).sigName='';
bio(749).portIdx=0;
bio(749).dim=[7,1];
bio(749).sigWidth=7;
bio(749).sigAddress='&vmr_rwd_fix_leftarm_B.Constant1[0]';
bio(749).ndims=2;
bio(749).size=[];


bio(750).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Data Type Conversion';
bio(750).sigName='';
bio(750).portIdx=0;
bio(750).dim=[2,1];
bio(750).sigWidth=2;
bio(750).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_k[0]';
bio(750).ndims=2;
bio(750).size=[];


bio(751).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Data Type Conversion1';
bio(751).sigName='';
bio(751).portIdx=0;
bio(751).dim=[2,1];
bio(751).sigWidth=2;
bio(751).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_a[0]';
bio(751).ndims=2;
bio(751).size=[];


bio(752).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Data Type Conversion2';
bio(752).sigName='';
bio(752).portIdx=0;
bio(752).dim=[1,1];
bio(752).sigWidth=1;
bio(752).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_i';
bio(752).ndims=2;
bio(752).size=[];


bio(753).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive/p1';
bio(753).sigName='';
bio(753).portIdx=0;
bio(753).dim=[16,1];
bio(753).sigWidth=16;
bio(753).sigAddress='&vmr_rwd_fix_leftarm_B.Receive_o1_n[0]';
bio(753).ndims=2;
bio(753).size=[];


bio(754).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive/p2';
bio(754).sigName='';
bio(754).portIdx=1;
bio(754).dim=[1,1];
bio(754).sigWidth=1;
bio(754).sigAddress='&vmr_rwd_fix_leftarm_B.Receive_o2_o';
bio(754).ndims=2;
bio(754).size=[];


bio(755).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Unpack/p1';
bio(755).sigName='';
bio(755).portIdx=0;
bio(755).dim=[2,1];
bio(755).sigWidth=2;
bio(755).sigAddress='&vmr_rwd_fix_leftarm_B.Unpack_o1[0]';
bio(755).ndims=2;
bio(755).size=[];


bio(756).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Unpack/p2';
bio(756).sigName='';
bio(756).portIdx=1;
bio(756).dim=[2,1];
bio(756).sigWidth=2;
bio(756).sigAddress='&vmr_rwd_fix_leftarm_B.Unpack_o2[0]';
bio(756).ndims=2;
bio(756).size=[];


bio(757).blkName='DataLogging/Poll KINARM/bkin_internal_testing/ispmac1/Compare';
bio(757).sigName='';
bio(757).portIdx=0;
bio(757).dim=[1,1];
bio(757).sigWidth=1;
bio(757).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_a';
bio(757).ndims=2;
bio(757).size=[];


bio(758).blkName='DataLogging/Poll KINARM/constants/arm1/decode robot/p1';
bio(758).sigName='isEP';
bio(758).portIdx=0;
bio(758).dim=[1,1];
bio(758).sigWidth=1;
bio(758).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot.isEP';
bio(758).ndims=2;
bio(758).size=[];


bio(759).blkName='DataLogging/Poll KINARM/constants/arm1/decode robot/p2';
bio(759).sigName='isHumanEXO';
bio(759).portIdx=1;
bio(759).dim=[1,1];
bio(759).sigWidth=1;
bio(759).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot.isHumanEXO';
bio(759).ndims=2;
bio(759).size=[];


bio(760).blkName='DataLogging/Poll KINARM/constants/arm1/decode robot/p3';
bio(760).sigName='isNHPEXO';
bio(760).portIdx=2;
bio(760).dim=[1,1];
bio(760).sigWidth=1;
bio(760).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot.isNHPEXO';
bio(760).ndims=2;
bio(760).size=[];


bio(761).blkName='DataLogging/Poll KINARM/constants/arm1/decode robot/p4';
bio(761).sigName='isClassicExo';
bio(761).portIdx=3;
bio(761).dim=[1,1];
bio(761).sigWidth=1;
bio(761).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot.isClassicExo';
bio(761).ndims=2;
bio(761).size=[];


bio(762).blkName='DataLogging/Poll KINARM/constants/arm1/decode robot/p5';
bio(762).sigName='isUTSEXO';
bio(762).portIdx=4;
bio(762).dim=[1,1];
bio(762).sigWidth=1;
bio(762).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot.isUTSEXO';
bio(762).ndims=2;
bio(762).size=[];


bio(763).blkName='DataLogging/Poll KINARM/constants/arm1/decode robot/p6';
bio(763).sigName='isPMAC';
bio(763).portIdx=5;
bio(763).dim=[1,1];
bio(763).sigWidth=1;
bio(763).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot.isPMAC';
bio(763).ndims=2;
bio(763).size=[];


bio(764).blkName='DataLogging/Poll KINARM/constants/arm1/decode robot/p7';
bio(764).sigName='isECAT';
bio(764).portIdx=6;
bio(764).dim=[1,1];
bio(764).sigWidth=1;
bio(764).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot.isECAT';
bio(764).ndims=2;
bio(764).size=[];


bio(765).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Elbow Angle Offset';
bio(765).sigName='elbow angle offset';
bio(765).portIdx=0;
bio(765).dim=[1,1];
bio(765).sigWidth=1;
bio(765).sigAddress='&vmr_rwd_fix_leftarm_B.elbowangleoffset';
bio(765).ndims=2;
bio(765).size=[];


bio(766).blkName='DataLogging/Poll KINARM/constants/arm1/Arm L1';
bio(766).sigName='L1';
bio(766).portIdx=0;
bio(766).dim=[1,1];
bio(766).sigWidth=1;
bio(766).sigAddress='&vmr_rwd_fix_leftarm_B.L1';
bio(766).ndims=2;
bio(766).size=[];


bio(767).blkName='DataLogging/Poll KINARM/constants/arm1/Arm L2';
bio(767).sigName='L2';
bio(767).portIdx=0;
bio(767).dim=[1,1];
bio(767).sigWidth=1;
bio(767).sigAddress='&vmr_rwd_fix_leftarm_B.L2';
bio(767).ndims=2;
bio(767).size=[];


bio(768).blkName='DataLogging/Poll KINARM/constants/arm1/Arm L3 Error';
bio(768).sigName='L3 Error';
bio(768).portIdx=0;
bio(768).dim=[1,1];
bio(768).sigWidth=1;
bio(768).sigAddress='&vmr_rwd_fix_leftarm_B.L3Error';
bio(768).ndims=2;
bio(768).size=[];


bio(769).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Motor1 Gear Ratio';
bio(769).sigName='M1 Gear Ratio';
bio(769).portIdx=0;
bio(769).dim=[1,1];
bio(769).sigWidth=1;
bio(769).sigAddress='&vmr_rwd_fix_leftarm_B.M1GearRatio_b';
bio(769).ndims=2;
bio(769).size=[];


bio(770).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Motor1 Orientation';
bio(770).sigName='M1 orientation';
bio(770).portIdx=0;
bio(770).dim=[1,1];
bio(770).sigWidth=1;
bio(770).sigAddress='&vmr_rwd_fix_leftarm_B.M1orientation_h';
bio(770).ndims=2;
bio(770).size=[];


bio(771).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Motor2 Gear Ratio';
bio(771).sigName='M2 Gear Ratio';
bio(771).portIdx=0;
bio(771).dim=[1,1];
bio(771).sigWidth=1;
bio(771).sigAddress='&vmr_rwd_fix_leftarm_B.M2GearRatio_p';
bio(771).ndims=2;
bio(771).size=[];


bio(772).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Motor2 Orientation';
bio(772).sigName='M2 Orientation';
bio(772).portIdx=0;
bio(772).dim=[1,1];
bio(772).sigWidth=1;
bio(772).sigAddress='&vmr_rwd_fix_leftarm_B.M2Orientation_l';
bio(772).ndims=2;
bio(772).size=[];


bio(773).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Orientation';
bio(773).sigName='Arm Orientation';
bio(773).portIdx=0;
bio(773).dim=[1,1];
bio(773).sigWidth=1;
bio(773).sigAddress='&vmr_rwd_fix_leftarm_B.ArmOrientation_b';
bio(773).ndims=2;
bio(773).size=[];


bio(774).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Pointer Offset';
bio(774).sigName='Pointer offset';
bio(774).portIdx=0;
bio(774).dim=[1,1];
bio(774).sigWidth=1;
bio(774).sigAddress='&vmr_rwd_fix_leftarm_B.Pointeroffset';
bio(774).ndims=2;
bio(774).size=[];


bio(775).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Secondary Encoders';
bio(775).sigName='Has Secondary Enc';
bio(775).portIdx=0;
bio(775).dim=[1,1];
bio(775).sigWidth=1;
bio(775).sigAddress='&vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n';
bio(775).ndims=2;
bio(775).size=[];


bio(776).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Shoulder Angle Offset';
bio(776).sigName='shoulder angle offset';
bio(776).portIdx=0;
bio(776).dim=[1,1];
bio(776).sigWidth=1;
bio(776).sigAddress='&vmr_rwd_fix_leftarm_B.shoulderangleoffset';
bio(776).ndims=2;
bio(776).size=[];


bio(777).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Shoulder X';
bio(777).sigName='Shoulder X';
bio(777).portIdx=0;
bio(777).dim=[1,1];
bio(777).sigWidth=1;
bio(777).sigAddress='&vmr_rwd_fix_leftarm_B.ShoulderX';
bio(777).ndims=2;
bio(777).size=[];


bio(778).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Shoulder Y';
bio(778).sigName='Shoulder Y';
bio(778).portIdx=0;
bio(778).dim=[1,1];
bio(778).sigWidth=1;
bio(778).sigAddress='&vmr_rwd_fix_leftarm_B.ShoulderY';
bio(778).ndims=2;
bio(778).size=[];


bio(779).blkName='DataLogging/Poll KINARM/constants/arm1/Arm Torque Constant';
bio(779).sigName='torque constant';
bio(779).portIdx=0;
bio(779).dim=[1,1];
bio(779).sigWidth=1;
bio(779).sigAddress='&vmr_rwd_fix_leftarm_B.torqueconstant_g';
bio(779).ndims=2;
bio(779).size=[];


bio(780).blkName='DataLogging/Poll KINARM/constants/arm1/Arm robot type';
bio(780).sigName='robot type';
bio(780).portIdx=0;
bio(780).dim=[1,1];
bio(780).sigWidth=1;
bio(780).sigAddress='&vmr_rwd_fix_leftarm_B.robottype_e';
bio(780).ndims=2;
bio(780).size=[];


bio(781).blkName='DataLogging/Poll KINARM/constants/arm1/Arm robot version';
bio(781).sigName='robot version';
bio(781).portIdx=0;
bio(781).dim=[1,1];
bio(781).sigWidth=1;
bio(781).sigAddress='&vmr_rwd_fix_leftarm_B.robotversion_g';
bio(781).ndims=2;
bio(781).size=[];


bio(782).blkName='DataLogging/Poll KINARM/constants/arm1/Status read1';
bio(782).sigName='';
bio(782).portIdx=0;
bio(782).dim=[2,1];
bio(782).sigWidth=2;
bio(782).sigAddress='&vmr_rwd_fix_leftarm_B.Statusread1[0]';
bio(782).ndims=2;
bio(782).size=[];


bio(783).blkName='DataLogging/Poll KINARM/constants/arm2/decode robot/p1';
bio(783).sigName='isEP';
bio(783).portIdx=0;
bio(783).dim=[1,1];
bio(783).sigWidth=1;
bio(783).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isEP';
bio(783).ndims=2;
bio(783).size=[];


bio(784).blkName='DataLogging/Poll KINARM/constants/arm2/decode robot/p2';
bio(784).sigName='isHumanEXO';
bio(784).portIdx=1;
bio(784).dim=[1,1];
bio(784).sigWidth=1;
bio(784).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isHumanEXO';
bio(784).ndims=2;
bio(784).size=[];


bio(785).blkName='DataLogging/Poll KINARM/constants/arm2/decode robot/p3';
bio(785).sigName='isNHPEXO';
bio(785).portIdx=2;
bio(785).dim=[1,1];
bio(785).sigWidth=1;
bio(785).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isNHPEXO';
bio(785).ndims=2;
bio(785).size=[];


bio(786).blkName='DataLogging/Poll KINARM/constants/arm2/decode robot/p4';
bio(786).sigName='isClassicExo';
bio(786).portIdx=3;
bio(786).dim=[1,1];
bio(786).sigWidth=1;
bio(786).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isClassicExo';
bio(786).ndims=2;
bio(786).size=[];


bio(787).blkName='DataLogging/Poll KINARM/constants/arm2/decode robot/p5';
bio(787).sigName='isUTSEXO';
bio(787).portIdx=4;
bio(787).dim=[1,1];
bio(787).sigWidth=1;
bio(787).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isUTSEXO';
bio(787).ndims=2;
bio(787).size=[];


bio(788).blkName='DataLogging/Poll KINARM/constants/arm2/decode robot/p6';
bio(788).sigName='isPMAC';
bio(788).portIdx=5;
bio(788).dim=[1,1];
bio(788).sigWidth=1;
bio(788).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isPMAC';
bio(788).ndims=2;
bio(788).size=[];


bio(789).blkName='DataLogging/Poll KINARM/constants/arm2/decode robot/p7';
bio(789).sigName='isECAT';
bio(789).portIdx=6;
bio(789).dim=[1,1];
bio(789).sigWidth=1;
bio(789).sigAddress='&vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isECAT';
bio(789).ndims=2;
bio(789).size=[];


bio(790).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Elbow Angle Offset';
bio(790).sigName='elbow angle offset';
bio(790).portIdx=0;
bio(790).dim=[1,1];
bio(790).sigWidth=1;
bio(790).sigAddress='&vmr_rwd_fix_leftarm_B.elbowangleoffset_a';
bio(790).ndims=2;
bio(790).size=[];


bio(791).blkName='DataLogging/Poll KINARM/constants/arm2/Arm L1';
bio(791).sigName='L1';
bio(791).portIdx=0;
bio(791).dim=[1,1];
bio(791).sigWidth=1;
bio(791).sigAddress='&vmr_rwd_fix_leftarm_B.L1_c';
bio(791).ndims=2;
bio(791).size=[];


bio(792).blkName='DataLogging/Poll KINARM/constants/arm2/Arm L2';
bio(792).sigName='L2';
bio(792).portIdx=0;
bio(792).dim=[1,1];
bio(792).sigWidth=1;
bio(792).sigAddress='&vmr_rwd_fix_leftarm_B.L2_f';
bio(792).ndims=2;
bio(792).size=[];


bio(793).blkName='DataLogging/Poll KINARM/constants/arm2/Arm L3 Error';
bio(793).sigName='L3 Error';
bio(793).portIdx=0;
bio(793).dim=[1,1];
bio(793).sigWidth=1;
bio(793).sigAddress='&vmr_rwd_fix_leftarm_B.L3Error_f';
bio(793).ndims=2;
bio(793).size=[];


bio(794).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Motor1 Gear Ratio';
bio(794).sigName='M1 Gear Ratio';
bio(794).portIdx=0;
bio(794).dim=[1,1];
bio(794).sigWidth=1;
bio(794).sigAddress='&vmr_rwd_fix_leftarm_B.M1GearRatio_k';
bio(794).ndims=2;
bio(794).size=[];


bio(795).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Motor1 Orientation';
bio(795).sigName='M1 orientation';
bio(795).portIdx=0;
bio(795).dim=[1,1];
bio(795).sigWidth=1;
bio(795).sigAddress='&vmr_rwd_fix_leftarm_B.M1orientation_n';
bio(795).ndims=2;
bio(795).size=[];


bio(796).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Motor2 Gear Ratio';
bio(796).sigName='M2 Gear Ratio';
bio(796).portIdx=0;
bio(796).dim=[1,1];
bio(796).sigWidth=1;
bio(796).sigAddress='&vmr_rwd_fix_leftarm_B.M2GearRatio_l';
bio(796).ndims=2;
bio(796).size=[];


bio(797).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Motor2 Orientation';
bio(797).sigName='M2 Orientation';
bio(797).portIdx=0;
bio(797).dim=[1,1];
bio(797).sigWidth=1;
bio(797).sigAddress='&vmr_rwd_fix_leftarm_B.M2Orientation_cw';
bio(797).ndims=2;
bio(797).size=[];


bio(798).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Orientation';
bio(798).sigName='Arm Orientation';
bio(798).portIdx=0;
bio(798).dim=[1,1];
bio(798).sigWidth=1;
bio(798).sigAddress='&vmr_rwd_fix_leftarm_B.ArmOrientation_l';
bio(798).ndims=2;
bio(798).size=[];


bio(799).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Pointer Offset';
bio(799).sigName='Pointer offset';
bio(799).portIdx=0;
bio(799).dim=[1,1];
bio(799).sigWidth=1;
bio(799).sigAddress='&vmr_rwd_fix_leftarm_B.Pointeroffset_b';
bio(799).ndims=2;
bio(799).size=[];


bio(800).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Secondary Encoders';
bio(800).sigName='Has Secondary Enc';
bio(800).portIdx=0;
bio(800).dim=[1,1];
bio(800).sigWidth=1;
bio(800).sigAddress='&vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f';
bio(800).ndims=2;
bio(800).size=[];


bio(801).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Shoulder Angle Offset';
bio(801).sigName='shoulder angle offset';
bio(801).portIdx=0;
bio(801).dim=[1,1];
bio(801).sigWidth=1;
bio(801).sigAddress='&vmr_rwd_fix_leftarm_B.shoulderangleoffset_b';
bio(801).ndims=2;
bio(801).size=[];


bio(802).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Shoulder X';
bio(802).sigName='Shoulder X';
bio(802).portIdx=0;
bio(802).dim=[1,1];
bio(802).sigWidth=1;
bio(802).sigAddress='&vmr_rwd_fix_leftarm_B.ShoulderX_a';
bio(802).ndims=2;
bio(802).size=[];


bio(803).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Shoulder Y';
bio(803).sigName='Shoulder Y';
bio(803).portIdx=0;
bio(803).dim=[1,1];
bio(803).sigWidth=1;
bio(803).sigAddress='&vmr_rwd_fix_leftarm_B.ShoulderY_b';
bio(803).ndims=2;
bio(803).size=[];


bio(804).blkName='DataLogging/Poll KINARM/constants/arm2/Arm Torque Constant';
bio(804).sigName='torque constant';
bio(804).portIdx=0;
bio(804).dim=[1,1];
bio(804).sigWidth=1;
bio(804).sigAddress='&vmr_rwd_fix_leftarm_B.torqueconstant_i';
bio(804).ndims=2;
bio(804).size=[];


bio(805).blkName='DataLogging/Poll KINARM/constants/arm2/Arm robot type';
bio(805).sigName='robot type';
bio(805).portIdx=0;
bio(805).dim=[1,1];
bio(805).sigWidth=1;
bio(805).sigAddress='&vmr_rwd_fix_leftarm_B.robottype_cs';
bio(805).ndims=2;
bio(805).size=[];


bio(806).blkName='DataLogging/Poll KINARM/constants/arm2/Arm robot version';
bio(806).sigName='robot version';
bio(806).portIdx=0;
bio(806).dim=[1,1];
bio(806).sigWidth=1;
bio(806).sigAddress='&vmr_rwd_fix_leftarm_B.robotversion_f';
bio(806).ndims=2;
bio(806).size=[];


bio(807).blkName='DataLogging/Poll KINARM/constants/arm2/Status read1';
bio(807).sigName='';
bio(807).portIdx=0;
bio(807).dim=[2,1];
bio(807).sigWidth=2;
bio(807).sigAddress='&vmr_rwd_fix_leftarm_B.Statusread1_m[0]';
bio(807).ndims=2;
bio(807).size=[];


bio(808).blkName='DataLogging/Poll KINARM/createKINData/Counter Free-Running/Output';
bio(808).sigName='';
bio(808).portIdx=0;
bio(808).dim=[1,1];
bio(808).sigWidth=1;
bio(808).sigAddress='&vmr_rwd_fix_leftarm_B.Output_h';
bio(808).ndims=2;
bio(808).size=[];


bio(809).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Detect Increase/FixPt Relational Operator';
bio(809).sigName='';
bio(809).portIdx=0;
bio(809).dim=[1,1];
bio(809).sigWidth=1;
bio(809).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtRelationalOperator';
bio(809).ndims=2;
bio(809).size=[];


bio(810).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Detect Increase/Delay Input1';
bio(810).sigName='U(k-1)';
bio(810).portIdx=0;
bio(810).dim=[1,1];
bio(810).sigWidth=1;
bio(810).sigAddress='&vmr_rwd_fix_leftarm_B.Uk1_e';
bio(810).ndims=2;
bio(810).size=[];


bio(811).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative/Diff';
bio(811).sigName='';
bio(811).portIdx=0;
bio(811).dim=[2,1];
bio(811).sigWidth=2;
bio(811).sigAddress='&vmr_rwd_fix_leftarm_B.Diff[0]';
bio(811).ndims=2;
bio(811).size=[];


bio(812).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative/TSamp';
bio(812).sigName='';
bio(812).portIdx=0;
bio(812).dim=[2,1];
bio(812).sigWidth=2;
bio(812).sigAddress='&vmr_rwd_fix_leftarm_B.TSamp[0]';
bio(812).ndims=2;
bio(812).size=[];


bio(813).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative/UD';
bio(813).sigName='U(k-1)';
bio(813).portIdx=0;
bio(813).dim=[2,1];
bio(813).sigWidth=2;
bio(813).sigAddress='&vmr_rwd_fix_leftarm_B.Uk1[0]';
bio(813).ndims=2;
bio(813).size=[];


bio(814).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative1/Diff';
bio(814).sigName='';
bio(814).portIdx=0;
bio(814).dim=[2,1];
bio(814).sigWidth=2;
bio(814).sigAddress='&vmr_rwd_fix_leftarm_B.Diff_p[0]';
bio(814).ndims=2;
bio(814).size=[];


bio(815).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative1/TSamp';
bio(815).sigName='';
bio(815).portIdx=0;
bio(815).dim=[2,1];
bio(815).sigWidth=2;
bio(815).sigAddress='&vmr_rwd_fix_leftarm_B.TSamp_d[0]';
bio(815).ndims=2;
bio(815).size=[];


bio(816).blkName='Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative1/UD';
bio(816).sigName='U(k-1)';
bio(816).portIdx=0;
bio(816).dim=[2,1];
bio(816).sigWidth=2;
bio(816).sigAddress='&vmr_rwd_fix_leftarm_B.Uk1_d[0]';
bio(816).ndims=2;
bio(816).size=[];


bio(817).blkName='Subsystem/KINARM_Exo_Position_Controller/KINARM filter/get robot info/arm switch';
bio(817).sigName='armIdx';
bio(817).portIdx=0;
bio(817).dim=[1,1];
bio(817).sigWidth=1;
bio(817).sigAddress='&vmr_rwd_fix_leftarm_B.armIdx';
bio(817).ndims=2;
bio(817).size=[];


bio(818).blkName='DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Increment Real World/FixPt Sum1';
bio(818).sigName='';
bio(818).portIdx=0;
bio(818).dim=[1,1];
bio(818).sigWidth=1;
bio(818).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSum1_eh';
bio(818).ndims=2;
bio(818).size=[];


bio(819).blkName='DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Wrap To Zero/FixPt Switch';
bio(819).sigName='';
bio(819).portIdx=0;
bio(819).dim=[1,1];
bio(819).sigWidth=1;
bio(819).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSwitch_dp';
bio(819).ndims=2;
bio(819).size=[];


bio(820).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Control GDC Whistle State/p1';
bio(820).sigName='ControlWord';
bio(820).portIdx=0;
bio(820).dim=[1,1];
bio(820).sigWidth=1;
bio(820).sigAddress='&vmr_rwd_fix_leftarm_B.ControlWord_o';
bio(820).ndims=2;
bio(820).size=[];


bio(821).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Control GDC Whistle State/p2';
bio(821).sigName='motorStatus';
bio(821).portIdx=1;
bio(821).dim=[1,1];
bio(821).sigWidth=1;
bio(821).sigAddress='&vmr_rwd_fix_leftarm_B.motorStatus_f';
bio(821).ndims=2;
bio(821).size=[];


bio(822).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Control GDC Whistle State/p3';
bio(822).sigName='isPermFaulted';
bio(822).portIdx=2;
bio(822).dim=[1,1];
bio(822).sigWidth=1;
bio(822).sigAddress='&vmr_rwd_fix_leftarm_B.isPermFaulted_i';
bio(822).ndims=2;
bio(822).size=[];


bio(823).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Memory';
bio(823).sigName='';
bio(823).portIdx=0;
bio(823).dim=[1,1];
bio(823).sigWidth=1;
bio(823).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_j';
bio(823).ndims=2;
bio(823).size=[];


bio(824).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Control GDC Whistle State/p1';
bio(824).sigName='ControlWord';
bio(824).portIdx=0;
bio(824).dim=[1,1];
bio(824).sigWidth=1;
bio(824).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f.ControlWord';
bio(824).ndims=2;
bio(824).size=[];


bio(825).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Control GDC Whistle State/p2';
bio(825).sigName='motorStatus';
bio(825).portIdx=1;
bio(825).dim=[1,1];
bio(825).sigWidth=1;
bio(825).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f.motorStatus';
bio(825).ndims=2;
bio(825).size=[];


bio(826).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Control GDC Whistle State/p3';
bio(826).sigName='isPermFaulted';
bio(826).portIdx=2;
bio(826).dim=[1,1];
bio(826).sigWidth=1;
bio(826).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f.isPermFaulted';
bio(826).ndims=2;
bio(826).size=[];


bio(827).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Memory';
bio(827).sigName='';
bio(827).portIdx=0;
bio(827).dim=[1,1];
bio(827).sigWidth=1;
bio(827).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_f';
bio(827).ndims=2;
bio(827).size=[];


bio(828).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine/p1';
bio(828).sigName='setupData';
bio(828).portIdx=0;
bio(828).dim=[4,1];
bio(828).sigWidth=4;
bio(828).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.setupData[0]';
bio(828).ndims=2;
bio(828).size=[];


bio(829).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine/p2';
bio(829).sigName='SDORequest';
bio(829).portIdx=1;
bio(829).dim=[3,1];
bio(829).sigWidth=3;
bio(829).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.SDORequest[0]';
bio(829).ndims=2;
bio(829).size=[];


bio(830).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine/p3';
bio(830).sigName='encoderOutputs';
bio(830).portIdx=2;
bio(830).dim=[6,1];
bio(830).sigWidth=6;
bio(830).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.encoderOutputs[0]';
bio(830).ndims=2;
bio(830).size=[];


bio(831).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine/p4';
bio(831).sigName='complete';
bio(831).portIdx=3;
bio(831).dim=[1,1];
bio(831).sigWidth=1;
bio(831).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.complete';
bio(831).ndims=2;
bio(831).size=[];


bio(832).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values/p1';
bio(832).sigName='setupValues';
bio(832).portIdx=0;
bio(832).dim=[8,3];
bio(832).sigWidth=24;
bio(832).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues.setupValues[0]';
bio(832).ndims=2;
bio(832).size=[];


bio(833).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values/p2';
bio(833).sigName='setupValuesCount';
bio(833).portIdx=1;
bio(833).dim=[1,1];
bio(833).sigWidth=1;
bio(833).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues.setupValuesCount';
bio(833).ndims=2;
bio(833).size=[];


bio(834).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values/p3';
bio(834).sigName='pollValues';
bio(834).portIdx=2;
bio(834).dim=[1,3];
bio(834).sigWidth=3;
bio(834).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues.pollValues[0]';
bio(834).ndims=2;
bio(834).size=[];


bio(835).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values/p4';
bio(835).sigName='encoderValues';
bio(835).portIdx=3;
bio(835).dim=[6,2];
bio(835).sigWidth=12;
bio(835).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues.encoderValues[0]';
bio(835).ndims=2;
bio(835).size=[];


bio(836).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values/p5';
bio(836).sigName='encoderValuesCount';
bio(836).portIdx=4;
bio(836).dim=[1,1];
bio(836).sigWidth=1;
bio(836).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues.encoderValuesCount';
bio(836).ndims=2;
bio(836).size=[];


bio(837).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/Memory';
bio(837).sigName='';
bio(837).portIdx=0;
bio(837).dim=[1,1];
bio(837).sigWidth=1;
bio(837).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_c';
bio(837).ndims=2;
bio(837).size=[];


bio(838).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/Memory1';
bio(838).sigName='';
bio(838).portIdx=0;
bio(838).dim=[2,1];
bio(838).sigWidth=2;
bio(838).sigAddress='&vmr_rwd_fix_leftarm_B.Memory1_b[0]';
bio(838).ndims=2;
bio(838).size=[];


bio(839).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Download';
bio(839).sigName='';
bio(839).portIdx=0;
bio(839).dim=[1,1];
bio(839).sigWidth=1;
bio(839).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_i';
bio(839).ndims=2;
bio(839).size=[];


bio(840).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p1';
bio(840).sigName='';
bio(840).portIdx=0;
bio(840).dim=[1,1];
bio(840).sigWidth=1;
bio(840).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_p';
bio(840).ndims=2;
bio(840).size=[];


bio(841).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p2';
bio(841).sigName='';
bio(841).portIdx=1;
bio(841).dim=[1,1];
bio(841).sigWidth=1;
bio(841).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_a';
bio(841).ndims=2;
bio(841).size=[];


bio(842).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/AbsEncoder machine/p1';
bio(842).sigName='setupData';
bio(842).portIdx=0;
bio(842).dim=[4,1];
bio(842).sigWidth=4;
bio(842).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.setupData[0]';
bio(842).ndims=2;
bio(842).size=[];


bio(843).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/AbsEncoder machine/p2';
bio(843).sigName='SDORequest';
bio(843).portIdx=1;
bio(843).dim=[3,1];
bio(843).sigWidth=3;
bio(843).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.SDORequest[0]';
bio(843).ndims=2;
bio(843).size=[];


bio(844).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/AbsEncoder machine/p3';
bio(844).sigName='encoderOutputs';
bio(844).portIdx=2;
bio(844).dim=[6,1];
bio(844).sigWidth=6;
bio(844).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.encoderOutputs[0]';
bio(844).ndims=2;
bio(844).size=[];


bio(845).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/AbsEncoder machine/p4';
bio(845).sigName='complete';
bio(845).portIdx=3;
bio(845).dim=[1,1];
bio(845).sigWidth=1;
bio(845).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.complete';
bio(845).ndims=2;
bio(845).size=[];


bio(846).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/set-up values/p1';
bio(846).sigName='setupValues';
bio(846).portIdx=0;
bio(846).dim=[8,3];
bio(846).sigWidth=24;
bio(846).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_p.setupValues[0]';
bio(846).ndims=2;
bio(846).size=[];


bio(847).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/set-up values/p2';
bio(847).sigName='setupValuesCount';
bio(847).portIdx=1;
bio(847).dim=[1,1];
bio(847).sigWidth=1;
bio(847).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_p.setupValuesCount';
bio(847).ndims=2;
bio(847).size=[];


bio(848).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/set-up values/p3';
bio(848).sigName='pollValues';
bio(848).portIdx=2;
bio(848).dim=[1,3];
bio(848).sigWidth=3;
bio(848).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_p.pollValues[0]';
bio(848).ndims=2;
bio(848).size=[];


bio(849).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/set-up values/p4';
bio(849).sigName='encoderValues';
bio(849).portIdx=3;
bio(849).dim=[6,2];
bio(849).sigWidth=12;
bio(849).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_p.encoderValues[0]';
bio(849).ndims=2;
bio(849).size=[];


bio(850).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/set-up values/p5';
bio(850).sigName='encoderValuesCount';
bio(850).portIdx=4;
bio(850).dim=[1,1];
bio(850).sigWidth=1;
bio(850).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_p.encoderValuesCount';
bio(850).ndims=2;
bio(850).size=[];


bio(851).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/Memory';
bio(851).sigName='';
bio(851).portIdx=0;
bio(851).dim=[1,1];
bio(851).sigWidth=1;
bio(851).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_n0';
bio(851).ndims=2;
bio(851).size=[];


bio(852).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/Memory1';
bio(852).sigName='';
bio(852).portIdx=0;
bio(852).dim=[2,1];
bio(852).sigWidth=2;
bio(852).sigAddress='&vmr_rwd_fix_leftarm_B.Memory1_n[0]';
bio(852).ndims=2;
bio(852).size=[];


bio(853).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Download';
bio(853).sigName='';
bio(853).portIdx=0;
bio(853).dim=[1,1];
bio(853).sigWidth=1;
bio(853).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_ce';
bio(853).ndims=2;
bio(853).size=[];


bio(854).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p1';
bio(854).sigName='';
bio(854).portIdx=0;
bio(854).dim=[1,1];
bio(854).sigWidth=1;
bio(854).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_dq';
bio(854).ndims=2;
bio(854).size=[];


bio(855).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p2';
bio(855).sigName='';
bio(855).portIdx=1;
bio(855).dim=[1,1];
bio(855).sigWidth=1;
bio(855).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_m';
bio(855).ndims=2;
bio(855).size=[];


bio(856).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/SDO read machine/p1';
bio(856).sigName='enable';
bio(856).portIdx=0;
bio(856).dim=[1,1];
bio(856).sigWidth=1;
bio(856).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_p.enable';
bio(856).ndims=2;
bio(856).size=[];


bio(857).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/SDO read machine/p2';
bio(857).sigName='complete';
bio(857).portIdx=1;
bio(857).dim=[1,1];
bio(857).sigWidth=1;
bio(857).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_p.complete';
bio(857).ndims=2;
bio(857).size=[];


bio(858).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/values';
bio(858).sigName='outVal';
bio(858).portIdx=0;
bio(858).dim=[3,1];
bio(858).sigWidth=3;
bio(858).sigAddress='&vmr_rwd_fix_leftarm_B.sf_values.outVal[0]';
bio(858).ndims=2;
bio(858).size=[];


bio(859).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/readAddr';
bio(859).sigName='';
bio(859).portIdx=0;
bio(859).dim=[3,1];
bio(859).sigWidth=3;
bio(859).sigAddress='&vmr_rwd_fix_leftarm_B.readAddr_p[0]';
bio(859).ndims=2;
bio(859).size=[];


bio(860).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Data Type Conversion1';
bio(860).sigName='';
bio(860).portIdx=0;
bio(860).dim=[1,1];
bio(860).sigWidth=1;
bio(860).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_dx';
bio(860).ndims=2;
bio(860).size=[];


bio(861).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Data Type Conversion2';
bio(861).sigName='';
bio(861).portIdx=0;
bio(861).dim=[1,1];
bio(861).sigWidth=1;
bio(861).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_l';
bio(861).ndims=2;
bio(861).size=[];


bio(862).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/convert';
bio(862).sigName='';
bio(862).portIdx=0;
bio(862).dim=[1,1];
bio(862).sigWidth=1;
bio(862).sigAddress='&vmr_rwd_fix_leftarm_B.convert_b';
bio(862).ndims=2;
bio(862).size=[];


bio(863).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/convert1';
bio(863).sigName='';
bio(863).portIdx=0;
bio(863).dim=[1,1];
bio(863).sigWidth=1;
bio(863).sigAddress='&vmr_rwd_fix_leftarm_B.convert1_f';
bio(863).ndims=2;
bio(863).size=[];


bio(864).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/status';
bio(864).sigName='';
bio(864).portIdx=0;
bio(864).dim=[1,1];
bio(864).sigWidth=1;
bio(864).sigAddress='&vmr_rwd_fix_leftarm_B.status_d';
bio(864).ndims=2;
bio(864).size=[];


bio(865).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Memory';
bio(865).sigName='';
bio(865).portIdx=0;
bio(865).dim=[1,1];
bio(865).sigWidth=1;
bio(865).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_ns';
bio(865).ndims=2;
bio(865).size=[];


bio(866).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/SDO write machine/p1';
bio(866).sigName='enable';
bio(866).portIdx=0;
bio(866).dim=[1,1];
bio(866).sigWidth=1;
bio(866).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOwritemachine.enable';
bio(866).ndims=2;
bio(866).size=[];


bio(867).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/SDO write machine/p2';
bio(867).sigName='complete';
bio(867).portIdx=1;
bio(867).dim=[1,1];
bio(867).sigWidth=1;
bio(867).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOwritemachine.complete';
bio(867).ndims=2;
bio(867).size=[];


bio(868).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/convert';
bio(868).sigName='y';
bio(868).portIdx=0;
bio(868).dim=[1,1];
bio(868).sigWidth=1;
bio(868).sigAddress='&vmr_rwd_fix_leftarm_B.sf_convert.y';
bio(868).ndims=2;
bio(868).size=[];


bio(869).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/writeData';
bio(869).sigName='';
bio(869).portIdx=0;
bio(869).dim=[5,1];
bio(869).sigWidth=5;
bio(869).sigAddress='&vmr_rwd_fix_leftarm_B.writeData_e[0]';
bio(869).ndims=2;
bio(869).size=[];


bio(870).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/Data Type Conversion1';
bio(870).sigName='';
bio(870).portIdx=0;
bio(870).dim=[1,1];
bio(870).sigWidth=1;
bio(870).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_d';
bio(870).ndims=2;
bio(870).size=[];


bio(871).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/Data Type Conversion2';
bio(871).sigName='';
bio(871).portIdx=0;
bio(871).dim=[1,1];
bio(871).sigWidth=1;
bio(871).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_b';
bio(871).ndims=2;
bio(871).size=[];


bio(872).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/status';
bio(872).sigName='';
bio(872).portIdx=0;
bio(872).dim=[1,1];
bio(872).sigWidth=1;
bio(872).sigAddress='&vmr_rwd_fix_leftarm_B.status_n';
bio(872).ndims=2;
bio(872).size=[];


bio(873).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/Memory';
bio(873).sigName='';
bio(873).portIdx=0;
bio(873).dim=[1,1];
bio(873).sigWidth=1;
bio(873).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_nf';
bio(873).ndims=2;
bio(873).size=[];


bio(874).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/BKIN EtherCAT Async SDO Download';
bio(874).sigName='';
bio(874).portIdx=0;
bio(874).dim=[1,1];
bio(874).sigWidth=1;
bio(874).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_f';
bio(874).ndims=2;
bio(874).size=[];


bio(875).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory';
bio(875).sigName='';
bio(875).portIdx=0;
bio(875).dim=[1,1];
bio(875).sigWidth=1;
bio(875).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_d3';
bio(875).ndims=2;
bio(875).size=[];


bio(876).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory1';
bio(876).sigName='';
bio(876).portIdx=0;
bio(876).dim=[1,1];
bio(876).sigWidth=1;
bio(876).sigAddress='&vmr_rwd_fix_leftarm_B.Memory1_o';
bio(876).ndims=2;
bio(876).size=[];


bio(877).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Memory2';
bio(877).sigName='';
bio(877).portIdx=0;
bio(877).dim=[1,1];
bio(877).sigWidth=1;
bio(877).sigAddress='&vmr_rwd_fix_leftarm_B.Memory2_n';
bio(877).ndims=2;
bio(877).size=[];


bio(878).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Rate Transition';
bio(878).sigName='';
bio(878).portIdx=0;
bio(878).dim=[1,1];
bio(878).sigWidth=1;
bio(878).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_bs';
bio(878).ndims=2;
bio(878).size=[];


bio(879).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Rate Transition1';
bio(879).sigName='';
bio(879).portIdx=0;
bio(879).dim=[1,1];
bio(879).sigWidth=1;
bio(879).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition1_dsj';
bio(879).ndims=2;
bio(879).size=[];


bio(880).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Rate Transition2';
bio(880).sigName='';
bio(880).portIdx=0;
bio(880).dim=[1,1];
bio(880).sigWidth=1;
bio(880).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition2_d';
bio(880).ndims=2;
bio(880).size=[];


bio(881).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Control GDC Whistle State/p1';
bio(881).sigName='ControlWord';
bio(881).portIdx=0;
bio(881).dim=[1,1];
bio(881).sigWidth=1;
bio(881).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p.ControlWord';
bio(881).ndims=2;
bio(881).size=[];


bio(882).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Control GDC Whistle State/p2';
bio(882).sigName='motorStatus';
bio(882).portIdx=1;
bio(882).dim=[1,1];
bio(882).sigWidth=1;
bio(882).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p.motorStatus';
bio(882).ndims=2;
bio(882).size=[];


bio(883).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Control GDC Whistle State/p3';
bio(883).sigName='isPermFaulted';
bio(883).portIdx=2;
bio(883).dim=[1,1];
bio(883).sigWidth=1;
bio(883).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p.isPermFaulted';
bio(883).ndims=2;
bio(883).size=[];


bio(884).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Memory';
bio(884).sigName='';
bio(884).portIdx=0;
bio(884).dim=[1,1];
bio(884).sigWidth=1;
bio(884).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_m';
bio(884).ndims=2;
bio(884).size=[];


bio(885).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Control GDC Whistle State/p1';
bio(885).sigName='ControlWord';
bio(885).portIdx=0;
bio(885).dim=[1,1];
bio(885).sigWidth=1;
bio(885).sigAddress='&vmr_rwd_fix_leftarm_B.ControlWord';
bio(885).ndims=2;
bio(885).size=[];


bio(886).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Control GDC Whistle State/p2';
bio(886).sigName='motorStatus';
bio(886).portIdx=1;
bio(886).dim=[1,1];
bio(886).sigWidth=1;
bio(886).sigAddress='&vmr_rwd_fix_leftarm_B.motorStatus';
bio(886).ndims=2;
bio(886).size=[];


bio(887).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Control GDC Whistle State/p3';
bio(887).sigName='isPermFaulted';
bio(887).portIdx=2;
bio(887).dim=[1,1];
bio(887).sigWidth=1;
bio(887).sigAddress='&vmr_rwd_fix_leftarm_B.isPermFaulted';
bio(887).ndims=2;
bio(887).size=[];


bio(888).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Memory';
bio(888).sigName='';
bio(888).portIdx=0;
bio(888).dim=[1,1];
bio(888).sigWidth=1;
bio(888).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_i';
bio(888).ndims=2;
bio(888).size=[];


bio(889).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/AbsEncoder machine/p1';
bio(889).sigName='setupData';
bio(889).portIdx=0;
bio(889).dim=[4,1];
bio(889).sigWidth=4;
bio(889).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.setupData[0]';
bio(889).ndims=2;
bio(889).size=[];


bio(890).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/AbsEncoder machine/p2';
bio(890).sigName='SDORequest';
bio(890).portIdx=1;
bio(890).dim=[3,1];
bio(890).sigWidth=3;
bio(890).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.SDORequest[0]';
bio(890).ndims=2;
bio(890).size=[];


bio(891).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/AbsEncoder machine/p3';
bio(891).sigName='encoderOutputs';
bio(891).portIdx=2;
bio(891).dim=[6,1];
bio(891).sigWidth=6;
bio(891).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.encoderOutputs[0]';
bio(891).ndims=2;
bio(891).size=[];


bio(892).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/AbsEncoder machine/p4';
bio(892).sigName='complete';
bio(892).portIdx=3;
bio(892).dim=[1,1];
bio(892).sigWidth=1;
bio(892).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.complete';
bio(892).ndims=2;
bio(892).size=[];


bio(893).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/set-up values/p1';
bio(893).sigName='setupValues';
bio(893).portIdx=0;
bio(893).dim=[8,3];
bio(893).sigWidth=24;
bio(893).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_k.setupValues[0]';
bio(893).ndims=2;
bio(893).size=[];


bio(894).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/set-up values/p2';
bio(894).sigName='setupValuesCount';
bio(894).portIdx=1;
bio(894).dim=[1,1];
bio(894).sigWidth=1;
bio(894).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_k.setupValuesCount';
bio(894).ndims=2;
bio(894).size=[];


bio(895).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/set-up values/p3';
bio(895).sigName='pollValues';
bio(895).portIdx=2;
bio(895).dim=[1,3];
bio(895).sigWidth=3;
bio(895).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_k.pollValues[0]';
bio(895).ndims=2;
bio(895).size=[];


bio(896).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/set-up values/p4';
bio(896).sigName='encoderValues';
bio(896).portIdx=3;
bio(896).dim=[6,2];
bio(896).sigWidth=12;
bio(896).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_k.encoderValues[0]';
bio(896).ndims=2;
bio(896).size=[];


bio(897).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/set-up values/p5';
bio(897).sigName='encoderValuesCount';
bio(897).portIdx=4;
bio(897).dim=[1,1];
bio(897).sigWidth=1;
bio(897).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_k.encoderValuesCount';
bio(897).ndims=2;
bio(897).size=[];


bio(898).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/Memory';
bio(898).sigName='';
bio(898).portIdx=0;
bio(898).dim=[1,1];
bio(898).sigWidth=1;
bio(898).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_h';
bio(898).ndims=2;
bio(898).size=[];


bio(899).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/Memory1';
bio(899).sigName='';
bio(899).portIdx=0;
bio(899).dim=[2,1];
bio(899).sigWidth=2;
bio(899).sigAddress='&vmr_rwd_fix_leftarm_B.Memory1_f[0]';
bio(899).ndims=2;
bio(899).size=[];


bio(900).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Download';
bio(900).sigName='';
bio(900).portIdx=0;
bio(900).dim=[1,1];
bio(900).sigWidth=1;
bio(900).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_g0';
bio(900).ndims=2;
bio(900).size=[];


bio(901).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p1';
bio(901).sigName='';
bio(901).portIdx=0;
bio(901).dim=[1,1];
bio(901).sigWidth=1;
bio(901).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_k';
bio(901).ndims=2;
bio(901).size=[];


bio(902).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p2';
bio(902).sigName='';
bio(902).portIdx=1;
bio(902).dim=[1,1];
bio(902).sigWidth=1;
bio(902).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_o';
bio(902).ndims=2;
bio(902).size=[];


bio(903).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/AbsEncoder machine/p1';
bio(903).sigName='setupData';
bio(903).portIdx=0;
bio(903).dim=[4,1];
bio(903).sigWidth=4;
bio(903).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.setupData[0]';
bio(903).ndims=2;
bio(903).size=[];


bio(904).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/AbsEncoder machine/p2';
bio(904).sigName='SDORequest';
bio(904).portIdx=1;
bio(904).dim=[3,1];
bio(904).sigWidth=3;
bio(904).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.SDORequest[0]';
bio(904).ndims=2;
bio(904).size=[];


bio(905).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/AbsEncoder machine/p3';
bio(905).sigName='encoderOutputs';
bio(905).portIdx=2;
bio(905).dim=[6,1];
bio(905).sigWidth=6;
bio(905).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.encoderOutputs[0]';
bio(905).ndims=2;
bio(905).size=[];


bio(906).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/AbsEncoder machine/p4';
bio(906).sigName='complete';
bio(906).portIdx=3;
bio(906).dim=[1,1];
bio(906).sigWidth=1;
bio(906).sigAddress='&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.complete';
bio(906).ndims=2;
bio(906).size=[];


bio(907).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/set-up values/p1';
bio(907).sigName='setupValues';
bio(907).portIdx=0;
bio(907).dim=[8,3];
bio(907).sigWidth=24;
bio(907).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_g.setupValues[0]';
bio(907).ndims=2;
bio(907).size=[];


bio(908).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/set-up values/p2';
bio(908).sigName='setupValuesCount';
bio(908).portIdx=1;
bio(908).dim=[1,1];
bio(908).sigWidth=1;
bio(908).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_g.setupValuesCount';
bio(908).ndims=2;
bio(908).size=[];


bio(909).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/set-up values/p3';
bio(909).sigName='pollValues';
bio(909).portIdx=2;
bio(909).dim=[1,3];
bio(909).sigWidth=3;
bio(909).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_g.pollValues[0]';
bio(909).ndims=2;
bio(909).size=[];


bio(910).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/set-up values/p4';
bio(910).sigName='encoderValues';
bio(910).portIdx=3;
bio(910).dim=[6,2];
bio(910).sigWidth=12;
bio(910).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_g.encoderValues[0]';
bio(910).ndims=2;
bio(910).size=[];


bio(911).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/set-up values/p5';
bio(911).sigName='encoderValuesCount';
bio(911).portIdx=4;
bio(911).dim=[1,1];
bio(911).sigWidth=1;
bio(911).sigAddress='&vmr_rwd_fix_leftarm_B.sf_setupvalues_g.encoderValuesCount';
bio(911).ndims=2;
bio(911).size=[];


bio(912).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/Memory';
bio(912).sigName='';
bio(912).portIdx=0;
bio(912).dim=[1,1];
bio(912).sigWidth=1;
bio(912).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_pb';
bio(912).ndims=2;
bio(912).size=[];


bio(913).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/Memory1';
bio(913).sigName='';
bio(913).portIdx=0;
bio(913).dim=[2,1];
bio(913).sigWidth=2;
bio(913).sigAddress='&vmr_rwd_fix_leftarm_B.Memory1_et[0]';
bio(913).ndims=2;
bio(913).size=[];


bio(914).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Download';
bio(914).sigName='';
bio(914).portIdx=0;
bio(914).dim=[1,1];
bio(914).sigWidth=1;
bio(914).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_g';
bio(914).ndims=2;
bio(914).size=[];


bio(915).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p1';
bio(915).sigName='';
bio(915).portIdx=0;
bio(915).dim=[1,1];
bio(915).sigWidth=1;
bio(915).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1';
bio(915).ndims=2;
bio(915).size=[];


bio(916).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/BKIN EtherCAT Async SDO Upload/p2';
bio(916).sigName='';
bio(916).portIdx=1;
bio(916).dim=[1,1];
bio(916).sigWidth=1;
bio(916).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2';
bio(916).ndims=2;
bio(916).size=[];


bio(917).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/SDO read machine/p1';
bio(917).sigName='enable';
bio(917).portIdx=0;
bio(917).dim=[1,1];
bio(917).sigWidth=1;
bio(917).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_g.enable';
bio(917).ndims=2;
bio(917).size=[];


bio(918).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/SDO read machine/p2';
bio(918).sigName='complete';
bio(918).portIdx=1;
bio(918).dim=[1,1];
bio(918).sigWidth=1;
bio(918).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_g.complete';
bio(918).ndims=2;
bio(918).size=[];


bio(919).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/values';
bio(919).sigName='outVal';
bio(919).portIdx=0;
bio(919).dim=[3,1];
bio(919).sigWidth=3;
bio(919).sigAddress='&vmr_rwd_fix_leftarm_B.sf_values_n.outVal[0]';
bio(919).ndims=2;
bio(919).size=[];


bio(920).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/readAddr';
bio(920).sigName='';
bio(920).portIdx=0;
bio(920).dim=[3,1];
bio(920).sigWidth=3;
bio(920).sigAddress='&vmr_rwd_fix_leftarm_B.readAddr[0]';
bio(920).ndims=2;
bio(920).size=[];


bio(921).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Data Type Conversion1';
bio(921).sigName='';
bio(921).portIdx=0;
bio(921).dim=[1,1];
bio(921).sigWidth=1;
bio(921).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_k2';
bio(921).ndims=2;
bio(921).size=[];


bio(922).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Data Type Conversion2';
bio(922).sigName='';
bio(922).portIdx=0;
bio(922).dim=[1,1];
bio(922).sigWidth=1;
bio(922).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_m';
bio(922).ndims=2;
bio(922).size=[];


bio(923).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/convert';
bio(923).sigName='';
bio(923).portIdx=0;
bio(923).dim=[1,1];
bio(923).sigWidth=1;
bio(923).sigAddress='&vmr_rwd_fix_leftarm_B.convert_l';
bio(923).ndims=2;
bio(923).size=[];


bio(924).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/convert1';
bio(924).sigName='';
bio(924).portIdx=0;
bio(924).dim=[1,1];
bio(924).sigWidth=1;
bio(924).sigAddress='&vmr_rwd_fix_leftarm_B.convert1';
bio(924).ndims=2;
bio(924).size=[];


bio(925).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/status';
bio(925).sigName='';
bio(925).portIdx=0;
bio(925).dim=[1,1];
bio(925).sigWidth=1;
bio(925).sigAddress='&vmr_rwd_fix_leftarm_B.status_e';
bio(925).ndims=2;
bio(925).size=[];


bio(926).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Memory';
bio(926).sigName='';
bio(926).portIdx=0;
bio(926).dim=[1,1];
bio(926).sigWidth=1;
bio(926).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_ip';
bio(926).ndims=2;
bio(926).size=[];


bio(927).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/SDO write machine/p1';
bio(927).sigName='enable';
bio(927).portIdx=0;
bio(927).dim=[1,1];
bio(927).sigWidth=1;
bio(927).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOwritemachine_j.enable';
bio(927).ndims=2;
bio(927).size=[];


bio(928).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/SDO write machine/p2';
bio(928).sigName='complete';
bio(928).portIdx=1;
bio(928).dim=[1,1];
bio(928).sigWidth=1;
bio(928).sigAddress='&vmr_rwd_fix_leftarm_B.sf_SDOwritemachine_j.complete';
bio(928).ndims=2;
bio(928).size=[];


bio(929).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/convert';
bio(929).sigName='y';
bio(929).portIdx=0;
bio(929).dim=[1,1];
bio(929).sigWidth=1;
bio(929).sigAddress='&vmr_rwd_fix_leftarm_B.sf_convert_i.y';
bio(929).ndims=2;
bio(929).size=[];


bio(930).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/writeData';
bio(930).sigName='';
bio(930).portIdx=0;
bio(930).dim=[5,1];
bio(930).sigWidth=5;
bio(930).sigAddress='&vmr_rwd_fix_leftarm_B.writeData[0]';
bio(930).ndims=2;
bio(930).size=[];


bio(931).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/Data Type Conversion1';
bio(931).sigName='';
bio(931).portIdx=0;
bio(931).dim=[1,1];
bio(931).sigWidth=1;
bio(931).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_aq';
bio(931).ndims=2;
bio(931).size=[];


bio(932).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/Data Type Conversion2';
bio(932).sigName='';
bio(932).portIdx=0;
bio(932).dim=[1,1];
bio(932).sigWidth=1;
bio(932).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_p';
bio(932).ndims=2;
bio(932).size=[];


bio(933).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/status';
bio(933).sigName='';
bio(933).portIdx=0;
bio(933).dim=[1,1];
bio(933).sigWidth=1;
bio(933).sigAddress='&vmr_rwd_fix_leftarm_B.status';
bio(933).ndims=2;
bio(933).size=[];


bio(934).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/Memory';
bio(934).sigName='';
bio(934).portIdx=0;
bio(934).dim=[1,1];
bio(934).sigWidth=1;
bio(934).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_lf';
bio(934).ndims=2;
bio(934).size=[];


bio(935).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/BKIN EtherCAT Async SDO Download';
bio(935).sigName='';
bio(935).portIdx=0;
bio(935).dim=[1,1];
bio(935).sigWidth=1;
bio(935).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload';
bio(935).ndims=2;
bio(935).size=[];


bio(936).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory';
bio(936).sigName='';
bio(936).portIdx=0;
bio(936).dim=[1,1];
bio(936).sigWidth=1;
bio(936).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_p';
bio(936).ndims=2;
bio(936).size=[];


bio(937).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory1';
bio(937).sigName='';
bio(937).portIdx=0;
bio(937).dim=[1,1];
bio(937).sigWidth=1;
bio(937).sigAddress='&vmr_rwd_fix_leftarm_B.Memory1_e';
bio(937).ndims=2;
bio(937).size=[];


bio(938).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Memory2';
bio(938).sigName='';
bio(938).portIdx=0;
bio(938).dim=[1,1];
bio(938).sigWidth=1;
bio(938).sigAddress='&vmr_rwd_fix_leftarm_B.Memory2';
bio(938).ndims=2;
bio(938).size=[];


bio(939).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Rate Transition';
bio(939).sigName='';
bio(939).portIdx=0;
bio(939).dim=[1,1];
bio(939).sigWidth=1;
bio(939).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_bx';
bio(939).ndims=2;
bio(939).size=[];


bio(940).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Rate Transition1';
bio(940).sigName='';
bio(940).portIdx=0;
bio(940).dim=[1,1];
bio(940).sigWidth=1;
bio(940).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition1_ds';
bio(940).ndims=2;
bio(940).size=[];


bio(941).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Rate Transition2';
bio(941).sigName='';
bio(941).portIdx=0;
bio(941).dim=[1,1];
bio(941).sigWidth=1;
bio(941).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition2_jr';
bio(941).ndims=2;
bio(941).size=[];


bio(942).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Increment Real World/FixPt Sum1';
bio(942).sigName='';
bio(942).portIdx=0;
bio(942).dim=[1,1];
bio(942).sigWidth=1;
bio(942).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSum1_e';
bio(942).ndims=2;
bio(942).size=[];


bio(943).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Wrap To Zero/FixPt Switch';
bio(943).sigName='';
bio(943).portIdx=0;
bio(943).dim=[1,1];
bio(943).sigWidth=1;
bio(943).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSwitch_m';
bio(943).ndims=2;
bio(943).size=[];


bio(944).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/create filtered velocities/filter_velocities';
bio(944).sigName='filteredVels';
bio(944).portIdx=0;
bio(944).dim=[1,4];
bio(944).sigWidth=4;
bio(944).sigAddress='&vmr_rwd_fix_leftarm_B.filteredVels[0]';
bio(944).ndims=2;
bio(944).size=[];


bio(945).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/update/create filtered velocities/rebuild';
bio(945).sigName='outVals';
bio(945).portIdx=0;
bio(945).dim=[20,1];
bio(945).sigWidth=20;
bio(945).sigAddress='&vmr_rwd_fix_leftarm_B.outVals[0]';
bio(945).ndims=2;
bio(945).size=[];


bio(946).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Detect Change/FixPt Relational Operator';
bio(946).sigName='';
bio(946).portIdx=0;
bio(946).dim=[1,1];
bio(946).sigWidth=1;
bio(946).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtRelationalOperator_l';
bio(946).ndims=2;
bio(946).size=[];


bio(947).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Detect Change/Delay Input1';
bio(947).sigName='U(k-1)';
bio(947).portIdx=0;
bio(947).dim=[1,1];
bio(947).sigWidth=1;
bio(947).sigAddress='&vmr_rwd_fix_leftarm_B.Uk1_o';
bio(947).ndims=2;
bio(947).size=[];


bio(948).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Byte Reversal';
bio(948).sigName='';
bio(948).portIdx=0;
bio(948).dim=[1,1];
bio(948).sigWidth=1;
bio(948).sigAddress='&vmr_rwd_fix_leftarm_B.ByteReversal_n';
bio(948).ndims=2;
bio(948).size=[];


bio(949).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Byte Reversal1';
bio(949).sigName='';
bio(949).portIdx=0;
bio(949).dim=[1,1];
bio(949).sigWidth=1;
bio(949).sigAddress='&vmr_rwd_fix_leftarm_B.ByteReversal1_m';
bio(949).ndims=2;
bio(949).size=[];


bio(950).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Byte Reversal2';
bio(950).sigName='';
bio(950).portIdx=0;
bio(950).dim=[1,1];
bio(950).sigWidth=1;
bio(950).sigAddress='&vmr_rwd_fix_leftarm_B.ByteReversal2';
bio(950).ndims=2;
bio(950).size=[];


bio(951).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Pack';
bio(951).sigName='';
bio(951).portIdx=0;
bio(951).dim=[8,1];
bio(951).sigWidth=8;
bio(951).sigAddress='&vmr_rwd_fix_leftarm_B.Pack_f[0]';
bio(951).ndims=2;
bio(951).size=[];


bio(952).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Switch';
bio(952).sigName='';
bio(952).portIdx=0;
bio(952).dim=[1,1];
bio(952).sigWidth=1;
bio(952).sigAddress='&vmr_rwd_fix_leftarm_B.Switch_n';
bio(952).ndims=2;
bio(952).size=[];


bio(953).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Byte Reversal';
bio(953).sigName='';
bio(953).portIdx=0;
bio(953).dim=[1,1];
bio(953).sigWidth=1;
bio(953).sigAddress='&vmr_rwd_fix_leftarm_B.ByteReversal_g';
bio(953).ndims=2;
bio(953).size=[];


bio(954).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Byte Reversal1';
bio(954).sigName='';
bio(954).portIdx=0;
bio(954).dim=[1,1];
bio(954).sigWidth=1;
bio(954).sigAddress='&vmr_rwd_fix_leftarm_B.ByteReversal1_a';
bio(954).ndims=2;
bio(954).size=[];


bio(955).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Byte Reversal2';
bio(955).sigName='';
bio(955).portIdx=0;
bio(955).dim=[1,1];
bio(955).sigWidth=1;
bio(955).sigAddress='&vmr_rwd_fix_leftarm_B.ByteReversal2_g';
bio(955).ndims=2;
bio(955).size=[];


bio(956).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Pack';
bio(956).sigName='';
bio(956).portIdx=0;
bio(956).dim=[8,1];
bio(956).sigWidth=8;
bio(956).sigAddress='&vmr_rwd_fix_leftarm_B.Pack[0]';
bio(956).ndims=2;
bio(956).size=[];


bio(957).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Switch';
bio(957).sigName='';
bio(957).portIdx=0;
bio(957).dim=[1,1];
bio(957).sigWidth=1;
bio(957).sigAddress='&vmr_rwd_fix_leftarm_B.Switch_g';
bio(957).ndims=2;
bio(957).size=[];


bio(958).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Detect Change/FixPt Relational Operator';
bio(958).sigName='';
bio(958).portIdx=0;
bio(958).dim=[1,1];
bio(958).sigWidth=1;
bio(958).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtRelationalOperator_i';
bio(958).ndims=2;
bio(958).size=[];


bio(959).blkName='DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Detect Change/Delay Input1';
bio(959).sigName='U(k-1)';
bio(959).portIdx=0;
bio(959).dim=[1,1];
bio(959).sigWidth=1;
bio(959).sigAddress='&vmr_rwd_fix_leftarm_B.Uk1_p';
bio(959).ndims=2;
bio(959).size=[];


bio(960).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/TypeCast';
bio(960).sigName='y';
bio(960).portIdx=0;
bio(960).dim=[1,1];
bio(960).sigWidth=1;
bio(960).sigAddress='&vmr_rwd_fix_leftarm_B.y_j';
bio(960).ndims=2;
bio(960).size=[];


bio(961).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Data Type Conversion';
bio(961).sigName='';
bio(961).portIdx=0;
bio(961).dim=[1,1];
bio(961).sigWidth=1;
bio(961).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_l';
bio(961).ndims=2;
bio(961).size=[];


bio(962).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/DPRAM Read Value';
bio(962).sigName='';
bio(962).portIdx=0;
bio(962).dim=[1,1];
bio(962).sigWidth=1;
bio(962).sigAddress='&vmr_rwd_fix_leftarm_B.DPRAMReadValue';
bio(962).ndims=2;
bio(962).size=[];


bio(963).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Unit Delay';
bio(963).sigName='';
bio(963).portIdx=0;
bio(963).dim=[1,1];
bio(963).sigWidth=1;
bio(963).sigAddress='&vmr_rwd_fix_leftarm_B.UnitDelay';
bio(963).ndims=2;
bio(963).size=[];


bio(964).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Unit Delay1';
bio(964).sigName='';
bio(964).portIdx=0;
bio(964).dim=[1,1];
bio(964).sigWidth=1;
bio(964).sigAddress='&vmr_rwd_fix_leftarm_B.UnitDelay1';
bio(964).ndims=2;
bio(964).size=[];


bio(965).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Output';
bio(965).sigName='';
bio(965).portIdx=0;
bio(965).dim=[1,1];
bio(965).sigWidth=1;
bio(965).sigAddress='&vmr_rwd_fix_leftarm_B.Output_e';
bio(965).ndims=2;
bio(965).size=[];


bio(966).blkName='DataLogging/Poll KINARM/createKINData/Counter Free-Running/Increment Real World/FixPt Sum1';
bio(966).sigName='';
bio(966).portIdx=0;
bio(966).dim=[1,1];
bio(966).sigWidth=1;
bio(966).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSum1_o';
bio(966).ndims=2;
bio(966).size=[];


bio(967).blkName='DataLogging/Poll KINARM/createKINData/Counter Free-Running/Wrap To Zero/FixPt Switch';
bio(967).sigName='';
bio(967).portIdx=0;
bio(967).dim=[1,1];
bio(967).sigWidth=1;
bio(967).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSwitch_h';
bio(967).ndims=2;
bio(967).size=[];


bio(968).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p1';
bio(968).sigName='allOK';
bio(968).portIdx=0;
bio(968).dim=[1,1];
bio(968).sigWidth=1;
bio(968).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister.allOK';
bio(968).ndims=2;
bio(968).size=[];


bio(969).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p2';
bio(969).sigName='ampStatus';
bio(969).portIdx=1;
bio(969).dim=[1,1];
bio(969).sigWidth=1;
bio(969).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister.ampStatus';
bio(969).ndims=2;
bio(969).size=[];


bio(970).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p3';
bio(970).sigName='servoEnabled';
bio(970).portIdx=2;
bio(970).dim=[1,1];
bio(970).sigWidth=1;
bio(970).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister.servoEnabled';
bio(970).ndims=2;
bio(970).size=[];


bio(971).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p4';
bio(971).sigName='faultFound';
bio(971).portIdx=3;
bio(971).dim=[1,1];
bio(971).sigWidth=1;
bio(971).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister.faultFound';
bio(971).ndims=2;
bio(971).size=[];


bio(972).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p5';
bio(972).sigName='currentLimitEnabled';
bio(972).portIdx=4;
bio(972).dim=[1,1];
bio(972).sigWidth=1;
bio(972).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister.currentLimitEnabled';
bio(972).ndims=2;
bio(972).size=[];


bio(973).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p6';
bio(973).sigName='eStopOut';
bio(973).portIdx=5;
bio(973).dim=[1,1];
bio(973).sigWidth=1;
bio(973).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister.eStopOut';
bio(973).ndims=2;
bio(973).size=[];


bio(974).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register/p7';
bio(974).sigName='motorOn';
bio(974).portIdx=6;
bio(974).dim=[1,1];
bio(974).sigWidth=1;
bio(974).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister.motorOn';
bio(974).ndims=2;
bio(974).size=[];


bio(975).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/A1M1Convert';
bio(975).sigName='';
bio(975).portIdx=0;
bio(975).dim=[5,1];
bio(975).sigWidth=5;
bio(975).sigAddress='&vmr_rwd_fix_leftarm_B.A1M1Convert[0]';
bio(975).ndims=2;
bio(975).size=[];


bio(976).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/Data Type Conversion1';
bio(976).sigName='';
bio(976).portIdx=0;
bio(976).dim=[1,1];
bio(976).sigWidth=1;
bio(976).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_j1';
bio(976).ndims=2;
bio(976).size=[];


bio(977).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p1';
bio(977).sigName='Status word';
bio(977).portIdx=0;
bio(977).dim=[1,1];
bio(977).sigWidth=1;
bio(977).sigAddress='&vmr_rwd_fix_leftarm_B.Statusword_k';
bio(977).ndims=2;
bio(977).size=[];


bio(978).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p2';
bio(978).sigName='status register';
bio(978).portIdx=1;
bio(978).dim=[1,1];
bio(978).sigWidth=1;
bio(978).sigAddress='&vmr_rwd_fix_leftarm_B.statusregister_c4';
bio(978).ndims=2;
bio(978).size=[];


bio(979).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p3';
bio(979).sigName='primary position';
bio(979).portIdx=2;
bio(979).dim=[1,1];
bio(979).sigWidth=1;
bio(979).sigAddress='&vmr_rwd_fix_leftarm_B.primaryposition_l';
bio(979).ndims=2;
bio(979).size=[];


bio(980).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p4';
bio(980).sigName='secondary position';
bio(980).portIdx=3;
bio(980).dim=[1,1];
bio(980).sigWidth=1;
bio(980).sigAddress='&vmr_rwd_fix_leftarm_B.secondaryposition_n';
bio(980).ndims=2;
bio(980).size=[];


bio(981).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p5';
bio(981).sigName='primary velocity';
bio(981).portIdx=4;
bio(981).dim=[1,1];
bio(981).sigWidth=1;
bio(981).sigAddress='&vmr_rwd_fix_leftarm_B.primaryvelocity_d';
bio(981).ndims=2;
bio(981).size=[];


bio(982).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p6';
bio(982).sigName='torque';
bio(982).portIdx=5;
bio(982).dim=[1,1];
bio(982).sigWidth=1;
bio(982).sigAddress='&vmr_rwd_fix_leftarm_B.torque_ky';
bio(982).ndims=2;
bio(982).size=[];


bio(983).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p7';
bio(983).sigName='digital inputs';
bio(983).portIdx=6;
bio(983).dim=[1,1];
bio(983).sigWidth=1;
bio(983).sigAddress='&vmr_rwd_fix_leftarm_B.digitalinputs_j';
bio(983).ndims=2;
bio(983).size=[];


bio(984).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive/p8';
bio(984).sigName='actual mode of operation';
bio(984).portIdx=7;
bio(984).dim=[1,1];
bio(984).sigWidth=1;
bio(984).sigAddress='&vmr_rwd_fix_leftarm_B.actualmodeofoperation_g';
bio(984).ndims=2;
bio(984).size=[];


bio(985).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Compare To Constant/Compare';
bio(985).sigName='';
bio(985).portIdx=0;
bio(985).dim=[1,1];
bio(985).sigWidth=1;
bio(985).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_g';
bio(985).ndims=2;
bio(985).size=[];


bio(986).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY/p1';
bio(986).sigName='triggerCountRead';
bio(986).portIdx=0;
bio(986).dim=[1,1];
bio(986).sigWidth=1;
bio(986).sigAddress='&vmr_rwd_fix_leftarm_B.triggerCountRead_n';
bio(986).ndims=2;
bio(986).size=[];


bio(987).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY/p2';
bio(987).sigName='emcyReadTrigger';
bio(987).portIdx=1;
bio(987).dim=[2,1];
bio(987).sigWidth=2;
bio(987).sigAddress='&vmr_rwd_fix_leftarm_B.emcyReadTrigger_e[0]';
bio(987).ndims=2;
bio(987).size=[];


bio(988).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY/p3';
bio(988).sigName='countOverwriteTrigger';
bio(988).portIdx=2;
bio(988).dim=[1,1];
bio(988).sigWidth=1;
bio(988).sigAddress='&vmr_rwd_fix_leftarm_B.countOverwriteTrigger_n';
bio(988).ndims=2;
bio(988).size=[];


bio(989).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY/p4';
bio(989).sigName='emcyValPump';
bio(989).portIdx=3;
bio(989).dim=[3,1];
bio(989).sigWidth=3;
bio(989).sigAddress='&vmr_rwd_fix_leftarm_B.emcyValPump_g[0]';
bio(989).ndims=2;
bio(989).size=[];


bio(990).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/fault monitor';
bio(990).sigName='triggerFaultRead';
bio(990).portIdx=0;
bio(990).dim=[1,1];
bio(990).sigWidth=1;
bio(990).sigAddress='&vmr_rwd_fix_leftarm_B.sf_faultmonitor.triggerFaultRead';
bio(990).ndims=2;
bio(990).size=[];


bio(991).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/fault monitor1';
bio(991).sigName='EMCYMsg';
bio(991).portIdx=0;
bio(991).dim=[5,1];
bio(991).sigWidth=5;
bio(991).sigAddress='&vmr_rwd_fix_leftarm_B.sf_faultmonitor1.EMCYMsg[0]';
bio(991).ndims=2;
bio(991).size=[];


bio(992).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/driveID';
bio(992).sigName='';
bio(992).portIdx=0;
bio(992).dim=[1,1];
bio(992).sigWidth=1;
bio(992).sigAddress='&vmr_rwd_fix_leftarm_B.driveID_n2';
bio(992).ndims=2;
bio(992).size=[];


bio(993).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Data Type Conversion';
bio(993).sigName='';
bio(993).portIdx=0;
bio(993).dim=[1,1];
bio(993).sigWidth=1;
bio(993).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_c3';
bio(993).ndims=2;
bio(993).size=[];


bio(994).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p1';
bio(994).sigName='LinkAngle';
bio(994).portIdx=0;
bio(994).dim=[1,1];
bio(994).sigWidth=1;
bio(994).sigAddress='&vmr_rwd_fix_leftarm_B.LinkAngle_c';
bio(994).ndims=2;
bio(994).size=[];


bio(995).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p2';
bio(995).sigName='PrimaryLinkAngle';
bio(995).portIdx=1;
bio(995).dim=[1,1];
bio(995).sigWidth=1;
bio(995).sigAddress='&vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_m';
bio(995).ndims=2;
bio(995).size=[];


bio(996).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p3';
bio(996).sigName='PrimaryLinkVel';
bio(996).portIdx=2;
bio(996).dim=[1,1];
bio(996).sigWidth=1;
bio(996).sigAddress='&vmr_rwd_fix_leftarm_B.PrimaryLinkVel_m';
bio(996).ndims=2;
bio(996).size=[];


bio(997).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p4';
bio(997).sigName='torque';
bio(997).portIdx=3;
bio(997).dim=[1,1];
bio(997).sigWidth=1;
bio(997).sigAddress='&vmr_rwd_fix_leftarm_B.torque_d';
bio(997).ndims=2;
bio(997).size=[];


bio(998).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p5';
bio(998).sigName='digitalInputs';
bio(998).portIdx=4;
bio(998).dim=[1,2];
bio(998).sigWidth=2;
bio(998).sigAddress='&vmr_rwd_fix_leftarm_B.digitalInputs_e[0]';
bio(998).ndims=2;
bio(998).size=[];


bio(999).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p6';
bio(999).sigName='digitalDiagnostics';
bio(999).portIdx=5;
bio(999).dim=[1,1];
bio(999).sigWidth=1;
bio(999).sigAddress='&vmr_rwd_fix_leftarm_B.digitalDiagnostics_e';
bio(999).ndims=2;
bio(999).size=[];


bio(1000).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads/p7';
bio(1000).sigName='calibrationButton';
bio(1000).portIdx=6;
bio(1000).dim=[1,1];
bio(1000).sigWidth=1;
bio(1000).sigAddress='&vmr_rwd_fix_leftarm_B.calibrationButton_e';
bio(1000).ndims=2;
bio(1000).size=[];


bio(1001).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select';
bio(1001).sigName='';
bio(1001).portIdx=0;
bio(1001).dim=[1,1];
bio(1001).sigWidth=1;
bio(1001).sigAddress='&vmr_rwd_fix_leftarm_B.L2select_i';
bio(1001).ndims=2;
bio(1001).size=[];


bio(1002).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select1';
bio(1002).sigName='';
bio(1002).portIdx=0;
bio(1002).dim=[1,1];
bio(1002).sigWidth=1;
bio(1002).sigAddress='&vmr_rwd_fix_leftarm_B.L2select1_h';
bio(1002).ndims=2;
bio(1002).size=[];


bio(1003).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select2';
bio(1003).sigName='';
bio(1003).portIdx=0;
bio(1003).dim=[1,1];
bio(1003).sigWidth=1;
bio(1003).sigAddress='&vmr_rwd_fix_leftarm_B.L2select2_o';
bio(1003).ndims=2;
bio(1003).size=[];


bio(1004).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select3';
bio(1004).sigName='';
bio(1004).portIdx=0;
bio(1004).dim=[1,1];
bio(1004).sigWidth=1;
bio(1004).sigAddress='&vmr_rwd_fix_leftarm_B.L2select3_cn';
bio(1004).ndims=2;
bio(1004).size=[];


bio(1005).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select4';
bio(1005).sigName='';
bio(1005).portIdx=0;
bio(1005).dim=[1,1];
bio(1005).sigWidth=1;
bio(1005).sigAddress='&vmr_rwd_fix_leftarm_B.L2select4_o';
bio(1005).ndims=2;
bio(1005).size=[];


bio(1006).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/L2 select5';
bio(1006).sigName='';
bio(1006).portIdx=0;
bio(1006).dim=[1,1];
bio(1006).sigWidth=1;
bio(1006).sigAddress='&vmr_rwd_fix_leftarm_B.L2select5_c';
bio(1006).ndims=2;
bio(1006).size=[];


bio(1007).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p1';
bio(1007).sigName='allOK';
bio(1007).portIdx=0;
bio(1007).dim=[1,1];
bio(1007).sigWidth=1;
bio(1007).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.allOK';
bio(1007).ndims=2;
bio(1007).size=[];


bio(1008).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p2';
bio(1008).sigName='ampStatus';
bio(1008).portIdx=1;
bio(1008).dim=[1,1];
bio(1008).sigWidth=1;
bio(1008).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.ampStatus';
bio(1008).ndims=2;
bio(1008).size=[];


bio(1009).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p3';
bio(1009).sigName='servoEnabled';
bio(1009).portIdx=2;
bio(1009).dim=[1,1];
bio(1009).sigWidth=1;
bio(1009).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.servoEnabled';
bio(1009).ndims=2;
bio(1009).size=[];


bio(1010).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p4';
bio(1010).sigName='faultFound';
bio(1010).portIdx=3;
bio(1010).dim=[1,1];
bio(1010).sigWidth=1;
bio(1010).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.faultFound';
bio(1010).ndims=2;
bio(1010).size=[];


bio(1011).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p5';
bio(1011).sigName='currentLimitEnabled';
bio(1011).portIdx=4;
bio(1011).dim=[1,1];
bio(1011).sigWidth=1;
bio(1011).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.currentLimitEnabled';
bio(1011).ndims=2;
bio(1011).size=[];


bio(1012).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p6';
bio(1012).sigName='eStopOut';
bio(1012).portIdx=5;
bio(1012).dim=[1,1];
bio(1012).sigWidth=1;
bio(1012).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.eStopOut';
bio(1012).ndims=2;
bio(1012).size=[];


bio(1013).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1/p7';
bio(1013).sigName='motorOn';
bio(1013).portIdx=6;
bio(1013).dim=[1,1];
bio(1013).sigWidth=1;
bio(1013).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.motorOn';
bio(1013).ndims=2;
bio(1013).size=[];


bio(1014).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/A1M2Convert';
bio(1014).sigName='';
bio(1014).portIdx=0;
bio(1014).dim=[5,1];
bio(1014).sigWidth=5;
bio(1014).sigAddress='&vmr_rwd_fix_leftarm_B.A1M2Convert[0]';
bio(1014).ndims=2;
bio(1014).size=[];


bio(1015).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/Data Type Conversion';
bio(1015).sigName='';
bio(1015).portIdx=0;
bio(1015).dim=[1,1];
bio(1015).sigWidth=1;
bio(1015).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_em';
bio(1015).ndims=2;
bio(1015).size=[];


bio(1016).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p1';
bio(1016).sigName='Status word';
bio(1016).portIdx=0;
bio(1016).dim=[1,1];
bio(1016).sigWidth=1;
bio(1016).sigAddress='&vmr_rwd_fix_leftarm_B.Statusword_b';
bio(1016).ndims=2;
bio(1016).size=[];


bio(1017).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p2';
bio(1017).sigName='status register';
bio(1017).portIdx=1;
bio(1017).dim=[1,1];
bio(1017).sigWidth=1;
bio(1017).sigAddress='&vmr_rwd_fix_leftarm_B.statusregister_c';
bio(1017).ndims=2;
bio(1017).size=[];


bio(1018).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p3';
bio(1018).sigName='primary position';
bio(1018).portIdx=2;
bio(1018).dim=[1,1];
bio(1018).sigWidth=1;
bio(1018).sigAddress='&vmr_rwd_fix_leftarm_B.primaryposition_e';
bio(1018).ndims=2;
bio(1018).size=[];


bio(1019).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p4';
bio(1019).sigName='secondary position';
bio(1019).portIdx=3;
bio(1019).dim=[1,1];
bio(1019).sigWidth=1;
bio(1019).sigAddress='&vmr_rwd_fix_leftarm_B.secondaryposition_d';
bio(1019).ndims=2;
bio(1019).size=[];


bio(1020).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p5';
bio(1020).sigName='primary velocity';
bio(1020).portIdx=4;
bio(1020).dim=[1,1];
bio(1020).sigWidth=1;
bio(1020).sigAddress='&vmr_rwd_fix_leftarm_B.primaryvelocity_p';
bio(1020).ndims=2;
bio(1020).size=[];


bio(1021).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p6';
bio(1021).sigName='torque';
bio(1021).portIdx=5;
bio(1021).dim=[1,1];
bio(1021).sigWidth=1;
bio(1021).sigAddress='&vmr_rwd_fix_leftarm_B.torque_h';
bio(1021).ndims=2;
bio(1021).size=[];


bio(1022).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p7';
bio(1022).sigName='digital inputs';
bio(1022).portIdx=6;
bio(1022).dim=[1,1];
bio(1022).sigWidth=1;
bio(1022).sigAddress='&vmr_rwd_fix_leftarm_B.digitalinputs';
bio(1022).ndims=2;
bio(1022).size=[];


bio(1023).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive/p8';
bio(1023).sigName='actual mode of operation';
bio(1023).portIdx=7;
bio(1023).dim=[1,1];
bio(1023).sigWidth=1;
bio(1023).sigAddress='&vmr_rwd_fix_leftarm_B.actualmodeofoperation_a';
bio(1023).ndims=2;
bio(1023).size=[];


bio(1024).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Compare/Compare';
bio(1024).sigName='';
bio(1024).portIdx=0;
bio(1024).dim=[1,1];
bio(1024).sigWidth=1;
bio(1024).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_h';
bio(1024).ndims=2;
bio(1024).size=[];


bio(1025).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY/p1';
bio(1025).sigName='triggerCountRead';
bio(1025).portIdx=0;
bio(1025).dim=[1,1];
bio(1025).sigWidth=1;
bio(1025).sigAddress='&vmr_rwd_fix_leftarm_B.triggerCountRead';
bio(1025).ndims=2;
bio(1025).size=[];


bio(1026).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY/p2';
bio(1026).sigName='emcyReadTrigger';
bio(1026).portIdx=1;
bio(1026).dim=[2,1];
bio(1026).sigWidth=2;
bio(1026).sigAddress='&vmr_rwd_fix_leftarm_B.emcyReadTrigger[0]';
bio(1026).ndims=2;
bio(1026).size=[];


bio(1027).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY/p3';
bio(1027).sigName='countOverwriteTrigger';
bio(1027).portIdx=2;
bio(1027).dim=[1,1];
bio(1027).sigWidth=1;
bio(1027).sigAddress='&vmr_rwd_fix_leftarm_B.countOverwriteTrigger';
bio(1027).ndims=2;
bio(1027).size=[];


bio(1028).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY/p4';
bio(1028).sigName='emcyValPump';
bio(1028).portIdx=3;
bio(1028).dim=[3,1];
bio(1028).sigWidth=3;
bio(1028).sigAddress='&vmr_rwd_fix_leftarm_B.emcyValPump[0]';
bio(1028).ndims=2;
bio(1028).size=[];


bio(1029).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/fault monitor';
bio(1029).sigName='triggerFaultRead';
bio(1029).portIdx=0;
bio(1029).dim=[1,1];
bio(1029).sigWidth=1;
bio(1029).sigAddress='&vmr_rwd_fix_leftarm_B.sf_faultmonitor_k.triggerFaultRead';
bio(1029).ndims=2;
bio(1029).size=[];


bio(1030).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/fault monitor1';
bio(1030).sigName='EMCYMsg';
bio(1030).portIdx=0;
bio(1030).dim=[5,1];
bio(1030).sigWidth=5;
bio(1030).sigAddress='&vmr_rwd_fix_leftarm_B.sf_faultmonitor1_l.EMCYMsg[0]';
bio(1030).ndims=2;
bio(1030).size=[];


bio(1031).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/driveID';
bio(1031).sigName='';
bio(1031).portIdx=0;
bio(1031).dim=[1,1];
bio(1031).sigWidth=1;
bio(1031).sigAddress='&vmr_rwd_fix_leftarm_B.driveID_a';
bio(1031).ndims=2;
bio(1031).size=[];


bio(1032).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Data Type Conversion';
bio(1032).sigName='';
bio(1032).portIdx=0;
bio(1032).dim=[1,1];
bio(1032).sigWidth=1;
bio(1032).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_kb';
bio(1032).ndims=2;
bio(1032).size=[];


bio(1033).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p1';
bio(1033).sigName='LinkAngle';
bio(1033).portIdx=0;
bio(1033).dim=[1,1];
bio(1033).sigWidth=1;
bio(1033).sigAddress='&vmr_rwd_fix_leftarm_B.LinkAngle_g';
bio(1033).ndims=2;
bio(1033).size=[];


bio(1034).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p2';
bio(1034).sigName='PrimaryLinkAngle';
bio(1034).portIdx=1;
bio(1034).dim=[1,1];
bio(1034).sigWidth=1;
bio(1034).sigAddress='&vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_b';
bio(1034).ndims=2;
bio(1034).size=[];


bio(1035).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p3';
bio(1035).sigName='PrimaryLinkVel';
bio(1035).portIdx=2;
bio(1035).dim=[1,1];
bio(1035).sigWidth=1;
bio(1035).sigAddress='&vmr_rwd_fix_leftarm_B.PrimaryLinkVel_d';
bio(1035).ndims=2;
bio(1035).size=[];


bio(1036).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p4';
bio(1036).sigName='torque';
bio(1036).portIdx=3;
bio(1036).dim=[1,1];
bio(1036).sigWidth=1;
bio(1036).sigAddress='&vmr_rwd_fix_leftarm_B.torque_g';
bio(1036).ndims=2;
bio(1036).size=[];


bio(1037).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p5';
bio(1037).sigName='digitalInputs';
bio(1037).portIdx=4;
bio(1037).dim=[1,2];
bio(1037).sigWidth=2;
bio(1037).sigAddress='&vmr_rwd_fix_leftarm_B.digitalInputs_h[0]';
bio(1037).ndims=2;
bio(1037).size=[];


bio(1038).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads/p6';
bio(1038).sigName='digitalDiagnostics';
bio(1038).portIdx=5;
bio(1038).dim=[1,1];
bio(1038).sigWidth=1;
bio(1038).sigAddress='&vmr_rwd_fix_leftarm_B.digitalDiagnostics_a';
bio(1038).ndims=2;
bio(1038).size=[];


bio(1039).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select';
bio(1039).sigName='';
bio(1039).portIdx=0;
bio(1039).dim=[1,1];
bio(1039).sigWidth=1;
bio(1039).sigAddress='&vmr_rwd_fix_leftarm_B.L2select_e';
bio(1039).ndims=2;
bio(1039).size=[];


bio(1040).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select1';
bio(1040).sigName='';
bio(1040).portIdx=0;
bio(1040).dim=[1,1];
bio(1040).sigWidth=1;
bio(1040).sigAddress='&vmr_rwd_fix_leftarm_B.L2select1_hf';
bio(1040).ndims=2;
bio(1040).size=[];


bio(1041).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select2';
bio(1041).sigName='';
bio(1041).portIdx=0;
bio(1041).dim=[1,1];
bio(1041).sigWidth=1;
bio(1041).sigAddress='&vmr_rwd_fix_leftarm_B.L2select2_d';
bio(1041).ndims=2;
bio(1041).size=[];


bio(1042).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select3';
bio(1042).sigName='';
bio(1042).portIdx=0;
bio(1042).dim=[1,1];
bio(1042).sigWidth=1;
bio(1042).sigAddress='&vmr_rwd_fix_leftarm_B.L2select3_p';
bio(1042).ndims=2;
bio(1042).size=[];


bio(1043).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select4';
bio(1043).sigName='';
bio(1043).portIdx=0;
bio(1043).dim=[1,1];
bio(1043).sigWidth=1;
bio(1043).sigAddress='&vmr_rwd_fix_leftarm_B.L2select4_g';
bio(1043).ndims=2;
bio(1043).size=[];


bio(1044).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/L2 select5';
bio(1044).sigName='';
bio(1044).portIdx=0;
bio(1044).dim=[1,1];
bio(1044).sigWidth=1;
bio(1044).sigAddress='&vmr_rwd_fix_leftarm_B.L2select5_f';
bio(1044).ndims=2;
bio(1044).size=[];


bio(1045).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/converter/p1';
bio(1045).sigName='uint32Out';
bio(1045).portIdx=0;
bio(1045).dim=[1,1];
bio(1045).sigWidth=1;
bio(1045).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter.uint32Out';
bio(1045).ndims=2;
bio(1045).size=[];


bio(1046).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/converter/p2';
bio(1046).sigName='int32Out';
bio(1046).portIdx=1;
bio(1046).dim=[1,1];
bio(1046).sigWidth=1;
bio(1046).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter.int32Out';
bio(1046).ndims=2;
bio(1046).size=[];


bio(1047).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/converter/p3';
bio(1047).sigName='doubleOut';
bio(1047).portIdx=2;
bio(1047).dim=[1,1];
bio(1047).sigWidth=1;
bio(1047).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter.doubleOut';
bio(1047).ndims=2;
bio(1047).size=[];


bio(1048).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/Data Type Conversion';
bio(1048).sigName='';
bio(1048).portIdx=0;
bio(1048).dim=[1,1];
bio(1048).sigWidth=1;
bio(1048).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_ba';
bio(1048).ndims=2;
bio(1048).size=[];


bio(1049).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/BKIN EtherCAT Async SDO Upload1/p1';
bio(1049).sigName='';
bio(1049).portIdx=0;
bio(1049).dim=[1,1];
bio(1049).sigWidth=1;
bio(1049).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_p';
bio(1049).ndims=2;
bio(1049).size=[];


bio(1050).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/BKIN EtherCAT Async SDO Upload1/p2';
bio(1050).sigName='';
bio(1050).portIdx=1;
bio(1050).dim=[1,1];
bio(1050).sigWidth=1;
bio(1050).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_i';
bio(1050).ndims=2;
bio(1050).size=[];


bio(1051).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/converter/p1';
bio(1051).sigName='uint32Out';
bio(1051).portIdx=0;
bio(1051).dim=[1,1];
bio(1051).sigWidth=1;
bio(1051).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter_p.uint32Out';
bio(1051).ndims=2;
bio(1051).size=[];


bio(1052).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/converter/p2';
bio(1052).sigName='int32Out';
bio(1052).portIdx=1;
bio(1052).dim=[1,1];
bio(1052).sigWidth=1;
bio(1052).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter_p.int32Out';
bio(1052).ndims=2;
bio(1052).size=[];


bio(1053).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/converter/p3';
bio(1053).sigName='doubleOut';
bio(1053).portIdx=2;
bio(1053).dim=[1,1];
bio(1053).sigWidth=1;
bio(1053).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter_p.doubleOut';
bio(1053).ndims=2;
bio(1053).size=[];


bio(1054).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/Data Type Conversion';
bio(1054).sigName='';
bio(1054).portIdx=0;
bio(1054).dim=[1,1];
bio(1054).sigWidth=1;
bio(1054).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_f';
bio(1054).ndims=2;
bio(1054).size=[];


bio(1055).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/BKIN EtherCAT Async SDO Upload1/p1';
bio(1055).sigName='';
bio(1055).portIdx=0;
bio(1055).dim=[1,1];
bio(1055).sigWidth=1;
bio(1055).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_l';
bio(1055).ndims=2;
bio(1055).size=[];


bio(1056).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/BKIN EtherCAT Async SDO Upload1/p2';
bio(1056).sigName='';
bio(1056).portIdx=1;
bio(1056).dim=[1,1];
bio(1056).sigWidth=1;
bio(1056).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_g';
bio(1056).ndims=2;
bio(1056).size=[];


bio(1057).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p1';
bio(1057).sigName='allOK';
bio(1057).portIdx=0;
bio(1057).dim=[1,1];
bio(1057).sigWidth=1;
bio(1057).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.allOK';
bio(1057).ndims=2;
bio(1057).size=[];


bio(1058).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p2';
bio(1058).sigName='ampStatus';
bio(1058).portIdx=1;
bio(1058).dim=[1,1];
bio(1058).sigWidth=1;
bio(1058).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.ampStatus';
bio(1058).ndims=2;
bio(1058).size=[];


bio(1059).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p3';
bio(1059).sigName='servoEnabled';
bio(1059).portIdx=2;
bio(1059).dim=[1,1];
bio(1059).sigWidth=1;
bio(1059).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.servoEnabled';
bio(1059).ndims=2;
bio(1059).size=[];


bio(1060).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p4';
bio(1060).sigName='faultFound';
bio(1060).portIdx=3;
bio(1060).dim=[1,1];
bio(1060).sigWidth=1;
bio(1060).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.faultFound';
bio(1060).ndims=2;
bio(1060).size=[];


bio(1061).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p5';
bio(1061).sigName='currentLimitEnabled';
bio(1061).portIdx=4;
bio(1061).dim=[1,1];
bio(1061).sigWidth=1;
bio(1061).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.currentLimitEnabled';
bio(1061).ndims=2;
bio(1061).size=[];


bio(1062).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p6';
bio(1062).sigName='eStopOut';
bio(1062).portIdx=5;
bio(1062).dim=[1,1];
bio(1062).sigWidth=1;
bio(1062).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.eStopOut';
bio(1062).ndims=2;
bio(1062).size=[];


bio(1063).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1/p7';
bio(1063).sigName='motorOn';
bio(1063).portIdx=6;
bio(1063).dim=[1,1];
bio(1063).sigWidth=1;
bio(1063).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.motorOn';
bio(1063).ndims=2;
bio(1063).size=[];


bio(1064).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/A2M1Convert';
bio(1064).sigName='';
bio(1064).portIdx=0;
bio(1064).dim=[5,1];
bio(1064).sigWidth=5;
bio(1064).sigAddress='&vmr_rwd_fix_leftarm_B.A2M1Convert[0]';
bio(1064).ndims=2;
bio(1064).size=[];


bio(1065).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/Data Type Conversion';
bio(1065).sigName='';
bio(1065).portIdx=0;
bio(1065).dim=[1,1];
bio(1065).sigWidth=1;
bio(1065).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_et';
bio(1065).ndims=2;
bio(1065).size=[];


bio(1066).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p1';
bio(1066).sigName='Status word';
bio(1066).portIdx=0;
bio(1066).dim=[1,1];
bio(1066).sigWidth=1;
bio(1066).sigAddress='&vmr_rwd_fix_leftarm_B.Statusword';
bio(1066).ndims=2;
bio(1066).size=[];


bio(1067).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p2';
bio(1067).sigName='status register';
bio(1067).portIdx=1;
bio(1067).dim=[1,1];
bio(1067).sigWidth=1;
bio(1067).sigAddress='&vmr_rwd_fix_leftarm_B.statusregister_i';
bio(1067).ndims=2;
bio(1067).size=[];


bio(1068).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p3';
bio(1068).sigName='primary position';
bio(1068).portIdx=2;
bio(1068).dim=[1,1];
bio(1068).sigWidth=1;
bio(1068).sigAddress='&vmr_rwd_fix_leftarm_B.primaryposition';
bio(1068).ndims=2;
bio(1068).size=[];


bio(1069).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p4';
bio(1069).sigName='secondary position';
bio(1069).portIdx=3;
bio(1069).dim=[1,1];
bio(1069).sigWidth=1;
bio(1069).sigAddress='&vmr_rwd_fix_leftarm_B.secondaryposition';
bio(1069).ndims=2;
bio(1069).size=[];


bio(1070).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p5';
bio(1070).sigName='primary velocity';
bio(1070).portIdx=4;
bio(1070).dim=[1,1];
bio(1070).sigWidth=1;
bio(1070).sigAddress='&vmr_rwd_fix_leftarm_B.primaryvelocity';
bio(1070).ndims=2;
bio(1070).size=[];


bio(1071).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p6';
bio(1071).sigName='torque';
bio(1071).portIdx=5;
bio(1071).dim=[1,1];
bio(1071).sigWidth=1;
bio(1071).sigAddress='&vmr_rwd_fix_leftarm_B.torque_g5';
bio(1071).ndims=2;
bio(1071).size=[];


bio(1072).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p7';
bio(1072).sigName='digital input';
bio(1072).portIdx=6;
bio(1072).dim=[1,1];
bio(1072).sigWidth=1;
bio(1072).sigAddress='&vmr_rwd_fix_leftarm_B.digitalinput_d';
bio(1072).ndims=2;
bio(1072).size=[];


bio(1073).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive/p8';
bio(1073).sigName='actual mode of operation';
bio(1073).portIdx=7;
bio(1073).dim=[1,1];
bio(1073).sigWidth=1;
bio(1073).sigAddress='&vmr_rwd_fix_leftarm_B.actualmodeofoperation_j';
bio(1073).ndims=2;
bio(1073).size=[];


bio(1074).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Compare/Compare';
bio(1074).sigName='';
bio(1074).portIdx=0;
bio(1074).dim=[1,1];
bio(1074).sigWidth=1;
bio(1074).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_oe';
bio(1074).ndims=2;
bio(1074).size=[];


bio(1075).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY/p1';
bio(1075).sigName='triggerCountRead';
bio(1075).portIdx=0;
bio(1075).dim=[1,1];
bio(1075).sigWidth=1;
bio(1075).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.triggerCountRead';
bio(1075).ndims=2;
bio(1075).size=[];


bio(1076).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY/p2';
bio(1076).sigName='emcyReadTrigger';
bio(1076).portIdx=1;
bio(1076).dim=[2,1];
bio(1076).sigWidth=2;
bio(1076).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.emcyReadTrigger[0]';
bio(1076).ndims=2;
bio(1076).size=[];


bio(1077).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY/p3';
bio(1077).sigName='countOverwriteTrigger';
bio(1077).portIdx=2;
bio(1077).dim=[1,1];
bio(1077).sigWidth=1;
bio(1077).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.countOverwriteTrigger';
bio(1077).ndims=2;
bio(1077).size=[];


bio(1078).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY/p4';
bio(1078).sigName='emcyValPump';
bio(1078).portIdx=3;
bio(1078).dim=[3,1];
bio(1078).sigWidth=3;
bio(1078).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.emcyValPump[0]';
bio(1078).ndims=2;
bio(1078).size=[];


bio(1079).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/fault monitor';
bio(1079).sigName='triggerFaultRead';
bio(1079).portIdx=0;
bio(1079).dim=[1,1];
bio(1079).sigWidth=1;
bio(1079).sigAddress='&vmr_rwd_fix_leftarm_B.sf_faultmonitor_f.triggerFaultRead';
bio(1079).ndims=2;
bio(1079).size=[];


bio(1080).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/fault monitor1';
bio(1080).sigName='EMCYMsg';
bio(1080).portIdx=0;
bio(1080).dim=[5,1];
bio(1080).sigWidth=5;
bio(1080).sigAddress='&vmr_rwd_fix_leftarm_B.sf_faultmonitor1_c.EMCYMsg[0]';
bio(1080).ndims=2;
bio(1080).size=[];


bio(1081).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/driveID';
bio(1081).sigName='';
bio(1081).portIdx=0;
bio(1081).dim=[1,1];
bio(1081).sigWidth=1;
bio(1081).sigAddress='&vmr_rwd_fix_leftarm_B.driveID_n';
bio(1081).ndims=2;
bio(1081).size=[];


bio(1082).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Data Type Conversion';
bio(1082).sigName='';
bio(1082).portIdx=0;
bio(1082).dim=[1,1];
bio(1082).sigWidth=1;
bio(1082).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_b';
bio(1082).ndims=2;
bio(1082).size=[];


bio(1083).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p1';
bio(1083).sigName='LinkAngle';
bio(1083).portIdx=0;
bio(1083).dim=[1,1];
bio(1083).sigWidth=1;
bio(1083).sigAddress='&vmr_rwd_fix_leftarm_B.LinkAngle_l';
bio(1083).ndims=2;
bio(1083).size=[];


bio(1084).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p2';
bio(1084).sigName='PrimaryLinkAngle';
bio(1084).portIdx=1;
bio(1084).dim=[1,1];
bio(1084).sigWidth=1;
bio(1084).sigAddress='&vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_f';
bio(1084).ndims=2;
bio(1084).size=[];


bio(1085).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p3';
bio(1085).sigName='PrimaryLinkVel';
bio(1085).portIdx=2;
bio(1085).dim=[1,1];
bio(1085).sigWidth=1;
bio(1085).sigAddress='&vmr_rwd_fix_leftarm_B.PrimaryLinkVel_i';
bio(1085).ndims=2;
bio(1085).size=[];


bio(1086).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p4';
bio(1086).sigName='torque';
bio(1086).portIdx=3;
bio(1086).dim=[1,1];
bio(1086).sigWidth=1;
bio(1086).sigAddress='&vmr_rwd_fix_leftarm_B.torque_f';
bio(1086).ndims=2;
bio(1086).size=[];


bio(1087).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p5';
bio(1087).sigName='digitalInputs';
bio(1087).portIdx=4;
bio(1087).dim=[1,2];
bio(1087).sigWidth=2;
bio(1087).sigAddress='&vmr_rwd_fix_leftarm_B.digitalInputs_m[0]';
bio(1087).ndims=2;
bio(1087).size=[];


bio(1088).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p6';
bio(1088).sigName='digitalDiagnostics';
bio(1088).portIdx=5;
bio(1088).dim=[1,1];
bio(1088).sigWidth=1;
bio(1088).sigAddress='&vmr_rwd_fix_leftarm_B.digitalDiagnostics_c';
bio(1088).ndims=2;
bio(1088).size=[];


bio(1089).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads/p7';
bio(1089).sigName='calibrationButton';
bio(1089).portIdx=6;
bio(1089).dim=[1,1];
bio(1089).sigWidth=1;
bio(1089).sigAddress='&vmr_rwd_fix_leftarm_B.calibrationButton';
bio(1089).ndims=2;
bio(1089).size=[];


bio(1090).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select';
bio(1090).sigName='offset rads';
bio(1090).portIdx=0;
bio(1090).dim=[1,1];
bio(1090).sigWidth=1;
bio(1090).sigAddress='&vmr_rwd_fix_leftarm_B.offsetrads';
bio(1090).ndims=2;
bio(1090).size=[];


bio(1091).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select1';
bio(1091).sigName='enc orient';
bio(1091).portIdx=0;
bio(1091).dim=[1,1];
bio(1091).sigWidth=1;
bio(1091).sigAddress='&vmr_rwd_fix_leftarm_B.encorient';
bio(1091).ndims=2;
bio(1091).size=[];


bio(1092).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select2';
bio(1092).sigName='';
bio(1092).portIdx=0;
bio(1092).dim=[1,1];
bio(1092).sigWidth=1;
bio(1092).sigAddress='&vmr_rwd_fix_leftarm_B.L2select2';
bio(1092).ndims=2;
bio(1092).size=[];


bio(1093).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select3';
bio(1093).sigName='';
bio(1093).portIdx=0;
bio(1093).dim=[1,1];
bio(1093).sigWidth=1;
bio(1093).sigAddress='&vmr_rwd_fix_leftarm_B.L2select3';
bio(1093).ndims=2;
bio(1093).size=[];


bio(1094).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select4';
bio(1094).sigName='';
bio(1094).portIdx=0;
bio(1094).dim=[1,1];
bio(1094).sigWidth=1;
bio(1094).sigAddress='&vmr_rwd_fix_leftarm_B.L2select4';
bio(1094).ndims=2;
bio(1094).size=[];


bio(1095).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/L2 select5';
bio(1095).sigName='';
bio(1095).portIdx=0;
bio(1095).dim=[1,1];
bio(1095).sigWidth=1;
bio(1095).sigAddress='&vmr_rwd_fix_leftarm_B.L2select5';
bio(1095).ndims=2;
bio(1095).size=[];


bio(1096).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p1';
bio(1096).sigName='allOK';
bio(1096).portIdx=0;
bio(1096).dim=[1,1];
bio(1096).sigWidth=1;
bio(1096).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.allOK';
bio(1096).ndims=2;
bio(1096).size=[];


bio(1097).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p2';
bio(1097).sigName='ampStatus';
bio(1097).portIdx=1;
bio(1097).dim=[1,1];
bio(1097).sigWidth=1;
bio(1097).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.ampStatus';
bio(1097).ndims=2;
bio(1097).size=[];


bio(1098).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p3';
bio(1098).sigName='servoEnabled';
bio(1098).portIdx=2;
bio(1098).dim=[1,1];
bio(1098).sigWidth=1;
bio(1098).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.servoEnabled';
bio(1098).ndims=2;
bio(1098).size=[];


bio(1099).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p4';
bio(1099).sigName='faultFound';
bio(1099).portIdx=3;
bio(1099).dim=[1,1];
bio(1099).sigWidth=1;
bio(1099).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.faultFound';
bio(1099).ndims=2;
bio(1099).size=[];


bio(1100).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p5';
bio(1100).sigName='currentLimitEnabled';
bio(1100).portIdx=4;
bio(1100).dim=[1,1];
bio(1100).sigWidth=1;
bio(1100).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.currentLimitEnabled';
bio(1100).ndims=2;
bio(1100).size=[];


bio(1101).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p6';
bio(1101).sigName='eStopOut';
bio(1101).portIdx=5;
bio(1101).dim=[1,1];
bio(1101).sigWidth=1;
bio(1101).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.eStopOut';
bio(1101).ndims=2;
bio(1101).size=[];


bio(1102).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1/p7';
bio(1102).sigName='motorOn';
bio(1102).portIdx=6;
bio(1102).dim=[1,1];
bio(1102).sigWidth=1;
bio(1102).sigAddress='&vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.motorOn';
bio(1102).ndims=2;
bio(1102).size=[];


bio(1103).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/A2M2Convert';
bio(1103).sigName='';
bio(1103).portIdx=0;
bio(1103).dim=[5,1];
bio(1103).sigWidth=5;
bio(1103).sigAddress='&vmr_rwd_fix_leftarm_B.A2M2Convert[0]';
bio(1103).ndims=2;
bio(1103).size=[];


bio(1104).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/Data Type Conversion';
bio(1104).sigName='';
bio(1104).portIdx=0;
bio(1104).dim=[1,1];
bio(1104).sigWidth=1;
bio(1104).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_bv';
bio(1104).ndims=2;
bio(1104).size=[];


bio(1105).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p1';
bio(1105).sigName='status word';
bio(1105).portIdx=0;
bio(1105).dim=[1,1];
bio(1105).sigWidth=1;
bio(1105).sigAddress='&vmr_rwd_fix_leftarm_B.statusword';
bio(1105).ndims=2;
bio(1105).size=[];


bio(1106).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p2';
bio(1106).sigName='status register';
bio(1106).portIdx=1;
bio(1106).dim=[1,1];
bio(1106).sigWidth=1;
bio(1106).sigAddress='&vmr_rwd_fix_leftarm_B.statusregister';
bio(1106).ndims=2;
bio(1106).size=[];


bio(1107).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p3';
bio(1107).sigName='position primary';
bio(1107).portIdx=2;
bio(1107).dim=[1,1];
bio(1107).sigWidth=1;
bio(1107).sigAddress='&vmr_rwd_fix_leftarm_B.positionprimary';
bio(1107).ndims=2;
bio(1107).size=[];


bio(1108).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p4';
bio(1108).sigName='position secondary';
bio(1108).portIdx=3;
bio(1108).dim=[1,1];
bio(1108).sigWidth=1;
bio(1108).sigAddress='&vmr_rwd_fix_leftarm_B.positionsecondary';
bio(1108).ndims=2;
bio(1108).size=[];


bio(1109).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p5';
bio(1109).sigName='velocity primary';
bio(1109).portIdx=4;
bio(1109).dim=[1,1];
bio(1109).sigWidth=1;
bio(1109).sigAddress='&vmr_rwd_fix_leftarm_B.velocityprimary';
bio(1109).ndims=2;
bio(1109).size=[];


bio(1110).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p6';
bio(1110).sigName='torque';
bio(1110).portIdx=5;
bio(1110).dim=[1,1];
bio(1110).sigWidth=1;
bio(1110).sigAddress='&vmr_rwd_fix_leftarm_B.torque_k';
bio(1110).ndims=2;
bio(1110).size=[];


bio(1111).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p7';
bio(1111).sigName='digital input';
bio(1111).portIdx=6;
bio(1111).dim=[1,1];
bio(1111).sigWidth=1;
bio(1111).sigAddress='&vmr_rwd_fix_leftarm_B.digitalinput';
bio(1111).ndims=2;
bio(1111).size=[];


bio(1112).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive/p8';
bio(1112).sigName='actual mode of operation';
bio(1112).portIdx=7;
bio(1112).dim=[1,1];
bio(1112).sigWidth=1;
bio(1112).sigAddress='&vmr_rwd_fix_leftarm_B.actualmodeofoperation';
bio(1112).ndims=2;
bio(1112).size=[];


bio(1113).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Compare/Compare';
bio(1113).sigName='';
bio(1113).portIdx=0;
bio(1113).dim=[1,1];
bio(1113).sigWidth=1;
bio(1113).sigAddress='&vmr_rwd_fix_leftarm_B.Compare_oo';
bio(1113).ndims=2;
bio(1113).size=[];


bio(1114).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY/p1';
bio(1114).sigName='triggerCountRead';
bio(1114).portIdx=0;
bio(1114).dim=[1,1];
bio(1114).sigWidth=1;
bio(1114).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.triggerCountRead';
bio(1114).ndims=2;
bio(1114).size=[];


bio(1115).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY/p2';
bio(1115).sigName='emcyReadTrigger';
bio(1115).portIdx=1;
bio(1115).dim=[2,1];
bio(1115).sigWidth=2;
bio(1115).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.emcyReadTrigger[0]';
bio(1115).ndims=2;
bio(1115).size=[];


bio(1116).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY/p3';
bio(1116).sigName='countOverwriteTrigger';
bio(1116).portIdx=2;
bio(1116).dim=[1,1];
bio(1116).sigWidth=1;
bio(1116).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.countOverwriteTrigger';
bio(1116).ndims=2;
bio(1116).size=[];


bio(1117).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY/p4';
bio(1117).sigName='emcyValPump';
bio(1117).portIdx=3;
bio(1117).dim=[3,1];
bio(1117).sigWidth=3;
bio(1117).sigAddress='&vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.emcyValPump[0]';
bio(1117).ndims=2;
bio(1117).size=[];


bio(1118).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/fault monitor';
bio(1118).sigName='triggerFaultRead';
bio(1118).portIdx=0;
bio(1118).dim=[1,1];
bio(1118).sigWidth=1;
bio(1118).sigAddress='&vmr_rwd_fix_leftarm_B.sf_faultmonitor_i.triggerFaultRead';
bio(1118).ndims=2;
bio(1118).size=[];


bio(1119).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/fault monitor1';
bio(1119).sigName='EMCYMsg';
bio(1119).portIdx=0;
bio(1119).dim=[5,1];
bio(1119).sigWidth=5;
bio(1119).sigAddress='&vmr_rwd_fix_leftarm_B.sf_faultmonitor1_h.EMCYMsg[0]';
bio(1119).ndims=2;
bio(1119).size=[];


bio(1120).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/driveID';
bio(1120).sigName='';
bio(1120).portIdx=0;
bio(1120).dim=[1,1];
bio(1120).sigWidth=1;
bio(1120).sigAddress='&vmr_rwd_fix_leftarm_B.driveID';
bio(1120).ndims=2;
bio(1120).size=[];


bio(1121).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Data Type Conversion';
bio(1121).sigName='';
bio(1121).portIdx=0;
bio(1121).dim=[1,1];
bio(1121).sigWidth=1;
bio(1121).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_ju';
bio(1121).ndims=2;
bio(1121).size=[];


bio(1122).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p1';
bio(1122).sigName='LinkAngle';
bio(1122).portIdx=0;
bio(1122).dim=[1,1];
bio(1122).sigWidth=1;
bio(1122).sigAddress='&vmr_rwd_fix_leftarm_B.LinkAngle';
bio(1122).ndims=2;
bio(1122).size=[];


bio(1123).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p2';
bio(1123).sigName='PrimaryLinkAngle';
bio(1123).portIdx=1;
bio(1123).dim=[1,1];
bio(1123).sigWidth=1;
bio(1123).sigAddress='&vmr_rwd_fix_leftarm_B.PrimaryLinkAngle';
bio(1123).ndims=2;
bio(1123).size=[];


bio(1124).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p3';
bio(1124).sigName='PrimaryLinkVel';
bio(1124).portIdx=2;
bio(1124).dim=[1,1];
bio(1124).sigWidth=1;
bio(1124).sigAddress='&vmr_rwd_fix_leftarm_B.PrimaryLinkVel';
bio(1124).ndims=2;
bio(1124).size=[];


bio(1125).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p4';
bio(1125).sigName='torque';
bio(1125).portIdx=3;
bio(1125).dim=[1,1];
bio(1125).sigWidth=1;
bio(1125).sigAddress='&vmr_rwd_fix_leftarm_B.torque';
bio(1125).ndims=2;
bio(1125).size=[];


bio(1126).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p5';
bio(1126).sigName='digitalInputs';
bio(1126).portIdx=4;
bio(1126).dim=[1,2];
bio(1126).sigWidth=2;
bio(1126).sigAddress='&vmr_rwd_fix_leftarm_B.digitalInputs[0]';
bio(1126).ndims=2;
bio(1126).size=[];


bio(1127).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads/p6';
bio(1127).sigName='digitalDiagnostics';
bio(1127).portIdx=5;
bio(1127).dim=[1,1];
bio(1127).sigWidth=1;
bio(1127).sigAddress='&vmr_rwd_fix_leftarm_B.digitalDiagnostics';
bio(1127).ndims=2;
bio(1127).size=[];


bio(1128).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select';
bio(1128).sigName='';
bio(1128).portIdx=0;
bio(1128).dim=[1,1];
bio(1128).sigWidth=1;
bio(1128).sigAddress='&vmr_rwd_fix_leftarm_B.L2select';
bio(1128).ndims=2;
bio(1128).size=[];


bio(1129).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select1';
bio(1129).sigName='';
bio(1129).portIdx=0;
bio(1129).dim=[1,1];
bio(1129).sigWidth=1;
bio(1129).sigAddress='&vmr_rwd_fix_leftarm_B.L2select1';
bio(1129).ndims=2;
bio(1129).size=[];


bio(1130).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select2';
bio(1130).sigName='';
bio(1130).portIdx=0;
bio(1130).dim=[1,1];
bio(1130).sigWidth=1;
bio(1130).sigAddress='&vmr_rwd_fix_leftarm_B.L2select2_p';
bio(1130).ndims=2;
bio(1130).size=[];


bio(1131).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select3';
bio(1131).sigName='';
bio(1131).portIdx=0;
bio(1131).dim=[1,1];
bio(1131).sigWidth=1;
bio(1131).sigAddress='&vmr_rwd_fix_leftarm_B.L2select3_c';
bio(1131).ndims=2;
bio(1131).size=[];


bio(1132).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select4';
bio(1132).sigName='';
bio(1132).portIdx=0;
bio(1132).dim=[1,1];
bio(1132).sigWidth=1;
bio(1132).sigAddress='&vmr_rwd_fix_leftarm_B.L2select4_b';
bio(1132).ndims=2;
bio(1132).size=[];


bio(1133).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/L2 select5';
bio(1133).sigName='';
bio(1133).portIdx=0;
bio(1133).dim=[1,1];
bio(1133).sigWidth=1;
bio(1133).sigAddress='&vmr_rwd_fix_leftarm_B.L2select5_a';
bio(1133).ndims=2;
bio(1133).size=[];


bio(1134).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/converter/p1';
bio(1134).sigName='uint32Out';
bio(1134).portIdx=0;
bio(1134).dim=[1,1];
bio(1134).sigWidth=1;
bio(1134).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter_j.uint32Out';
bio(1134).ndims=2;
bio(1134).size=[];


bio(1135).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/converter/p2';
bio(1135).sigName='int32Out';
bio(1135).portIdx=1;
bio(1135).dim=[1,1];
bio(1135).sigWidth=1;
bio(1135).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter_j.int32Out';
bio(1135).ndims=2;
bio(1135).size=[];


bio(1136).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/converter/p3';
bio(1136).sigName='doubleOut';
bio(1136).portIdx=2;
bio(1136).dim=[1,1];
bio(1136).sigWidth=1;
bio(1136).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter_j.doubleOut';
bio(1136).ndims=2;
bio(1136).size=[];


bio(1137).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/Data Type Conversion';
bio(1137).sigName='';
bio(1137).portIdx=0;
bio(1137).dim=[1,1];
bio(1137).sigWidth=1;
bio(1137).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_d';
bio(1137).ndims=2;
bio(1137).size=[];


bio(1138).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/BKIN EtherCAT Async SDO Upload1/p1';
bio(1138).sigName='';
bio(1138).portIdx=0;
bio(1138).dim=[1,1];
bio(1138).sigWidth=1;
bio(1138).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_f';
bio(1138).ndims=2;
bio(1138).size=[];


bio(1139).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/BKIN EtherCAT Async SDO Upload1/p2';
bio(1139).sigName='';
bio(1139).portIdx=1;
bio(1139).dim=[1,1];
bio(1139).sigWidth=1;
bio(1139).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_a';
bio(1139).ndims=2;
bio(1139).size=[];


bio(1140).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/converter/p1';
bio(1140).sigName='uint32Out';
bio(1140).portIdx=0;
bio(1140).dim=[1,1];
bio(1140).sigWidth=1;
bio(1140).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter_jl.uint32Out';
bio(1140).ndims=2;
bio(1140).size=[];


bio(1141).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/converter/p2';
bio(1141).sigName='int32Out';
bio(1141).portIdx=1;
bio(1141).dim=[1,1];
bio(1141).sigWidth=1;
bio(1141).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter_jl.int32Out';
bio(1141).ndims=2;
bio(1141).size=[];


bio(1142).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/converter/p3';
bio(1142).sigName='doubleOut';
bio(1142).portIdx=2;
bio(1142).dim=[1,1];
bio(1142).sigWidth=1;
bio(1142).sigAddress='&vmr_rwd_fix_leftarm_B.sf_converter_jl.doubleOut';
bio(1142).ndims=2;
bio(1142).size=[];


bio(1143).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/Data Type Conversion';
bio(1143).sigName='';
bio(1143).portIdx=0;
bio(1143).dim=[1,1];
bio(1143).sigWidth=1;
bio(1143).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_iq';
bio(1143).ndims=2;
bio(1143).size=[];


bio(1144).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/BKIN EtherCAT Async SDO Upload1/p1';
bio(1144).sigName='';
bio(1144).portIdx=0;
bio(1144).dim=[1,1];
bio(1144).sigWidth=1;
bio(1144).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1';
bio(1144).ndims=2;
bio(1144).size=[];


bio(1145).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/BKIN EtherCAT Async SDO Upload1/p2';
bio(1145).sigName='';
bio(1145).portIdx=1;
bio(1145).dim=[1,1];
bio(1145).sigWidth=1;
bio(1145).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2';
bio(1145).ndims=2;
bio(1145).size=[];


bio(1146).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Output';
bio(1146).sigName='';
bio(1146).portIdx=0;
bio(1146).dim=[1,1];
bio(1146).sigWidth=1;
bio(1146).sigAddress='&vmr_rwd_fix_leftarm_B.Output_b';
bio(1146).ndims=2;
bio(1146).size=[];


bio(1147).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read DPRAM/Data Type Conversion';
bio(1147).sigName='';
bio(1147).portIdx=0;
bio(1147).dim=[1,1];
bio(1147).sigWidth=1;
bio(1147).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_pj';
bio(1147).ndims=2;
bio(1147).size=[];


bio(1148).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read DPRAM/Data Type Conversion1';
bio(1148).sigName='';
bio(1148).portIdx=0;
bio(1148).dim=[1,1];
bio(1148).sigWidth=1;
bio(1148).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_j';
bio(1148).ndims=2;
bio(1148).size=[];


bio(1149).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read DPRAM/Data Type Conversion2';
bio(1149).sigName='';
bio(1149).portIdx=0;
bio(1149).dim=[1,1];
bio(1149).sigWidth=1;
bio(1149).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_pm';
bio(1149).ndims=2;
bio(1149).size=[];


bio(1150).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read DPRAM/Read';
bio(1150).sigName='';
bio(1150).portIdx=0;
bio(1150).dim=[1,1];
bio(1150).sigWidth=1;
bio(1150).sigAddress='&vmr_rwd_fix_leftarm_B.Read_h';
bio(1150).ndims=2;
bio(1150).size=[];


bio(1151).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Write DPRAM/Data Type Conversion';
bio(1151).sigName='';
bio(1151).portIdx=0;
bio(1151).dim=[1,1];
bio(1151).sigWidth=1;
bio(1151).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_dd';
bio(1151).ndims=2;
bio(1151).size=[];


bio(1152).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Write DPRAM/Data Type Conversion1';
bio(1152).sigName='';
bio(1152).portIdx=0;
bio(1152).dim=[1,1];
bio(1152).sigWidth=1;
bio(1152).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_o';
bio(1152).ndims=2;
bio(1152).size=[];


bio(1153).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Increment Real World/FixPt Sum1';
bio(1153).sigName='';
bio(1153).portIdx=0;
bio(1153).dim=[1,1];
bio(1153).sigWidth=1;
bio(1153).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSum1_n';
bio(1153).ndims=2;
bio(1153).size=[];


bio(1154).blkName='DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Wrap To Zero/FixPt Switch';
bio(1154).sigName='';
bio(1154).portIdx=0;
bio(1154).dim=[1,1];
bio(1154).sigWidth=1;
bio(1154).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSwitch_d';
bio(1154).ndims=2;
bio(1154).size=[];


bio(1155).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Data Type Conversion';
bio(1155).sigName='';
bio(1155).portIdx=0;
bio(1155).dim=[1,1];
bio(1155).sigWidth=1;
bio(1155).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_je';
bio(1155).ndims=2;
bio(1155).size=[];


bio(1156).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Data Type Conversion1';
bio(1156).sigName='';
bio(1156).portIdx=0;
bio(1156).dim=[1,1];
bio(1156).sigWidth=1;
bio(1156).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_jd';
bio(1156).ndims=2;
bio(1156).size=[];


bio(1157).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Data Type Conversion2';
bio(1157).sigName='';
bio(1157).portIdx=0;
bio(1157).dim=[2,1];
bio(1157).sigWidth=2;
bio(1157).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_j[0]';
bio(1157).ndims=2;
bio(1157).size=[];


bio(1158).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Memory';
bio(1158).sigName='';
bio(1158).portIdx=0;
bio(1158).dim=[2,1];
bio(1158).sigWidth=2;
bio(1158).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_pr[0]';
bio(1158).ndims=2;
bio(1158).size=[];


bio(1159).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/Rate Transition';
bio(1159).sigName='';
bio(1159).portIdx=0;
bio(1159).dim=[2,1];
bio(1159).sigWidth=2;
bio(1159).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_e[0]';
bio(1159).ndims=2;
bio(1159).size=[];


bio(1160).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p1';
bio(1160).sigName='';
bio(1160).portIdx=0;
bio(1160).dim=[1,1];
bio(1160).sigWidth=1;
bio(1160).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_b';
bio(1160).ndims=2;
bio(1160).size=[];


bio(1161).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p2';
bio(1161).sigName='';
bio(1161).portIdx=1;
bio(1161).dim=[1,1];
bio(1161).sigWidth=1;
bio(1161).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_db';
bio(1161).ndims=2;
bio(1161).size=[];


bio(1162).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/Data Type Conversion';
bio(1162).sigName='';
bio(1162).portIdx=0;
bio(1162).dim=[2,1];
bio(1162).sigWidth=2;
bio(1162).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_hm[0]';
bio(1162).ndims=2;
bio(1162).size=[];


bio(1163).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/Memory';
bio(1163).sigName='';
bio(1163).portIdx=0;
bio(1163).dim=[2,1];
bio(1163).sigWidth=2;
bio(1163).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_ne[0]';
bio(1163).ndims=2;
bio(1163).size=[];


bio(1164).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/Rate Transition';
bio(1164).sigName='';
bio(1164).portIdx=0;
bio(1164).dim=[2,1];
bio(1164).sigWidth=2;
bio(1164).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_cg[0]';
bio(1164).ndims=2;
bio(1164).size=[];


bio(1165).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p1';
bio(1165).sigName='';
bio(1165).portIdx=0;
bio(1165).dim=[1,1];
bio(1165).sigWidth=1;
bio(1165).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_h';
bio(1165).ndims=2;
bio(1165).size=[];


bio(1166).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p2';
bio(1166).sigName='';
bio(1166).portIdx=1;
bio(1166).dim=[1,1];
bio(1166).sigWidth=1;
bio(1166).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_di';
bio(1166).ndims=2;
bio(1166).size=[];


bio(1167).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Data Type Conversion';
bio(1167).sigName='';
bio(1167).portIdx=0;
bio(1167).dim=[1,1];
bio(1167).sigWidth=1;
bio(1167).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_mf';
bio(1167).ndims=2;
bio(1167).size=[];


bio(1168).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Data Type Conversion1';
bio(1168).sigName='';
bio(1168).portIdx=0;
bio(1168).dim=[1,1];
bio(1168).sigWidth=1;
bio(1168).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_av';
bio(1168).ndims=2;
bio(1168).size=[];


bio(1169).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/Memory';
bio(1169).sigName='';
bio(1169).portIdx=0;
bio(1169).dim=[1,1];
bio(1169).sigWidth=1;
bio(1169).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_dp';
bio(1169).ndims=2;
bio(1169).size=[];


bio(1170).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors/BKIN EtherCAT Async SDO Download';
bio(1170).sigName='';
bio(1170).portIdx=0;
bio(1170).dim=[1,1];
bio(1170).sigWidth=1;
bio(1170).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_n';
bio(1170).ndims=2;
bio(1170).size=[];


bio(1171).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Data Type Conversion';
bio(1171).sigName='';
bio(1171).portIdx=0;
bio(1171).dim=[1,1];
bio(1171).sigWidth=1;
bio(1171).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_n';
bio(1171).ndims=2;
bio(1171).size=[];


bio(1172).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Data Type Conversion1';
bio(1172).sigName='';
bio(1172).portIdx=0;
bio(1172).dim=[1,1];
bio(1172).sigWidth=1;
bio(1172).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_ke';
bio(1172).ndims=2;
bio(1172).size=[];


bio(1173).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Data Type Conversion2';
bio(1173).sigName='';
bio(1173).portIdx=0;
bio(1173).dim=[2,1];
bio(1173).sigWidth=2;
bio(1173).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_dj[0]';
bio(1173).ndims=2;
bio(1173).size=[];


bio(1174).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Memory';
bio(1174).sigName='';
bio(1174).portIdx=0;
bio(1174).dim=[2,1];
bio(1174).sigWidth=2;
bio(1174).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_d4[0]';
bio(1174).ndims=2;
bio(1174).size=[];


bio(1175).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/Rate Transition';
bio(1175).sigName='';
bio(1175).portIdx=0;
bio(1175).dim=[2,1];
bio(1175).sigWidth=2;
bio(1175).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_m[0]';
bio(1175).ndims=2;
bio(1175).size=[];


bio(1176).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p1';
bio(1176).sigName='';
bio(1176).portIdx=0;
bio(1176).dim=[1,1];
bio(1176).sigWidth=1;
bio(1176).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_ln';
bio(1176).ndims=2;
bio(1176).size=[];


bio(1177).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p2';
bio(1177).sigName='';
bio(1177).portIdx=1;
bio(1177).dim=[1,1];
bio(1177).sigWidth=1;
bio(1177).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_d';
bio(1177).ndims=2;
bio(1177).size=[];


bio(1178).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/Data Type Conversion';
bio(1178).sigName='';
bio(1178).portIdx=0;
bio(1178).dim=[2,1];
bio(1178).sigWidth=2;
bio(1178).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_m[0]';
bio(1178).ndims=2;
bio(1178).size=[];


bio(1179).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/Memory';
bio(1179).sigName='';
bio(1179).portIdx=0;
bio(1179).dim=[2,1];
bio(1179).sigWidth=2;
bio(1179).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_k[0]';
bio(1179).ndims=2;
bio(1179).size=[];


bio(1180).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/Rate Transition';
bio(1180).sigName='';
bio(1180).portIdx=0;
bio(1180).dim=[2,1];
bio(1180).sigWidth=2;
bio(1180).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_o[0]';
bio(1180).ndims=2;
bio(1180).size=[];


bio(1181).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p1';
bio(1181).sigName='';
bio(1181).portIdx=0;
bio(1181).dim=[1,1];
bio(1181).sigWidth=1;
bio(1181).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_n';
bio(1181).ndims=2;
bio(1181).size=[];


bio(1182).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p2';
bio(1182).sigName='';
bio(1182).portIdx=1;
bio(1182).dim=[1,1];
bio(1182).sigWidth=1;
bio(1182).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_k';
bio(1182).ndims=2;
bio(1182).size=[];


bio(1183).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Data Type Conversion';
bio(1183).sigName='';
bio(1183).portIdx=0;
bio(1183).dim=[1,1];
bio(1183).sigWidth=1;
bio(1183).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_gy';
bio(1183).ndims=2;
bio(1183).size=[];


bio(1184).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Data Type Conversion1';
bio(1184).sigName='';
bio(1184).portIdx=0;
bio(1184).dim=[1,1];
bio(1184).sigWidth=1;
bio(1184).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_i';
bio(1184).ndims=2;
bio(1184).size=[];


bio(1185).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/Memory';
bio(1185).sigName='';
bio(1185).portIdx=0;
bio(1185).dim=[1,1];
bio(1185).sigWidth=1;
bio(1185).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_dt';
bio(1185).ndims=2;
bio(1185).size=[];


bio(1186).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors/BKIN EtherCAT Async SDO Download';
bio(1186).sigName='';
bio(1186).portIdx=0;
bio(1186).dim=[1,1];
bio(1186).sigWidth=1;
bio(1186).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_a';
bio(1186).ndims=2;
bio(1186).size=[];


bio(1187).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Data Type Conversion';
bio(1187).sigName='';
bio(1187).portIdx=0;
bio(1187).dim=[1,1];
bio(1187).sigWidth=1;
bio(1187).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_b3';
bio(1187).ndims=2;
bio(1187).size=[];


bio(1188).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Data Type Conversion1';
bio(1188).sigName='';
bio(1188).portIdx=0;
bio(1188).dim=[1,1];
bio(1188).sigWidth=1;
bio(1188).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_ij';
bio(1188).ndims=2;
bio(1188).size=[];


bio(1189).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Data Type Conversion2';
bio(1189).sigName='';
bio(1189).portIdx=0;
bio(1189).dim=[2,1];
bio(1189).sigWidth=2;
bio(1189).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_nh[0]';
bio(1189).ndims=2;
bio(1189).size=[];


bio(1190).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Memory';
bio(1190).sigName='';
bio(1190).portIdx=0;
bio(1190).dim=[2,1];
bio(1190).sigWidth=2;
bio(1190).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_c1[0]';
bio(1190).ndims=2;
bio(1190).size=[];


bio(1191).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/Rate Transition';
bio(1191).sigName='';
bio(1191).portIdx=0;
bio(1191).dim=[2,1];
bio(1191).sigWidth=2;
bio(1191).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_l[0]';
bio(1191).ndims=2;
bio(1191).size=[];


bio(1192).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p1';
bio(1192).sigName='';
bio(1192).portIdx=0;
bio(1192).dim=[1,1];
bio(1192).sigWidth=1;
bio(1192).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_l';
bio(1192).ndims=2;
bio(1192).size=[];


bio(1193).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p2';
bio(1193).sigName='';
bio(1193).portIdx=1;
bio(1193).dim=[1,1];
bio(1193).sigWidth=1;
bio(1193).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_c';
bio(1193).ndims=2;
bio(1193).size=[];


bio(1194).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/Data Type Conversion';
bio(1194).sigName='';
bio(1194).portIdx=0;
bio(1194).dim=[2,1];
bio(1194).sigWidth=2;
bio(1194).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_pr[0]';
bio(1194).ndims=2;
bio(1194).size=[];


bio(1195).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/Memory';
bio(1195).sigName='';
bio(1195).portIdx=0;
bio(1195).dim=[2,1];
bio(1195).sigWidth=2;
bio(1195).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_a[0]';
bio(1195).ndims=2;
bio(1195).size=[];


bio(1196).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/Rate Transition';
bio(1196).sigName='';
bio(1196).portIdx=0;
bio(1196).dim=[2,1];
bio(1196).sigWidth=2;
bio(1196).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_k4[0]';
bio(1196).ndims=2;
bio(1196).size=[];


bio(1197).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p1';
bio(1197).sigName='';
bio(1197).portIdx=0;
bio(1197).dim=[1,1];
bio(1197).sigWidth=1;
bio(1197).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_d';
bio(1197).ndims=2;
bio(1197).size=[];


bio(1198).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p2';
bio(1198).sigName='';
bio(1198).portIdx=1;
bio(1198).dim=[1,1];
bio(1198).sigWidth=1;
bio(1198).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_p';
bio(1198).ndims=2;
bio(1198).size=[];


bio(1199).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Data Type Conversion';
bio(1199).sigName='';
bio(1199).portIdx=0;
bio(1199).dim=[1,1];
bio(1199).sigWidth=1;
bio(1199).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_ek';
bio(1199).ndims=2;
bio(1199).size=[];


bio(1200).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Data Type Conversion1';
bio(1200).sigName='';
bio(1200).portIdx=0;
bio(1200).dim=[1,1];
bio(1200).sigWidth=1;
bio(1200).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_k';
bio(1200).ndims=2;
bio(1200).size=[];


bio(1201).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/Memory';
bio(1201).sigName='';
bio(1201).portIdx=0;
bio(1201).dim=[1,1];
bio(1201).sigWidth=1;
bio(1201).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_g';
bio(1201).ndims=2;
bio(1201).size=[];


bio(1202).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors/BKIN EtherCAT Async SDO Download';
bio(1202).sigName='';
bio(1202).portIdx=0;
bio(1202).dim=[1,1];
bio(1202).sigWidth=1;
bio(1202).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_c';
bio(1202).ndims=2;
bio(1202).size=[];


bio(1203).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Data Type Conversion';
bio(1203).sigName='';
bio(1203).portIdx=0;
bio(1203).dim=[1,1];
bio(1203).sigWidth=1;
bio(1203).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_dc';
bio(1203).ndims=2;
bio(1203).size=[];


bio(1204).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Data Type Conversion1';
bio(1204).sigName='';
bio(1204).portIdx=0;
bio(1204).dim=[1,1];
bio(1204).sigWidth=1;
bio(1204).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_of';
bio(1204).ndims=2;
bio(1204).size=[];


bio(1205).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Data Type Conversion2';
bio(1205).sigName='';
bio(1205).portIdx=0;
bio(1205).dim=[2,1];
bio(1205).sigWidth=2;
bio(1205).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion2_g[0]';
bio(1205).ndims=2;
bio(1205).size=[];


bio(1206).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Memory';
bio(1206).sigName='';
bio(1206).portIdx=0;
bio(1206).dim=[2,1];
bio(1206).sigWidth=2;
bio(1206).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_kg[0]';
bio(1206).ndims=2;
bio(1206).size=[];


bio(1207).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/Rate Transition';
bio(1207).sigName='';
bio(1207).portIdx=0;
bio(1207).dim=[2,1];
bio(1207).sigWidth=2;
bio(1207).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_gy[0]';
bio(1207).ndims=2;
bio(1207).size=[];


bio(1208).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p1';
bio(1208).sigName='';
bio(1208).portIdx=0;
bio(1208).dim=[1,1];
bio(1208).sigWidth=1;
bio(1208).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_m';
bio(1208).ndims=2;
bio(1208).size=[];


bio(1209).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count/BKIN EtherCAT Async SDO Upload/p2';
bio(1209).sigName='';
bio(1209).portIdx=1;
bio(1209).dim=[1,1];
bio(1209).sigWidth=1;
bio(1209).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_i';
bio(1209).ndims=2;
bio(1209).size=[];


bio(1210).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/Data Type Conversion';
bio(1210).sigName='';
bio(1210).portIdx=0;
bio(1210).dim=[2,1];
bio(1210).sigWidth=2;
bio(1210).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_i1[0]';
bio(1210).ndims=2;
bio(1210).size=[];


bio(1211).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/Memory';
bio(1211).sigName='';
bio(1211).portIdx=0;
bio(1211).dim=[2,1];
bio(1211).sigWidth=2;
bio(1211).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_f3[0]';
bio(1211).ndims=2;
bio(1211).size=[];


bio(1212).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/Rate Transition';
bio(1212).sigName='';
bio(1212).portIdx=0;
bio(1212).dim=[2,1];
bio(1212).sigWidth=2;
bio(1212).sigAddress='&vmr_rwd_fix_leftarm_B.RateTransition_i[0]';
bio(1212).ndims=2;
bio(1212).size=[];


bio(1213).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p1';
bio(1213).sigName='';
bio(1213).portIdx=0;
bio(1213).dim=[1,1];
bio(1213).sigWidth=1;
bio(1213).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_f';
bio(1213).ndims=2;
bio(1213).size=[];


bio(1214).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value/BKIN EtherCAT Async SDO Upload/p2';
bio(1214).sigName='';
bio(1214).portIdx=1;
bio(1214).dim=[1,1];
bio(1214).sigWidth=1;
bio(1214).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_j';
bio(1214).ndims=2;
bio(1214).size=[];


bio(1215).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Data Type Conversion';
bio(1215).sigName='';
bio(1215).portIdx=0;
bio(1215).dim=[1,1];
bio(1215).sigWidth=1;
bio(1215).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion_dh';
bio(1215).ndims=2;
bio(1215).size=[];


bio(1216).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Data Type Conversion1';
bio(1216).sigName='';
bio(1216).portIdx=0;
bio(1216).dim=[1,1];
bio(1216).sigWidth=1;
bio(1216).sigAddress='&vmr_rwd_fix_leftarm_B.DataTypeConversion1_c';
bio(1216).ndims=2;
bio(1216).size=[];


bio(1217).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/Memory';
bio(1217).sigName='';
bio(1217).portIdx=0;
bio(1217).dim=[1,1];
bio(1217).sigWidth=1;
bio(1217).sigAddress='&vmr_rwd_fix_leftarm_B.Memory_l';
bio(1217).ndims=2;
bio(1217).size=[];


bio(1218).blkName='DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors/BKIN EtherCAT Async SDO Download';
bio(1218).sigName='';
bio(1218).portIdx=0;
bio(1218).dim=[1,1];
bio(1218).sigWidth=1;
bio(1218).sigAddress='&vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_gy';
bio(1218).ndims=2;
bio(1218).size=[];


bio(1219).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Increment Real World/FixPt Sum1';
bio(1219).sigName='';
bio(1219).portIdx=0;
bio(1219).dim=[1,1];
bio(1219).sigWidth=1;
bio(1219).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSum1_ea';
bio(1219).ndims=2;
bio(1219).size=[];


bio(1220).blkName='DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Wrap To Zero/FixPt Switch';
bio(1220).sigName='';
bio(1220).portIdx=0;
bio(1220).dim=[1,1];
bio(1220).sigWidth=1;
bio(1220).sigAddress='&vmr_rwd_fix_leftarm_B.FixPtSwitch_j';
bio(1220).ndims=2;
bio(1220).size=[];


function len = getlenBIO
len = 1220;

