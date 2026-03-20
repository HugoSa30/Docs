/*
 * Program: n42.bin
 * Function: FUN_00120e30
 * Entry: 00120e30
 * Exported by: ExportAllDecompiledFunctions.java
 */


short * FUN_00120e30(short *param_1,undefined *param_2)

{
  short sVar1;
  undefined local_10;
  undefined uStack_f;
  
  sVar1 = *param_1;
  if (sVar1 == -1) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_10 = (undefined)((ushort)sVar1 >> 8);
    *param_2 = local_10;
    uStack_f = (undefined)sVar1;
    param_2[1] = uStack_f;
  }
  sVar1 = param_1[1];
  if (sVar1 == -1) {
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    local_10 = (undefined)((ushort)sVar1 >> 8);
    param_2[2] = local_10;
    uStack_f = (undefined)sVar1;
    param_2[3] = uStack_f;
  }
  sVar1 = param_1[2];
  if (sVar1 == -1) {
    param_2[4] = 0;
    param_2[5] = 0;
  }
  else {
    local_10 = (undefined)((ushort)sVar1 >> 8);
    param_2[4] = local_10;
    uStack_f = (undefined)sVar1;
    param_2[5] = uStack_f;
  }
  return param_1 + 3;
}

