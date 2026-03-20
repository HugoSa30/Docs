/*
 * Program: n42.bin
 * Function: FUN_00173e7c
 * Entry: 00173e7c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00173e7c(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort local_38;
  ushort local_34;
  ushort local_30 [2];
  ushort local_2c [2];
  ushort *local_28;
  ushort local_24 [2];
  ushort *local_20;
  
  local_38 = _TYP_ddss;
  local_34 = _B_sipddss;
  if (_DAT_001c7966 < uddss_w) {
    local_38 = _TYP_ddss & 0xf0ff | 0x100;
    DAT_003faf72 = DAT_003faf72 & 0xf7 | 8;
  }
  else {
    DAT_003faf72 = DAT_003faf72 & 0xf7;
  }
  if (uddss_w < _DAT_001c7964) {
    local_38 = local_38 & 0xf0ff | 0x200;
    DAT_003faf72 = DAT_003faf72 & 0xef | 0x10;
  }
  else {
    DAT_003faf72 = DAT_003faf72 & 0xef;
  }
  uVar2 = local_38;
  if (B_pddssmx == '\0') {
    DAT_003faf73 = DAT_003faf73 & 0xf7;
  }
  else {
    local_34 = _B_sipddss & 0xf0ff | 0x100;
    DAT_003faf73 = DAT_003faf73 & 0xf7 | 8;
  }
  if (B_pddssmn == '\0') {
    DAT_003faf73 = DAT_003faf73 & 0xef;
  }
  else {
    local_34 = local_34 & 0xf0ff | 0x200;
    DAT_003faf73 = DAT_003faf73 & 0xef | 0x10;
  }
  uVar3 = local_34;
  dpssolf_w = func_0xff2224cc(&DAT_003faf7c,(int)(short)dpssol_w,_DAT_001c7960);
  iVar5 = (int)(short)dpsd_w - (int)(short)dpssolf_w;
  if (iVar5 < 0x8000) {
    if (iVar5 < -0x8000) {
      dpsdif = 0x8000;
    }
    else {
      dpsdif = (word)iVar5;
    }
  }
  else {
    dpsdif = 0x7fff;
  }
  dpsdmx1_w = func_0xff2191ac(_DPSPLAUS,&DAT_001d0c30,&DAT_001d0c40,(int)(short)dpssolf_w);
  uVar4 = (int)(short)dpsdif >> 0x1f;
  B_dpsplau1 = (int)(short)dpsdmx1_w < (int)((uVar4 ^ (int)(short)dpsdif) - uVar4);
  kfdpsmx_aus = func_0xff219bb4(&DAT_001d0c50,_wdkba_w,nmot_w);
  if (B_stend == '\0') {
    _DAT_003faf80 = (int)(short)kfdpsmx_aus << 0x10;
  }
  dpsdmx2_w = func_0xff2224cc(&DAT_003faf80,(int)(short)kfdpsmx_aus,_DAT_001c7962);
  if ((short)dpsdmx2_w < (short)kfdpsmx_aus) {
    dpsdmx2_w = kfdpsmx_aus;
  }
  B_dpsplau2 = (short)dpsdmx2_w < (short)dpsd_w;
  if (((evhubi_w < _DAT_001c795c) && (B_dpsplau1 != 0)) ||
     ((evhubi_w < _DAT_001c795e && ((bool)B_dpsplau2)))) {
    B_edpsplau = 1;
  }
  else {
    B_edpsplau = 0;
  }
  if (B_stend != '\0') {
    if (((DAT_003faf72 >> 4 & 1) == 0) && ((DAT_003faf72 >> 3 & 1) == 0)) {
      if (DAT_003faf76 < DAT_001c7969) {
        DAT_003faf76 = DAT_003faf76 + 1;
      }
      else {
        DAT_003faf72 = DAT_003faf72 & 0xfd | 2;
      }
      DAT_003faf72 = DAT_003faf72 & 0xfb;
      DAT_003faf77 = 0;
    }
    else {
      if (DAT_003faf77 < DAT_001c7969) {
        DAT_003faf77 = DAT_003faf77 + 1;
      }
      else {
        DAT_003faf72 = DAT_003faf72 & 0xfb | 4;
      }
      DAT_003faf72 = DAT_003faf72 & 0xfd;
      DAT_003faf76 = 0;
    }
    bVar1 = DAT_003faf72 >> 1 & 1;
    if ((bVar1 != 0) || ((DAT_003faf72 >> 2 & 1) != 0)) {
      local_38 = local_38 & 0xdffd | 0x2002;
      if (bVar1 == 0) {
        if ((DAT_003faf72 >> 2 & 1) != 0) {
          local_38 = uVar2 & 0xdfbc | 0x2043;
        }
      }
      else {
        local_38 = uVar2 & 0xd0bc | 0x2002;
      }
    }
  }
  local_30[0] = local_38;
  local_28 = local_30;
  local_2c[0] = local_38;
  func_0xff222958(0x10,local_2c);
  if (((((B_stend != '\0') && (B_hfm != '\0')) && (B_nmot != '\0')) &&
      ((B_fpwdkap == '\0' && (B_wdksap == '\0')))) &&
     (((B_sidk & 1) == 0 && (((DAT_003fdea3 & 1) == 0 && ((_TYP_ddss & 1) == 0)))))) {
    if (((DAT_003faf73 >> 4 & 1) == 0) && (((DAT_003faf73 >> 3 & 1) == 0 && (B_edpsplau == 0)))) {
      if (DAT_003faf74 < DAT_001c796a) {
        DAT_003faf74 = DAT_003faf74 + 1;
      }
      else {
        DAT_003faf73 = DAT_003faf73 & 0xfd | 2;
      }
      DAT_003faf73 = DAT_003faf73 & 0xfb;
      DAT_003faf75 = 0;
    }
    else if (((((B_gd == '\0') || ((DAT_001c796b & 1) == 0)) &&
              ((B_lltd == 0 || ((DAT_001c796b & 2) == 0)))) &&
             ((Btvdpsrlvw == 0 || ((DAT_001c796b & 4) == 0)))) &&
            (((B_vvtnotl == 0 || ((DAT_001c796b & 8) == 0)) &&
             ((((B_iwfalse == 0 && ((B_iwfalse2 == 0 && ((DAT_003fdecf & 1) == 0)))) ||
               ((DAT_001c796b & 0x10) == 0)) || (B_vvtnotl == 0)))))) {
      if (DAT_003faf75 < DAT_001c7968) {
        DAT_003faf75 = DAT_003faf75 + 1;
      }
      else {
        DAT_003faf73 = DAT_003faf73 & 0xfb | 4;
      }
      DAT_003faf73 = DAT_003faf73 & 0xfd;
      DAT_003faf74 = 0;
    }
    bVar1 = DAT_003faf73 >> 1 & 1;
    if ((bVar1 != 0) || ((DAT_003faf73 >> 2 & 1) != 0)) {
      local_34 = local_34 & 0xdffd | 0x2002;
      if (bVar1 == 0) {
        if ((DAT_003faf73 >> 2 & 1) != 0) {
          local_34 = uVar3 & 0xdfbc | 0x2043;
        }
      }
      else {
        local_34 = uVar3 & 0xd0bc | 0x2002;
      }
    }
  }
  local_30[0] = local_34;
  local_20 = local_30;
  local_24[0] = local_34;
  func_0xff222958(0x97,local_24);
  return;
}

