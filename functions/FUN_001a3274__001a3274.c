/*
 * Program: n42.bin
 * Function: FUN_001a3274
 * Entry: 001a3274
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a3274(void)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (DAT_00f07e5c != 0) {
    do {
      uVar1 = FUN_001a4358(uVar5);
      if ((uVar1 & 1) == 0) {
        bVar3 = *(byte *)(_DAT_003fae7c + uVar5) + 1;
        *(byte *)(_DAT_003fae7c + uVar5) = bVar3;
        bVar4 = *(byte *)(uVar5 * 8 + 0xf23308);
        if (bVar3 < bVar4) {
          bVar4 = *(byte *)(_DAT_003fae7c + uVar5);
        }
        *(byte *)(_DAT_003fae7c + uVar5) = bVar4;
      }
      else {
        *(char *)(_DAT_003fae7c + uVar5) = *(char *)(_DAT_003fae7c + uVar5) + -1;
        if (*(char *)(_DAT_003fae7c + uVar5) == '\0') {
          FUN_001a34d8(uVar5);
          (&DAT_003faf0c)[uVar5] = (&DAT_003faf0c)[uVar5] & 0xfe;
          *(undefined *)(_DAT_003fae7c + uVar5) = *(undefined *)(uVar5 * 8 + 0xf23308);
          uVar1 = 0;
        }
      }
      pcVar2 = *(code **)(uVar5 * 8 + 0xf2330c);
      if ((pcVar2 != (code *)0x0) && ((byte)(&UNK_003faf04)[uVar5] != uVar1)) {
        (*pcVar2)(uVar5,uVar1);
        (&UNK_003faf04)[uVar5] = (char)uVar1;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < DAT_00f07e5c);
  }
  return;
}

