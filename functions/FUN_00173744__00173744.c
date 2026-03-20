/*
 * Program: n42.bin
 * Function: FUN_00173744
 * Entry: 00173744
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00173744(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort local_40;
  ushort local_3c [2];
  ushort local_38 [2];
  ushort *local_34;
  
  uVar1 = _Z_dsu;
  local_40 = _Z_dsu;
  DAT_003fae6b = func_0xff2187cc(&DAT_001d0bf0,nmot);
  uVar3 = (uint)udsu_w;
  if ((uVar3 < (uint)UADPUMN << 2) || (pus_w < _PUMN)) {
    DAT_003fae5c = DAT_003fae5c & 0xfb | 2;
  }
  else if (((uint)UADPUMX << 2 < uVar3) || (_PUMX < pus_w)) {
    DAT_003fae5c = DAT_003fae5c & 0xfd | 4;
  }
  else {
    DAT_003fae5c = DAT_003fae5c & 0xf9;
  }
  if (((DAT_003fae5c & 2) == 0) && ((DAT_003fae5c & 4) == 0)) {
    DAT_003fae68 = 0;
    if (DAT_003fae69 < TDDFU) {
      DAT_003fae69 = DAT_003fae69 + 1;
    }
    if (DAT_003fae6b < wdkba) {
      if (DAT_003fae6c < TDDFUUGD) {
        DAT_003fae6c = DAT_003fae6c + 1;
      }
      else if ((B_silm & 1) == 0) {
        uVar2 = (uint)_ps_w;
        uVar4 = (uint)pus_w;
        if (uVar2 < uVar4) {
          if ((int)(uint)_PUSPSMX < (int)(uVar4 - uVar2)) {
            DAT_003fae6d = '\x01';
          }
          else {
            DAT_003fae6d = '\0';
          }
        }
        else if ((int)(uint)_PUSPSMX < (int)(uVar2 - uVar4)) {
          DAT_003fae6d = '\x01';
        }
        else {
          DAT_003fae6d = '\0';
        }
        if (((DAT_003fae6d == '\0') || (B_nmot == '\0')) || ((B_sidk & 1) != 0)) {
          DAT_003fae5c = DAT_003fae5c & 0xfe;
          DAT_003fae6a = 0;
        }
        else {
          DAT_003fae5c = DAT_003fae5c | 1;
          if (DAT_003fae6a < TDDFU) {
            DAT_003fae6a = DAT_003fae6a + 1;
          }
          else {
            local_40 = uVar1 & 0xd0fc | 0x2803;
            B_hag = 0;
          }
        }
      }
    }
    else {
      DAT_003fae5c = DAT_003fae5c & 0xfe;
      DAT_003fae6a = 0;
      DAT_003fae6c = 0;
    }
    if (((DAT_003fae69 == TDDFU) && (DAT_003fae6d == '\0')) &&
       ((DAT_003fae6c == TDDFUUGD && (((B_silm & 1) == 0 && ((B_sidk & 1) == 0)))))) {
      local_40 = local_40 & 0xd0fc | 0x2002;
      B_hag = 1;
      DAT_003fae5c = DAT_003fae5c | 8;
    }
  }
  else {
    DAT_003fae6a = 0;
    if (DAT_003fae68 < TDDFU) {
      DAT_003fae68 = DAT_003fae68 + 1;
    }
    else {
      if ((DAT_003fae5c & 2) == 0) {
        if ((DAT_003fae5c & 4) != 0) {
          local_40 = uVar1 & 0xf0ff | 0x100;
        }
      }
      else {
        local_40 = uVar1 & 0xf0ff | 0x200;
      }
      local_40 = local_40 & 0xdffc | 0x2003;
      B_hag = 0;
    }
    DAT_003fae69 = 0;
    DAT_003fae5c = DAT_003fae5c & 0xfe;
  }
  if ((DAT_003fae5c & 8) == 0) {
    if ((((DAT_003fae5c & 1) != 0) || ((DAT_003fae5c & 2) != 0)) || ((DAT_003fae5c & 4) != 0)) {
      GgdsasNvBits = GgdsasNvBits | 1;
    }
  }
  else {
    GgdsasNvBits = GgdsasNvBits & 0xfe;
    DAT_003fae5c = DAT_003fae5c & 0xf7;
  }
  uVar3 = func_0xff22181c((uVar3 & 0x7ff) << 5,_DSUGRAD);
  uVar3 = (uVar3 & 0xffff) + (int)_DSUOFS;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xffff < (int)uVar3) {
    uVar3 = 0xffff;
  }
  pus_w = (word)uVar3;
  if ((GgdsasNvBits & 1) == 0) {
    uVar4 = (uVar3 & 0xffff) * 0x287 >> 10;
  }
  else {
    uVar3 = (uint)_PUE;
    uVar4 = (uint)FHOE << 8;
  }
  uVar4 = func_0xff217f20(ZDSU,uVar4,_DAT_003fae64,_DAT_003fae64 & 0xffff);
  _DAT_003fae64 = (word)(uVar4 >> 0x10);
  fho_w = _DAT_003fae64;
  fho = (byte)(uVar4 >> 0x18);
  _DAT_003fae64 = uVar4;
  uVar3 = func_0xff217f20((uint)ZDSU << 8,uVar3 & 0xffff,_DAT_003fae60,_DAT_003fae60 & 0xffff);
  _DAT_003fae60 = (ushort)(uVar3 >> 0x10);
  pu_w = _DAT_003fae60;
  if (_DAT_003fae60 < 0x7f81) {
    pu = (byte)((int)(uint)_DAT_003fae60 >> 7);
  }
  else {
    pu = 0xff;
  }
  _DAT_003fae60 = uVar3;
  frhol_w = func_0xff22181c(fho_w,(uint)ftu << 8);
  uVar3 = func_0xff2189bc(&DAT_001d0c00,_ml_w);
  uVar3 = (uint)pu_w - (uVar3 & 0xffff);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xffff < (int)uVar3) {
    uVar3 = 0xffff;
  }
  pvdkdsu_w = (word)uVar3;
  pvdkds = (byte)((uVar3 & 0xffff) >> 8);
  uVar3 = (uVar3 & 0xffff) * 0x287 >> 10;
  fpvdkdsu_w = (word)uVar3;
  fpvdkds = (byte)(uVar3 >> 8);
  local_3c[0] = local_40;
  local_34 = local_3c;
  local_38[0] = local_40;
  fpvdkds_w = fpvdkdsu_w;
  pvdkds_w = pvdkdsu_w;
  func_0xff222958(0x19,local_38);
  if (B_clradhoe != '\0') {
    FUN_00133e20();
    _DAT_003fae60 = _DAT_003fae60 & 0xffff0000;
    _DAT_003fae64 = _DAT_003fae64 & 0xffff0000;
    GgdsasNvBits = GgdsasNvBits & 0xfe;
    DAT_003fae5c = DAT_003fae5c & 0xf7;
    B_clradhoe = '\0';
  }
  return;
}

