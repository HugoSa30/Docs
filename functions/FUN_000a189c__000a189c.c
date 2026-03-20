/*
 * Program: n42.bin
 * Function: FUN_000a189c
 * Entry: 000a189c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000a189c(int param_1,int param_2,uint param_3)

{
  short sVar1;
  
  sVar1 = FUN_000a1f58(param_2,param_2 + param_3,0);
  if ((0 < (int)param_3) && (sVar1 == 0)) {
    if (0xff < (int)param_3) {
      do {
        _DAT_002fc00e = 0xaa39;
        sVar1 = FUN_000a1fcc(param_1,0x100);
        param_1 = param_1 + 0x100;
        param_3 = param_3 - 0x100;
        if ((int)param_3 < 1) {
          return sVar1;
        }
        if (sVar1 != 0) {
          return sVar1;
        }
      } while (0xff < (int)param_3);
    }
    _DAT_002fc00e = 0xaa39;
    sVar1 = FUN_000a1fcc(param_1,param_3 & 0xffff);
  }
  return sVar1;
}

