/*
 * Program: n42.bin
 * Function: FUN_000a3480
 * Entry: 000a3480
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a3480(byte *param_1)

{
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined uStack_14;
  undefined auStack_13 [3];
  byte *local_10;
  
  local_20 = param_1[3] | _DAT_00013670;
  local_1e = param_1[2] | _DAT_00013672;
  local_1c = param_1[1] | _DAT_00013674;
  local_1a = *param_1 | _DAT_00013676;
  local_18 = _DAT_00013678;
  local_16 = _DAT_0001367a;
  local_10 = param_1;
  FUN_000a3c90(_DAT_00016f00,1,0,&local_1a,auStack_13);
  FUN_000a3c90(_DAT_00016f00,1,1,&local_1c,auStack_13);
  FUN_000a3c90(_DAT_00016f00,1,2,&local_1e,auStack_13);
  FUN_000a3c90(_DAT_00016f00,1,3,&local_20,auStack_13);
  FUN_000a3c90(_DAT_00016f00,1,4,&local_18,auStack_13);
  FUN_000a3c90(_DAT_00016f00,1,5,&local_16,auStack_13);
  FUN_000a4030(_DAT_00016f00,&uStack_14);
  FUN_000a4154();
  return;
}

