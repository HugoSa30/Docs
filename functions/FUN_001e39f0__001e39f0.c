/*
 * Program: n42.bin
 * Function: FUN_001e39f0
 * Entry: 001e39f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_001e39f0(int param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  
  FUN_001e2e0c();
  bVar1 = *(char *)(param_1 + 2) == '\0';
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 1);
    *(undefined *)(param_2 + (uint)bVar2 + 0x16) = DAT_003fb8c8;
    uVar3 = bVar2 + 1 & 0xff;
    *(undefined *)(param_2 + uVar3 + 0x16) = DAT_003fb8c9;
    uVar3 = uVar3 + 1 & 0xff;
    *(undefined *)(param_2 + uVar3 + 0x16) = DAT_003fb8ca;
    uVar3 = uVar3 + 1 & 0xff;
    *(undefined *)(param_2 + uVar3 + 0x16) = DAT_003fb8cb;
    uVar3 = uVar3 + 1 & 0xff;
    *(undefined *)(param_2 + uVar3 + 0x16) = DAT_003fb8cc;
    uVar3 = uVar3 + 1;
    *(undefined *)(param_2 + (uVar3 & 0xff) + 0x16) = DAT_003fb8cd;
    *(char *)(param_1 + 1) = (char)uVar3 + '\x01';
    *(undefined *)(param_2 + 2) = 8;
  }
  FUN_001e2e0c();
  return bVar1;
}

