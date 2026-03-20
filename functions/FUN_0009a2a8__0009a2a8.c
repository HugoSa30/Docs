/*
 * Program: n42.bin
 * Function: FUN_0009a2a8
 * Entry: 0009a2a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009a2a8(int param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 1) {
    uVar1 = *(ushort *)(param_1 + 0xc);
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xe0ff;
    *(ushort *)(param_1 + 0xc) = uVar1 & 0x1f00 | *(ushort *)(param_1 + 0xc);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xe);
    *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xe0ff;
    *(ushort *)(param_1 + 0xe) = uVar1 & 0x1f00 | *(ushort *)(param_1 + 0xe);
  }
  return;
}

