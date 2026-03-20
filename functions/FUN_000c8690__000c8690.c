/*
 * Program: n42.bin
 * Function: FUN_000c8690
 * Entry: 000c8690
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c8690(void)

{
  word wVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined uVar6;
  
  FUN_0009acb8(0x15);
  wVar1 = uadki;
  if (B_stend != '\0') {
    uVar2 = (uint)zzylkr;
    if ((uVar2 == 0) && (ztpnt_a != 0)) {
      ztpnt_a = ztpnt_a - 1;
    }
    uVar6 = (undefined)uadki;
    if (B_dtpb == '\0') {
      if (((B_dntb == '\0') || (B_dnt == '\0')) || (B_c95ks3 != '\0')) {
        (&UNK_003fc24c)[uVar2] = uVar6;
        uVar4 = (int)((int)(short)igokr_w * (uint)tmfl_w) >> 0x10;
        if ((int)uVar4 < -0x8000) {
          uVar4 = 0xffff8000;
        }
        else if (0x7fff < (int)uVar4) {
          uVar4 = 0x7fff;
        }
        if ((short)(ushort)DKROKMX < (short)uVar4) {
          uVar4 = (uint)DKROKMX;
        }
        else if ((short)uVar4 < (short)-(ushort)DKROKMX) {
          uVar4 = -(uint)DKROKMX;
        }
        uVar5 = (uint)ikrma;
        if (uVar5 < 0x31) {
          if (uVar5 < 0x19) {
            uVar5 = 0x19;
          }
        }
        else {
          uVar5 = 0x30;
        }
        uVar5 = uVar5 + (int)(char)uVar4;
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
        else if (0xff < (int)uVar5) {
          uVar5 = 0xff;
        }
        DAT_005b90e5 = (undefined)uVar5;
        iVar3 = (wVar1 & 0xff) - (uVar5 & 0xff);
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
        DAT_005b90e4 = (undefined)iVar3;
        (&UNK_003fc244)[uVar2] = DAT_005b90e4;
      }
      else {
        B_dntb = '\0';
        B_dnt = '\0';
        if (B_tpnt_e == '\0') {
          tpnt_aktiv = 3;
        }
        else {
          tpnt_aktiv = 2;
        }
        ikrma = DAT_003faf88;
        DAT_005b947c = tmfl_w;
        iVar3 = (uadki & 0xff) - (uint)DAT_003faf88;
        if (tmfl_w == 0) {
          if (iVar3 < 0) {
            iVar3 = -0x8000;
          }
          else {
            iVar3 = 0x7fff;
          }
        }
        else {
          iVar3 = (iVar3 * 0x10000) / (int)(uint)tmfl_w;
          if (iVar3 < -0x8000) {
            iVar3 = -0x8000;
          }
          else if (0x7fff < iVar3) {
            iVar3 = 0x7fff;
          }
        }
        if (nmot <= DAT_001c79cd) {
          igokr_w = (word)iVar3;
        }
        DAT_005b90e2 = uVar6;
        if (nmot <= DAT_001c79cb) {
          igod_w = (word)iVar3;
        }
      }
    }
    else if ((B_dtp == '\0') || ((AS_ksa3._0_1_ >> 2 & 1) != 0)) {
      (&UNK_003fc24c)[uVar2] = uVar6;
      uVar4 = (int)((int)(short)igokr_w * (uint)tmfl_w) >> 0x10;
      if ((int)uVar4 < -0x8000) {
        uVar4 = 0xffff8000;
      }
      else if (0x7fff < (int)uVar4) {
        uVar4 = 0x7fff;
      }
      if ((short)(ushort)DKROKMX < (short)uVar4) {
        uVar4 = (uint)DKROKMX;
      }
      else if ((short)uVar4 < (short)-(ushort)DKROKMX) {
        uVar4 = -(uint)DKROKMX;
      }
      uVar5 = (uint)ikrma;
      if (uVar5 < 0x31) {
        if (uVar5 < 0x19) {
          uVar5 = 0x19;
        }
      }
      else {
        uVar5 = 0x30;
      }
      uVar5 = uVar5 + (int)(char)uVar4;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0xff < (int)uVar5) {
        uVar5 = 0xff;
      }
      DAT_005b90e5 = (undefined)uVar5;
      iVar3 = (wVar1 & 0xff) - (uVar5 & 0xff);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      DAT_005b90e4 = (undefined)iVar3;
      (&UNK_003fc244)[uVar2] = DAT_005b90e4;
    }
    else {
      tpnt_aktiv = 1;
      B_dtp = '\0';
      B_dtpb = '\0';
      DAT_005b90e3 = uVar6;
    }
  }
  return;
}

