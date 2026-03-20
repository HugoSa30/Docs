/*
 * Program: n42.bin
 * Function: FUN_0009d6e4
 * Entry: 0009d6e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_0009d6e4(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  
  iVar1 = param_1 * 4;
  uVar4 = (param_1 - ((*(byte *)(iVar1 + 0xec02) & 0x40) >> 6)) + (uint)*(byte *)(iVar1 + 0xec03) +
          1;
  uVar3 = *(ushort *)(iVar1 + 0xec00);
  if (0xf < uVar3) {
    pbVar2 = (byte *)(param_2 + -0x10);
    do {
      uVar4 = uVar4 + pbVar2[0x10] + (uint)pbVar2[0x11] + (uint)pbVar2[0x12] + (uint)pbVar2[0x13] +
              (uint)pbVar2[0x14] + (uint)pbVar2[0x15] + (uint)pbVar2[0x16] + (uint)pbVar2[0x17] +
              (uint)pbVar2[0x18] + (uint)pbVar2[0x19] + (uint)pbVar2[0x1a] + (uint)pbVar2[0x1b] +
              (uint)pbVar2[0x1c] + (uint)pbVar2[0x1d] + (uint)pbVar2[0x1e] + (uint)pbVar2[0x1f];
      uVar3 = uVar3 - 0x10;
      pbVar2 = pbVar2 + 0x10;
    } while (0xf < uVar3);
  }
  return uVar4 & 0xffff;
}

