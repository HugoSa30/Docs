/*
 * Program: n42.bin
 * Function: FUN_000a7e3c
 * Entry: 000a7e3c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined2 FUN_000a7e3c(byte *param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  ushort uVar4;
  undefined2 *puVar5;
  
  sVar1 = *(short *)(param_1 + 8);
  *(short *)(param_1 + 8) = sVar1 + *(short *)(param_1 + 0x10);
  puVar5 = *(undefined2 **)(param_1 + 0xc);
  uVar2 = *puVar5;
  if (*(ushort *)(param_1 + 0x12) < (ushort)(sVar1 + *(short *)(param_1 + 0x10))) {
    puVar3 = *(undefined2 **)(param_1 + 4);
    do {
      uVar2 = *puVar5;
      *puVar5 = *(undefined2 *)(param_1 + 0x14);
      if (puVar5 <= puVar3) {
        puVar5 = puVar3 + *param_1;
      }
      puVar5 = puVar5 + -1;
      uVar4 = *(short *)(param_1 + 8) - *(ushort *)(param_1 + 0x12);
      *(ushort *)(param_1 + 8) = uVar4;
    } while (*(ushort *)(param_1 + 0x12) < uVar4);
    *(undefined2 **)(param_1 + 0xc) = puVar5;
  }
  return uVar2;
}

