/*
 * Program: n42.bin
 * Function: FUN_0017c5a4
 * Entry: 0017c5a4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017c5a4(void)

{
  int iVar1;
  uint uVar2;
  int in_TBLr;
  
  rt_100ms = (short)DAT_005b8ae8 + ((short)in_TBLr - (short)common_rt);
  common_rt = in_TBLr + DAT_005b8ae8;
  if ((DAT_001cb365 & 1) != 0) {
    DAT_005b8b14 = (common_rt - _DAT_003fb668) * 0x100;
    DAT_005b8b1c = in_TBLr - DAT_005b8b18;
    if (DAT_005b8af0 == r200msCtr) {
      iVar1 = (uint)rt_200ms * 0x80;
    }
    else {
      iVar1 = (uint)rt_200ms * -0x80;
    }
    if (DAT_005b8af8 == r1000msCtr) {
      uVar2 = ((uint)rt_1000ms << 8) / 10;
    }
    else {
      uVar2 = -(((uint)rt_1000ms * 0x900) / 10);
    }
    performance = (byte)((DAT_005b8b14 + iVar1 + uVar2) / DAT_005b8b1c);
    DAT_005b8af0 = r200msCtr;
    DAT_005b8af8 = r1000msCtr;
    uVar2 = DAT_005b8b08 - DAT_005b8b0c;
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    rt_bg = (word)(DAT_005b8b00 / uVar2);
    rt_bg_brutto = (word)(DAT_005b8b04 / uVar2);
    DAT_005b8b0c = DAT_005b8b08;
    DAT_005b8b00 = 0;
    DAT_005b8b04 = 0;
    _DAT_003fb668 = common_rt;
    DAT_005b8b18 = in_TBLr;
  }
  if ((DAT_001cb365 & 2) != 0) {
    rt_syn = (word)(_DAT_003fb5e4 / (synchroCtr - _DAT_003fb5e8));
    rt_syns = _DAT_003fb5e4;
    _DAT_003fb5e8 = synchroCtr;
    _DAT_003fb5e4 = 0;
    rt_1ms = (word)(_DAT_003fb5f0 / (r1msCtr - _DAT_003fb5f4));
    rt_1mss = _DAT_003fb5f0;
    _DAT_003fb5f4 = r1msCtr;
    _DAT_003fb5f0 = 0;
    rt_2ms = (word)(_DAT_003fb5fc / (r2ms_swoff_Ctr - _DAT_003fb600));
    rt_2mss = _DAT_003fb5fc;
    _DAT_003fb600 = r2ms_swoff_Ctr;
    _DAT_003fb5fc = 0;
    rt_10ms = (word)(_DAT_003fb608 / (r10msCtr - _DAT_003fb60c));
    rt_10mss = _DAT_003fb608;
    _DAT_003fb60c = r10msCtr;
    _DAT_003fb608 = 0;
    rt_20ms = (word)(_DAT_003fb614 / (r20msCtr - _DAT_003fb618));
    rt_20mss = _DAT_003fb614;
    _DAT_003fb618 = r20msCtr;
    _DAT_003fb614 = 0;
    rt_50ms = (word)(DAT_005b8ae0 / (r50msCtr - DAT_005b8ae4));
    rt_50mss = DAT_005b8ae0;
    DAT_005b8ae4 = r50msCtr;
    DAT_005b8ae0 = 0;
  }
  if ((DAT_001cb365 & 4) != 0) {
    rt_hw1 = (word)(_DAT_003fb620 / (hw1Ctr - _DAT_003fb624));
    rt_hw1s = _DAT_003fb620;
    _DAT_003fb624 = hw1Ctr;
    _DAT_003fb620 = 0;
    rt_hw2 = (word)(_DAT_003fb62c / (hw2Ctr - _DAT_003fb630));
    rt_hw2s = _DAT_003fb62c;
    _DAT_003fb630 = hw2Ctr;
    _DAT_003fb62c = 0;
    rt_hw3 = (word)(_DAT_003fb638 / (hw3Ctr - _DAT_003fb63c));
    rt_hw3s = _DAT_003fb638;
    _DAT_003fb63c = hw3Ctr;
    _DAT_003fb638 = 0;
    rt_hw4 = (word)(_DAT_003fb644 / (hw4Ctr - _DAT_003fb648));
    rt_hw4s = _DAT_003fb644;
    _DAT_003fb648 = hw4Ctr;
    _DAT_003fb644 = 0;
  }
  return;
}

