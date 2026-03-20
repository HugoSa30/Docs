/*
 * Program: n42.bin
 * Function: FUN_00176d30
 * Entry: 00176d30
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00176d30(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ushort local_38;
  undefined2 local_34;
  
  uVar5 = (uint)fslpdyn * (uint)fmsldyn;
  if (0xfffe < uVar5) {
    uVar5 = 0xffff;
  }
  fslsdyn = (byte)(uVar5 >> 8);
  if (IMLLASKH <= imlpr) {
    DAT_005bb988 = func_0xff217fe8((uint)ZFLASKH << 8,0xff,DAT_005bb988);
    flaskh = (byte)((ushort)DAT_005bb988 >> 8);
  }
  uVar5 = (uint)flaskh * (uint)flmssl;
  if (0xfffe < uVar5) {
    uVar5 = 0xffff;
  }
  flmsslkh = (byte)(uVar5 * fslsdyn >> 0x10);
  if (((CWLAKH & 2) == 0) || (TMSTLMS <= tmst)) {
    if (((CWLAKH & 4) == 0) || ((B_fs == '\0' || (B_nstabk != '\0')))) {
      uVar4 = 0xffff8000;
    }
    else {
      uVar4 = 0x7fff;
    }
    DAT_005bb98a = func_0xff217c10((uint)TFWLMKHKST << 8,uVar4,(int)DAT_005bb98a,0,0x7fff);
    fwlmkhkst = (byte)(DAT_005bb98a >> 7);
  }
  else {
    fwlmkhkst = 0xff;
  }
  if (fwlmkhkst == 0xff) {
    uVar5 = func_0xff21984c(&DAT_001d128c,nmot_w,_rl_w);
  }
  else {
    if ((B_sls == '\0') && (fslsdyn != 0xff)) {
      if (fslsdyn == 0) {
        uVar5 = func_0xff21984c(&DAT_001d1330,nmot_w,_rl_w);
      }
      else {
        uVar5 = func_0xff21984c(&DAT_001d1330,nmot_w,_rl_w);
        uVar1 = func_0xff21984c(&DAT_001d13d4,nmot_w,_rl_w);
        iVar6 = (uVar1 & 0xffff) - (uVar5 & 0xffff);
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        uVar5 = (uVar5 & 0xffff) + (int)(short)((int)(short)iVar6 * (uint)fslsdyn >> 8);
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
        else if (0xffff < (int)uVar5) {
          uVar5 = 0xffff;
        }
      }
    }
    else {
      uVar5 = func_0xff21984c(&DAT_001d13d4,nmot_w,_rl_w);
    }
    if (fwlmkhkst != 0) {
      uVar1 = func_0xff21984c(&DAT_001d128c,nmot_w,_rl_w);
      iVar6 = (uVar1 & 0xffff) - (uVar5 & 0xffff);
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      uVar5 = (uVar5 & 0xffff) + (int)(short)((int)(short)iVar6 * (uint)fwlmkhkst >> 8);
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0xffff < (int)uVar5) {
        uVar5 = 0xffff;
      }
    }
  }
  uVar1 = func_0xff2187cc(&DAT_001d112c,tmot);
  uVar5 = (uVar5 & 0xffff) * (uVar1 & 0xff);
  local_38 = (ushort)(uVar5 >> 0x10);
  if (local_38 < 0x80) {
    uVar5 = uVar5 >> 7;
  }
  else {
    uVar5 = 0xffff;
  }
  uVar2 = func_0xff2189bc(&KLLAKHFH,fho_w);
  lmskh_w = func_0xff221800(uVar5 & 0xffff,uVar2);
  uVar5 = func_0xff2187cc(&DAT_001d1120,tmot);
  uVar2 = func_0xff21984c(&DAT_001d11e8,nmot_w,_rl_w);
  uVar2 = func_0xff221800(uVar2,(uVar5 & 0xff) << 8);
  uVar3 = func_0xff2189bc(&KLLAKHFH,fho_w);
  laskh_w = func_0xff221800(uVar2,uVar3);
  uVar5 = (uint)laskh_w << 0xc;
  local_34 = (undefined2)(uVar5 >> 0x10);
  lmssl_w = func_0xff217b40(local_34,uVar5 & 0xffff,flamsl_w);
  lmssl2_w = func_0xff217b40(local_34,uVar5 & 0xffff,flamsl2_w);
  uVar5 = (uint)lmskh_w;
  iVar6 = lmssl_w - uVar5;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  uVar1 = uVar5 + (int)(short)((int)(short)iVar6 * (uint)flmsslkh >> 8);
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  lamkhr_w = (word)uVar1;
  iVar6 = lmssl2_w - uVar5;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  uVar5 = uVar5 + (int)(short)((int)(short)iVar6 * (uint)flmsslkh >> 8);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  lamkhr2_w = (word)uVar5;
  iVar6 = (uVar1 & 0xffff) - 0x1000;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  iVar6 = (int)((int)(short)iVar6 * (uint)flakh * 0x100) >> 0x10;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  iVar6 = (short)iVar6 + 0x1000;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (0xffff < iVar6) {
    iVar6 = 0xffff;
  }
  lamkhg_w = (word)iVar6;
  iVar6 = (uVar5 & 0xffff) - 0x1000;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  iVar6 = (int)((int)(short)iVar6 * (uint)flakh * 0x100) >> 0x10;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  iVar6 = (short)iVar6 + 0x1000;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (0xffff < iVar6) {
    iVar6 = 0xffff;
  }
  lamkhg2_w = (word)iVar6;
  if ((B_kh == '\0') && ((B_dslafa & 1) == 0)) {
    B_lamkhe = 1;
  }
  else {
    B_lamkhe = 0;
  }
  if ((CWLAKH & 1) == 0) {
    lasdslg_w = 0x1000;
  }
  else {
    uVar5 = func_0xff2189bc(0x1d148a,_ml_w);
    iVar6 = (uVar5 & 0xffff) - 0x1000;
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    iVar6 = (int)((int)(short)iVar6 * (uint)fslsdyn * 0x100) >> 0x10;
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    uVar5 = (int)(short)iVar6 + 0x1000;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    else if (0xffff < (int)uVar5) {
      uVar5 = 0xffff;
    }
    lasdsl_w = (word)uVar5;
    uVar5 = (uVar5 & 0xffff) << 0xc;
    local_34 = (undefined2)(uVar5 >> 0x10);
    lasdslg_w = func_0xff217b40(local_34,uVar5 & 0xffff,flamsl_w);
    lasdslg2_w = func_0xff217b40(local_34,uVar5 & 0xffff,flamsl2_w);
  }
  return;
}

