/*
 * Program: n42.bin
 * Function: FUN_001e8c70
 * Entry: 001e8c70
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_001e8c70(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_228 [132];
  undefined4 local_1a4 [33];
  undefined auStack_120 [132];
  undefined auStack_9c [132];
  
  FUN_001e8f50(auStack_120,0x21,param_3,param_4);
  FUN_001e8f50(auStack_9c,0x21,param_6 + 0xc,0x80);
  FUN_001e90c8(local_1a4,0x21);
  local_1a4[0] = *(undefined4 *)(param_6 + 8);
  uVar1 = FUN_001e9268(auStack_9c,0x21);
  uVar2 = FUN_001e9268(local_1a4,0x21);
  iVar3 = FUN_001e9210(auStack_120,auStack_9c,uVar1);
  if (iVar3 < 0) {
    *param_5 = *param_5 + 1;
    *param_2 = *(int *)(param_6 + 4) + 7U >> 3;
    FUN_001e99c4(auStack_228,auStack_120,local_1a4,uVar2,auStack_9c,uVar1,param_5);
    FUN_001e9018(param_1,*param_2,auStack_228,uVar1);
    *param_5 = *param_5 + 1;
    FUN_001e8f08(auStack_228,0,0x84);
    FUN_001e8f08(auStack_120,0,0x84);
  }
  return iVar3 < 0;
}

