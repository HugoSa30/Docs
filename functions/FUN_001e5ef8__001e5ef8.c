/*
 * Program: n42.bin
 * Function: FUN_001e5ef8
 * Entry: 001e5ef8
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001e5ef8(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  byte bVar3;
  
  puVar2 = *(ushort **)(param_1 * 4 + 0xfe8c44);
  bVar3 = 0;
  *puVar2 = *puVar2 | 0x4000;
  *puVar2 = *puVar2 & 0xefff;
  if ((*puVar2 >> 8 & 1) == 1) {
    do {
      *puVar2 = *puVar2 | 0x4000;
      *puVar2 = *puVar2 & 0xefff;
      bVar3 = bVar3 + 1;
      if (100 < bVar3) goto LAB_001e5f7c;
    } while ((*puVar2 >> 8 & 1) == 1);
    if (99 < bVar3) {
LAB_001e5f7c:
      (&DAT_003fb8c9)[param_1] = 1;
      return 0x85;
    }
  }
  bVar3 = 0;
  *puVar2 = *puVar2 | 0x4000;
  *puVar2 = *puVar2 | 0x1000;
  if ((*puVar2 >> 8 & 1) == 0) {
    do {
      *puVar2 = *puVar2 | 0x4000;
      *puVar2 = *puVar2 | 0x1000;
      bVar3 = bVar3 + 1;
      if (100 < bVar3) goto LAB_001e6008;
    } while ((*puVar2 >> 8 & 1) == 0);
    if (99 < bVar3) {
LAB_001e6008:
      (&DAT_003fb8c9)[param_1] = 2;
      return 0x85;
    }
  }
  uVar1 = 0;
  while( true ) {
    puVar2[uVar1 * 8 + 0x43] = 0x5555;
    if (puVar2[uVar1 * 8 + 0x43] != 0x5555) {
      DAT_003fb8c9 = (char)param_1 + '\x01';
      DAT_003fb8ca = (char)uVar1;
      DAT_003fb8cb = 1;
      DAT_003fb8cc = (char)(puVar2[uVar1 * 8 + 0x43] >> 8);
      DAT_003fb8cd = (char)puVar2[uVar1 * 8 + 0x43];
      return 0x87;
    }
    puVar2[uVar1 * 8 + 0x43] = 0xaaaa;
    if (puVar2[uVar1 * 8 + 0x43] != 0xaaaa) break;
    puVar2[uVar1 * 8 + 0x40] = 0;
    uVar1 = uVar1 + 1 & 0xff;
    if (0xf < uVar1) {
      return 0x40;
    }
  }
  DAT_003fb8c9 = (char)param_1 + '\x01';
  DAT_003fb8ca = (char)uVar1;
  DAT_003fb8cb = 2;
  DAT_003fb8cc = (char)(puVar2[uVar1 * 8 + 0x43] >> 8);
  DAT_003fb8cd = (char)puVar2[uVar1 * 8 + 0x43];
  return 0x87;
}

