/*
 * Program: n42.bin
 * Function: LLRBB
 * Entry: 00198634
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00198a30) */

void LLRBB(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (B_nmot == '\0') {
    B_llrein = '\0';
  }
  else {
    iVar3 = (int)(short)dmllri_w + (uint)(mill_w >> 1);
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    if ((short)((ushort)mistt << 7) <= (short)iVar3) {
      B_llrein = '\x01';
    }
  }
  if (B_kuppl == '\0') {
    DAT_005b8279 = DAT_001c8473;
  }
  else if (DAT_005b8279 != '\0') {
    DAT_005b8279 = DAT_005b8279 + -1;
  }
  if (((((B_kuppl == '\0') || (DAT_005b8279 != '\0')) && (gangi != 0)) ||
      ((B_fs != '\0' || ((DAT_001c8470 & 1) != 0)))) && (DAT_001c84b1 < vfzg)) {
    B_vllr = 1;
  }
  else {
    B_vllr = 0;
  }
  if (B_ll == '\0') {
    B_llr = '\0';
    DAT_005b8278 = DAT_001c8472;
  }
  else {
    if (DAT_005b8278 != '\0') {
      DAT_005b8278 = DAT_005b8278 + -1;
    }
    if ((((B_sa == '\0') && (B_sab == '\0')) && ((B_dash == '\0' && (B_fil == '\0')))) &&
       ((DAT_005b8278 == '\0' || (-1 < (char)dn)))) {
      B_llr = '\x01';
    }
    else {
      B_llr = '\0';
    }
  }
  if ((char)dn < '\0') {
    DAT_005b827c = DAT_005b827c & 0xfd | 2;
  }
  if (B_gd == '\0') {
    bVar1 = func_0xff2187cc(&DAT_001c8494,tmot);
  }
  else {
    bVar1 = func_0xff2187cc(&DAT_001c84a4,tmot);
  }
  if (B_llrein == '\0') {
    DAT_005b827c = DAT_005b827c & 0xfe;
    DAT_005b827a = 0;
    B_llrpd = 0;
  }
  else {
    if (DAT_005b827a < bVar1) {
      DAT_005b827a = DAT_005b827a + 1;
      DAT_005b827c = DAT_005b827c & 0xfe;
    }
    else {
      DAT_005b827c = DAT_005b827c & 0xfe | 1;
    }
    if (((((DAT_005b827c >> 1 & 1) == 0) && ((DAT_005b827c & 1) == 0)) ||
        ((B_llr == '\0' && ((char)dn < '\0')))) || (B_mdein != '\0')) {
      B_llrpd = 0;
    }
    else {
      B_llrpd = 1;
    }
  }
  if (B_gd == '\0') {
    bVar1 = func_0xff2187cc(&TVLLRI,tmot);
  }
  else {
    bVar1 = func_0xff2187cc(&TVLLRIT,tmot);
  }
  if ((B_stend == '\0') && (B_llrein == '\0')) {
    DAT_005b827b = 0;
    B_llri = 0;
  }
  else if (DAT_005b827b < bVar1) {
    DAT_005b827b = DAT_005b827b + 1;
  }
  else {
    if (((B_llr != '\0') || (-1 < (char)dn)) && (B_mdein == '\0')) {
      uVar2 = (uint)nstat + (uint)DNLLR;
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      if ((uint)nmotll < (uVar2 & 0xff)) {
        B_llri = 1;
        return;
      }
    }
    B_llri = 0;
  }
  return;
}

