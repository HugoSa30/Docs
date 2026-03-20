/*
 * Program: n42.bin
 * Function: FUN_00105388
 * Entry: 00105388
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00105388(void)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 in_r6;
  undefined4 in_r7;
  undefined4 in_r8;
  int iVar4;
  uint uVar5;
  
  FUN_00104f20();
  iVar1 = FUN_00105cac(in_r6,in_r8,&DAT_003f9df8,in_r7,&DAT_003f9e40,0);
  if (iVar1 == -1) {
    uVar2 = 0xfffffffe;
  }
  else if (_DAT_003f9df8 == 4) {
    iVar1 = 0;
    do {
      uVar5 = *(uint *)(&UNK_003f9dfc + iVar1 * 4);
      pbVar3 = &UNK_003f9de7 + iVar1 * 4;
      iVar4 = 4;
      do {
        pbVar3 = pbVar3 + 1;
        if ((uint)*pbVar3 != (uVar5 & 0xff)) {
          return 0xffffffff;
        }
        uVar5 = uVar5 >> 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

