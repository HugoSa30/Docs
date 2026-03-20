/*
 * Program: n42.bin
 * Function: FUN_00143fbc
 * Entry: 00143fbc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00143fbc(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  
  if ((((B_mdstop != 0) || (B_fomod != '\0')) || (CDFO == '\0')) ||
     ((B_fofr1 == '\0' || ((DAT_005b8daa >> 2 & 1) == 0)))) {
                    /* WARNING: Read-only address (ram,0x005b9c5c) is written */
                    /* WARNING: Read-only address (ram,0x005b9c60) is written */
    return;
  }
  DAT_005b862c = _DAT_0001bdd4;
  bVar6 = 0;
  do {
    fVar1 = *(float *)(&UNK_003fd104 + (uint)idxfob * 4);
    while( true ) {
      while( true ) {
        while( true ) {
          if (bVar6 == 1) {
            fVar2 = *(float *)(&UNK_003fd2e4 + (uint)idxfob * 4);
          }
          else if (bVar6 == 2) {
            fVar2 = *(float *)(&UNK_003fd344 + (uint)idxfob * 4);
          }
          else if (bVar6 == 3) {
            fVar2 = *(float *)(&UNK_003fd3a4 + (uint)idxfob * 4);
          }
          else {
            fVar2 = *(float *)(&UNK_003fd284 + (uint)idxfob * 4);
          }
          if (fVar2 <= _DAT_0001bdd4) {
            fVar2 = -fVar2;
          }
          if (fVar1 <= _DAT_0001bdd4) {
            fVar1 = -fVar1;
          }
          if (fVar2 < fVar1) {
            fVar2 = fVar1;
          }
          if (DAT_005b862c < fVar2) {
            DAT_005b862c = fVar2;
          }
          fVar1 = DAT_005b862c;
          bVar6 = bVar6 + 1;
          if (3 < bVar6) {
            _DAT_003fa9f4 = DAT_005b862c;
            bVar8 = DAT_005b8630 < DAT_005b862c;
            uVar7 = (uint)idxfob;
            if ((bVar8) && ((&UNK_003fdb48)[uVar7] != '\0')) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (bVar4) {
              DAT_005b9784 = _DAT_001c1a44;
              DAT_003faa20 = 1;
            }
            DAT_003fdb44 = DAT_003faa20;
            if (B_autget == '\0') {
              iVar3 = (esst_snm08dmuw1 >> 0x10) * 2;
              uVar5 = (uint)*(ushort *)(&DAT_001c1942 + iVar3) +
                      ((int)((esst_snm08dmuw1 & 0xffff) *
                            ((uint)*(ushort *)(&DAT_001c1944 + iVar3) -
                            (uint)*(ushort *)(&DAT_001c1942 + iVar3))) >> 0x10);
            }
            else {
              iVar3 = (esst_snm08dmuw2 >> 0x10) * 2;
              uVar5 = (uint)*(ushort *)(&DAT_001c1952 + iVar3) +
                      ((int)((esst_snm08dmuw2 & 0xffff) *
                            ((uint)*(ushort *)(&DAT_001c1954 + iVar3) -
                            (uint)*(ushort *)(&DAT_001c1952 + iVar3))) >> 0x10);
            }
            DAT_005b8630 = ((float)((double)CONCAT44(0x43300000,uVar5 & 0xffff) -
                                   (double)_DAT_0001bdd8) * _DAT_0001bddc) / _DAT_0001bde0;
            if (B_autget == '\0') {
              iVar3 = (esst_snm08dmuw1 >> 0x10) * 2;
              uVar5 = (uint)*(ushort *)(&DAT_001c1962 + iVar3) +
                      ((int)((esst_snm08dmuw1 & 0xffff) *
                            ((uint)*(ushort *)(&DAT_001c1964 + iVar3) -
                            (uint)*(ushort *)(&DAT_001c1962 + iVar3))) >> 0x10);
            }
            else {
              iVar3 = (esst_snm08dmuw2 >> 0x10) * 2;
              uVar5 = (uint)*(ushort *)(&DAT_001c1972 + iVar3) +
                      ((int)((esst_snm08dmuw2 & 0xffff) *
                            ((uint)*(ushort *)(&DAT_001c1974 + iVar3) -
                            (uint)*(ushort *)(&DAT_001c1972 + iVar3))) >> 0x10);
            }
            fVar2 = ((float)((double)CONCAT44(0x43300000,uVar5 & 0xffff) - (double)_DAT_0001bdd8) *
                    _DAT_0001bddc) / _DAT_0001bde0;
            DAT_005b8634 = fVar2;
            if (bVar8) {
              (&UNK_003fdb48)[uVar7] = 0;
            }
            uVar5 = (uint)idxfon;
            if ((fVar1 < fVar2) && ((&UNK_003fdb48)[uVar7] = 1, (DAT_005b8daa >> 5 & 1) != 0)) {
              (&UNK_003fdb78)[uVar5] = 1;
            }
            DAT_005b8daa = ((&UNK_003fdb78)[uVar5] & 1) << 3 |
                           ((&UNK_003fdb48)[uVar7] & 1) << 4 | DAT_005b8daa & 0xe7;
            if (8 < uVar5) {
              if ((((DAT_003faa10 == '\0') && (DAT_003faa0a == '\0')) && (DAT_003faa28 == '\0')) &&
                 (((DAT_003faa12 == '\0' && (DAT_003faa2c == '\0')) &&
                  ((DAT_003faa08 == '\0' && ((DAT_003faa2a == '\0' && (DAT_003faa0e == '\0'))))))))
              {
                DAT_005b8cc0 = 0;
                return;
              }
              DAT_005b8cc0 = 1;
              return;
            }
                    /* WARNING: Could not emulate address calculation at 0x00144448 */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(uVar5 * 4 + 0xf44454))();
            return;
          }
          if (bVar6 != 1) break;
          fVar1 = *(float *)(&UNK_003fd164 + (uint)idxfob * 4);
        }
        if (bVar6 != 2) break;
        fVar1 = *(float *)(&UNK_003fd1c4 + (uint)idxfob * 4);
      }
      if (bVar6 != 3) break;
      fVar1 = *(float *)(&UNK_003fd224 + (uint)idxfob * 4);
    }
  } while( true );
}

