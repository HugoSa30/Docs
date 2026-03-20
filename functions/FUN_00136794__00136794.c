/*
 * Program: n42.bin
 * Function: FUN_00136794
 * Entry: 00136794
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00136794(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  param_1 = param_1 * 0x28;
  uVar1 = (uint)(byte)(&UNK_003fcf4c)[param_1];
  if (((*(ushort *)(&UNK_003fcf4e + param_1) >> 8 & 1) == 0) &&
     ((*(ushort *)(&UNK_003fcf4e + param_1) >> 0xc & 1) == 0)) {
    if (((*(ushort *)(&UNK_003fcf4e + param_1) >> 9 & 1) == 0) &&
       ((*(ushort *)(&UNK_003fcf4e + param_1) >> 0xd & 1) == 0)) {
      if (((*(ushort *)(&UNK_003fcf4e + param_1) >> 10 & 1) == 0) &&
         ((*(ushort *)(&UNK_003fcf4e + param_1) >> 0xe & 1) == 0)) {
        if (((*(ushort *)(&UNK_003fcf4e + param_1) >> 0xb & 1) != 0) ||
           (*(short *)(&UNK_003fcf4e + param_1) < 0)) {
          uVar2 = 8;
        }
      }
      else {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  if ((&DAT_001d44b0)[(uint)(byte)(&CLAAAA)[uVar1] * 0xd] != '\0') {
    uVar2 = uVar2 | 0x80;
  }
  if ((*(ushort *)(&UNK_003fcf50 + param_1) >> 1 & 1) == 0) {
    if (((&UNK_003fde63)[uVar1 * 2] & 1) != 0) {
      uVar2 = uVar2 | 0x40;
    }
  }
  else if (((&UNK_003fde63)[uVar1 * 2] & 1) == 0) {
    uVar2 = uVar2 | 0x20;
  }
  else {
    uVar2 = uVar2 | 0x60;
  }
  if (((byte)(&UNK_003fde62)[uVar1 * 2] >> 5 & 1) == 0) {
    uVar2 = uVar2 | 0x10;
  }
  return uVar2;
}

