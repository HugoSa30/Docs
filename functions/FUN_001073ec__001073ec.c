/*
 * Program: n42.bin
 * Function: FUN_001073ec
 * Entry: 001073ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001073ec(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  _DAT_003fb964 = param_3;
  _DAT_003fb968 = param_1;
  iVar1 = FUN_00107218();
  if (iVar1 == 0) {
    _DAT_003fb974 = param_3 + DAT_005b8008;
    DAT_003fb960 = param_4 != 0;
    _DAT_003fb96c = param_1;
    _DAT_003fb978 = param_2;
    FUN_00106b14();
    DAT_003fb961 = 0;
    _DAT_003fb970 = param_1;
    FUN_00107104();
    DAT_003fb962 = 5;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x91;
  }
  return uVar2;
}

