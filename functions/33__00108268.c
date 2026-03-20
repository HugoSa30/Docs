/*
 * Program: n42.bin
 * Function: 33
 * Entry: 00108268
 * Exported by: ExportAllDecompiledFunctions.java
 */


void _3(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_TBLr;
  
  DAT_00305004 = DAT_00f096cc;
  uVar2 = 0;
  if (DAT_00f096cd != 0) {
    iVar3 = 0xf096b4;
    do {
      puVar1 = *(undefined4 **)(iVar3 + 4);
      *puVar1 = 0;
      *(undefined2 *)((int)puVar1 + 0x36) = 0;
      puVar1[6] = 0;
      *(undefined2 *)(puVar1 + 0xc) = 0;
      *(undefined *)((int)puVar1 + 0x3a) = 0;
      *(undefined4 *)(*(int *)(iVar3 + 4) + 0x28) = in_TBLr;
      _4(iVar3,0xf096d0);
      _5(iVar3,0);
      iVar3 = iVar3 + 0xc;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_00f096cd);
  }
  return;
}

