/*
 * Program: n42.bin
 * Function: FUN_000bac08
 * Entry: 000bac08
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bac08(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if (B_mdstop != 0) {
    return;
  }
  uVar8 = (uint)idxfofn;
  if (B_autget == '\0') {
    if (uVar8 == 0) {
      pfVar6 = (float *)&DAT_001c1884;
    }
    else {
      pfVar6 = (float *)(&SI04DMUB1 + uVar8 * 4);
    }
    sicurrent_f = (dword)*pfVar6;
  }
  else {
    if (uVar8 == 0) {
      pfVar6 = (float *)&DAT_001c1894;
    }
    else {
      pfVar6 = (float *)(&SI04DMUB2 + uVar8 * 4);
    }
    sicurrent_f = (dword)*pfVar6;
  }
  idxfofl = (float)sicurrent_f <= _nmot_f;
  B_fofr = B_fofr4;
  if ((((B_idxfof4 == 0) && (B_fofr = B_fofr3, B_idxfof3 == 0)) &&
      (B_fofr = B_fofr2, B_idxfof2 == 0)) &&
     ((B_fofr = B_fofr1, B_idxfof1 == 0 && (B_fofr = B_fofr4, !(bool)idxfofl)))) {
    B_fofr = B_fofr1;
  }
  if (B_fofdr == '\0') {
    fofstat = 2;
  }
  else if (B_fomod == '\0') {
    fofstat = 0;
  }
  else if (B_fofr == 0) {
    fofstat = 1;
  }
  else if (_nmot_f == (float)sicurrent_f) {
    fofstat = 0;
  }
  else if (B_idxfof4 == 0) {
    if (B_idxfof3 == 0) {
      if (B_idxfof2 == 0) {
        if (B_idxfof1 == 0) {
          fofstat = 0;
        }
        else if ((bool)idxfofl) {
          fofstat = B_fofr2 == 0;
        }
        else {
          fofstat = 0;
        }
      }
      else if ((bool)idxfofl) {
        fofstat = B_fofr3 == 0;
      }
      else {
        fofstat = B_fofr1 == 0;
      }
    }
    else if ((bool)idxfofl) {
      fofstat = B_fofr4 == 0;
    }
    else {
      fofstat = B_fofr2 == 0;
    }
  }
  else if ((bool)idxfofl) {
    fofstat = 0;
  }
  else {
    fofstat = B_fofr3 == 0;
  }
  if (B_idxfof4 == 0) {
    if (B_idxfof3 == 0) {
      if (B_idxfof2 == 0) {
        if (B_idxfof1 == 0) {
          fVar1 = *(float *)(&UNK_003fd9c4 + (char)zzyldmd * 4);
        }
        else {
          fVar1 = *(float *)(&UNK_003fd9c4 + (char)zzyldmd * 4);
        }
      }
      else {
        fVar1 = *(float *)(&UNK_003fd9f4 + (char)zzyldmd * 4);
      }
    }
    else {
      fVar1 = *(float *)(&UNK_003fda24 + (char)zzyldmd * 4);
    }
  }
  else {
    fVar1 = *(float *)(&UNK_003fda54 + (char)zzyldmd * 4);
  }
  uVar5 = uVar8 + 1 & 0xff;
  _fseofkor_f = _DAT_0001bdc4;
  if (B_mdzyl1 == 0) {
    if (B_fomod == '\0') {
      if (B_zylind == 0) {
        iVar7 = (int)(char)zzyldmd;
        iVar9 = (int)(short)(ushort)zyl2;
        if (iVar7 == iVar9) goto LAB_000bb3dc;
        if (iVar7 < iVar9) {
          pfVar6 = (float *)(&UNK_003fd9c4 + iVar7 * 4);
        }
        else {
          pfVar6 = (float *)(&UNK_003fd9c4 + (iVar7 - iVar9) * 4);
        }
      }
      else {
        pfVar6 = (float *)(&UNK_003fd9c4 + (char)zzyldmd * 4);
      }
      _fseofkor_f = *pfVar6;
    }
    else if (((B_idxfof4 == 0) && (uVar8 != 0)) || (!(bool)idxfofl)) {
      if ((B_idxfof1 == 0) && (uVar8 != 0)) {
        if (!(bool)idxfofl) {
          if (idxfofn == 4) {
            fVar1 = fVar1 - *(float *)(&UNK_003fda24 + (char)zzyldmd * 4);
          }
          else if (idxfofn == 3) {
            fVar1 = fVar1 - *(float *)(&UNK_003fd9f4 + (char)zzyldmd * 4);
          }
          else if (idxfofn == 2) {
            fVar1 = fVar1 - *(float *)(&UNK_003fd9c4 + (char)zzyldmd * 4);
          }
          else {
            fVar1 = fVar1 - *(float *)(&UNK_003fd9c4 + (char)zzyldmd * 4);
          }
          if (B_autget == '\0') {
            fVar2 = *(float *)(&DAT_001c187c + uVar8 * 4);
          }
          else {
            fVar2 = *(float *)(&DAT_001c188c + uVar8 * 4);
          }
          if (B_autget == '\0') {
            fVar3 = *(float *)(&DAT_001c187c + uVar8 * 4);
          }
          else {
            fVar3 = *(float *)(&DAT_001c188c + uVar8 * 4);
          }
          if (idxfofn == 4) {
            fVar4 = *(float *)(&UNK_003fda24 + (char)zzyldmd * 4);
          }
          else if (idxfofn == 3) {
            fVar4 = *(float *)(&UNK_003fd9f4 + (char)zzyldmd * 4);
          }
          else if (idxfofn == 2) {
            fVar4 = *(float *)(&UNK_003fd9c4 + (char)zzyldmd * 4);
          }
          else {
            fVar4 = *(float *)(&UNK_003fd9c4 + (char)zzyldmd * 4);
          }
          _fseofkor_f = fVar1 * ((_nmot_f - fVar2) / ((float)sicurrent_f - fVar3)) + fVar4;
          goto LAB_000bb3dc;
        }
      }
      else if (!(bool)idxfofl) {
        _fseofkor_f = *(float *)(&UNK_003fd9c4 + (char)zzyldmd * 4);
        goto LAB_000bb3dc;
      }
      if (((bool)idxfofl) && (_fseofkor_f = fVar1, _nmot_f != (float)sicurrent_f)) {
        if (uVar5 == 4) {
          fVar2 = *(float *)(&UNK_003fda54 + (char)zzyldmd * 4) - fVar1;
        }
        else if (uVar5 == 3) {
          fVar2 = *(float *)(&UNK_003fda24 + (char)zzyldmd * 4) - fVar1;
        }
        else if (uVar5 == 2) {
          fVar2 = *(float *)(&UNK_003fd9f4 + (char)zzyldmd * 4) - fVar1;
        }
        else {
          fVar2 = *(float *)(&UNK_003fd9f4 + (char)zzyldmd * 4) - fVar1;
        }
        if (B_autget == '\0') {
          fVar3 = (_nmot_f - (float)sicurrent_f) /
                  (*(float *)(&DAT_001c1884 + uVar8 * 4) - (float)sicurrent_f);
        }
        else {
          fVar3 = (_nmot_f - (float)sicurrent_f) /
                  (*(float *)(&DAT_001c1894 + uVar8 * 4) - (float)sicurrent_f);
        }
        _fseofkor_f = fVar2 * fVar3 + fVar1;
      }
    }
    else {
      _fseofkor_f = *(float *)(&UNK_003fda54 + (char)zzyldmd * 4);
    }
  }
LAB_000bb3dc:
  _tsk_f = _tsroh_f * _fseofkor_f;
  return;
}

