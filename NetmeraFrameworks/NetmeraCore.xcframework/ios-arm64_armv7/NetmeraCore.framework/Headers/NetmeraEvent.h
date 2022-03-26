// NetmeraEvent.h
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


@interface NetmeraEvent : NetmeraBaseModel

@property (nonatomic, copy, readonly) NSString *eventKey;
@property (nonatomic, assign) double revenue;

+ (instancetype)event;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

-(NetmeraRequestPriority) priority;

@end
