/*
 * Program: n42.bin
 * Function: FUN_001702fc
 * Entry: 001702fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001702fc(void)

{
  bool bVar1;
  byte bVar2;
  
  if ((((((((tans < DAT_001c6a1c) && (B_mdarv == 0)) && ((DAT_003fde6f & 1) == 0)) &&
         (((B_sidk & 1) == 0 && ((DAT_003fde65 & 1) == 0)))) &&
        (((DAT_003fdfbb & 1) == 0 && (((DAT_003fdfc1 & 1) == 0 && ((DAT_003fdfc9 & 1) == 0)))))) &&
       (((DAT_003fdeaf & 1) == 0 &&
        (((((DAT_003fde67 & 1) == 0 && (B_enws == 0)) && ((DAT_003fdf27 & 1) == 0)) &&
         ((((DAT_003fdf29 & 1) == 0 && ((DAT_003fdf25 & 1) == 0)) &&
          (((DAT_003fdf61 & 1) == 0 && (((DAT_003fdfb7 & 1) == 0 && ((DAT_003fdf5f & 1) == 0))))))))
        )))) && ((DAT_003fdf23 & 1) == 0)) &&
     ((_DAT_001d09f6 <= lamsons_w && (lamsons_w <= _DAT_001d09f8)))) {
    B_gasp = '\0';
  }
  else {
    B_gasp = '\x01';
  }
  if ((((B_gap == '\0') || (B_dtest != '\0')) || (B_dsls != '\0')) ||
     ((((B_sls != '\0' || (B_vl != 0)) || ((B_gasp != '\0' || ((B_fa != '\0' || (B_bt != '\0'))))))
      || (bVar2 = func_0xff2187cc(&DAT_001d09e0,nmot), bVar2 < wdkba)))) {
    DAT_003fbff2 = 0;
    bVar1 = false;
  }
  else {
    DAT_003fbff2 = 1;
    bVar1 = true;
  }
  if ((((bVar1) && (B_te == '\0')) && (B_ukg == '\0')) &&
     (((DAT_003fadef & 1) == 0 || (B_brems != '\0')))) {
    if ((tmot < DAT_001d09dd) && (DAT_005b88c8 < DAT_001d09dc)) {
      B_lra = 0;
      DAT_003fadec = DAT_001d09de;
      B_lra2 = 0;
      DAT_003fadee = DAT_001d09de;
      if (((B_stcdyn & B_lrasp) == 0) && ((B_stcdyn & B_lrasp2) == 0)) {
        if (DAT_003faded == '\0') {
          DAT_003fbff3 = 1;
        }
        else {
          DAT_003faded = DAT_003faded + -1;
        }
      }
      else {
        DAT_003fbff3 = 0;
        DAT_003faded = DAT_001d09de;
      }
    }
    else {
      DAT_003fbff3 = 0;
      DAT_003faded = DAT_001d09de;
      if ((B_lr == '\0') || ((B_stcdyn & B_lrasp) != 0)) {
        B_lra = 0;
        DAT_003fadec = DAT_001d09de;
      }
      else if (DAT_003fadec == '\0') {
        B_lra = 1;
      }
      else {
        DAT_003fadec = DAT_003fadec + -1;
      }
      if ((B_lr2 == '\0') || ((B_stcdyn & B_lrasp2) != 0)) {
        B_lra2 = 0;
        DAT_003fadee = DAT_001d09de;
      }
      else if (DAT_003fadee == '\0') {
        B_lra2 = 1;
      }
      else {
        DAT_003fadee = DAT_003fadee + -1;
      }
    }
  }
  else {
    B_lra = 0;
    DAT_003fadec = DAT_001d09de;
    B_lra2 = 0;
    DAT_003fadee = DAT_001d09de;
    DAT_003fbff3 = 0;
    DAT_003faded = DAT_001d09de;
  }
  if (B_brems == '\0') {
    DAT_003fadef = DAT_003fadef & 0xfe;
  }
  else {
    DAT_003fadef = DAT_003fadef | 1;
  }
  return;
}

