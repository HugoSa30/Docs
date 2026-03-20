/*
 * Program: n42.bin
 * Function: FUN_0013a1dc
 * Entry: 0013a1dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013a1dc(void)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = 0;
  pbVar3 = (byte *)0x1c22b;
  do {
    pbVar3 = pbVar3 + 1;
    if ((char)(&UNK_003fde63)[(uint)*pbVar3 * 2] < '\0') {
      (&DAT_003fab54)[uVar4] = 0;
      cVar1 = (&DAT_001c1d80)[uVar4];
      iVar2 = uVar4 * 3;
      (&UNK_003fab48)[iVar2] = 0;
      (&UNK_003fab49)[iVar2] = 0;
      (&UNK_003fab4a)[iVar2] = 0;
      if (cVar1 != '\0') {
        FUN_001aa708(*(undefined *)(uVar4 + 0x1c230));
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return;
}

