/*
 * Program: n42.bin
 * Function: FUN_001074b0
 * Entry: 001074b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001074b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  _DAT_003fb968 = param_1;
  iVar1 = FUN_00107218();
  if (iVar1 == 0) {
    _DAT_003fb974 = DAT_005b8008;
    DAT_003fb960 = 2;
    _DAT_003fb96c = param_1;
    FUN_00106b14();
    DAT_003fb961 = 0;
    _DAT_003fb970 = param_1;
    FUN_001070a8();
    _DAT_003fb964 = 0;
    _DAT_003fb95c = 1;
    _DAT_003fb958 = (uint)DAT_005b8076;
    DAT_003fb95e = (DAT_005b8060 & 0x80) != 0;
    DAT_003fb95f = (DAT_005b8061 & 0x40) != 0;
    DAT_005b8088._0_2_ = 0;
    FUN_00107024();
    DAT_003fb962 = 6;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x91;
  }
  return uVar2;
}

