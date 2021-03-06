/* Copyright (c) 2016 Baidu, Inc. All Rights Reserve.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */


#ifndef HL_SEQUENCE_STUB_H_
#define HL_SEQUENCE_STUB_H_

#include "hl_sequence.h"

inline void hl_max_sequence_forward(real* input,
                                    const int* sequence,
                                    real* output,
                                    int *index,
                                    int numSequences,
                                    int dim) {}

inline void hl_max_sequence_backward(real* outputGrad,
                                     int *index,
                                     real* inputGrad,
                                     int numSequences,
                                     int dim) {}

inline void hl_context_projection_forward(real* input,
                                          const int* sequence,
                                          real* weightData,
                                          real* output,
                                          int numSequences,
                                          int inputDim,
                                          int contextLength,
                                          int contextStart,
                                          int beginPad,
                                          bool isPadding) {}

inline void hl_context_projection_backward_data(real* outputGrad,
                                                const int* sequence,
                                                real* inputGrad,
                                                int numSequences,
                                                int inputDim,
                                                int contextLength,
                                                int contextStart) {}

inline void hl_context_projection_backward_weight(real* outputGrad,
                                                  const int* sequence,
                                                  real* weightGrad,
                                                  int numSequences,
                                                  int weightDim,
                                                  int totalPad,
                                                  int contextLength,
                                                  int contextStart,
                                                  int beginPad) {}

inline void hl_sequence2batch_copy(real *batch,
                                   real *sequence,
                                   int *batchIndex,
                                   int seqWidth,
                                   int batchCount,
                                   bool seq2batch) {}

inline void hl_sequence2batch_add(real *batch,
                                  real *sequence,
                                  int *batchIndex,
                                  int seqWidth,
                                  int batchCount,
                                  bool seq2batch) {}

inline void hl_sequence_avg_forward(real* dst,
                                    real* src,
                                    const int* starts,
                                    int height,
                                    int width,
                                    const int mode) {}

#endif  // HL_SEQUENCE_STUB_H_
