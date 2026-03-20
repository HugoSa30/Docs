/*
 * Program: n42.bin
 * Function: 15
 * Entry: 0010eeb0
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 _5(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  
  puVar1 = (undefined4 *)(*(int *)(DAT_005baa10 + 0x10) + param_1 * 0x18);
  *puVar1 = param_2;
  *(short *)(puVar1 + 1) = (short)param_3;
  if (param_4 != param_5) {
    *(char *)((int)puVar1 + 0xe) = (char)param_4;
    *(char *)((int)puVar1 + 0xf) = (char)param_5;
  }
  if (param_3 == 0) {
    bVar2 = *(byte *)(puVar1 + 3) & 0x7e | 2;
  }
  else {
    bVar2 = *(byte *)(puVar1 + 3) & 0x20 | 0x82;
  }
  *(byte *)(puVar1 + 3) = bVar2;
  return 0;
}

