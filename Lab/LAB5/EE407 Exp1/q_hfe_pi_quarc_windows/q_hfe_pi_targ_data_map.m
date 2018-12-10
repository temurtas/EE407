  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (q_hfe_pi_P)
    ;%
      section.nData     = 37;
      section.data(37)  = dumData; %prealloc
      
	  ;% q_hfe_pi_P.HILInitialize_OOStart
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_hfe_pi_P.HILInitialize_OOEnter
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_hfe_pi_P.HILInitialize_OOTerminate
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_hfe_pi_P.HILInitialize_OOExit
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_hfe_pi_P.HILInitialize_AIHigh
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_hfe_pi_P.HILInitialize_AILow
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_hfe_pi_P.HILInitialize_AOHigh
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_hfe_pi_P.HILInitialize_AOLow
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_hfe_pi_P.HILInitialize_AOInitial
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_hfe_pi_P.HILInitialize_AOFinal
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_hfe_pi_P.HILInitialize_AOWatchdog
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_hfe_pi_P.HILInitialize_POFrequency
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_hfe_pi_P.HILInitialize_POLeading
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_hfe_pi_P.HILInitialize_POTrailing
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_hfe_pi_P.HILInitialize_POInitial
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_hfe_pi_P.HILInitialize_POFinal
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% q_hfe_pi_P.HILInitialize_POWatchdog
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% q_hfe_pi_P.SignalGenerator_Amplitude
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% q_hfe_pi_P.SignalGenerator_Frequency
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% q_hfe_pi_P.AmplitudedegC_Gain
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% q_hfe_pi_P.OffsetdegC_Value
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% q_hfe_pi_P.SliderGain_Gain
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% q_hfe_pi_P.ChooseSensor_Value
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% q_hfe_pi_P.SliderGain_Gain_o
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% q_hfe_pi_P.Integrator_IC
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% q_hfe_pi_P.Integrator_UpperSat
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% q_hfe_pi_P.Integrator_LowerSat
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% q_hfe_pi_P.HeaterSaturation_UpperSat
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% q_hfe_pi_P.HeaterSaturation_LowerSat
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% q_hfe_pi_P.VbV_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% q_hfe_pi_P.BlowerSaturation_UpperSat
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% q_hfe_pi_P.BlowerSaturation_LowerSat
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% q_hfe_pi_P.Bias_Bias
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% q_hfe_pi_P.SliderGain_Gain_k
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% q_hfe_pi_P.T3CalibdegCV_Gain
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% q_hfe_pi_P.T2CalibdegCV_Gain
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% q_hfe_pi_P.T1CalibdegCV_Gain
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% q_hfe_pi_P.HILInitialize_CKChannels
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_hfe_pi_P.HILInitialize_DOWatchdog
	  section.data(2).logicalSrcIdx = 38;
	  section.data(2).dtTransOffset = 3;
	
	  ;% q_hfe_pi_P.HILInitialize_EIInitial
	  section.data(3).logicalSrcIdx = 39;
	  section.data(3).dtTransOffset = 4;
	
	  ;% q_hfe_pi_P.HILInitialize_POModes
	  section.data(4).logicalSrcIdx = 40;
	  section.data(4).dtTransOffset = 5;
	
	  ;% q_hfe_pi_P.HILInitialize_POConfiguration
	  section.data(5).logicalSrcIdx = 41;
	  section.data(5).dtTransOffset = 6;
	
	  ;% q_hfe_pi_P.HILInitialize_POAlignment
	  section.data(6).logicalSrcIdx = 42;
	  section.data(6).dtTransOffset = 7;
	
	  ;% q_hfe_pi_P.HILInitialize_POPolarity
	  section.data(7).logicalSrcIdx = 43;
	  section.data(7).dtTransOffset = 8;
	
	  ;% q_hfe_pi_P.HILReadAnalogTimebase_Clock
	  section.data(8).logicalSrcIdx = 44;
	  section.data(8).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% q_hfe_pi_P.HILInitialize_AIChannels
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_hfe_pi_P.HILInitialize_AOChannels
	  section.data(2).logicalSrcIdx = 46;
	  section.data(2).dtTransOffset = 8;
	
	  ;% q_hfe_pi_P.HILInitialize_EIChannels
	  section.data(3).logicalSrcIdx = 47;
	  section.data(3).dtTransOffset = 16;
	
	  ;% q_hfe_pi_P.HILInitialize_EIQuadrature
	  section.data(4).logicalSrcIdx = 48;
	  section.data(4).dtTransOffset = 24;
	
	  ;% q_hfe_pi_P.HILInitialize_POChannels
	  section.data(5).logicalSrcIdx = 49;
	  section.data(5).dtTransOffset = 25;
	
	  ;% q_hfe_pi_P.HILReadAnalogTimebase_Channels
	  section.data(6).logicalSrcIdx = 50;
	  section.data(6).dtTransOffset = 33;
	
	  ;% q_hfe_pi_P.HILReadAnalogTimebase_SamplesIn
	  section.data(7).logicalSrcIdx = 51;
	  section.data(7).dtTransOffset = 37;
	
	  ;% q_hfe_pi_P.HILWriteAnalog1_Channels
	  section.data(8).logicalSrcIdx = 52;
	  section.data(8).dtTransOffset = 38;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 35;
      section.data(35)  = dumData; %prealloc
      
	  ;% q_hfe_pi_P.HILInitialize_Active
	  section.data(1).logicalSrcIdx = 53;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_hfe_pi_P.HILInitialize_CKPStart
	  section.data(2).logicalSrcIdx = 54;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_hfe_pi_P.HILInitialize_CKPEnter
	  section.data(3).logicalSrcIdx = 55;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_hfe_pi_P.HILInitialize_AIPStart
	  section.data(4).logicalSrcIdx = 56;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_hfe_pi_P.HILInitialize_AIPEnter
	  section.data(5).logicalSrcIdx = 57;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_hfe_pi_P.HILInitialize_AOPStart
	  section.data(6).logicalSrcIdx = 58;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_hfe_pi_P.HILInitialize_AOPEnter
	  section.data(7).logicalSrcIdx = 59;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_hfe_pi_P.HILInitialize_AOStart
	  section.data(8).logicalSrcIdx = 60;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_hfe_pi_P.HILInitialize_AOEnter
	  section.data(9).logicalSrcIdx = 61;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_hfe_pi_P.HILInitialize_AOTerminate
	  section.data(10).logicalSrcIdx = 62;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_hfe_pi_P.HILInitialize_AOExit
	  section.data(11).logicalSrcIdx = 63;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_hfe_pi_P.HILInitialize_AOReset
	  section.data(12).logicalSrcIdx = 64;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_hfe_pi_P.HILInitialize_DOPStart
	  section.data(13).logicalSrcIdx = 65;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_hfe_pi_P.HILInitialize_DOPEnter
	  section.data(14).logicalSrcIdx = 66;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_hfe_pi_P.HILInitialize_DOStart
	  section.data(15).logicalSrcIdx = 67;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_hfe_pi_P.HILInitialize_DOEnter
	  section.data(16).logicalSrcIdx = 68;
	  section.data(16).dtTransOffset = 15;
	
	  ;% q_hfe_pi_P.HILInitialize_DOTerminate
	  section.data(17).logicalSrcIdx = 69;
	  section.data(17).dtTransOffset = 16;
	
	  ;% q_hfe_pi_P.HILInitialize_DOExit
	  section.data(18).logicalSrcIdx = 70;
	  section.data(18).dtTransOffset = 17;
	
	  ;% q_hfe_pi_P.HILInitialize_DOReset
	  section.data(19).logicalSrcIdx = 71;
	  section.data(19).dtTransOffset = 18;
	
	  ;% q_hfe_pi_P.HILInitialize_EIPStart
	  section.data(20).logicalSrcIdx = 72;
	  section.data(20).dtTransOffset = 19;
	
	  ;% q_hfe_pi_P.HILInitialize_EIPEnter
	  section.data(21).logicalSrcIdx = 73;
	  section.data(21).dtTransOffset = 20;
	
	  ;% q_hfe_pi_P.HILInitialize_EIStart
	  section.data(22).logicalSrcIdx = 74;
	  section.data(22).dtTransOffset = 21;
	
	  ;% q_hfe_pi_P.HILInitialize_EIEnter
	  section.data(23).logicalSrcIdx = 75;
	  section.data(23).dtTransOffset = 22;
	
	  ;% q_hfe_pi_P.HILInitialize_POPStart
	  section.data(24).logicalSrcIdx = 76;
	  section.data(24).dtTransOffset = 23;
	
	  ;% q_hfe_pi_P.HILInitialize_POPEnter
	  section.data(25).logicalSrcIdx = 77;
	  section.data(25).dtTransOffset = 24;
	
	  ;% q_hfe_pi_P.HILInitialize_POStart
	  section.data(26).logicalSrcIdx = 78;
	  section.data(26).dtTransOffset = 25;
	
	  ;% q_hfe_pi_P.HILInitialize_POEnter
	  section.data(27).logicalSrcIdx = 79;
	  section.data(27).dtTransOffset = 26;
	
	  ;% q_hfe_pi_P.HILInitialize_POTerminate
	  section.data(28).logicalSrcIdx = 80;
	  section.data(28).dtTransOffset = 27;
	
	  ;% q_hfe_pi_P.HILInitialize_POExit
	  section.data(29).logicalSrcIdx = 81;
	  section.data(29).dtTransOffset = 28;
	
	  ;% q_hfe_pi_P.HILInitialize_POReset
	  section.data(30).logicalSrcIdx = 82;
	  section.data(30).dtTransOffset = 29;
	
	  ;% q_hfe_pi_P.HILInitialize_OOReset
	  section.data(31).logicalSrcIdx = 83;
	  section.data(31).dtTransOffset = 30;
	
	  ;% q_hfe_pi_P.HILInitialize_DOInitial
	  section.data(32).logicalSrcIdx = 84;
	  section.data(32).dtTransOffset = 31;
	
	  ;% q_hfe_pi_P.HILInitialize_DOFinal
	  section.data(33).logicalSrcIdx = 85;
	  section.data(33).dtTransOffset = 32;
	
	  ;% q_hfe_pi_P.HILReadAnalogTimebase_Active
	  section.data(34).logicalSrcIdx = 86;
	  section.data(34).dtTransOffset = 33;
	
	  ;% q_hfe_pi_P.HILWriteAnalog1_Active
	  section.data(35).logicalSrcIdx = 87;
	  section.data(35).dtTransOffset = 34;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (q_hfe_pi_B)
    ;%
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% q_hfe_pi_B.Sum1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_hfe_pi_B.MultiportSwitch
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_hfe_pi_B.HeaterSaturation
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_hfe_pi_B.BlowerSaturation
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_hfe_pi_B.SliderGain
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 6;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (q_hfe_pi_DWork)
    ;%
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% q_hfe_pi_DWork.HILInitialize_AIMinimums
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_hfe_pi_DWork.HILInitialize_AIMaximums
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 8;
	
	  ;% q_hfe_pi_DWork.HILInitialize_AOMinimums
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 16;
	
	  ;% q_hfe_pi_DWork.HILInitialize_AOMaximums
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 24;
	
	  ;% q_hfe_pi_DWork.HILInitialize_AOVoltages
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 32;
	
	  ;% q_hfe_pi_DWork.HILInitialize_FilterFrequency
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 40;
	
	  ;% q_hfe_pi_DWork.HILInitialize_POSortedFreqs
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 48;
	
	  ;% q_hfe_pi_DWork.HILInitialize_POValues
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 56;
	
	  ;% q_hfe_pi_DWork.HILReadAnalogTimebase_Buffer
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 64;
	
	  ;% q_hfe_pi_DWork.HILWriteAnalog1_Buffer
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 68;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% q_hfe_pi_DWork.HILWriteAnalog1_PWORK
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_hfe_pi_DWork.InputV_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_hfe_pi_DWork.TempdegC_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% q_hfe_pi_DWork.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 13;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_hfe_pi_DWork.HILInitialize_QuadratureModes
	  section.data(2).logicalSrcIdx = 14;
	  section.data(2).dtTransOffset = 3;
	
	  ;% q_hfe_pi_DWork.HILInitialize_InitialEICounts
	  section.data(3).logicalSrcIdx = 15;
	  section.data(3).dtTransOffset = 11;
	
	  ;% q_hfe_pi_DWork.HILInitialize_POModeValues
	  section.data(4).logicalSrcIdx = 16;
	  section.data(4).dtTransOffset = 19;
	
	  ;% q_hfe_pi_DWork.HILInitialize_POAlignValues
	  section.data(5).logicalSrcIdx = 17;
	  section.data(5).dtTransOffset = 27;
	
	  ;% q_hfe_pi_DWork.HILInitialize_POPolarityVals
	  section.data(6).logicalSrcIdx = 18;
	  section.data(6).dtTransOffset = 35;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_hfe_pi_DWork.HILInitialize_POSortedChans
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_hfe_pi_DWork.HILReadAnalogTimebase_Task
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_hfe_pi_DWork.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 21;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 602939379;
  targMap.checksum1 = 1843566179;
  targMap.checksum2 = 1550868070;
  targMap.checksum3 = 3574212096;

