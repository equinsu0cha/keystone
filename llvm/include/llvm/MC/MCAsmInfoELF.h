//===-- llvm/MC/MCAsmInfoELF.h - ELF Asm info -------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_MC_MCASMINFOELF_H
#define LLVM_MC_MCASMINFOELF_H

#include "llvm/MC/MCAsmInfo.h"

namespace llvm_ks {
class MCAsmInfoELF : public MCAsmInfo {
  MCSection *getNonexecutableStackSection(MCContext &Ctx) const final;

protected:
  /// Targets which have non-executable stacks by default can set this to false
  /// to disable the special section which requests a non-executable stack.
  bool UsesNonexecutableStackSection;

  MCAsmInfoELF();
};
}

#endif
