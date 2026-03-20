/*
 * Program: n42.bin
 * Function: FUN_0010f6d0
 * Entry: 0010f6d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0010f6d0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(DAT_005baa10 + 0x10) + param_1 * 0x18);
  if (param_3 < (int)(uint)*(ushort *)(puVar1 + 2)) {
    *(ushort *)(puVar1 + 2) = *(ushort *)(puVar1 + 1);
  }
  FUN_0010ef98(*puVar1,param_2,*(ushort *)(puVar1 + 1) & 0xff);
  *(short *)(puVar1 + 1) = (short)param_3;
  *puVar1 = param_2;
  if ((*(byte *)(puVar1 + 3) & 8) != 0) {
    *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) & 0xf7;
    FUN_0010fa10(param_1);
  }
  return 0;
}

