/*
 * Program: n42.bin
 * Function: FUN_000cba38
 * Entry: 000cba38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cba38(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (B_nmot == '\0') {
    if (DAT_005b8cf2 == '\0') {
      DAT_005b881e = vvt_sw;
      DAT_005b881c = DAT_005b9ac4;
    }
    DAT_005b8cf2 = 1;
    iVar6 = (uint)vvt_sw - (uint)DAT_005b881e;
    iVar7 = (uint)DAT_005b9ac4 - (uint)DAT_005b881c;
    if (iVar6 < 1) {
      iVar6 = -iVar6;
    }
    if (iVar6 <= (int)(uint)_DAT_001c5954) {
      if (iVar7 < 1) {
        iVar7 = -iVar7;
      }
      if (((iVar7 <= (int)(uint)_DAT_001c5954) && (DAT_005b8cf6 == '\0')) &&
         ((B_fa == '\0' || (B_fadmtle == '\0')))) {
        FUN_000b1cc0(&DAT_003fad3a);
        goto LAB_000cbb8c;
      }
    }
    DAT_003fad3a = DAT_001c595c;
    DAT_005b881e = vvt_sw;
    DAT_005b881c = DAT_005b9ac4;
  }
  else {
    DAT_003fad3a = DAT_001c595c;
    DAT_005b8cf2 = 0;
  }
LAB_000cbb8c:
  if (((DAT_001c5958 >> 4 & 1) == 0) || (DAT_003fad3a != '\0')) {
    DAT_005b8cf5 = true;
  }
  else {
    DAT_005b8cf5 = false;
  }
  vvtfkt = !(bool)DAT_005b8cf5;
  if (!(bool)vvtfkt) {
    DAT_003fdc3f = 0;
  }
  if (vvtchke != 0) {
    if (B_kl15 == 0) {
      _DAT_003fad3e = 0;
    }
    else {
      FUN_000b1d28(&DAT_003fad3e);
    }
    if (((char)vvtchke < '\0') && (B_kl15 != 0)) {
      if ((DAT_003fdc3f & 1) != 0) {
        vvtchke = vvtchke | 1;
      }
      vvtchke = vvtchke & 0x7f;
    }
    uVar4 = (uint)_DAT_003fad3e;
    if ((_DAT_001c5946 < uVar4) || (DAT_005b8cf5 != '\0')) {
      vvtchke = vvtchke & 0xfc;
    }
    if ((((vvtchke & 1) != 0) && (B_iwfalse == 0)) && (vvt_iw != 0)) {
      iVar7 = (uint)_DAT_003fdc36 - (uint)vvt_iw;
      iVar6 = iVar7;
      if (iVar7 < 1) {
        iVar6 = -iVar7;
      }
      bVar2 = DAT_003fdc3e;
      if ((int)(uint)_DAT_001c5950 < iVar6) {
        if (_DAT_003fdc3a + 1 < 0x10000) {
          _DAT_003fdc3a = (ushort)(_DAT_003fdc3a + 1);
        }
        else {
          _DAT_003fdc3a = 0xffff;
        }
        if (iVar7 < 1) {
          iVar7 = -iVar7;
        }
        bVar2 = DAT_003fdc3e | 1;
        if ((int)(uint)_DAT_001c5952 < iVar7) {
          B_vvtno_an = 1;
          bVar2 = DAT_003fdc3e | 5;
        }
      }
      DAT_003fdc3e = bVar2;
      vvtchke = vvtchke & 0xfe;
    }
    if (((DAT_003fdc3e >> 2 & 1) != 0) || ((DAT_003fdc3e >> 3 & 1) != 0)) {
      B_vvtno_an = 1;
    }
    if ((B_nmot != '\0') || ((uint)_DAT_001c594e + (uint)_DAT_001c594c < uVar4)) {
      vvtchke = 0;
      DAT_005b8e1c = 0;
      DAT_005b8e1d = 0;
      DAT_005b8cf6 = '\0';
    }
    if (((_DAT_001c594e < uVar4) && ((vvtchke >> 6 & 1) != 0)) && ((vvtchke >> 5 & 1) == 0)) {
      vvtchke = vvtchke | 0x20;
      if ((tmot < DAT_001c595e) && (DAT_001c595f < tmot)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && ((vvt_alern == '\v' || ((DAT_003fdc3e & 1) != 0)))) {
        DAT_005b8e1c = 6;
        DAT_005b8cf6 = '\x01';
      }
    }
  }
  if (B_kl15 == 0) {
    if (((DAT_005b8cf3 == '\0') || (B_nmot != '\0')) ||
       (((DAT_003fdc3e & 1) == 0 &&
        ((((DAT_003fdc3e >> 1 & 1) == 0 && (DAT_005b8ced == '\0')) && (DAT_005b8cee == '\0')))))) {
      _DAT_003fad48 = 0;
    }
    else {
      FUN_000b1d28(&DAT_003fad48);
      DAT_005b881a = (uint)_DAT_001c594a < (uint)_DAT_003fad48;
      if (((bool)DAT_005b881a) && (DAT_003fad43 == '\0')) {
        DAT_003fad42 = true;
      }
      else {
        DAT_003fad42 = false;
      }
      if (((tmot < DAT_001c595e) && (DAT_001c595f < tmot)) && ((bool)DAT_003fad42)) {
        DAT_005b8cf6 = '\x01';
        if ((DAT_003fdc3e & 1) == 0) {
          DAT_005b8e1c = 1;
        }
        else {
          DAT_005b8e1c = 6;
        }
        if ((DAT_003fdc3e >> 1 & 1) == 0) {
          DAT_005b8e1d = 1;
        }
        else {
          DAT_005b8e1d = 6;
        }
      }
      DAT_003fad43 = DAT_005b881a;
      if ((uint)_DAT_001c594a + (uint)_DAT_001c5948 < (uint)_DAT_003fad48) {
        DAT_005b8cf3 = '\0';
        DAT_005b8cf6 = '\0';
        DAT_005b8e1c = 0;
        DAT_005b8e1d = 0;
      }
    }
    if ((vvtchke == 0) && (DAT_005b8cf5 == '\0')) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    DAT_003fad3b = FUN_000b1e78(&UNK_003fad3c,uVar5,DAT_001c595d);
    cVar3 = DAT_003fad3b;
    if ((DAT_003fad3b != '\0') && (cVar3 = DAT_003fad3b, DAT_005b881b == '\0')) {
      if (B_iwfalse == 0) {
        _DAT_003fdc36 = vvt_iw;
        DAT_003fdc3f = DAT_003fdc3f | 1;
      }
      cVar3 = DAT_003fad3b;
      if (B_iwfalse2 == 0) {
        _DAT_003fdc38 = DAT_005b9acc;
        DAT_003fdc3f = DAT_003fdc3f | 2;
        cVar3 = DAT_003fad3b;
      }
    }
  }
  else {
    cVar3 = DAT_005b881b;
    if (B_stend != '\0') {
      DAT_005b8cf3 = '\x01';
    }
  }
  DAT_005b881b = cVar3;
  if ((DAT_005b8cf6 == '\0') && (DAT_003fad39 != '\0')) {
    DAT_003fad38 = true;
  }
  else {
    DAT_003fad38 = false;
  }
  DAT_003fad39 = DAT_005b8cf6;
  if ((bool)DAT_003fad38) {
    if ((DAT_005b8e8a == '\x06') && (vvt_alern == '\b')) {
      DAT_005b8cef = true;
    }
    else {
      DAT_005b8cef = false;
    }
    if ((bool)DAT_005b8cef) {
      DAT_003fdc3e = DAT_003fdc3e & 0xfa;
    }
    if ((DAT_005b8e8b == '\x06') && (DAT_005b893a == '\b')) {
      DAT_005b8cf0 = true;
    }
    else {
      DAT_005b8cf0 = false;
    }
    if ((bool)DAT_005b8cf0) {
      DAT_003fdc3e = DAT_003fdc3e & 0xf5;
    }
  }
  if (((DAT_003fdc3e >> 2 & 1) == 0) && ((DAT_003fdc3e >> 3 & 1) == 0)) {
    B_vvtno_an = 0;
  }
  if ((DAT_005b8cef == '\0') || (DAT_003fad37 != '\0')) {
    DAT_003fad36 = false;
  }
  else {
    DAT_003fad36 = true;
  }
  DAT_003fad37 = DAT_005b8cef;
  if ((bool)DAT_003fad36) {
    _DAT_003fdc40 = top_w;
    DAT_005b8ced = '\0';
  }
  if ((int)(uint)_DAT_001c5956 <= (int)((uint)top_w - (uint)_DAT_003fdc40)) {
    DAT_005b8ced = '\x01';
  }
  if (((B_fa == '\0') || (B_fadmtle == '\0')) || (B_nmot != '\0')) {
    DAT_005b8e18 = DAT_005b8e1c;
    if ((DAT_001c5959 != 0) && (DAT_005b8e18 = DAT_001c5959, 6 < DAT_001c5959)) {
      DAT_005b8e18 = 7;
    }
  }
  else if (vvtal == 6) {
    DAT_005b8e18 = 6;
  }
  else {
    DAT_005b8e18 = 0;
  }
  if (((B_fa == '\0') || (B_fadmtle == '\0')) || (B_nmot != '\0')) {
    DAT_005b8e19 = DAT_005b8e1d;
    if ((DAT_001c595a != 0) && (DAT_005b8e19 = DAT_001c595a, 6 < DAT_001c595a)) {
      DAT_005b8e19 = 7;
    }
  }
  else if (vvtal == 6) {
    DAT_005b8e19 = 6;
  }
  else {
    DAT_005b8e19 = 0;
  }
  if ((B_vvtchkde == 0) || (DAT_005b8e18 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  DAT_003fad44 = FUN_000b1e78(&UNK_003fad45,uVar5,DAT_001c595b);
  if (((B_vvtchkde == 0) || (DAT_005b8e18 == 0)) || (DAT_003fad44 != '\0')) {
    DAT_005b8e1e = DAT_005b8e18;
  }
  else {
    DAT_005b8e1e = 0;
  }
  DAT_003fad46 = FUN_000b1e78(&UNK_003fad47,(-(uint)DAT_005b8e19 & ~(uint)DAT_005b8e19) >> 0x1f,
                              DAT_001c595b);
  if (DAT_003fad3a == '\0') {
    _B_nlale = _B_nlale & 0xf7ff;
  }
  else {
    _B_nlale = _B_nlale | 0x800;
  }
  return;
}

