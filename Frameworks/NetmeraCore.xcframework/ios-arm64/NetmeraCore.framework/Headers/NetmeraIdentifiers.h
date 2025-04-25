// NetmeraIdentifiers.h
//
// Created by Yavuz Nuzumlali
// Copyright (c) 2015 Netmera
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraBaseModel.h>

@interface NetmeraIdentifiers : NetmeraBaseModel

@property (nonatomic, copy) NSString *installationId;
@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *externalId;
@property (nonatomic, copy) NSString *pushId;
@property (nonatomic, copy) NSString *pushInstanceId;
@property (nonatomic, copy) NSString *flowId;
@property (nonatomic, copy) NSNumber *slotId;
@property (nonatomic, copy) NSString *timezone;

- (void)removePropertiesSameWithIdentifiers:(NetmeraIdentifiers *)identifiers;

@end
