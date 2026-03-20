/*
 * Program: n42.bin
 * Function: FUN_000f59dc
 * Entry: 000f59dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000f59dc(short *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_3 * 0x70;
  if ((&UNK_003fc44a)[iVar4] == '\x01') {
    iVar4 = -2;
  }
  else if (param_3 < 4) {
    if (*(int *)(&UNK_003fc44c + iVar4) == 6) {
      (&UNK_003fc449)[iVar4] = 0;
      *param_1 = (short)(char)(&UNK_003fc453)[iVar4];
      param_1 = param_1 + 1;
      if (8 < param_2) {
        param_2 = 8;
      }
      iVar3 = (int)*(short *)(&UNK_003fc446 + iVar4);
      uVar2 = 0;
      if ((0 < param_2) && (bVar1 = (&UNK_003fc448)[iVar4], bVar1 != 0)) {
        do {
          if (iVar3 < 0) {
            iVar3 = 7;
          }
          *param_1 = *(short *)(&UNK_003fc436 + iVar4 + iVar3 * 2);
          param_1 = param_1 + 1;
          iVar3 = iVar3 + -1;
          uVar2 = uVar2 + 1 & 0xffff;
        } while (((int)uVar2 < param_2) && (uVar2 < bVar1));
      }
      iVar4 = (int)(char)uVar2;
    }
    else {
      iVar4 = -1;
    }
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}

