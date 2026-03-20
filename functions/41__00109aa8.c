/*
 * Program: n42.bin
 * Function: 41
 * Entry: 00109aa8
 * Exported by: ExportAllDecompiledFunctions.java
 */


int _1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = 0;
  if (DAT_00f07e5c != 0) {
    do {
      iVar1 = _2(uVar4);
      if (iVar1 == 0) {
        iVar3 = 1;
      }
      uVar2 = (uint)DAT_00f07e5c;
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar2);
    if ((iVar3 == 1) && (uVar4 = 0, uVar2 != 0)) {
      do {
        (&UNK_003fae78)[uVar4] = (&UNK_003fae78)[uVar4] | 2;
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < uVar2);
    }
  }
  return iVar3;
}

