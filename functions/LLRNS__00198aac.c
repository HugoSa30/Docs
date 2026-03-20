/*
 * Program: n42.bin
 * Function: LLRNS
 * Entry: 00198aac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00199228) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LLRNS(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (B_nswo1 != '\0') {
    dns = 0;
    B_fallsa = '\0';
    goto LAB_0019957c;
  }
  if ((nsolfa - 0x28 < 0xd3) &&
     ((((B_autget == '\0' || ((B_pn == '\0' && (B_egs1cok != '\0')))) && (B_ll != '\0')) &&
      ((B_kuppl == '\0' && (B_falls != '\0')))))) {
    B_fallsa = true;
  }
  else {
    B_fallsa = false;
  }
  if (((B_lltd != 0) && (B_gd == '\0')) && (_MINHUBTDNS < minhub_w)) {
    B_lltdff = '\x01';
  }
  if (B_ll == '\0') {
    B_lltdff = '\0';
  }
  if (B_fs == '\0') {
    uVar2 = (uint)nllkh;
    if (uVar2 < DAT_003fb330) {
      uVar2 = (uint)DAT_003fb330;
    }
    if (B_nac != '\0') {
      uVar5 = (uint)NSAC + (int)dnsacmv;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0xff < (int)uVar5) {
        uVar5 = 0xff;
      }
      if (uVar2 < (uVar5 & 0xff)) {
        uVar2 = (uint)NSAC + (int)dnsacmv;
        if ((int)uVar2 < 0) {
          uVar2 = 0;
        }
        else if (0xff < (int)uVar2) {
          uVar2 = 0xff;
        }
        uVar2 = uVar2 & 0xff;
      }
    }
    if ((B_fhz != '\0') && (uVar2 < NFHZ)) {
      uVar2 = (uint)NFHZ;
    }
    if ((B_nftev != '\0') && (uVar2 < NTEB)) {
      uVar2 = (uint)NTEB;
    }
    if ((B_nnot != '\0') && (uVar2 < NSNOT)) {
      uVar2 = (uint)NSNOT;
    }
    if (((B_dkpu != '\0') || (B_dknolu != '\0')) && (uVar2 < NSNOT1)) {
      uVar2 = (uint)NSNOT1;
    }
    if ((B_oelh != '\0') && (uVar2 < NSOELH)) {
      uVar2 = (uint)NSOELH;
    }
    if ((B_gdvhub != 0) && (uVar2 < NSMNGD)) {
      uVar2 = (uint)NSMNGD;
    }
    if ((B_lltdff != '\0') && (uVar2 < NSMNTD)) {
      uVar2 = (uint)NSMNTD;
    }
    if (((B_fakat != '\0') || (B_fakat2 != '\0')) && (uVar2 < NSKAT)) {
      uVar2 = (uint)NSKAT;
    }
    if ((B_HLSKW != '\0') && (uVar2 < NSHLS)) {
      uVar2 = (uint)NSHLS;
    }
    nsllmn = (undefined)uVar2;
    if (uVar2 < nsllm) {
      uVar2 = (uint)nsllm + (int)vsns;
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      else if (0xff < (int)uVar2) {
        uVar2 = 0xff;
      }
    }
    else {
      uVar2 = uVar2 + (int)vsns;
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      else if (0xff < (int)uVar2) {
        uVar2 = 0xff;
      }
    }
  }
  else {
    uVar2 = (uint)nfskh;
    if (uVar2 < DAT_003fb331) {
      uVar2 = (uint)DAT_003fb331;
    }
    if (B_nac != '\0') {
      uVar5 = (uint)NSACFS + (int)dnfsacmv;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0xff < (int)uVar5) {
        uVar5 = 0xff;
      }
      if (uVar2 < (uVar5 & 0xff)) {
        uVar2 = (uint)NSACFS + (int)dnfsacmv;
        if ((int)uVar2 < 0) {
          uVar2 = 0;
        }
        else if (0xff < (int)uVar2) {
          uVar2 = 0xff;
        }
        uVar2 = uVar2 & 0xff;
      }
    }
    if ((B_fhz != '\0') && (uVar2 < NFHZFS)) {
      uVar2 = (uint)NFHZFS;
    }
    if ((B_nftev != '\0') && (uVar2 < NTEBFS)) {
      uVar2 = (uint)NTEBFS;
    }
    if ((B_nnot != '\0') && (uVar2 < NSNOTFS)) {
      uVar2 = (uint)NSNOTFS;
    }
    if (((B_dkpu != '\0') || (B_dknolu != '\0')) && (uVar2 < NSNOT1FS)) {
      uVar2 = (uint)NSNOT1FS;
    }
    if ((B_oelh != '\0') && (uVar2 < NSOELHFS)) {
      uVar2 = (uint)NSOELHFS;
    }
    if ((B_gdvhub != 0) && (uVar2 < NSMNGDFS)) {
      uVar2 = (uint)NSMNGDFS;
    }
    if ((B_lltdff != '\0') && (uVar2 < NSMNTDFS)) {
      uVar2 = (uint)NSMNTDFS;
    }
    if ((B_HLSKW != '\0') && (uVar2 < NSFSHLS)) {
      uVar2 = (uint)NSFSHLS;
    }
    nsfsmn = (undefined)uVar2;
    if (uVar2 < nsfsm) {
      uVar2 = (uint)nsfsm + (int)vsns;
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      else if (0xff < (int)uVar2) {
        uVar2 = 0xff;
      }
    }
    else {
      uVar2 = uVar2 + (int)vsns;
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      else if (0xff < (int)uVar2) {
        uVar2 = 0xff;
      }
    }
  }
  if ((B_stend == '\0') || ((B_fs != '\0' && ((DAT_003fb33a & 1) == 0)))) {
    _DAT_003fb338 = (undefined2)((uVar2 & 0xff) << 8);
    if ((bool)B_fallsa) {
      nstat = nsolfa;
    }
    else {
      nstat = (byte)uVar2;
    }
  }
  else {
    _DAT_003fb338 = func_0xff217fe8((uint)ZKNS << 8,uVar2 & 0xff,_DAT_003fb338);
    if (B_fallsa == '\0') {
      if (vfzgv1_w < _FWVFZG) {
LAB_00199184:
        nstat = (byte)((ushort)_DAT_003fb338 >> 8);
      }
      else {
        if (gangauti == 7) {
          if (stvfzg != '\x01') {
LAB_00199140:
            if ((((gangauti != 2) && (gangauti != 3)) && (gangauti != 4)) &&
               ((gangauti != 5 && (gangauti != 6)))) goto LAB_00199184;
            goto LAB_00199168;
          }
        }
        else {
          if (gangauti != 1) goto LAB_00199140;
LAB_00199168:
          if (stvfzg != '\x02') goto LAB_00199184;
        }
        nstat = NSFSR;
      }
    }
    else {
      nstat = nsolfa;
    }
  }
  uVar2 = ((int)((uint)nmotll *
                (((int)(((uint)_FNSNFT - (uint)FNSNF) * (uint)dpsfak) >> 8) + (uint)FNSNF & 0xff))
          >> 8) - (((int)(((uint)KNSNFT - (uint)KNSNF) * (uint)dpsfak) >> 8) + (uint)KNSNF & 0xff);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  uVar5 = (uint)nstat;
  uVar4 = uVar5 + DNSNFX;
  if (0xff < uVar4) {
    uVar4 = 0xff;
  }
  if ((uVar4 & 0xff) < (uVar2 & 0xff)) {
    uVar2 = uVar4;
  }
  nsnf = (undefined)uVar2;
  if (uVar5 < (uVar2 & 0xff)) {
    if ((((uint)nsol < (uVar2 & 0xff)) && ('\0' < (char)ngfil)) && (NGNSNF < ngfil)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
    uVar2 = uVar5;
  }
  if (B_llrein == '\0') {
    if (B_gd == '\0') {
      uVar5 = func_0xff2187cc(&FNSSTM,tmot);
      uVar5 = (uint)nstat * (uVar5 & 0xff) * 2;
      if (0xfffe < uVar5) {
        uVar5 = 0xffff;
      }
      nsst = (byte)(uVar5 >> 8);
    }
    else {
      uVar5 = func_0xff2187cc(&FNSSTMT,tmot);
      uVar5 = (uint)nstat * (uVar5 & 0xff) * 2;
      if (0xfffe < uVar5) {
        uVar5 = 0xffff;
      }
      nsst = (byte)(uVar5 >> 8);
    }
  }
  else if (B_gd == '\0') {
    uVar5 = func_0xff2187cc(&FNSSTM,tmot);
    uVar5 = (uVar2 & 0xff) * (uVar5 & 0xff) * 2;
    if (0xfffe < uVar5) {
      uVar5 = 0xffff;
    }
    nsst = (byte)(uVar5 >> 8);
  }
  else {
    uVar5 = func_0xff2187cc(&FNSSTMT,tmot);
    uVar5 = (uVar2 & 0xff) * (uVar5 & 0xff) * 2;
    if (0xfffe < uVar5) {
      uVar5 = 0xffff;
    }
    nsst = (byte)(uVar5 >> 8);
  }
  if (B_llrein == '\0') {
    _DAT_003fb334 = (ushort)nsst << 8;
  }
  else if (bVar1) {
    _DAT_003fb334 = (short)((uVar2 & 0xff) << 8);
  }
  else if (B_gd == '\0') {
    _DAT_003fb334 = func_0xff217fe8((uint)DAT_003fb332 << 8,uVar2 & 0xff,_DAT_003fb334);
  }
  else {
    _DAT_003fb334 = func_0xff217fe8((uint)DAT_003fb333 << 8,uVar2 & 0xff,_DAT_003fb334);
  }
  nsol_w = func_0xff2217f4(_DAT_003fb334,0x2800);
  nsol = DAT_003fb334;
  iVar3 = (uint)nstat - (uint)nmotll;
  if (iVar3 < -0x80) {
    iVar3 = -0x80;
  }
  else if (0x7f < iVar3) {
    iVar3 = 0x7f;
  }
  dns = (byte)iVar3;
  esst_sns06llsb = func_0xff21b184(&DAT_001c84d4,(int)(char)dns);
  esst_sns06lltsb = func_0xff21b184(&DAT_001c84dc,(int)(char)dns);
  B_nivns = nstat < NSMNEGS;
LAB_0019957c:
  if (B_fs == '\0') {
    DAT_003fb33a = DAT_003fb33a & 0xfe;
  }
  else {
    DAT_003fb33a = DAT_003fb33a | 1;
  }
  return;
}

