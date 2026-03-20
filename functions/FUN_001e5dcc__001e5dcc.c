/*
 * Program: n42.bin
 * Function: FUN_001e5dcc
 * Entry: 001e5dcc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001e5dcc(uint param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_003fb964;
  if (uVar5 == param_1) {
    uVar2 = _DAT_003fb95c & 0xffff8000;
    *param_2 = uVar2;
    *param_3 = uVar2 + (_DAT_003fb960 & 0xffff8000 ^ 0xffffffff) + 1;
  }
  uVar2 = (uint)DAT_003fb970;
  if (uVar2 == param_1) {
    uVar3 = _DAT_003fb968 & 0xffff8000;
    *param_2 = uVar3;
    *param_3 = uVar3 + (_DAT_003fb96c & 0xffff8000 ^ 0xffffffff) + 1;
  }
  uVar3 = (uint)DAT_003fb97c;
  if (uVar3 == param_1) {
    uVar4 = _DAT_003fb974 & 0xffff8000;
    *param_2 = uVar4;
    *param_3 = uVar4 + (_DAT_003fb978 & 0xffff8000 ^ 0xffffffff) + 1;
  }
  uVar4 = (uint)DAT_003fb988;
  if (uVar4 == param_1) {
    uVar1 = _DAT_003fb980 & 0xffff8000;
    *param_2 = uVar1;
    *param_3 = uVar1 + (_DAT_003fb984 & 0xffff8000 ^ 0xffffffff) + 1;
  }
  return uVar4 == param_1 || (uVar3 == param_1 || (uVar2 == param_1 || uVar5 == param_1));
}

