// NetmeraUser.h
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


typedef NS_ENUM(NSUInteger, NetmeraProfileAttributeGender) {
  NetmeraProfileAttributeGenderFemale = 1,
  NetmeraProfileAttributeGenderMale = 0,
  NetmeraProfileAttributeGenderNotSpecified = 2
};

typedef NS_ENUM(NSUInteger, NetmeraProfileAttributeMaritalStatus) {
  NetmeraProfileAttributeMaritalStatusSingle = 0,
  NetmeraProfileAttributeMaritalStatusMarried = 1,
  NetmeraProfileAttributeMaritalStatusNotSpecified = 2
};



@interface NetmeraUser : NetmeraBaseModel

// Identifier
@property (nonatomic, copy, nonnull) NSString *userId;

// Attributes
@property (nonatomic, copy, nullable) NSString *email;
@property (nonatomic, copy, nullable) NSString *MSISDN;
@property (nonatomic, copy, nullable) NSString *name;
@property (nonatomic, copy, nullable) NSString *surname;
@property (nonatomic, copy, nullable) NSString *language;
@property (nonatomic, copy, nullable) NSDate *dateOfBirth;
@property (nonatomic, assign) NetmeraProfileAttributeGender gender;
@property (nonatomic, assign) NetmeraProfileAttributeMaritalStatus maritalStatus;
@property (nonatomic, assign) NSUInteger numberOfChildren;
@property (nonatomic, copy, nullable) NSString *country;
@property (nonatomic, copy, nullable) NSString *state;
@property (nonatomic, copy, nullable) NSString *city;
@property (nonatomic, copy, nullable) NSString *district;
@property (nonatomic, copy, nullable) NSString *occupation;
@property (nonatomic, copy, nullable) NSString *industry;
@property (nonatomic, copy, nullable) NSString *favouriteTeam;
@property (nonatomic, copy, nullable) NSArray<NSString *> *externalSegments;

@end
