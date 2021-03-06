/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class FreeStyleProject : IEquatable<FreeStyleProject>
    { 
        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name")]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Url
        /// </summary>
        [DataMember(Name="url")]
        public string Url { get; set; }

        /// <summary>
        /// Gets or Sets Color
        /// </summary>
        [DataMember(Name="color")]
        public string Color { get; set; }

        /// <summary>
        /// Gets or Sets Actions
        /// </summary>
        [DataMember(Name="actions")]
        public List<FreeStyleProjectactions> Actions { get; set; }

        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name="description")]
        public string Description { get; set; }

        /// <summary>
        /// Gets or Sets DisplayName
        /// </summary>
        [DataMember(Name="displayName")]
        public string DisplayName { get; set; }

        /// <summary>
        /// Gets or Sets DisplayNameOrNull
        /// </summary>
        [DataMember(Name="displayNameOrNull")]
        public string DisplayNameOrNull { get; set; }

        /// <summary>
        /// Gets or Sets FullDisplayName
        /// </summary>
        [DataMember(Name="fullDisplayName")]
        public string FullDisplayName { get; set; }

        /// <summary>
        /// Gets or Sets FullName
        /// </summary>
        [DataMember(Name="fullName")]
        public string FullName { get; set; }

        /// <summary>
        /// Gets or Sets Buildable
        /// </summary>
        [DataMember(Name="buildable")]
        public bool? Buildable { get; set; }

        /// <summary>
        /// Gets or Sets Builds
        /// </summary>
        [DataMember(Name="builds")]
        public List<FreeStyleBuild> Builds { get; set; }

        /// <summary>
        /// Gets or Sets FirstBuild
        /// </summary>
        [DataMember(Name="firstBuild")]
        public FreeStyleBuild FirstBuild { get; set; }

        /// <summary>
        /// Gets or Sets HealthReport
        /// </summary>
        [DataMember(Name="healthReport")]
        public List<FreeStyleProjecthealthReport> HealthReport { get; set; }

        /// <summary>
        /// Gets or Sets InQueue
        /// </summary>
        [DataMember(Name="inQueue")]
        public bool? InQueue { get; set; }

        /// <summary>
        /// Gets or Sets KeepDependencies
        /// </summary>
        [DataMember(Name="keepDependencies")]
        public bool? KeepDependencies { get; set; }

        /// <summary>
        /// Gets or Sets LastBuild
        /// </summary>
        [DataMember(Name="lastBuild")]
        public FreeStyleBuild LastBuild { get; set; }

        /// <summary>
        /// Gets or Sets LastCompletedBuild
        /// </summary>
        [DataMember(Name="lastCompletedBuild")]
        public FreeStyleBuild LastCompletedBuild { get; set; }

        /// <summary>
        /// Gets or Sets LastFailedBuild
        /// </summary>
        [DataMember(Name="lastFailedBuild")]
        public string LastFailedBuild { get; set; }

        /// <summary>
        /// Gets or Sets LastStableBuild
        /// </summary>
        [DataMember(Name="lastStableBuild")]
        public FreeStyleBuild LastStableBuild { get; set; }

        /// <summary>
        /// Gets or Sets LastSuccessfulBuild
        /// </summary>
        [DataMember(Name="lastSuccessfulBuild")]
        public FreeStyleBuild LastSuccessfulBuild { get; set; }

        /// <summary>
        /// Gets or Sets LastUnstableBuild
        /// </summary>
        [DataMember(Name="lastUnstableBuild")]
        public string LastUnstableBuild { get; set; }

        /// <summary>
        /// Gets or Sets LastUnsuccessfulBuild
        /// </summary>
        [DataMember(Name="lastUnsuccessfulBuild")]
        public string LastUnsuccessfulBuild { get; set; }

        /// <summary>
        /// Gets or Sets NextBuildNumber
        /// </summary>
        [DataMember(Name="nextBuildNumber")]
        public int? NextBuildNumber { get; set; }

        /// <summary>
        /// Gets or Sets QueueItem
        /// </summary>
        [DataMember(Name="queueItem")]
        public string QueueItem { get; set; }

        /// <summary>
        /// Gets or Sets ConcurrentBuild
        /// </summary>
        [DataMember(Name="concurrentBuild")]
        public bool? ConcurrentBuild { get; set; }

        /// <summary>
        /// Gets or Sets Scm
        /// </summary>
        [DataMember(Name="scm")]
        public NullSCM Scm { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class FreeStyleProject {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("  Color: ").Append(Color).Append("\n");
            sb.Append("  Actions: ").Append(Actions).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  DisplayNameOrNull: ").Append(DisplayNameOrNull).Append("\n");
            sb.Append("  FullDisplayName: ").Append(FullDisplayName).Append("\n");
            sb.Append("  FullName: ").Append(FullName).Append("\n");
            sb.Append("  Buildable: ").Append(Buildable).Append("\n");
            sb.Append("  Builds: ").Append(Builds).Append("\n");
            sb.Append("  FirstBuild: ").Append(FirstBuild).Append("\n");
            sb.Append("  HealthReport: ").Append(HealthReport).Append("\n");
            sb.Append("  InQueue: ").Append(InQueue).Append("\n");
            sb.Append("  KeepDependencies: ").Append(KeepDependencies).Append("\n");
            sb.Append("  LastBuild: ").Append(LastBuild).Append("\n");
            sb.Append("  LastCompletedBuild: ").Append(LastCompletedBuild).Append("\n");
            sb.Append("  LastFailedBuild: ").Append(LastFailedBuild).Append("\n");
            sb.Append("  LastStableBuild: ").Append(LastStableBuild).Append("\n");
            sb.Append("  LastSuccessfulBuild: ").Append(LastSuccessfulBuild).Append("\n");
            sb.Append("  LastUnstableBuild: ").Append(LastUnstableBuild).Append("\n");
            sb.Append("  LastUnsuccessfulBuild: ").Append(LastUnsuccessfulBuild).Append("\n");
            sb.Append("  NextBuildNumber: ").Append(NextBuildNumber).Append("\n");
            sb.Append("  QueueItem: ").Append(QueueItem).Append("\n");
            sb.Append("  ConcurrentBuild: ").Append(ConcurrentBuild).Append("\n");
            sb.Append("  Scm: ").Append(Scm).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((FreeStyleProject)obj);
        }

        /// <summary>
        /// Returns true if FreeStyleProject instances are equal
        /// </summary>
        /// <param name="other">Instance of FreeStyleProject to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(FreeStyleProject other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Class == other.Class ||
                    Class != null &&
                    Class.Equals(other.Class)
                ) && 
                (
                    Name == other.Name ||
                    Name != null &&
                    Name.Equals(other.Name)
                ) && 
                (
                    Url == other.Url ||
                    Url != null &&
                    Url.Equals(other.Url)
                ) && 
                (
                    Color == other.Color ||
                    Color != null &&
                    Color.Equals(other.Color)
                ) && 
                (
                    Actions == other.Actions ||
                    Actions != null &&
                    Actions.SequenceEqual(other.Actions)
                ) && 
                (
                    Description == other.Description ||
                    Description != null &&
                    Description.Equals(other.Description)
                ) && 
                (
                    DisplayName == other.DisplayName ||
                    DisplayName != null &&
                    DisplayName.Equals(other.DisplayName)
                ) && 
                (
                    DisplayNameOrNull == other.DisplayNameOrNull ||
                    DisplayNameOrNull != null &&
                    DisplayNameOrNull.Equals(other.DisplayNameOrNull)
                ) && 
                (
                    FullDisplayName == other.FullDisplayName ||
                    FullDisplayName != null &&
                    FullDisplayName.Equals(other.FullDisplayName)
                ) && 
                (
                    FullName == other.FullName ||
                    FullName != null &&
                    FullName.Equals(other.FullName)
                ) && 
                (
                    Buildable == other.Buildable ||
                    Buildable != null &&
                    Buildable.Equals(other.Buildable)
                ) && 
                (
                    Builds == other.Builds ||
                    Builds != null &&
                    Builds.SequenceEqual(other.Builds)
                ) && 
                (
                    FirstBuild == other.FirstBuild ||
                    FirstBuild != null &&
                    FirstBuild.Equals(other.FirstBuild)
                ) && 
                (
                    HealthReport == other.HealthReport ||
                    HealthReport != null &&
                    HealthReport.SequenceEqual(other.HealthReport)
                ) && 
                (
                    InQueue == other.InQueue ||
                    InQueue != null &&
                    InQueue.Equals(other.InQueue)
                ) && 
                (
                    KeepDependencies == other.KeepDependencies ||
                    KeepDependencies != null &&
                    KeepDependencies.Equals(other.KeepDependencies)
                ) && 
                (
                    LastBuild == other.LastBuild ||
                    LastBuild != null &&
                    LastBuild.Equals(other.LastBuild)
                ) && 
                (
                    LastCompletedBuild == other.LastCompletedBuild ||
                    LastCompletedBuild != null &&
                    LastCompletedBuild.Equals(other.LastCompletedBuild)
                ) && 
                (
                    LastFailedBuild == other.LastFailedBuild ||
                    LastFailedBuild != null &&
                    LastFailedBuild.Equals(other.LastFailedBuild)
                ) && 
                (
                    LastStableBuild == other.LastStableBuild ||
                    LastStableBuild != null &&
                    LastStableBuild.Equals(other.LastStableBuild)
                ) && 
                (
                    LastSuccessfulBuild == other.LastSuccessfulBuild ||
                    LastSuccessfulBuild != null &&
                    LastSuccessfulBuild.Equals(other.LastSuccessfulBuild)
                ) && 
                (
                    LastUnstableBuild == other.LastUnstableBuild ||
                    LastUnstableBuild != null &&
                    LastUnstableBuild.Equals(other.LastUnstableBuild)
                ) && 
                (
                    LastUnsuccessfulBuild == other.LastUnsuccessfulBuild ||
                    LastUnsuccessfulBuild != null &&
                    LastUnsuccessfulBuild.Equals(other.LastUnsuccessfulBuild)
                ) && 
                (
                    NextBuildNumber == other.NextBuildNumber ||
                    NextBuildNumber != null &&
                    NextBuildNumber.Equals(other.NextBuildNumber)
                ) && 
                (
                    QueueItem == other.QueueItem ||
                    QueueItem != null &&
                    QueueItem.Equals(other.QueueItem)
                ) && 
                (
                    ConcurrentBuild == other.ConcurrentBuild ||
                    ConcurrentBuild != null &&
                    ConcurrentBuild.Equals(other.ConcurrentBuild)
                ) && 
                (
                    Scm == other.Scm ||
                    Scm != null &&
                    Scm.Equals(other.Scm)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (Class != null)
                    hashCode = hashCode * 59 + Class.GetHashCode();
                    if (Name != null)
                    hashCode = hashCode * 59 + Name.GetHashCode();
                    if (Url != null)
                    hashCode = hashCode * 59 + Url.GetHashCode();
                    if (Color != null)
                    hashCode = hashCode * 59 + Color.GetHashCode();
                    if (Actions != null)
                    hashCode = hashCode * 59 + Actions.GetHashCode();
                    if (Description != null)
                    hashCode = hashCode * 59 + Description.GetHashCode();
                    if (DisplayName != null)
                    hashCode = hashCode * 59 + DisplayName.GetHashCode();
                    if (DisplayNameOrNull != null)
                    hashCode = hashCode * 59 + DisplayNameOrNull.GetHashCode();
                    if (FullDisplayName != null)
                    hashCode = hashCode * 59 + FullDisplayName.GetHashCode();
                    if (FullName != null)
                    hashCode = hashCode * 59 + FullName.GetHashCode();
                    if (Buildable != null)
                    hashCode = hashCode * 59 + Buildable.GetHashCode();
                    if (Builds != null)
                    hashCode = hashCode * 59 + Builds.GetHashCode();
                    if (FirstBuild != null)
                    hashCode = hashCode * 59 + FirstBuild.GetHashCode();
                    if (HealthReport != null)
                    hashCode = hashCode * 59 + HealthReport.GetHashCode();
                    if (InQueue != null)
                    hashCode = hashCode * 59 + InQueue.GetHashCode();
                    if (KeepDependencies != null)
                    hashCode = hashCode * 59 + KeepDependencies.GetHashCode();
                    if (LastBuild != null)
                    hashCode = hashCode * 59 + LastBuild.GetHashCode();
                    if (LastCompletedBuild != null)
                    hashCode = hashCode * 59 + LastCompletedBuild.GetHashCode();
                    if (LastFailedBuild != null)
                    hashCode = hashCode * 59 + LastFailedBuild.GetHashCode();
                    if (LastStableBuild != null)
                    hashCode = hashCode * 59 + LastStableBuild.GetHashCode();
                    if (LastSuccessfulBuild != null)
                    hashCode = hashCode * 59 + LastSuccessfulBuild.GetHashCode();
                    if (LastUnstableBuild != null)
                    hashCode = hashCode * 59 + LastUnstableBuild.GetHashCode();
                    if (LastUnsuccessfulBuild != null)
                    hashCode = hashCode * 59 + LastUnsuccessfulBuild.GetHashCode();
                    if (NextBuildNumber != null)
                    hashCode = hashCode * 59 + NextBuildNumber.GetHashCode();
                    if (QueueItem != null)
                    hashCode = hashCode * 59 + QueueItem.GetHashCode();
                    if (ConcurrentBuild != null)
                    hashCode = hashCode * 59 + ConcurrentBuild.GetHashCode();
                    if (Scm != null)
                    hashCode = hashCode * 59 + Scm.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(FreeStyleProject left, FreeStyleProject right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(FreeStyleProject left, FreeStyleProject right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
