/*
 * Program: n42.bin
 * Function: FUN_000c3098
 * Entry: 000c3098
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c3098(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)_DAT_003faf70;
  if (uVar1 == 0) {
    uddssm_w = 0;
  }
  else {
    if ((uVar1 == 0) || (uVar1 = _DAT_003faf6c / uVar1, 0xffff < uVar1)) {
      uVar1 = 0xffff;
    }
    uddssm_w = (word)uVar1;
  }
  DAT_003faf72 = DAT_003faf72 & 0xfe | 1;
  iVar2 = (int)_DDSSOFS;
  uVar1 = FUN_000b167c(uddssm_w,_DDSSGRAD);
  iVar2 = (uVar1 >> 9) + iVar2;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  dpssyn_w = (word)iVar2;
  dpsd_w = FUN_000b24cc(&DAT_003faf78,(int)(short)dpssyn_w,_FKDPS);
  return;
}

