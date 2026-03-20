/*
 * Program: n42.bin
 * Function: FUN_001a54d8
 * Entry: 001a54d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_001a54d8(void)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = 2;
  if (DAT_005baa09 != 0) {
    do {
      if ((bVar1 & DAT_005baa0a) != 0) {
        return uVar2 & 0xff;
      }
      bVar1 = bVar1 * '\x02';
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)(uint)DAT_005baa09);
  }
  return (uint)DAT_005baa09;
}

