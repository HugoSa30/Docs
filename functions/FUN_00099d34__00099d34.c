/*
 * Program: n42.bin
 * Function: FUN_00099d34
 * Entry: 00099d34
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00099d34(int param_1,uint param_2,int param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  if ((param_2 & 1) != 0) {
    (&UNK_003fa3b0)[param_3 * 4] = (char)((int)(uint)uVar1 >> 0xf);
  }
  if ((param_2 & 2) != 0) {
    (&UNK_003fa3b1)[param_3 * 4] = (byte)((int)(uint)uVar1 >> 0xd) & 1;
  }
  return;
}

