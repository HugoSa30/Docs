/*
 * Program: n42.bin
 * Function: FUN_000ca140
 * Entry: 000ca140
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_000ca140(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short sVar11;
  int iVar10;
  uint uVar12;
  
  bVar1 = tpnt_aktiv;
  if (DAT_001c8165 == '\0') {
    B_zwkraa = DAT_003fc278 & (byte)(1 << (zzylkr & 0x3f));
  }
  else {
    B_zwkraa = 1;
  }
  iVar7 = (uint)stkrnx * 8 + (uint)DAT_005b9132 * 0x28;
  if (B_ll != '\0') {
    iVar7 = 0xa0;
  }
  if (tpnt_aktiv == 0) {
    DAT_003fb16a = DAT_003fb169;
    if (((B_krldy == '\0') && (B_krldya == '\0')) && (B_krndy == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((((DAT_003fc08b != '\0') && (!bVar4)) || ((!bVar4 && (DAT_003fb169 != '\0')))) ||
       ((DAT_003fc085 == '\0' && (DAT_003fb168 != '\0')))) {
      DAT_003fc08d = '\x01';
    }
    DAT_003fb169 = bVar4;
    if (DAT_003fc08b != '\0') {
      uVar12 = 0;
      do {
        if ((CWZWDYN & 0x10) == 0) {
          (&UNK_003fc268)[uVar12] = DAT_001c816b;
        }
        else {
          (&UNK_003fc268)[uVar12] = (&UNK_003fd704)[uVar12 + iVar7];
        }
        uVar8 = uVar12 + 1;
        uVar12 = uVar8 & 0xff;
      } while (uVar12 < 4);
      DAT_003fb170 = (byte)uVar8;
      DAT_003fc08b = '\0';
      DAT_003fb16b = '\x01';
    }
  }
  if (B_kr == '\0') {
LAB_000caa44:
    DAT_003fb174 = 0;
  }
  else {
    if ((B_krdws == '\0') && (bVar1 == 0)) {
      uVar12 = (uint)zzylkr;
      DAT_003fb175 = (&UNK_003fd704)[uVar12 + iVar7];
      DAT_003fb174 = (&UNK_003fc268)[uVar12];
      if ((B_kl != '\0') || (DAT_003fb169 != '\0')) {
        DAT_003fc08d = '\0';
      }
      DAT_003fc088 = '\0';
      DAT_003fc087 = '\0';
      uVar8 = (uint)ksa;
      if (uVar8 != 0xff) {
        DAT_003fb170 = 1;
        if ((&UNK_003fb176)[ksdefa] != 0) {
          DAT_003fb170 = 1;
          do {
            if ((byte)(&UNK_003fb176)[(uint)ksdefa + (uint)DAT_003fb170 * 4] == uVar12) {
              DAT_003fc087 = '\x01';
            }
            DAT_003fb170 = DAT_003fb170 + 1;
          } while (DAT_003fb170 <= (byte)(&UNK_003fb176)[ksdefa]);
        }
      }
      if (DAT_003fc087 != '\0') {
        DAT_005b8ea5 = 0;
        DAT_003fb170 = 1;
        bVar1 = (&UNK_003fb176)[uVar8];
        if (bVar1 != 0) {
          DAT_003fb170 = 1;
          DAT_005b8ea5 = 0;
          do {
            DAT_005b8ea5 = DAT_005b8ea5 +
                           (&UNK_003fc268)[(byte)(&UNK_003fb176)[uVar8 + (uint)DAT_003fb170 * 4]];
            DAT_003fb170 = DAT_003fb170 + 1;
          } while (DAT_003fb170 <= bVar1);
        }
        if (bVar1 != 0) {
          DAT_005b8ea5 = DAT_005b8ea5 / bVar1;
        }
      }
      uVar8 = (uint)ksb;
      if (uVar8 != 0xff) {
        DAT_003fb170 = 1;
        if ((&UNK_003fb176)[ksdefb] != 0) {
          DAT_003fb170 = 1;
          do {
            if ((byte)(&UNK_003fb176)[(uint)ksdefb + (uint)DAT_003fb170 * 4] == uVar12) {
              DAT_003fc088 = '\x01';
            }
            DAT_003fb170 = DAT_003fb170 + 1;
          } while (DAT_003fb170 <= (byte)(&UNK_003fb176)[ksdefb]);
        }
      }
      if (DAT_003fc088 != '\0') {
        DAT_005b8ea6 = 0;
        DAT_003fb170 = 1;
        bVar1 = (&UNK_003fb176)[uVar8];
        if (bVar1 != 0) {
          DAT_003fb170 = 1;
          DAT_005b8ea6 = 0;
          do {
            DAT_005b8ea6 = DAT_005b8ea6 +
                           (&UNK_003fc268)[(byte)(&UNK_003fb176)[uVar8 + (uint)DAT_003fb170 * 4]];
            DAT_003fb170 = DAT_003fb170 + 1;
          } while (DAT_003fb170 <= bVar1);
        }
        if (bVar1 != 0) {
          DAT_005b8ea6 = DAT_005b8ea6 / bVar1;
        }
      }
      if (B_kl != '\0') {
        (&DAT_005b9138)[uVar12] = DAT_005b9131;
        krfkw = calc_value_from_x_y_2(&DAT_001d1704,nmot,virkr);
        DAT_003fb174 = DAT_003fb174 + krfkw;
      }
      bVar1 = DAT_005b912e;
      if (DAT_003fc087 != '\0') {
        DAT_003fb174 = DAT_005b8ea5 + DAT_005b8ea0;
      }
      if (DAT_003fc088 != '\0') {
        DAT_003fb174 = DAT_005b8ea6 + DAT_005b8ea0;
      }
      uVar12 = (uint)DAT_005b912e;
      if (uVar12 <= DAT_003fb174) {
        DAT_003fb174 = DAT_005b912e;
      }
      bVar5 = 0;
      uVar8 = 0;
      do {
        uVar8 = uVar8 + (byte)(&UNK_003fc268)[bVar5];
        bVar5 = bVar5 + 1;
      } while (bVar5 < 4);
      uVar8 = uVar8 >> 2 & 0x3fff;
      _DAT_003fb18a = (undefined2)uVar8;
      cVar6 = (char)uVar8;
      uVar9 = (uint)zzylkr;
      wkrm = cVar6;
      if ((B_zwkraa != 0) && (B_kl == '\0')) {
        (&DAT_005b9138)[uVar9] = (&DAT_005b9138)[uVar9] + -1;
      }
      cVar2 = (&DAT_005b9138)[uVar9];
      if (cVar2 == '\0') {
        if (DAT_003fb174 != 0) {
          DAT_003fb174 = DAT_003fb174 - 1;
        }
        if (DAT_003fc08d == '\0') {
          DAT_005b912f = DAT_005b9131;
        }
        else {
          DAT_005b912f = DAT_005b9130;
        }
      }
      uVar3 = (uint)DAT_005b9121;
      if (uVar8 + uVar3 < (uint)DAT_003fb174) {
        DAT_003fb174 = cVar6 + DAT_005b9121;
      }
      else if ((uVar3 <= uVar8) && ((int)(uint)DAT_003fb174 < (int)(uVar8 - uVar3))) {
        DAT_003fb174 = cVar6 - DAT_005b9121;
      }
      if (((DAT_003fb169 == '\0') && (DAT_003fc085 != '\0')) && (DAT_001c816c < nmot)) {
        DAT_003fc086 = 1;
        if ((B_kl == '\0') ||
           ((int)((uint)(byte)(&UNK_003fc268)[uVar9] + (int)(char)DAT_001c8167) <=
            (int)(uint)DAT_003fb175)) {
          if (((cVar2 == '\0') &&
              ((DAT_003fb174 == 0 ||
               ((int)(char)DAT_003fb174 <= (int)(char)DAT_003fb175 - (int)DAT_001c8166)))) &&
             (DAT_003fb175 = DAT_003fb175 - DAT_001c8168, (char)DAT_003fb175 < '\x01')) {
            DAT_003fb175 = 0;
          }
        }
        else {
          uVar8 = (uint)(byte)(&UNK_003fc268)[uVar9] + (uint)DAT_001c8167;
          DAT_003fb175 = (byte)uVar8;
          if (uVar12 <= (uVar8 & 0xff)) {
            DAT_003fb175 = bVar1;
          }
        }
        (&UNK_003fd704)[uVar9 + iVar7] = DAT_003fb175;
      }
      else {
        DAT_003fc086 = 0;
      }
      if (cVar2 == '\0') {
        (&DAT_005b9138)[uVar9] = DAT_005b912f;
      }
      DAT_003fb170 = 0;
      sVar11 = 0;
      do {
        sVar11 = sVar11 + (char)(&DAT_005b91dc)[DAT_003fb170] +
                 (short)(char)(&DAT_001c8158)[DAT_003fb170];
        DAT_003fb170 = DAT_003fb170 + 1;
      } while (DAT_003fb170 < 4);
      uVar12 = (uint)sVar11;
      iVar10 = ((int)uVar12 >> 2) + (uint)((int)uVar12 < 0 && (uVar12 & 3) != 0);
      _DAT_003fb172 = (undefined2)iVar10;
      DAT_005b9134 = (char)iVar10;
      (&UNK_003fc268)[uVar9] = DAT_003fb174;
      DAT_005b9135 = DAT_003fb175;
      DAT_005b9136 = DAT_003fb174;
      (&UNK_003fd704)[uVar9 + iVar7] = DAT_003fb175;
    }
    if (B_kr == '\0') goto LAB_000caa44;
    if (B_krdws == '\0') {
      uVar12 = (uint)zzylkr;
      DAT_003fb174 = (&UNK_003fc268)[uVar12] + (&DAT_005b91dc)[uVar12] + (&DAT_001c8158)[uVar12] +
                     DAT_003fc25d;
      DAT_003fc271 = wkrm + DAT_005b9134;
      if (DAT_003fb16b != '\0') {
        DAT_003fb171 = 0;
        do {
          (&DAT_005b9124)[DAT_003fb171] =
               -((&UNK_003fc268)[DAT_003fb171] + (&DAT_005b91dc)[DAT_003fb171] +
                (&DAT_001c8158)[DAT_003fb171]);
          DAT_003fb171 = DAT_003fb171 + 1;
        } while (DAT_003fb171 < 4);
        DAT_003fb16b = '\0';
      }
      goto LAB_000caa58;
    }
    DAT_003fb174 = DAT_005b912c;
  }
  DAT_003fc271 = DAT_003fb174;
LAB_000caa58:
  DAT_005b9120 = -DAT_003fb174;
  (&DAT_005b9124)[zzylkr] = DAT_005b9120;
  return;
}

