/*
 * Program: n42.bin
 * Function: FUN_000c3ea4
 * Entry: 000c3ea4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c3ea4(void)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (uint)zzyl;
  kt_zuen_zkvek = zzyl;
  if ((B_llrein == '\0') || (DAT_003fb0a9 != '\0')) {
    DAT_003fb0a8 = zwoutar;
  }
  else {
    DAT_003fb0a9 = '\x01';
  }
  if (B_ff == '\0') {
    if (DAT_003fb0a7 != '\0') {
      uVar6 = 0;
      do {
        (*(code *)&SUB_000682ac)(0,0,0,uVar6 & 0xff);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 4);
      DAT_003fb0a7 = '\0';
    }
    if (DAT_003fb0a9 == '\x01') {
      (*(code *)&SUB_00068248)((int)(short)((short)(char)DAT_003fb0a8 * 0xf >> 1),szout_w,uVar4);
      DAT_003fb0a9 = DAT_003fb0a9 + '\x01';
    }
    else {
      (*(code *)&SUB_00068248)((int)(short)((short)(char)zwoutar * 0xf >> 1),szout_w,uVar4);
    }
    bVar1 = *(byte *)(uVar4 + 0x1ca68);
    (*(code *)&SUB_00068248)((int)(short)((short)DAT_005b9215 * 0xf >> 1),szout_w,(uint)bVar1);
    uVar4 = (uint)*(byte *)(bVar1 + 0x1ca68);
    (*(code *)&SUB_00068248)((int)(short)((short)DAT_005b9216 * 0xf >> 1),szout_w,uVar4);
    (*(code *)&SUB_00068248)
              ((int)(short)((short)DAT_005b9217 * 0xf >> 1),szout_w,*(undefined *)(uVar4 + 0x1ca68))
    ;
  }
  else {
    DAT_003fb0a7 = '\x01';
    if (DAT_003fb0a9 == '\x01') {
      (*(code *)&SUB_00068248)((int)(short)((short)(char)DAT_003fb0a8 * 0xf >> 1),szout_w,uVar4);
      (*(code *)&SUB_000682ac)(ffzanz,ffztof_w,ffztld_w,uVar4);
      DAT_003fb0a9 = DAT_003fb0a9 + '\x01';
    }
    else {
      (*(code *)&SUB_00068248)((int)(short)((short)(char)zwoutar * 0xf >> 1),szout_w,uVar4);
      (*(code *)&SUB_000682ac)(ffzanz,ffztof_w,ffztld_w,uVar4);
    }
    uVar4 = (uint)*(byte *)(uVar4 + 0x1ca68);
    (*(code *)&SUB_00068248)((int)(short)((short)DAT_005b9215 * 0xf >> 1),szout_w,uVar4);
    (*(code *)&SUB_000682ac)(ffzanz,ffztof_w,ffztld_w,uVar4);
    uVar4 = (uint)*(byte *)(uVar4 + 0x1ca68);
    (*(code *)&SUB_00068248)((int)(short)((short)DAT_005b9216 * 0xf >> 1),szout_w,uVar4);
    (*(code *)&SUB_000682ac)(ffzanz,ffztof_w,ffztld_w,uVar4);
    uVar2 = *(undefined *)(uVar4 + 0x1ca68);
    (*(code *)&SUB_00068248)((int)(short)((short)DAT_005b9217 * 0xf >> 1),szout_w,uVar2);
    (*(code *)&SUB_000682ac)(ffzanz,ffztof_w,ffztld_w,uVar2);
  }
  uVar4 = (uint)kt_zuen_lastzzyl;
  uVar6 = 1 << (uVar4 & 0x3f);
  if ((flgstign_w & uVar6) == 0) {
    if ((ignFadeStatBits & 0x10) != 0) {
      if ((ignFadeStatBits & 0xef) == 0) {
        kt_zuen_fdReq_u16 = 0x6565;
      }
      DAT_005b8e7c = DAT_005b8e7c & ~(byte)(1 << (uVar4 & 0x3f));
      ignFadeStatBits = ignFadeStatBits & 0xef;
      FUN_000c3c74();
    }
  }
  else {
    ignFadeStatBits = ignFadeStatBits | 0x10;
    if (ignFadeStatBits != 0) {
      kt_zuen_fdReq_u16 = 0x9a9a;
    }
    DAT_005b8e7c = (byte)(1 << (uVar4 & 0x3f)) | DAT_005b8e7c;
    FUN_000c3c74();
  }
  uVar3 = (uint)ignStpStat;
  uVar5 = uVar3 & uVar6;
  if (uVar5 == 0) {
    ignfdostat = ignfdostat & ~(byte)(1 << (uVar4 & 0x3f));
  }
  else {
    ignfdostat = ignfdostat | (byte)(1 << (uVar4 & 0x3f));
  }
  if (kt_zuen_fdReq_u16 == 0x9a9a) {
    if (kt_zuen_fdOutPattern_u8 == 0xff) {
      (*(code *)&SUB_00fb0aa4)(kt_zuen_lastzkvek);
      ignStpStat = ignStpStat | (byte)(1 << (kt_zuen_lastzzyl & 0x3f));
    }
    else if ((kt_zuen_fdOutPattern_u8 & uVar6) == 0) {
      if ((uVar5 != 0) && (2 < synstate)) {
        (*(code *)&SUB_00fb0ba0)(kt_zuen_lastzkvek);
        ignStpStat = ignStpStat & ~(byte)(1 << (kt_zuen_lastzzyl & 0x3f));
      }
    }
    else {
      (*(code *)&SUB_00fb0aa4)(kt_zuen_lastzkvek);
      ignStpStat = ignStpStat | (byte)(1 << (kt_zuen_lastzzyl & 0x3f));
    }
  }
  else if ((uVar3 != 0) && (2 < synstate)) {
    if (uVar3 == 0xff) {
      (*(code *)&SUB_00fb0cc0)();
      ignStpStat = 0;
    }
    else if (uVar5 != 0) {
      (*(code *)&SUB_00fb0ba0)(kt_zuen_lastzkvek);
      ignStpStat = ignStpStat & ~(byte)(1 << (kt_zuen_lastzzyl & 0x3f));
    }
  }
  kt_zuen_lastzkvek = kt_zuen_zkvek;
  kt_zuen_lastzzyl = zzyl;
  return;
}

