/*
 * Program: n42.bin
 * Function: FUN_0010dd00
 * Entry: 0010dd00
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010dd00(undefined4 *param_1)

{
  int iVar1;
  
  if (_DAT_003fbb94 == 1) {
    DAT_003fbae8 = *(undefined *)(param_1 + 1);
    DAT_003fbae9 = (byte)(-(uint)*(byte *)((int)param_1 + 5) >> 0x1f);
    iVar1 = FUN_001090cc(*param_1,&DAT_003fbae8,0xf0df68);
    if (iVar1 != 0) {
      _DAT_003fba9c = param_1;
      _5(*param_1,param_1[2]);
      _9(1);
      DAT_003fbae4 = *(char *)((int)_DAT_003fba9c + 5) == '\0';
      return 1;
    }
  }
  else {
    _DAT_003fbb94 = 0;
  }
  return 0;
}

