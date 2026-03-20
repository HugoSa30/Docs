/*
 * Program: n42.bin
 * Function: FUN_0013d4ac
 * Entry: 0013d4ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d4ac(double param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte *in_r6;
  undefined in_r7;
  int in_r8;
  undefined *unaff_r20;
  char *unaff_r21;
  uint unaff_r22;
  int unaff_r24;
  uint uVar4;
  int unaff_r25;
  int unaff_r27;
  int unaff_r29;
  int unaff_r30;
  undefined *unaff_r31;
  
  do {
    uVar4 = unaff_r22 & 0xff;
    iVar2 = uVar4 * 4;
    *(float *)(&UNK_003fd404 + iVar2) = (float)param_1;
    *(float *)(&UNK_003fd464 + iVar2) = (float)param_1;
    *(float *)(&UNK_003fd4c4 + iVar2) = (float)param_1;
    *(float *)(&UNK_003fd524 + iVar2) = (float)param_1;
    *(float *)(&DAT_003fd584 + iVar2) = (float)param_1;
    *(float *)(&DAT_003fd5e4 + iVar2) = (float)param_1;
    *(float *)(&DAT_003fd644 + iVar2) = (float)param_1;
    *(float *)(&DAT_003fd6a4 + iVar2) = (float)param_1;
    *(float *)(&UNK_003fd104 + iVar2) = -_DAT_001c1a48;
    *(float *)(&UNK_003fd164 + iVar2) = -_DAT_001c1a48;
    *(float *)(&UNK_003fd1c4 + iVar2) = -_DAT_001c1a48;
    *(float *)(&UNK_003fd224 + iVar2) = -_DAT_001c1a48;
    *(float *)(unaff_r27 + -0x2d7c + iVar2) = _DAT_001c1a48;
    *(float *)(unaff_r25 + iVar2) = _DAT_001c1a48;
    *(float *)(in_r8 + iVar2) = _DAT_001c1a48;
    *(float *)(unaff_r24 + iVar2) = _DAT_001c1a48;
    (&UNK_003fdb48)[uVar4] = in_r7;
    (&UNK_003fdb60)[uVar4] = in_r7;
    uVar3 = _DAT_0001bdd4;
    unaff_r22 = (unaff_r22 & 0xff) + 1;
    if (0xff < unaff_r22) {
      unaff_r22 = 0xff;
    }
  } while ((unaff_r22 & 0xff) < 0x18);
  uVar4 = 0;
  do {
    uVar1 = uVar4 & 0xff;
    (&UNK_003fdb78)[uVar1] = 0;
    *(undefined4 *)(unaff_r30 + uVar1 * 4) = uVar3;
    *(undefined *)(unaff_r29 + uVar1) = 0;
    uVar4 = (uVar4 & 0xff) + 1;
    if (0xff < uVar4) {
      uVar4 = 0xff;
    }
  } while ((uVar4 & 0xff) < 9);
  *unaff_r31 = (char)uVar4;
  fonstat = 2;
  DAT_005b9784 = _DAT_001c1a44;
  DAT_005b9786 = _ANWFOST;
  _DAT_003faa0c = _ANWFOST;
  if (0x7fff < _ANWFOST) {
    _DAT_003faa0c = 0x7fff;
  }
  *in_r6 = *in_r6 & 0xfe | 1;
  DAT_003fdb44 = 0;
  DAT_005b8daa = DAT_005b8daa & 0x81;
  *in_r6 = *in_r6 & 0xfd;
  DAT_003faa20 = 0;
  DAT_003faa10 = 0;
  DAT_003faa11 = 0;
  DAT_003faa0a = 0;
  DAT_003faa0b = 0;
  DAT_003faa28 = 0;
  DAT_003faa29 = 0;
  DAT_003faa12 = 0;
  DAT_003faa13 = 0;
  DAT_003faa2c = 0;
  DAT_003faa2d = 0;
  DAT_003faa08 = 0;
  DAT_003faa09 = 0;
  DAT_003faa2a = 0;
  DAT_003faa2b = 0;
  DAT_003faa0e = 0;
  DAT_003faa0f = 0;
  DAT_003faa14 = 0;
  DAT_003faa15 = 0;
  *in_r6 = *in_r6 & 0xfb;
  *unaff_r20 = 1;
  if (((*unaff_r21 != '\0') && (DAT_005b857d == '\0')) && (DAT_005b8cd0 == '\0')) {
    *unaff_r21 = '\0';
  }
  return;
}

