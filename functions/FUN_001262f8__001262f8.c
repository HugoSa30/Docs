/*
 * Program: n42.bin
 * Function: FUN_001262f8
 * Entry: 001262f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001262f8(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 3) {
    DAT_005b8e9e = DAT_005b8e9e + '\x01';
    if (param_2 < 0x38) {
                    /* WARNING: Could not emulate address calculation at 0x00126350 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_2 * 4 + 0xf2635c))();
      return uVar1;
    }
  }
  else if (param_1 == 0xd) {
    DAT_005b8e9f = DAT_005b8e9f + '\x01';
    if (param_2 == 10) {
      if ((param_3 & 0xffff) < 4) {
        _DAT_003fb100 = _DAT_003fb100 + 200;
        if (1000 < _DAT_003fb100) {
          _DAT_003fb100 = 1000;
        }
      }
      else {
        func_0xff224838(0x32d2);
      }
    }
    else if (param_2 == 0xb) {
      func_0xff224838(0x32d3);
    }
    else if ((param_2 == 0x3c) && (_DAT_003fb0fe = _DAT_003fb0fe + 200, 1000 < _DAT_003fb0fe)) {
      _DAT_003fb0fe = 1000;
    }
  }
  else {
    DAT_005b8e9d = DAT_005b8e9d + '\x01';
  }
  (*(code *)&SUB_00fac71c)(param_1,param_2,0,param_3);
  return 1;
}

