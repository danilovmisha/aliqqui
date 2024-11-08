// Fragment shader
precision mediump float;

// Uniform variable to control behavior
uniform int u_keepWithinCircle;

void main() {
    vec2 center = vec2(0.5, 0.5);
    vec2 pos = gl_FragCoord.xy / vec2(640.0, 480.0);  // Normalized position

    if (u_keepWithinCircle == 1) {
        // Calculate distance from the center
        float distance = length(pos - center);

        // Check if the fragment is within a circle of radius 0.3
        if (distance > 0.3) {
            discard;  // Discard the fragment if outside the circle
        }
    }

    // Set the color of the fragment
    gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);  // Red color
}
