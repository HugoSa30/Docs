/*
 * Program: n42.bin
 * Function: FUN_0019ac14
 * Entry: 0019ac14
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0019b26c) */
/* WARNING: Removing unreachable block (ram,0x0019aea0) */
/* WARNING: Removing unreachable block (ram,0x0019b204) */
/* WARNING: Removing unreachable block (ram,0x0019b2b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019ac14(void)

{
  byte bVar1;
  undefined uVar3;
  uint uVar4;
  uint unaff_r31;
  uint uVar5;
  byte bVar2;
  
  if (B_autget == '\0') {
    dmrwan = 0;
    mdwan_w = 0;
    return;
  }
  if (gangi == 7) {
    B_rgang = '\x01';
  }
  else if ((gangi != 0) || (B_fsu == '\0')) {
    B_rgang = '\0';
  }
  if (B_rgang == '\0') {
    mdatxm_w = _DAT_003fb370;
    bVar1 = DAT_003fb36b;
    bVar2 = DAT_003fb36c;
  }
  else {
    mdatxm_w = _DAT_003fb372;
    bVar1 = DAT_003fb36d;
    bVar2 = DAT_003fb36e;
  }
  if (B_fs == '\0') {
    if (DAT_003fb381 < bVar1) {
      DAT_003fb381 = DAT_003fb381 + 1;
    }
    else {
      B_fsu = '\0';
    }
    DAT_003fb382 = 0;
  }
  else {
    if (DAT_003fb382 < bVar2) {
      DAT_003fb382 = DAT_003fb382 + 1;
    }
    else {
      B_fsu = '\x01';
    }
    DAT_003fb381 = 0;
  }
  if ((CNFMDWAN & 1) == 0) {
    bVar1 = mdwancan;
    if (B_mdwaner != '\0') {
      bVar1 = MDWANER;
    }
    unaff_r31 = (uint)bVar1 << 7;
    uVar4 = func_0xff2196d0(&DAT_001c8a54,vfzg,tmot);
    if ((uVar4 & 0xff) << 7 < unaff_r31) {
      uVar4 = func_0xff2196d0(&DAT_001c8a54,vfzg,tmot);
      unaff_r31 = (uVar4 & 0xff) << 7;
    }
    mdwanvf_w = (word)unaff_r31;
  }
  else {
    if ((B_fsu != '\0') || (B_fs != '\0')) {
      if ((CNFMDWAN & 2) == 0) {
        FUN_0019aa80();
        uVar4 = (int)((uint)nstat * 5) >> 1;
        if ((uVar4 == 0) || (uVar4 = nturbv_w / uVar4, 0xffff < uVar4)) {
          uVar4 = 0xffff;
        }
      }
      else {
        uVar4 = (int)((uint)nstat * 5) >> 1;
        if ((uVar4 == 0) || (uVar4 = nturbc_w / uVar4, 0xffff < uVar4)) {
          uVar4 = 0xffff;
        }
      }
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      qntns = (byte)uVar4;
      uVar5 = (uint)mdatxm_w;
      uVar4 = func_0xff2187cc(&DAT_001c8a44,uVar4 & 0xff);
      uVar4 = func_0xff22181c((uint)nstat * (uint)nstat,(uint)DAT_003fb36a * (uVar4 & 0xff));
      unaff_r31 = (uVar4 & 0xffff) + uVar5;
      if (0xffff < unaff_r31) {
        unaff_r31 = 0xffff;
      }
    }
    mdwanvf_w = mdatxm_w;
    if (B_fsu != '\0') {
      mdwanvf_w = (word)unaff_r31;
    }
    if (B_fs == '\0') {
      unaff_r31 = 0;
    }
  }
  if ((B_fsu == '\0') && (B_fs != '\0')) {
    B_dmrwan = '\x01';
  }
  else {
    B_dmrwan = '\0';
    uVar3 = ZKMDWAB;
    if (mdwan_w < mdwanvf_w) {
      uVar3 = ZKMDWAUF;
    }
    _DAT_003fb378 = func_0xff217f20(uVar3,mdwanvf_w,_DAT_003fb378,_DAT_003fb378 & 0xffff);
  }
  if (B_dmrwan == '\0') {
    if (B_fs != '\0') {
      if ((DAT_003fb386 & 1) == 0) goto LAB_0019b018;
      if (B_fs == '\0') goto LAB_0019b0c8;
      _DAT_003fb374 = func_0xff217f20((uint)ZKDMDW << 8,0,_DAT_003fb374,_DAT_003fb374 & 0xffff);
      goto LAB_0019b09c;
    }
LAB_0019b0c8:
    uVar4 = 0;
    DAT_003fb386 = DAT_003fb386 & 0xfe;
  }
  else {
LAB_0019b018:
    _DAT_003fb374 =
         ((uint)(byte)(&DAT_001d1c64)[esst_stm08mdub >> 0x10] +
          ((int)((esst_stm08mdub & 0xffff) *
                ((uint)(byte)(&DAT_001d1c65)[esst_stm08mdub >> 0x10] -
                (uint)(byte)(&DAT_001d1c64)[esst_stm08mdub >> 0x10])) >> 0x10) & 0xff) << 0x17;
LAB_0019b09c:
    if (B_fs == '\0') goto LAB_0019b0c8;
    uVar4 = _DAT_003fb374 >> 0x10;
    DAT_003fb386 = DAT_003fb386 | 1;
  }
  if (B_mdwaner == '\0') {
    if (2 < DAT_003fb380) {
      _DAT_003fb37c =
           func_0xff217f20((uint)ZKMDWF << 8,mdwanvf_w,_DAT_003fb37c,_DAT_003fb37c & 0xffff);
      goto LAB_0019b158;
    }
    DAT_003fb380 = DAT_003fb380 + 1;
  }
  else {
    DAT_003fb380 = 0;
  }
  _DAT_003fb37c = (uint)mdwanvf_w << 0x10;
LAB_0019b158:
  uVar5 = (uint)mdwanvf_w - (_DAT_003fb37c >> 0x10);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  uVar5 = (uVar5 & 0xffff) * (uint)FVDMDWAN >> 5;
  if (0xffff < uVar5) {
    uVar5 = 0xffff;
  }
  uVar5 = (uVar5 & 0xffff) + (uint)DMDWHYS * -0x80;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  uVar4 = uVar4 + (uVar5 & 0xffff);
  if (0xffff < uVar4) {
    uVar4 = 0xffff;
  }
  dmdwan_w = (word)uVar4;
  if (B_fsu == '\0') {
    mdwan_w = _DAT_003fb378;
  }
  else {
    uVar5 = (uint)_DAT_003fb378;
    uVar4 = func_0xff2217f4(uVar4 & 0xffff,(uint)FDMDWAN << 8);
    uVar5 = (uVar4 & 0xffff) + uVar5;
    if (0xffff < uVar5) {
      uVar5 = 0xffff;
    }
    mdwan_w = (word)uVar5;
  }
  uVar4 = (unaff_r31 & 0xffff) + (uint)dmdwan_w;
  if (0xffff < uVar4) {
    uVar4 = 0xffff;
  }
  uVar4 = (uVar4 & 0xffff) - (uint)mdwan_w;
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  else if (0xffff < (int)uVar4) {
    uVar4 = 0xffff;
  }
  dmrwan = (byte)(uVar4 >> 7);
                    /* WARNING: Read-only address (ram,0x005b9cf8) is written */
  return;
}

